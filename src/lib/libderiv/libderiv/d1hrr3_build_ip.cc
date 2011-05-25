  /* This machine-generated function computes a quartet of |ip) first derivative ERIs */

void d1hrr3_build_ip(const double *CD, double *vp, const double *I0, const double *I1,
        double c2, const double *I2, double c3, const double *I3, double c4, const double *I4,
        double c5, const double *I5, double c6, const double *I6, double c7, const double *I7, int ab_num)
{
  int ab;
  const double CD0 = CD[0];
  const double CD1 = CD[1];
  const double CD2 = CD[2];
  for(ab=0;ab<ab_num;ab++) {
    *(vp++) = I0[0] + CD0*I1[0] + c2*I2[0] - c5*I5[0];
    *(vp++) = I0[1] + CD1*I1[0] + c3*I3[0] - c6*I6[0];
    *(vp++) = I0[2] + CD2*I1[0] + c4*I4[0] - c7*I7[0];
    *(vp++) = I0[1] + CD0*I1[1] + c2*I2[1] - c5*I5[1];
    *(vp++) = I0[3] + CD1*I1[1] + c3*I3[1] - c6*I6[1];
    *(vp++) = I0[4] + CD2*I1[1] + c4*I4[1] - c7*I7[1];
    *(vp++) = I0[2] + CD0*I1[2] + c2*I2[2] - c5*I5[2];
    *(vp++) = I0[4] + CD1*I1[2] + c3*I3[2] - c6*I6[2];
    *(vp++) = I0[5] + CD2*I1[2] + c4*I4[2] - c7*I7[2];
    *(vp++) = I0[3] + CD0*I1[3] + c2*I2[3] - c5*I5[3];
    *(vp++) = I0[6] + CD1*I1[3] + c3*I3[3] - c6*I6[3];
    *(vp++) = I0[7] + CD2*I1[3] + c4*I4[3] - c7*I7[3];
    *(vp++) = I0[4] + CD0*I1[4] + c2*I2[4] - c5*I5[4];
    *(vp++) = I0[7] + CD1*I1[4] + c3*I3[4] - c6*I6[4];
    *(vp++) = I0[8] + CD2*I1[4] + c4*I4[4] - c7*I7[4];
    *(vp++) = I0[5] + CD0*I1[5] + c2*I2[5] - c5*I5[5];
    *(vp++) = I0[8] + CD1*I1[5] + c3*I3[5] - c6*I6[5];
    *(vp++) = I0[9] + CD2*I1[5] + c4*I4[5] - c7*I7[5];
    *(vp++) = I0[6] + CD0*I1[6] + c2*I2[6] - c5*I5[6];
    *(vp++) = I0[10] + CD1*I1[6] + c3*I3[6] - c6*I6[6];
    *(vp++) = I0[11] + CD2*I1[6] + c4*I4[6] - c7*I7[6];
    *(vp++) = I0[7] + CD0*I1[7] + c2*I2[7] - c5*I5[7];
    *(vp++) = I0[11] + CD1*I1[7] + c3*I3[7] - c6*I6[7];
    *(vp++) = I0[12] + CD2*I1[7] + c4*I4[7] - c7*I7[7];
    *(vp++) = I0[8] + CD0*I1[8] + c2*I2[8] - c5*I5[8];
    *(vp++) = I0[12] + CD1*I1[8] + c3*I3[8] - c6*I6[8];
    *(vp++) = I0[13] + CD2*I1[8] + c4*I4[8] - c7*I7[8];
    *(vp++) = I0[9] + CD0*I1[9] + c2*I2[9] - c5*I5[9];
    *(vp++) = I0[13] + CD1*I1[9] + c3*I3[9] - c6*I6[9];
    *(vp++) = I0[14] + CD2*I1[9] + c4*I4[9] - c7*I7[9];
    *(vp++) = I0[10] + CD0*I1[10] + c2*I2[10] - c5*I5[10];
    *(vp++) = I0[15] + CD1*I1[10] + c3*I3[10] - c6*I6[10];
    *(vp++) = I0[16] + CD2*I1[10] + c4*I4[10] - c7*I7[10];
    *(vp++) = I0[11] + CD0*I1[11] + c2*I2[11] - c5*I5[11];
    *(vp++) = I0[16] + CD1*I1[11] + c3*I3[11] - c6*I6[11];
    *(vp++) = I0[17] + CD2*I1[11] + c4*I4[11] - c7*I7[11];
    *(vp++) = I0[12] + CD0*I1[12] + c2*I2[12] - c5*I5[12];
    *(vp++) = I0[17] + CD1*I1[12] + c3*I3[12] - c6*I6[12];
    *(vp++) = I0[18] + CD2*I1[12] + c4*I4[12] - c7*I7[12];
    *(vp++) = I0[13] + CD0*I1[13] + c2*I2[13] - c5*I5[13];
    *(vp++) = I0[18] + CD1*I1[13] + c3*I3[13] - c6*I6[13];
    *(vp++) = I0[19] + CD2*I1[13] + c4*I4[13] - c7*I7[13];
    *(vp++) = I0[14] + CD0*I1[14] + c2*I2[14] - c5*I5[14];
    *(vp++) = I0[19] + CD1*I1[14] + c3*I3[14] - c6*I6[14];
    *(vp++) = I0[20] + CD2*I1[14] + c4*I4[14] - c7*I7[14];
    *(vp++) = I0[15] + CD0*I1[15] + c2*I2[15] - c5*I5[15];
    *(vp++) = I0[21] + CD1*I1[15] + c3*I3[15] - c6*I6[15];
    *(vp++) = I0[22] + CD2*I1[15] + c4*I4[15] - c7*I7[15];
    *(vp++) = I0[16] + CD0*I1[16] + c2*I2[16] - c5*I5[16];
    *(vp++) = I0[22] + CD1*I1[16] + c3*I3[16] - c6*I6[16];
    *(vp++) = I0[23] + CD2*I1[16] + c4*I4[16] - c7*I7[16];
    *(vp++) = I0[17] + CD0*I1[17] + c2*I2[17] - c5*I5[17];
    *(vp++) = I0[23] + CD1*I1[17] + c3*I3[17] - c6*I6[17];
    *(vp++) = I0[24] + CD2*I1[17] + c4*I4[17] - c7*I7[17];
    *(vp++) = I0[18] + CD0*I1[18] + c2*I2[18] - c5*I5[18];
    *(vp++) = I0[24] + CD1*I1[18] + c3*I3[18] - c6*I6[18];
    *(vp++) = I0[25] + CD2*I1[18] + c4*I4[18] - c7*I7[18];
    *(vp++) = I0[19] + CD0*I1[19] + c2*I2[19] - c5*I5[19];
    *(vp++) = I0[25] + CD1*I1[19] + c3*I3[19] - c6*I6[19];
    *(vp++) = I0[26] + CD2*I1[19] + c4*I4[19] - c7*I7[19];
    *(vp++) = I0[20] + CD0*I1[20] + c2*I2[20] - c5*I5[20];
    *(vp++) = I0[26] + CD1*I1[20] + c3*I3[20] - c6*I6[20];
    *(vp++) = I0[27] + CD2*I1[20] + c4*I4[20] - c7*I7[20];
    *(vp++) = I0[21] + CD0*I1[21] + c2*I2[21] - c5*I5[21];
    *(vp++) = I0[28] + CD1*I1[21] + c3*I3[21] - c6*I6[21];
    *(vp++) = I0[29] + CD2*I1[21] + c4*I4[21] - c7*I7[21];
    *(vp++) = I0[22] + CD0*I1[22] + c2*I2[22] - c5*I5[22];
    *(vp++) = I0[29] + CD1*I1[22] + c3*I3[22] - c6*I6[22];
    *(vp++) = I0[30] + CD2*I1[22] + c4*I4[22] - c7*I7[22];
    *(vp++) = I0[23] + CD0*I1[23] + c2*I2[23] - c5*I5[23];
    *(vp++) = I0[30] + CD1*I1[23] + c3*I3[23] - c6*I6[23];
    *(vp++) = I0[31] + CD2*I1[23] + c4*I4[23] - c7*I7[23];
    *(vp++) = I0[24] + CD0*I1[24] + c2*I2[24] - c5*I5[24];
    *(vp++) = I0[31] + CD1*I1[24] + c3*I3[24] - c6*I6[24];
    *(vp++) = I0[32] + CD2*I1[24] + c4*I4[24] - c7*I7[24];
    *(vp++) = I0[25] + CD0*I1[25] + c2*I2[25] - c5*I5[25];
    *(vp++) = I0[32] + CD1*I1[25] + c3*I3[25] - c6*I6[25];
    *(vp++) = I0[33] + CD2*I1[25] + c4*I4[25] - c7*I7[25];
    *(vp++) = I0[26] + CD0*I1[26] + c2*I2[26] - c5*I5[26];
    *(vp++) = I0[33] + CD1*I1[26] + c3*I3[26] - c6*I6[26];
    *(vp++) = I0[34] + CD2*I1[26] + c4*I4[26] - c7*I7[26];
    *(vp++) = I0[27] + CD0*I1[27] + c2*I2[27] - c5*I5[27];
    *(vp++) = I0[34] + CD1*I1[27] + c3*I3[27] - c6*I6[27];
    *(vp++) = I0[35] + CD2*I1[27] + c4*I4[27] - c7*I7[27];
    I0 += 36;
    I1 += 28;
    I2 += 28;
    I3 += 28;
    I4 += 28;
    I5 += 28;
    I6 += 28;
    I7 += 28;
  }
}
