  /* This machine-generated function computes a quartet of (ld| integrals */

#include "libint.h"

void hrr1_build_ld(const REALTYPE *AB, REALTYPE *vp, REALTYPE *I0, REALTYPE *I1, int cd_num)
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
  i1 = I1 + 1*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 2*cd_num;
  i1 = I1 + 2*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 4*cd_num;
  i1 = I1 + 1*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 5*cd_num;
  i1 = I1 + 2*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 8*cd_num;
  i1 = I1 + 2*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 3*cd_num;
  i1 = I1 + 3*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 4*cd_num;
  i1 = I1 + 4*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 5*cd_num;
  i1 = I1 + 5*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 10*cd_num;
  i1 = I1 + 4*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 11*cd_num;
  i1 = I1 + 5*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 14*cd_num;
  i1 = I1 + 5*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 6*cd_num;
  i1 = I1 + 6*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 7*cd_num;
  i1 = I1 + 7*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 8*cd_num;
  i1 = I1 + 8*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 13*cd_num;
  i1 = I1 + 7*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 14*cd_num;
  i1 = I1 + 8*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 17*cd_num;
  i1 = I1 + 8*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 9*cd_num;
  i1 = I1 + 9*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 10*cd_num;
  i1 = I1 + 10*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 11*cd_num;
  i1 = I1 + 11*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 19*cd_num;
  i1 = I1 + 10*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 20*cd_num;
  i1 = I1 + 11*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 23*cd_num;
  i1 = I1 + 11*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 12*cd_num;
  i1 = I1 + 12*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 13*cd_num;
  i1 = I1 + 13*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 14*cd_num;
  i1 = I1 + 14*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 22*cd_num;
  i1 = I1 + 13*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 23*cd_num;
  i1 = I1 + 14*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 26*cd_num;
  i1 = I1 + 14*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 15*cd_num;
  i1 = I1 + 15*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 16*cd_num;
  i1 = I1 + 16*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 17*cd_num;
  i1 = I1 + 17*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 25*cd_num;
  i1 = I1 + 16*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 26*cd_num;
  i1 = I1 + 17*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 29*cd_num;
  i1 = I1 + 17*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 18*cd_num;
  i1 = I1 + 18*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 19*cd_num;
  i1 = I1 + 19*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 20*cd_num;
  i1 = I1 + 20*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 31*cd_num;
  i1 = I1 + 19*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 32*cd_num;
  i1 = I1 + 20*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 35*cd_num;
  i1 = I1 + 20*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 21*cd_num;
  i1 = I1 + 21*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 22*cd_num;
  i1 = I1 + 22*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 23*cd_num;
  i1 = I1 + 23*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 34*cd_num;
  i1 = I1 + 22*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 35*cd_num;
  i1 = I1 + 23*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 38*cd_num;
  i1 = I1 + 23*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 24*cd_num;
  i1 = I1 + 24*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 25*cd_num;
  i1 = I1 + 25*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 26*cd_num;
  i1 = I1 + 26*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 37*cd_num;
  i1 = I1 + 25*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 38*cd_num;
  i1 = I1 + 26*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 41*cd_num;
  i1 = I1 + 26*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 27*cd_num;
  i1 = I1 + 27*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 28*cd_num;
  i1 = I1 + 28*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 29*cd_num;
  i1 = I1 + 29*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 40*cd_num;
  i1 = I1 + 28*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 41*cd_num;
  i1 = I1 + 29*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 44*cd_num;
  i1 = I1 + 29*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 30*cd_num;
  i1 = I1 + 30*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 31*cd_num;
  i1 = I1 + 31*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 32*cd_num;
  i1 = I1 + 32*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 46*cd_num;
  i1 = I1 + 31*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 47*cd_num;
  i1 = I1 + 32*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 50*cd_num;
  i1 = I1 + 32*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 33*cd_num;
  i1 = I1 + 33*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 34*cd_num;
  i1 = I1 + 34*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 35*cd_num;
  i1 = I1 + 35*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 49*cd_num;
  i1 = I1 + 34*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 50*cd_num;
  i1 = I1 + 35*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 53*cd_num;
  i1 = I1 + 35*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 36*cd_num;
  i1 = I1 + 36*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 37*cd_num;
  i1 = I1 + 37*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 38*cd_num;
  i1 = I1 + 38*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 52*cd_num;
  i1 = I1 + 37*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 53*cd_num;
  i1 = I1 + 38*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 56*cd_num;
  i1 = I1 + 38*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 39*cd_num;
  i1 = I1 + 39*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 40*cd_num;
  i1 = I1 + 40*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 41*cd_num;
  i1 = I1 + 41*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 55*cd_num;
  i1 = I1 + 40*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 56*cd_num;
  i1 = I1 + 41*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 59*cd_num;
  i1 = I1 + 41*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 42*cd_num;
  i1 = I1 + 42*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 43*cd_num;
  i1 = I1 + 43*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 44*cd_num;
  i1 = I1 + 44*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 58*cd_num;
  i1 = I1 + 43*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 59*cd_num;
  i1 = I1 + 44*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 62*cd_num;
  i1 = I1 + 44*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 45*cd_num;
  i1 = I1 + 45*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 46*cd_num;
  i1 = I1 + 46*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 47*cd_num;
  i1 = I1 + 47*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 64*cd_num;
  i1 = I1 + 46*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 65*cd_num;
  i1 = I1 + 47*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 68*cd_num;
  i1 = I1 + 47*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 48*cd_num;
  i1 = I1 + 48*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 49*cd_num;
  i1 = I1 + 49*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 50*cd_num;
  i1 = I1 + 50*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 67*cd_num;
  i1 = I1 + 49*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 68*cd_num;
  i1 = I1 + 50*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 71*cd_num;
  i1 = I1 + 50*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 51*cd_num;
  i1 = I1 + 51*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 52*cd_num;
  i1 = I1 + 52*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 53*cd_num;
  i1 = I1 + 53*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 70*cd_num;
  i1 = I1 + 52*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 71*cd_num;
  i1 = I1 + 53*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 74*cd_num;
  i1 = I1 + 53*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 54*cd_num;
  i1 = I1 + 54*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 55*cd_num;
  i1 = I1 + 55*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 56*cd_num;
  i1 = I1 + 56*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 73*cd_num;
  i1 = I1 + 55*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 74*cd_num;
  i1 = I1 + 56*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 77*cd_num;
  i1 = I1 + 56*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 57*cd_num;
  i1 = I1 + 57*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 58*cd_num;
  i1 = I1 + 58*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 59*cd_num;
  i1 = I1 + 59*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 76*cd_num;
  i1 = I1 + 58*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 77*cd_num;
  i1 = I1 + 59*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 80*cd_num;
  i1 = I1 + 59*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 60*cd_num;
  i1 = I1 + 60*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 61*cd_num;
  i1 = I1 + 61*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 62*cd_num;
  i1 = I1 + 62*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 79*cd_num;
  i1 = I1 + 61*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 80*cd_num;
  i1 = I1 + 62*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 83*cd_num;
  i1 = I1 + 62*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 63*cd_num;
  i1 = I1 + 63*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 64*cd_num;
  i1 = I1 + 64*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 65*cd_num;
  i1 = I1 + 65*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 85*cd_num;
  i1 = I1 + 64*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 86*cd_num;
  i1 = I1 + 65*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 89*cd_num;
  i1 = I1 + 65*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 66*cd_num;
  i1 = I1 + 66*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 67*cd_num;
  i1 = I1 + 67*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 68*cd_num;
  i1 = I1 + 68*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 88*cd_num;
  i1 = I1 + 67*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 89*cd_num;
  i1 = I1 + 68*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 92*cd_num;
  i1 = I1 + 68*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 69*cd_num;
  i1 = I1 + 69*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 70*cd_num;
  i1 = I1 + 70*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 71*cd_num;
  i1 = I1 + 71*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 91*cd_num;
  i1 = I1 + 70*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 92*cd_num;
  i1 = I1 + 71*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 95*cd_num;
  i1 = I1 + 71*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 72*cd_num;
  i1 = I1 + 72*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 73*cd_num;
  i1 = I1 + 73*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 74*cd_num;
  i1 = I1 + 74*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 94*cd_num;
  i1 = I1 + 73*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 95*cd_num;
  i1 = I1 + 74*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 98*cd_num;
  i1 = I1 + 74*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 75*cd_num;
  i1 = I1 + 75*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 76*cd_num;
  i1 = I1 + 76*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 77*cd_num;
  i1 = I1 + 77*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 97*cd_num;
  i1 = I1 + 76*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 98*cd_num;
  i1 = I1 + 77*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 101*cd_num;
  i1 = I1 + 77*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 78*cd_num;
  i1 = I1 + 78*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 79*cd_num;
  i1 = I1 + 79*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 80*cd_num;
  i1 = I1 + 80*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 100*cd_num;
  i1 = I1 + 79*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 101*cd_num;
  i1 = I1 + 80*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 104*cd_num;
  i1 = I1 + 80*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 81*cd_num;
  i1 = I1 + 81*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 82*cd_num;
  i1 = I1 + 82*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 83*cd_num;
  i1 = I1 + 83*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 103*cd_num;
  i1 = I1 + 82*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 104*cd_num;
  i1 = I1 + 83*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 107*cd_num;
  i1 = I1 + 83*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 84*cd_num;
  i1 = I1 + 84*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 85*cd_num;
  i1 = I1 + 85*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 86*cd_num;
  i1 = I1 + 86*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 109*cd_num;
  i1 = I1 + 85*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 110*cd_num;
  i1 = I1 + 86*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 113*cd_num;
  i1 = I1 + 86*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 87*cd_num;
  i1 = I1 + 87*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 88*cd_num;
  i1 = I1 + 88*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 89*cd_num;
  i1 = I1 + 89*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 112*cd_num;
  i1 = I1 + 88*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 113*cd_num;
  i1 = I1 + 89*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 116*cd_num;
  i1 = I1 + 89*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 90*cd_num;
  i1 = I1 + 90*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 91*cd_num;
  i1 = I1 + 91*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 92*cd_num;
  i1 = I1 + 92*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 115*cd_num;
  i1 = I1 + 91*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 116*cd_num;
  i1 = I1 + 92*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 119*cd_num;
  i1 = I1 + 92*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 93*cd_num;
  i1 = I1 + 93*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 94*cd_num;
  i1 = I1 + 94*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 95*cd_num;
  i1 = I1 + 95*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 118*cd_num;
  i1 = I1 + 94*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 119*cd_num;
  i1 = I1 + 95*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 122*cd_num;
  i1 = I1 + 95*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 96*cd_num;
  i1 = I1 + 96*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 97*cd_num;
  i1 = I1 + 97*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 98*cd_num;
  i1 = I1 + 98*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 121*cd_num;
  i1 = I1 + 97*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 122*cd_num;
  i1 = I1 + 98*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 125*cd_num;
  i1 = I1 + 98*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 99*cd_num;
  i1 = I1 + 99*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 100*cd_num;
  i1 = I1 + 100*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 101*cd_num;
  i1 = I1 + 101*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 124*cd_num;
  i1 = I1 + 100*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 125*cd_num;
  i1 = I1 + 101*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 128*cd_num;
  i1 = I1 + 101*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 102*cd_num;
  i1 = I1 + 102*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 103*cd_num;
  i1 = I1 + 103*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 104*cd_num;
  i1 = I1 + 104*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 127*cd_num;
  i1 = I1 + 103*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 128*cd_num;
  i1 = I1 + 104*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 131*cd_num;
  i1 = I1 + 104*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 105*cd_num;
  i1 = I1 + 105*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 106*cd_num;
  i1 = I1 + 106*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 107*cd_num;
  i1 = I1 + 107*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 130*cd_num;
  i1 = I1 + 106*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 131*cd_num;
  i1 = I1 + 107*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 134*cd_num;
  i1 = I1 + 107*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 108*cd_num;
  i1 = I1 + 108*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 109*cd_num;
  i1 = I1 + 109*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 110*cd_num;
  i1 = I1 + 110*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 136*cd_num;
  i1 = I1 + 109*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 137*cd_num;
  i1 = I1 + 110*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 140*cd_num;
  i1 = I1 + 110*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 111*cd_num;
  i1 = I1 + 111*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 112*cd_num;
  i1 = I1 + 112*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 113*cd_num;
  i1 = I1 + 113*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 139*cd_num;
  i1 = I1 + 112*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 140*cd_num;
  i1 = I1 + 113*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 143*cd_num;
  i1 = I1 + 113*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 114*cd_num;
  i1 = I1 + 114*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 115*cd_num;
  i1 = I1 + 115*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 116*cd_num;
  i1 = I1 + 116*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 142*cd_num;
  i1 = I1 + 115*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 143*cd_num;
  i1 = I1 + 116*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 146*cd_num;
  i1 = I1 + 116*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 117*cd_num;
  i1 = I1 + 117*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 118*cd_num;
  i1 = I1 + 118*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 119*cd_num;
  i1 = I1 + 119*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 145*cd_num;
  i1 = I1 + 118*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 146*cd_num;
  i1 = I1 + 119*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 149*cd_num;
  i1 = I1 + 119*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 120*cd_num;
  i1 = I1 + 120*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 121*cd_num;
  i1 = I1 + 121*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 122*cd_num;
  i1 = I1 + 122*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 148*cd_num;
  i1 = I1 + 121*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 149*cd_num;
  i1 = I1 + 122*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 152*cd_num;
  i1 = I1 + 122*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 123*cd_num;
  i1 = I1 + 123*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 124*cd_num;
  i1 = I1 + 124*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 125*cd_num;
  i1 = I1 + 125*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 151*cd_num;
  i1 = I1 + 124*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 152*cd_num;
  i1 = I1 + 125*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 155*cd_num;
  i1 = I1 + 125*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 126*cd_num;
  i1 = I1 + 126*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 127*cd_num;
  i1 = I1 + 127*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 128*cd_num;
  i1 = I1 + 128*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 154*cd_num;
  i1 = I1 + 127*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 155*cd_num;
  i1 = I1 + 128*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 158*cd_num;
  i1 = I1 + 128*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 129*cd_num;
  i1 = I1 + 129*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 130*cd_num;
  i1 = I1 + 130*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 131*cd_num;
  i1 = I1 + 131*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 157*cd_num;
  i1 = I1 + 130*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 158*cd_num;
  i1 = I1 + 131*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 161*cd_num;
  i1 = I1 + 131*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
  i0 = I0 + 132*cd_num;
  i1 = I1 + 132*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 133*cd_num;
  i1 = I1 + 133*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 134*cd_num;
  i1 = I1 + 134*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++));
  i0 = I0 + 160*cd_num;
  i1 = I1 + 133*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 161*cd_num;
  i1 = I1 + 134*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++));
  i0 = I0 + 164*cd_num;
  i1 = I1 + 134*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++));
}
/* Total number of FLOPs = 540 * cd_num */
