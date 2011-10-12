/*! \file
    \ingroup TRANSQT
    \brief Enter brief description of file here
*/
#include <cstdio>
#include <cstdlib>
#include <psifiles.h>
#include <libciomr/libciomr.h>
#include <libiwl/iwl.h>
#include <psifiles.h>
#include "MOInfo.h"
#include "Params.h"
#include "globals.h"

#define INDEX(i,j) ((i>j) ? (ioff[(i)]+(j)) : (ioff[(j)]+(i)))
#define MIN0(a,b) (((a)<(b)) ? (a) : (b))

namespace psi {
extern FILE* outfile;
namespace transqt {

int get_p(int i);

/* backsort.c: This code prepares for and carries out a Yoshimine sort
** of the backtransformed (AO-basis) two-particle density into
** canonical shell ordering.  The input AO-basis density, G(ij,kl), is
** currently assumed to be eight-fold packed, i.e., i>=j, k>=l, and
** ij>=kl, where i, j, k, and l are AO indices.
**
** The detailed steps of the sort are as follows:
**
** (1) Sorting buffers are prepared by backsort_prep().  Each buffer
** will contain a group of shell quartets of density elements.  Since
** shell quartets have different sizes, e.g., (pp|pp) is smaller than
** (dp|dp), the number of quartets that can be stored in each sorting
** buffer must be computed explicitly.
**
** (2) The AO-basis density generated by transform_two() (RHF/ROHF) or
** transform_two_bactr_uhf() (UHF) is dumped to the sorting buffers by
** backsort_write().
**
** (3) The backsort() routine orders all the density elements within
** each sorting buffer according to
**
*/

/* Globals needed for the post-backtransform sort */
int nbuckets;        /* number of sorting buckets   */
int *shell;          /* AO -> shell map             */
int *shell_size;     /* AOs in shell                */
int *pair_size;      /* Length of each shell pair   */
int *bucket_map;     /* shell-pair -> sort bucket   */
int *bucket_offset;  /* bucket -> quartet offset    */
int *bucket_quarts;  /* no. of quartets in a bucket */
int *bucket_firstpq; /* First pq in bucket          */
int *bucket_lastpq;  /* Last pq in bucket           */

void backsort_prep(int uhf)
{
  int i, j, k, l, lend, size_i, size_j, size_k, size_l, size_ij;
  int this_pair_size, this_pair_sizeb, this_pair_quarts;
  long int core_left;  /* this must be *signed* */
  int nshell, *snuc, num_pairs;
  int ii, ij, ijkl, imin, imax;

  snuc = moinfo.snuc;
  nshell = moinfo.nshell;
  num_pairs = ioff[nshell];

  shell_size = init_int_array(nshell);
  for(i=0; i < nshell; i++) shell_size[i] = ioff[moinfo.stype[i]];

  pair_size = init_int_array(num_pairs);
  for(i=0,ij=0; i < nshell; i++) {
    size_i = shell_size[i];
    for(j=0; j <= i; j++,ij++) {
      size_j = shell_size[j];

      pair_size[ij] = size_i * size_j;
    }
  }

  bucket_map = init_int_array(nshell*(nshell+1)/2);
  shell = init_int_array(moinfo.nao);

  /* Make room for one bucket to begin with */
  bucket_offset = init_int_array(1);
  bucket_quarts = init_int_array(1);
  bucket_firstpq = init_int_array(1);
  bucket_lastpq = init_int_array(1);

  /* Figure out how many buckets we need and where each */
  /* shell-pair (in canonical shell-ordering) goes.     */
  core_left = params.maxcor;
  nbuckets = 1;
  for(i=0,ij=0,ijkl=0; i < nshell; i++) {
    size_i = shell_size[i];

    /* Generate the orbital -> shell lookup while we're here */
    imin = moinfo.sloc[i] - 1;
    imax = imin + shell_size[i];
    for(ii=imin; ii < imax; ii++) shell[ii] = i;

    for(j=0; j <= i; j++,ij++) {
      size_j = shell_size[j];
      size_ij = pair_size[ij];

      /* Number of density elements in this pair */
      this_pair_size = 0;

      /* Number of quartets in this pair */
      this_pair_quarts = 0;

      for(k=0; k <= i; k++) {
        size_k = shell_size[k];
        lend = (k==i) ? j : k;
        for(l=0; l <= lend; l++,ijkl++) {
          size_l = shell_size[l];

          this_pair_size += size_ij * size_k * size_l;
          this_pair_quarts++;

        } /* l loop */
      } /* k loop */

      if(uhf) this_pair_size *= 2;

      /* Add 4 indices to size and convert to bytes */
      this_pair_sizeb = this_pair_size*(4*sizeof(int) + sizeof(double));

      if((core_left - (long int) this_pair_sizeb) >= 0) {
        core_left -= (long int) this_pair_sizeb;
        bucket_quarts[nbuckets-1] += this_pair_quarts;
        bucket_lastpq[nbuckets-1] = ij;
      }
      else {
        nbuckets++;
        core_left = params.maxcor - (long int) this_pair_sizeb;
        bucket_offset = (int *) realloc((void *) bucket_offset,
                                        nbuckets * sizeof(int));
        bucket_offset[nbuckets-1] = bucket_offset[nbuckets-2] +
          bucket_quarts[nbuckets-2];

        bucket_firstpq = (int *) realloc((void *) bucket_firstpq,
                                         nbuckets * sizeof(int));
        bucket_firstpq[nbuckets-1] = ij;

        bucket_lastpq = (int *) realloc((void *) bucket_lastpq,
                                        nbuckets * sizeof(int));
        bucket_lastpq[nbuckets-1] = ij;

        bucket_quarts = (int *) realloc((void *) bucket_quarts,
                                        nbuckets * sizeof(int));
        bucket_quarts[nbuckets-1] = this_pair_quarts;
      }

      bucket_map[ij] = nbuckets - 1;

    } /* j loop */
  } /* i loop */

}

/*
** backsort(): After all AO-basis twopdm elements have been
** distributed to sorting buckets by backsort_write(), sort each
** bucket into canonical shell ordering.  This involves X algorithm:
**
** (1) Loop over the buckets.
**
** (2) Allocate sufficient memory to store the values and indices for
** the current bucket.
**
** (3) For each twopdm element in this bucket, assign it to the
** correct shell quartet.  (The order within the quartet does not
** matter.)
**
** (4) After all elements for the current bucket have been placed,
** write them out in canonical shell-quartet order.  Mark the end of
** each quartet with all four AO indices "-1".
**
*/

void backsort(int first_tmp_file, double tolerance, int uhf)
{
  int i, n, lastbuf, idx, nquarts, this_quartet, this_counter, *counter;
  int *snuc, sp, sq, sr, ss, send, size_r, size_s, size_pq;
  int p, q, r, s, pshell, qshell, rshell, sshell, pqshell, rsshell, pqrs;
  int pq, rs;
  int **pidx, **qidx, **ridx, **sidx;
  double **gamma, value;
  struct iwlbuf InBuf, OutBuf;
  int num_tpdm, quartet_size, lastq;

  snuc = moinfo.snuc;

  iwl_buf_init(&OutBuf, params.mfile, tolerance, 0, 0);

  num_tpdm = 0;
  for(n=0; n < nbuckets; n++) {
    iwl_buf_init(&InBuf, first_tmp_file+n, tolerance, 1, 0);
    lastbuf = 0;

    nquarts = bucket_quarts[n];

    pidx = (int **) malloc(nquarts * sizeof(int *));
    qidx = (int **) malloc(nquarts * sizeof(int *));
    ridx = (int **) malloc(nquarts * sizeof(int *));
    sidx = (int **) malloc(nquarts * sizeof(int *));
    gamma = (double **) malloc(nquarts * sizeof(double *));
    counter = init_int_array(nquarts);

    /* Compute quartet sizes for this bucket and allocate space */
    for(pq=bucket_firstpq[n],nquarts=0; pq <= bucket_lastpq[n]; pq++) {

      size_pq = pair_size[pq];

      for(r=0,rs=0; r < moinfo.nshell; r++) {
        size_r = shell_size[r];
        for(s=0; s <= r; s++,rs++) {
          size_s = shell_size[s];

          if(rs > pq) break;

          quartet_size = size_pq * size_r * size_s;

          if(uhf) quartet_size *= 2;

          pidx[nquarts] = init_int_array(quartet_size);
          qidx[nquarts] = init_int_array(quartet_size);
          ridx[nquarts] = init_int_array(quartet_size);
          sidx[nquarts] = init_int_array(quartet_size);
          gamma[nquarts] = init_array(quartet_size);
          nquarts++;
        }
      }
    }

    if(nquarts != bucket_quarts[n]) {
      printf("Quartet error: nquarts = %d; bucket_quarts[%d] = %d\n",
             nquarts, n, bucket_quarts[n]);
      exit(PSI_RETURN_FAILURE);
    }

    while(!lastbuf) {
      iwl_buf_fetch(&InBuf);
      lastbuf = InBuf.lastbuf;

      for(idx=4*InBuf.idx; InBuf.idx < InBuf.inbuf; InBuf.idx++) {
        p = (int) InBuf.labels[idx++];
        q = (int) InBuf.labels[idx++];
        r = (int) InBuf.labels[idx++];
        s = (int) InBuf.labels[idx++];

        value = (double) InBuf.values[InBuf.idx];

        pshell = shell[p]; qshell = shell[q];
        rshell = shell[r]; sshell = shell[s];

        /* Skip this quartet if on one center */
        if(snuc[pshell] == snuc[qshell] &&
           snuc[pshell] == snuc[rshell] &&
           snuc[pshell] == snuc[sshell])
          continue;

        pqshell = INDEX(pshell,qshell); rsshell = INDEX(rshell,sshell);
        pqrs = INDEX(pqshell,rsshell);

        pq = INDEX(p,q);  rs = INDEX(r,s);

        this_quartet = pqrs - bucket_offset[n];
        this_counter = counter[this_quartet];

        pidx[this_quartet][this_counter] = p;
        qidx[this_quartet][this_counter] = q;
        ridx[this_quartet][this_counter] = r;
        sidx[this_quartet][this_counter] = s;
        gamma[this_quartet][this_counter] = value;

        counter[this_quartet]++;

        /* Now run through the appropriate permutations */
        if(pqshell != rsshell) {
          if(pshell != qshell) {
            if(rshell == sshell) {
              if(qshell != rshell) { /* (pq|rr) */
                if(r!=s) {
                  this_counter = counter[this_quartet];
                  pidx[this_quartet][this_counter] = p;
                  qidx[this_quartet][this_counter] = q;
                  ridx[this_quartet][this_counter] = s;
                  sidx[this_quartet][this_counter] = r;
                  gamma[this_quartet][this_counter] = value;
                  counter[this_quartet]++;
                }
              }
              else {  /* (pq|qq) */
                if(r!=s) {
                  this_counter = counter[this_quartet];
                  pidx[this_quartet][this_counter] = p;
                  qidx[this_quartet][this_counter] = q;
                  ridx[this_quartet][this_counter] = s;
                  sidx[this_quartet][this_counter] = r;
                  gamma[this_quartet][this_counter] = value;
                  counter[this_quartet]++;
                }
              }
            }
          }
          else {
            if(rshell != sshell) {
              if(qshell != rshell) { /* (pp|rs) */
                if(p!=q) {
                  this_counter = counter[this_quartet];
                  pidx[this_quartet][this_counter] = q;
                  qidx[this_quartet][this_counter] = p;
                  ridx[this_quartet][this_counter] = r;
                  sidx[this_quartet][this_counter] = s;
                  gamma[this_quartet][this_counter] = value;
                  counter[this_quartet]++;
                }
              }
              else { /* (pp|ps) */
                if(p!=q) {
                  this_counter = counter[this_quartet];
                  pidx[this_quartet][this_counter] = q;
                  qidx[this_quartet][this_counter] = p;
                  ridx[this_quartet][this_counter] = r;
                  sidx[this_quartet][this_counter] = s;
                  gamma[this_quartet][this_counter] = value;
                  counter[this_quartet]++;
                }
              }
            }
            else {
              if(qshell != rshell) { /* (pp|rr) */
                if(p!=q && r!=s) {
                  this_counter = counter[this_quartet];
                  pidx[this_quartet][this_counter] = q;
                  qidx[this_quartet][this_counter] = p;
                  ridx[this_quartet][this_counter] = r;
                  sidx[this_quartet][this_counter] = s;
                  gamma[this_quartet][this_counter] = value;
                  counter[this_quartet]++;

                  this_counter = counter[this_quartet];
                  pidx[this_quartet][this_counter] = p;
                  qidx[this_quartet][this_counter] = q;
                  ridx[this_quartet][this_counter] = s;
                  sidx[this_quartet][this_counter] = r;
                  gamma[this_quartet][this_counter] = value;
                  counter[this_quartet]++;

                  this_counter = counter[this_quartet];
                  pidx[this_quartet][this_counter] = q;
                  qidx[this_quartet][this_counter] = p;
                  ridx[this_quartet][this_counter] = s;
                  sidx[this_quartet][this_counter] = r;
                  gamma[this_quartet][this_counter] = value;
                  counter[this_quartet]++;
                }
                else if(p!=q && r==s) {
                  this_counter = counter[this_quartet];
                  pidx[this_quartet][this_counter] = q;
                  qidx[this_quartet][this_counter] = p;
                  ridx[this_quartet][this_counter] = r;
                  sidx[this_quartet][this_counter] = s;
                  gamma[this_quartet][this_counter] = value;
                  counter[this_quartet]++;
                }
                else if(p==q && r!=s) {
                  this_counter = counter[this_quartet];
                  pidx[this_quartet][this_counter] = p;
                  qidx[this_quartet][this_counter] = q;
                  ridx[this_quartet][this_counter] = s;
                  sidx[this_quartet][this_counter] = r;
                  gamma[this_quartet][this_counter] = value;
                  counter[this_quartet]++;
                }
              }
              else {
                exit(PSI_RETURN_FAILURE);
              }
            }
          }
        }
        else { /* pqshell == rsshell */
          if(pshell != qshell) { /* (pq|pq) */
            if(pq != rs) {
              this_counter = counter[this_quartet];
              pidx[this_quartet][this_counter] = r;
              qidx[this_quartet][this_counter] = s;
              ridx[this_quartet][this_counter] = p;
              sidx[this_quartet][this_counter] = q;
              gamma[this_quartet][this_counter] = value;
              counter[this_quartet]++;
            }
          }
          else { /* (pp|pp) */
            /* This shouldn't actually occur because of the
               snuc[] filter above */
            exit(PSI_RETURN_FAILURE);
          }
        }
      }
    }

    iwl_buf_close(&InBuf, 0);

    /* Now flush each quartet in order */
    for(pq=bucket_firstpq[n],nquarts=0; pq <= bucket_lastpq[n]; pq++) {

      /* compute pshell and qshell from pq */
      p = get_p(pq);
      q = pq-ioff[p];

      for(r=0,rs=0; r < moinfo.nshell; r++) {
        for(s=0; s <= r; s++,rs++) {

          if(rs > pq) break;

          iwl_buf_wrt_arr(&OutBuf, gamma[nquarts],
                          pidx[nquarts], qidx[nquarts],
                          ridx[nquarts], sidx[nquarts],
                          counter[nquarts]);

          /*
          fprintf(outfile, "%d %d %d %d  count = %d\n", p, q, r, s, counter[nquarts]);
          for(i=0; i < counter[nquarts]; i++) {
            fprintf(outfile, "%d %d %d %d gamma = %20.12f\n",
                    pidx[nquarts][i], qidx[nquarts][i],
                    ridx[nquarts][i], sidx[nquarts][i],
                    gamma[nquarts][i]);
          }
          */

          /* Mark the end of the shell quartet */
          if(!(snuc[p] == snuc[q] && snuc[r] == snuc[s] && snuc[p] == snuc[r])) {
            value = 9.9999999999;
            iwl_buf_wrt_val(&OutBuf, -1, -1, -1, -1, value, 0, outfile, 0);
            /*	    fprintf(outfile, "-1 -1 -1 -1 gamma = %20.12f\n", value); */
          }

          num_tpdm += counter[nquarts]+1;

          nquarts++;
        }
      }
    }

    /* Free the sort arrays */
    for(i=0; i < bucket_quarts[n]; i++) {
      free(pidx[i]);  free(qidx[i]); free(ridx[i]);  free(sidx[i]);
      free(gamma[i]);
    }
    free(pidx); free(qidx); free(ridx); free(sidx);
    free(gamma); free(counter);

  } /* end of bucket loop */

  iwl_buf_flush(&OutBuf, 1);
  iwl_buf_close(&OutBuf, 1);

  /*  fprintf(outfile, "num_tpdm = %d\n", num_tpdm); */

  /* Free up the global data */
  free(shell);
  free(shell_size);
  free(pair_size);
  free(bucket_map);
  free(bucket_offset);
  free(bucket_quarts);
  free(bucket_firstpq);
  free(bucket_lastpq);
}

void backsort_write(int i, int j, double **A, int kfirst, int klast,
                    int lfirst, int llast, int printflag,FILE *outfile,
                    struct iwlbuf *twopdm_out, int uhf)
{

  int k,l,K,L,ij,kl;
  int shell_i, shell_j, shell_ij, ij_bucket;
  int shell_k, shell_l, shell_kl, kl_bucket;
  double value;

  ij = INDEX(i,j);

  shell_i = shell[i];
  shell_j = shell[j];
  shell_ij = INDEX(shell_i, shell_j);
  ij_bucket = bucket_map[shell_ij];

  for (k=kfirst,K=0; k <= klast; k++,K++) {
    for (l=lfirst,L=0; l <= llast && l<=k ; l++,L++) {
      value = A[K][L];

      kl = INDEX(k,l);
      if (kl > ij && !uhf) continue;
      else if(kl != ij && uhf) value *= 0.5;

      if (printflag) {
        fprintf(outfile, ">%d %d %d %d [%d] [%d] = %20.10lf\n",
                i, j, k, l, ij, kl, value);
      }

      shell_k = shell[k];
      shell_l = shell[l];
      shell_kl = INDEX(shell_k, shell_l);
      kl_bucket = bucket_map[shell_kl];

      if(shell_ij >= shell_kl) {
        if(shell_i >= shell_j) {
          if(shell_k >= shell_l) {
            iwl_buf_wrt_val(&twopdm_out[ij_bucket], i, j, k, l,
                            value,0,outfile,0);
          }
          else
            iwl_buf_wrt_val(&twopdm_out[ij_bucket], i, j, l, k,
                            value,0,outfile,0);
        }
        else {
          if(shell_k >= shell_l) {
            iwl_buf_wrt_val(&twopdm_out[ij_bucket], j, i, k, l,
                            value,0,outfile,0);
          }
          else {
            iwl_buf_wrt_val(&twopdm_out[ij_bucket], j, i, l, k,
                            value,0,outfile,0);
          }
        }
      }
      else {
        if(shell_k >= shell_l) {
          if(shell_i >= shell_j) {
            iwl_buf_wrt_val(&twopdm_out[kl_bucket], k, l, i, j,
                            value,0,outfile,0);
          }
          else {
            iwl_buf_wrt_val(&twopdm_out[kl_bucket], k, l, j, i,
                            value,0,outfile,0);
          }
        }
        else {
          if(shell_i >= shell_j) {
            iwl_buf_wrt_val(&twopdm_out[kl_bucket], l, k, i, j,
                            value,0,outfile,0);
          }
          else {
            iwl_buf_wrt_val(&twopdm_out[kl_bucket], l, k, j, i,
                            value,0,outfile,0);
          }
        }
      }
    }
  }
}


/* int get_p(): For a given canonical index pair, pq, computed using
** the standard ioff array, compute the first index p of the pair.
** The second index, q, may be subsequently computed using
** q = pq - ioff[p].
*/

int get_p(int pq)
{
  int i, p;

  for(i=0; i < 32641; i++)
    if(ioff[i] > pq) { p = i-1; break; }

  return p;
}

}} // end namespace psi::transqt

