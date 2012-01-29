#include"psi4-dec.h"
#include<libplugin/plugin.h>
#include<libdpd/dpd.h>
#include<boost/shared_ptr.hpp>
#include<liboptions/liboptions.h>
#include<libtrans/integraltransform.h>
#include<libtrans/mospace.h>
#include<libmints/matrix.h>
#include<libmints/vector.h>
#include<libchkpt/chkpt.h>
#include<libiwl/iwl.h>
#include<libpsio/psio.hpp>
#include<libciomr/libciomr.h>
#include<cstdio>
#include<cstdlib>

#include"ccsd.h"

using namespace psi;
using namespace boost;

namespace psi{
  PsiReturnType triples(boost::shared_ptr<psi::CoupledCluster>ccsd,Options&options);
  PsiReturnType MP2NaturalOrbitals(boost::shared_ptr<psi::CoupledCluster>ccsd,Options&options);
}

namespace psi{

void RunCoupledCluster(Options &options){

  boost::shared_ptr<CoupledCluster> ccsd(new CoupledCluster);
  PsiReturnType status;

  tstart();
  ccsd->WriteBanner();
  ccsd->Initialize(options);
  ccsd->AllocateMemory(options);
  status = ccsd->CCSDIterations(options);
  tstop();

  // mp2 energy
  Process::environment.globals["MP2 CORRELATION ENERGY"] = ccsd->emp2;
  Process::environment.globals["MP2 TOTAL ENERGY"] = ccsd->emp2 + ccsd->escf;

  // ccsd energy
  Process::environment.globals["CCSD CORRELATION ENERGY"] = ccsd->eccsd;
  Process::environment.globals["CCSD TOTAL ENERGY"] = ccsd->eccsd + ccsd->escf;
  Process::environment.globals["CURRENT ENERGY"] = ccsd->eccsd + ccsd->escf;

  if (options.get_bool("COMPUTE_TRIPLES")){
     // free memory before triples 
     free(ccsd->integrals);
     free(ccsd->w1);
     free(ccsd->I1);
     free(ccsd->I1p);
     free(ccsd->diisvec);
     free(ccsd->tempt);
     free(ccsd->tempv);

     if (options.get_bool("TRIPLES_USE_NOS")){
        // mp2 natural orbitals:
        tstart();
        status = psi::MP2NaturalOrbitals(ccsd,options);
        if (status == Failure){
           throw PsiException( 
              "Whoops, MP2 NO transformation died.",__FILE__,__LINE__);
        }
        tstop();
     }

     tstart();
     // triples
     status = psi::triples(ccsd,options);
     if (status == Failure){
        throw PsiException( 
           "Whoops, the (T) correction died.",__FILE__,__LINE__);
     }
     tstop();

     // ccsd(t) energy
     Process::environment.globals["(T) CORRELATION ENERGY"] = ccsd->et;
     Process::environment.globals["CCSD(T) CORRELATION ENERGY"] = ccsd->eccsd + ccsd->et;
     Process::environment.globals["CCSD(T) TOTAL ENERGY"] = ccsd->eccsd + ccsd->et + ccsd->escf;
     Process::environment.globals["CURRENT ENERGY"] = ccsd->eccsd + ccsd->et + ccsd->escf;
  }

  ccsd.reset();
}

}


