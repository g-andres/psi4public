  /* This machine-generated function computes a quartet of (pp| integrals */

#include "libint.h"

void hrr1_build_pp(const REALTYPE *AB, REALTYPE *vp, REALTYPE *I0, REALTYPE *I1, int cd_num)
{
  const REALTYPE AB0 = AB[0];
  const REALTYPE AB1 = AB[1];
  const REALTYPE AB2 = AB[2];
  REALTYPE *i0, *i1;
  int cd;


  i0 = I0;
  i1 = I1;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 1*cd_num;
  i1 = I1;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 2*cd_num;
  i1 = I1;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 1*cd_num;
  i1 = I1 + 1*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 3*cd_num;
  i1 = I1 + 1*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 4*cd_num;
  i1 = I1 + 1*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 2*cd_num;
  i1 = I1 + 2*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 4*cd_num;
  i1 = I1 + 2*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 5*cd_num;
  i1 = I1 + 2*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
}
/* Total number of FLOPs = 18 * cd_num */
