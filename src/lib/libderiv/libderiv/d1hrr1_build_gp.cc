  /* This machine-generated function computes a quartet of (gp| first derivative integrals */

void d1hrr1_build_gp(const double *AB, double *vp, const double *I0, const double *I1,
        double c2, const double *I2, double c3, const double *I3, double c4, const double *I4,
        double c5, const double *I5, double c6, const double *I6, double c7, const double *I7, int cd_num)
{
  int cd;
  const double *i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7;
  const double AB0 = AB[0];
  const double AB1 = AB[1];
  const double AB2 = AB[2];
  i0 = I0;
  i1 = I1;
  i2 = I2;
  i5 = I5;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 1*cd_num;
  i1 = I1;
  i3 = I3;
  i6 = I6;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 2*cd_num;
  i1 = I1;
  i4 = I4;
  i7 = I7;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
  i0 = I0 + 1*cd_num;
  i1 = I1 + 1*cd_num;
  i2 = I2 + 1*cd_num;
  i5 = I5 + 1*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 3*cd_num;
  i1 = I1 + 1*cd_num;
  i3 = I3 + 1*cd_num;
  i6 = I6 + 1*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 4*cd_num;
  i1 = I1 + 1*cd_num;
  i4 = I4 + 1*cd_num;
  i7 = I7 + 1*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
  i0 = I0 + 2*cd_num;
  i1 = I1 + 2*cd_num;
  i2 = I2 + 2*cd_num;
  i5 = I5 + 2*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 4*cd_num;
  i1 = I1 + 2*cd_num;
  i3 = I3 + 2*cd_num;
  i6 = I6 + 2*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 5*cd_num;
  i1 = I1 + 2*cd_num;
  i4 = I4 + 2*cd_num;
  i7 = I7 + 2*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
  i0 = I0 + 3*cd_num;
  i1 = I1 + 3*cd_num;
  i2 = I2 + 3*cd_num;
  i5 = I5 + 3*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 6*cd_num;
  i1 = I1 + 3*cd_num;
  i3 = I3 + 3*cd_num;
  i6 = I6 + 3*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 7*cd_num;
  i1 = I1 + 3*cd_num;
  i4 = I4 + 3*cd_num;
  i7 = I7 + 3*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
  i0 = I0 + 4*cd_num;
  i1 = I1 + 4*cd_num;
  i2 = I2 + 4*cd_num;
  i5 = I5 + 4*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 7*cd_num;
  i1 = I1 + 4*cd_num;
  i3 = I3 + 4*cd_num;
  i6 = I6 + 4*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 8*cd_num;
  i1 = I1 + 4*cd_num;
  i4 = I4 + 4*cd_num;
  i7 = I7 + 4*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
  i0 = I0 + 5*cd_num;
  i1 = I1 + 5*cd_num;
  i2 = I2 + 5*cd_num;
  i5 = I5 + 5*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 8*cd_num;
  i1 = I1 + 5*cd_num;
  i3 = I3 + 5*cd_num;
  i6 = I6 + 5*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 9*cd_num;
  i1 = I1 + 5*cd_num;
  i4 = I4 + 5*cd_num;
  i7 = I7 + 5*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
  i0 = I0 + 6*cd_num;
  i1 = I1 + 6*cd_num;
  i2 = I2 + 6*cd_num;
  i5 = I5 + 6*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 10*cd_num;
  i1 = I1 + 6*cd_num;
  i3 = I3 + 6*cd_num;
  i6 = I6 + 6*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 11*cd_num;
  i1 = I1 + 6*cd_num;
  i4 = I4 + 6*cd_num;
  i7 = I7 + 6*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
  i0 = I0 + 7*cd_num;
  i1 = I1 + 7*cd_num;
  i2 = I2 + 7*cd_num;
  i5 = I5 + 7*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 11*cd_num;
  i1 = I1 + 7*cd_num;
  i3 = I3 + 7*cd_num;
  i6 = I6 + 7*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 12*cd_num;
  i1 = I1 + 7*cd_num;
  i4 = I4 + 7*cd_num;
  i7 = I7 + 7*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
  i0 = I0 + 8*cd_num;
  i1 = I1 + 8*cd_num;
  i2 = I2 + 8*cd_num;
  i5 = I5 + 8*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 12*cd_num;
  i1 = I1 + 8*cd_num;
  i3 = I3 + 8*cd_num;
  i6 = I6 + 8*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 13*cd_num;
  i1 = I1 + 8*cd_num;
  i4 = I4 + 8*cd_num;
  i7 = I7 + 8*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
  i0 = I0 + 9*cd_num;
  i1 = I1 + 9*cd_num;
  i2 = I2 + 9*cd_num;
  i5 = I5 + 9*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 13*cd_num;
  i1 = I1 + 9*cd_num;
  i3 = I3 + 9*cd_num;
  i6 = I6 + 9*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 14*cd_num;
  i1 = I1 + 9*cd_num;
  i4 = I4 + 9*cd_num;
  i7 = I7 + 9*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
  i0 = I0 + 10*cd_num;
  i1 = I1 + 10*cd_num;
  i2 = I2 + 10*cd_num;
  i5 = I5 + 10*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 15*cd_num;
  i1 = I1 + 10*cd_num;
  i3 = I3 + 10*cd_num;
  i6 = I6 + 10*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 16*cd_num;
  i1 = I1 + 10*cd_num;
  i4 = I4 + 10*cd_num;
  i7 = I7 + 10*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
  i0 = I0 + 11*cd_num;
  i1 = I1 + 11*cd_num;
  i2 = I2 + 11*cd_num;
  i5 = I5 + 11*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 16*cd_num;
  i1 = I1 + 11*cd_num;
  i3 = I3 + 11*cd_num;
  i6 = I6 + 11*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 17*cd_num;
  i1 = I1 + 11*cd_num;
  i4 = I4 + 11*cd_num;
  i7 = I7 + 11*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
  i0 = I0 + 12*cd_num;
  i1 = I1 + 12*cd_num;
  i2 = I2 + 12*cd_num;
  i5 = I5 + 12*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 17*cd_num;
  i1 = I1 + 12*cd_num;
  i3 = I3 + 12*cd_num;
  i6 = I6 + 12*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 18*cd_num;
  i1 = I1 + 12*cd_num;
  i4 = I4 + 12*cd_num;
  i7 = I7 + 12*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
  i0 = I0 + 13*cd_num;
  i1 = I1 + 13*cd_num;
  i2 = I2 + 13*cd_num;
  i5 = I5 + 13*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 18*cd_num;
  i1 = I1 + 13*cd_num;
  i3 = I3 + 13*cd_num;
  i6 = I6 + 13*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 19*cd_num;
  i1 = I1 + 13*cd_num;
  i4 = I4 + 13*cd_num;
  i7 = I7 + 13*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
  i0 = I0 + 14*cd_num;
  i1 = I1 + 14*cd_num;
  i2 = I2 + 14*cd_num;
  i5 = I5 + 14*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB0*(*(i1++)) + c2*(*(i2++)) - c5*(*(i5++));
  i0 = I0 + 19*cd_num;
  i1 = I1 + 14*cd_num;
  i3 = I3 + 14*cd_num;
  i6 = I6 + 14*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB1*(*(i1++)) + c3*(*(i3++)) - c6*(*(i6++));
  i0 = I0 + 20*cd_num;
  i1 = I1 + 14*cd_num;
  i4 = I4 + 14*cd_num;
  i7 = I7 + 14*cd_num;
  for(cd=0;cd<cd_num;cd++)
    *(vp++) = *(i0++) + AB2*(*(i1++)) + c4*(*(i4++)) - c7*(*(i7++));
}
