#include <stdio.h>
#include "libint.h"
#include "vrr_header.h"

  /* Computes quartets necessary to compute (dp|hh) integrals */

void vrr_order_dphh(Libint_t * Libint, prim_data *Data)
{
 REALTYPE *vrr_stack = Libint->vrr_stack;
 REALTYPE *tmp, *target_ptr;
 int i, am[2];
 _BUILD_00p0(Data,vrr_stack+0, Data->F+4, Data->F+5, NULL, NULL, NULL);
 _BUILD_00p0(Data,vrr_stack+3, Data->F+3, Data->F+4, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+6, vrr_stack+3, vrr_stack+0, Data->F+3, Data->F+4, NULL);
 _BUILD_00p0(Data,vrr_stack+12, Data->F+5, Data->F+6, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+15, vrr_stack+0, vrr_stack+12, Data->F+4, Data->F+5, NULL);
 _BUILD_00f0(Data,vrr_stack+21, vrr_stack+6, vrr_stack+15, vrr_stack+3, vrr_stack+0, NULL);
 _BUILD_00p0(Data,vrr_stack+31, Data->F+2, Data->F+3, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+34, vrr_stack+31, vrr_stack+3, Data->F+2, Data->F+3, NULL);
 _BUILD_00f0(Data,vrr_stack+40, vrr_stack+34, vrr_stack+6, vrr_stack+31, vrr_stack+3, NULL);
 _BUILD_p0f0(Data,vrr_stack+50, vrr_stack+40, vrr_stack+21, NULL, NULL, vrr_stack+6);
 _BUILD_00g0(Data,vrr_stack+80, vrr_stack+40, vrr_stack+21, vrr_stack+34, vrr_stack+6, NULL);
 _BUILD_00p0(Data,vrr_stack+3, Data->F+1, Data->F+2, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+95, vrr_stack+3, vrr_stack+31, Data->F+1, Data->F+2, NULL);
 _BUILD_00f0(Data,vrr_stack+101, vrr_stack+95, vrr_stack+34, vrr_stack+3, vrr_stack+31, NULL);
 _BUILD_00g0(Data,vrr_stack+111, vrr_stack+101, vrr_stack+40, vrr_stack+95, vrr_stack+34, NULL);
 _BUILD_00p0(Data,vrr_stack+31, Data->F+6, Data->F+7, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+34, vrr_stack+12, vrr_stack+31, Data->F+5, Data->F+6, NULL);
 _BUILD_00f0(Data,vrr_stack+126, vrr_stack+15, vrr_stack+34, vrr_stack+0, vrr_stack+12, NULL);
 _BUILD_00g0(Data,vrr_stack+136, vrr_stack+21, vrr_stack+126, vrr_stack+6, vrr_stack+15, NULL);
 _BUILD_p0g0(Data,vrr_stack+151, vrr_stack+80, vrr_stack+136, NULL, NULL, vrr_stack+21);
 _BUILD_p0g0(Data,vrr_stack+196, vrr_stack+111, vrr_stack+80, NULL, NULL, vrr_stack+40);
 _BUILD_d0g0(Data,vrr_stack+241, vrr_stack+196, vrr_stack+151, vrr_stack+111, vrr_stack+80, vrr_stack+50);
 _BUILD_00h0(Data,vrr_stack+50, vrr_stack+80, vrr_stack+136, vrr_stack+40, vrr_stack+21, NULL);
 _BUILD_00h0(Data,vrr_stack+331, vrr_stack+111, vrr_stack+80, vrr_stack+101, vrr_stack+40, NULL);
 _BUILD_p0h0(Data,vrr_stack+352, vrr_stack+331, vrr_stack+50, NULL, NULL, vrr_stack+80);
 _BUILD_00p0(Data,vrr_stack+0, Data->F+0, Data->F+1, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+6, vrr_stack+0, vrr_stack+3, Data->F+0, Data->F+1, NULL);
 _BUILD_00f0(Data,vrr_stack+40, vrr_stack+6, vrr_stack+95, vrr_stack+0, vrr_stack+3, NULL);
 _BUILD_00g0(Data,vrr_stack+415, vrr_stack+40, vrr_stack+101, vrr_stack+6, vrr_stack+95, NULL);
 _BUILD_00h0(Data,vrr_stack+430, vrr_stack+415, vrr_stack+111, vrr_stack+40, vrr_stack+101, NULL);
 _BUILD_p0h0(Data,vrr_stack+451, vrr_stack+430, vrr_stack+331, NULL, NULL, vrr_stack+111);
 _BUILD_00p0(Data,vrr_stack+40, Data->F+7, Data->F+8, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+43, vrr_stack+31, vrr_stack+40, Data->F+6, Data->F+7, NULL);
 _BUILD_00f0(Data,vrr_stack+95, vrr_stack+34, vrr_stack+43, vrr_stack+12, vrr_stack+31, NULL);
 _BUILD_00g0(Data,vrr_stack+0, vrr_stack+126, vrr_stack+95, vrr_stack+15, vrr_stack+34, NULL);
 _BUILD_00h0(Data,vrr_stack+514, vrr_stack+136, vrr_stack+0, vrr_stack+21, vrr_stack+126, NULL);
 _BUILD_p0h0(Data,vrr_stack+535, vrr_stack+50, vrr_stack+514, NULL, NULL, vrr_stack+136);
 _BUILD_d0h0(Data,vrr_stack+598, vrr_stack+352, vrr_stack+535, vrr_stack+331, vrr_stack+50, vrr_stack+151);
 _BUILD_d0h0(Data,vrr_stack+724, vrr_stack+451, vrr_stack+352, vrr_stack+430, vrr_stack+331, vrr_stack+196);
   tmp = vrr_stack + 724;
   target_ptr = Libint->vrr_classes[2][5];
   for(i=0;i<126;i++)
     target_ptr[i] += tmp[i];
 _BUILD_00i0(Data,vrr_stack+151, vrr_stack+50, vrr_stack+514, vrr_stack+80, vrr_stack+136, NULL);
 _BUILD_00i0(Data,vrr_stack+179, vrr_stack+331, vrr_stack+50, vrr_stack+111, vrr_stack+80, NULL);
 _BUILD_p0i0(Data,vrr_stack+850, vrr_stack+179, vrr_stack+151, NULL, NULL, vrr_stack+50);
 _BUILD_00i0(Data,vrr_stack+207, vrr_stack+430, vrr_stack+331, vrr_stack+415, vrr_stack+111, NULL);
 _BUILD_p0i0(Data,vrr_stack+934, vrr_stack+207, vrr_stack+179, NULL, NULL, vrr_stack+331);
 _BUILD_00p0(Data,vrr_stack+415, Data->F+8, Data->F+9, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+235, vrr_stack+40, vrr_stack+415, Data->F+7, Data->F+8, NULL);
 _BUILD_00f0(Data,vrr_stack+418, vrr_stack+43, vrr_stack+235, vrr_stack+31, vrr_stack+40, NULL);
 _BUILD_00g0(Data,vrr_stack+15, vrr_stack+95, vrr_stack+418, vrr_stack+34, vrr_stack+43, NULL);
 _BUILD_00h0(Data,vrr_stack+105, vrr_stack+0, vrr_stack+15, vrr_stack+126, vrr_stack+95, NULL);
 _BUILD_00i0(Data,vrr_stack+1018, vrr_stack+514, vrr_stack+105, vrr_stack+136, vrr_stack+0, NULL);
 _BUILD_p0i0(Data,vrr_stack+1046, vrr_stack+151, vrr_stack+1018, NULL, NULL, vrr_stack+514);
 _BUILD_d0i0(Data,vrr_stack+1130, vrr_stack+850, vrr_stack+1046, vrr_stack+179, vrr_stack+151, vrr_stack+535);
 _BUILD_d0i0(Data,vrr_stack+1298, vrr_stack+934, vrr_stack+850, vrr_stack+207, vrr_stack+179, vrr_stack+352);
   tmp = vrr_stack + 1298;
   target_ptr = Libint->vrr_classes[2][6];
   for(i=0;i<168;i++)
     target_ptr[i] += tmp[i];
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+535, vrr_stack+151, vrr_stack+1018, vrr_stack+50, vrr_stack+514, NULL);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+1466, vrr_stack+179, vrr_stack+151, vrr_stack+331, vrr_stack+50, NULL);
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+1502, vrr_stack+1466, vrr_stack+535, NULL, NULL, vrr_stack+151);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+49, vrr_stack+207, vrr_stack+179, vrr_stack+430, vrr_stack+331, NULL);
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+1610, vrr_stack+49, vrr_stack+1466, NULL, NULL, vrr_stack+179);
 _BUILD_00p0(Data,vrr_stack+331, Data->F+9, Data->F+10, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+334, vrr_stack+415, vrr_stack+331, Data->F+8, Data->F+9, NULL);
 _BUILD_00f0(Data,vrr_stack+30, vrr_stack+235, vrr_stack+334, vrr_stack+40, vrr_stack+415, NULL);
 _BUILD_00g0(Data,vrr_stack+571, vrr_stack+418, vrr_stack+30, vrr_stack+43, vrr_stack+235, NULL);
 _BUILD_00h0(Data,vrr_stack+126, vrr_stack+15, vrr_stack+571, vrr_stack+95, vrr_stack+418, NULL);
 _BUILD_00i0(Data,vrr_stack+1718, vrr_stack+105, vrr_stack+126, vrr_stack+0, vrr_stack+15, NULL);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+1746, vrr_stack+1018, vrr_stack+1718, vrr_stack+514, vrr_stack+105, NULL);
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+1782, vrr_stack+535, vrr_stack+1746, NULL, NULL, vrr_stack+1018);
 am[0] = 2;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+1890, vrr_stack+1502, vrr_stack+1782, vrr_stack+1466, vrr_stack+535, vrr_stack+1046);
 am[0] = 2;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+2106, vrr_stack+1610, vrr_stack+1502, vrr_stack+49, vrr_stack+1466, vrr_stack+850);
   tmp = vrr_stack + 2106;
   target_ptr = Libint->vrr_classes[2][7];
   for(i=0;i<216;i++)
     target_ptr[i] += tmp[i];
 am[0] = 0;  am[1] = 8;
 vrr_build_xxxx(am,Data,vrr_stack+1046, vrr_stack+535, vrr_stack+1746, vrr_stack+151, vrr_stack+1018, NULL);
 am[0] = 0;  am[1] = 8;
 vrr_build_xxxx(am,Data,vrr_stack+2322, vrr_stack+1466, vrr_stack+535, vrr_stack+179, vrr_stack+151, NULL);
 am[0] = 1;  am[1] = 8;
 vrr_build_xxxx(am,Data,vrr_stack+2367, vrr_stack+2322, vrr_stack+1046, NULL, NULL, vrr_stack+535);
 am[0] = 0;  am[1] = 8;
 vrr_build_xxxx(am,Data,vrr_stack+2502, vrr_stack+49, vrr_stack+1466, vrr_stack+207, vrr_stack+179, NULL);
 am[0] = 1;  am[1] = 8;
 vrr_build_xxxx(am,Data,vrr_stack+2547, vrr_stack+2502, vrr_stack+2322, NULL, NULL, vrr_stack+1466);
 _BUILD_00p0(Data,vrr_stack+1091, Data->F+10, Data->F+11, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+1094, vrr_stack+331, vrr_stack+1091, Data->F+9, Data->F+10, NULL);
 _BUILD_00f0(Data,vrr_stack+1100, vrr_stack+334, vrr_stack+1094, vrr_stack+415, vrr_stack+331, NULL);
 _BUILD_00g0(Data,vrr_stack+0, vrr_stack+30, vrr_stack+1100, vrr_stack+235, vrr_stack+334, NULL);
 _BUILD_00h0(Data,vrr_stack+514, vrr_stack+571, vrr_stack+0, vrr_stack+418, vrr_stack+30, NULL);
 _BUILD_00i0(Data,vrr_stack+415, vrr_stack+126, vrr_stack+514, vrr_stack+15, vrr_stack+571, NULL);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+147, vrr_stack+1718, vrr_stack+415, vrr_stack+105, vrr_stack+126, NULL);
 am[0] = 0;  am[1] = 8;
 vrr_build_xxxx(am,Data,vrr_stack+183, vrr_stack+1746, vrr_stack+147, vrr_stack+1018, vrr_stack+1718, NULL);
 am[0] = 1;  am[1] = 8;
 vrr_build_xxxx(am,Data,vrr_stack+2682, vrr_stack+1046, vrr_stack+183, NULL, NULL, vrr_stack+1746);
 am[0] = 2;  am[1] = 8;
 vrr_build_xxxx(am,Data,vrr_stack+2817, vrr_stack+2367, vrr_stack+2682, vrr_stack+2322, vrr_stack+1046, vrr_stack+1782);
 am[0] = 2;  am[1] = 8;
 vrr_build_xxxx(am,Data,vrr_stack+3087, vrr_stack+2547, vrr_stack+2367, vrr_stack+2502, vrr_stack+2322, vrr_stack+1502);
   tmp = vrr_stack + 3087;
   target_ptr = Libint->vrr_classes[2][8];
   for(i=0;i<270;i++)
     target_ptr[i] += tmp[i];
 am[0] = 0;  am[1] = 9;
 vrr_build_xxxx(am,Data,vrr_stack+1782, vrr_stack+1046, vrr_stack+183, vrr_stack+535, vrr_stack+1746, NULL);
 am[0] = 0;  am[1] = 9;
 vrr_build_xxxx(am,Data,vrr_stack+3357, vrr_stack+2322, vrr_stack+1046, vrr_stack+1466, vrr_stack+535, NULL);
 am[0] = 1;  am[1] = 9;
 vrr_build_xxxx(am,Data,vrr_stack+3412, vrr_stack+3357, vrr_stack+1782, NULL, NULL, vrr_stack+1046);
 am[0] = 0;  am[1] = 9;
 vrr_build_xxxx(am,Data,vrr_stack+3577, vrr_stack+2502, vrr_stack+2322, vrr_stack+49, vrr_stack+1466, NULL);
 am[0] = 1;  am[1] = 9;
 vrr_build_xxxx(am,Data,vrr_stack+3632, vrr_stack+3577, vrr_stack+3357, NULL, NULL, vrr_stack+2322);
 _BUILD_00p0(Data,vrr_stack+1466, Data->F+11, Data->F+12, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+1469, vrr_stack+1091, vrr_stack+1466, Data->F+10, Data->F+11, NULL);
 _BUILD_00f0(Data,vrr_stack+1475, vrr_stack+1094, vrr_stack+1469, vrr_stack+331, vrr_stack+1091, NULL);
 _BUILD_00g0(Data,vrr_stack+15, vrr_stack+1100, vrr_stack+1475, vrr_stack+334, vrr_stack+1094, NULL);
 _BUILD_00h0(Data,vrr_stack+331, vrr_stack+0, vrr_stack+15, vrr_stack+30, vrr_stack+1100, NULL);
 _BUILD_00i0(Data,vrr_stack+1018, vrr_stack+514, vrr_stack+331, vrr_stack+571, vrr_stack+0, NULL);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+30, vrr_stack+415, vrr_stack+1018, vrr_stack+126, vrr_stack+514, NULL);
 am[0] = 0;  am[1] = 8;
 vrr_build_xxxx(am,Data,vrr_stack+66, vrr_stack+147, vrr_stack+30, vrr_stack+1718, vrr_stack+415, NULL);
 am[0] = 0;  am[1] = 9;
 vrr_build_xxxx(am,Data,vrr_stack+535, vrr_stack+183, vrr_stack+66, vrr_stack+1746, vrr_stack+147, NULL);
 am[0] = 1;  am[1] = 9;
 vrr_build_xxxx(am,Data,vrr_stack+3797, vrr_stack+1782, vrr_stack+535, NULL, NULL, vrr_stack+183);
 am[0] = 2;  am[1] = 9;
 vrr_build_xxxx(am,Data,vrr_stack+3962, vrr_stack+3412, vrr_stack+3797, vrr_stack+3357, vrr_stack+1782, vrr_stack+2682);
 am[0] = 2;  am[1] = 9;
 vrr_build_xxxx(am,Data,vrr_stack+4292, vrr_stack+3632, vrr_stack+3412, vrr_stack+3577, vrr_stack+3357, vrr_stack+2367);
   tmp = vrr_stack + 4292;
   target_ptr = Libint->vrr_classes[2][9];
   for(i=0;i<330;i++)
     target_ptr[i] += tmp[i];
 am[0] = 0;  am[1] = 10;
 vrr_build_xxxx(am,Data,vrr_stack+2682, vrr_stack+1782, vrr_stack+535, vrr_stack+1046, vrr_stack+183, NULL);
 am[0] = 0;  am[1] = 10;
 vrr_build_xxxx(am,Data,vrr_stack+2748, vrr_stack+3357, vrr_stack+1782, vrr_stack+2322, vrr_stack+1046, NULL);
 am[0] = 1;  am[1] = 10;
 vrr_build_xxxx(am,Data,vrr_stack+4622, vrr_stack+2748, vrr_stack+2682, NULL, NULL, vrr_stack+1782);
 am[0] = 0;  am[1] = 10;
 vrr_build_xxxx(am,Data,vrr_stack+1718, vrr_stack+3577, vrr_stack+3357, vrr_stack+2502, vrr_stack+2322, NULL);
 am[0] = 1;  am[1] = 10;
 vrr_build_xxxx(am,Data,vrr_stack+4820, vrr_stack+1718, vrr_stack+2748, NULL, NULL, vrr_stack+3357);
 _BUILD_00p0(Data,vrr_stack+2814, Data->F+12, Data->F+13, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+3357, vrr_stack+1466, vrr_stack+2814, Data->F+11, Data->F+12, NULL);
 _BUILD_00f0(Data,vrr_stack+3363, vrr_stack+1469, vrr_stack+3357, vrr_stack+1091, vrr_stack+1466, NULL);
 _BUILD_00g0(Data,vrr_stack+3373, vrr_stack+1475, vrr_stack+3363, vrr_stack+1094, vrr_stack+1469, NULL);
 _BUILD_00h0(Data,vrr_stack+3388, vrr_stack+15, vrr_stack+3373, vrr_stack+1100, vrr_stack+1475, NULL);
 _BUILD_00i0(Data,vrr_stack+1466, vrr_stack+331, vrr_stack+3388, vrr_stack+0, vrr_stack+15, NULL);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+111, vrr_stack+1018, vrr_stack+1466, vrr_stack+514, vrr_stack+331, NULL);
 am[0] = 0;  am[1] = 8;
 vrr_build_xxxx(am,Data,vrr_stack+2322, vrr_stack+30, vrr_stack+111, vrr_stack+415, vrr_stack+1018, NULL);
 am[0] = 0;  am[1] = 9;
 vrr_build_xxxx(am,Data,vrr_stack+3357, vrr_stack+66, vrr_stack+2322, vrr_stack+147, vrr_stack+30, NULL);
 am[0] = 0;  am[1] = 10;
 vrr_build_xxxx(am,Data,vrr_stack+0, vrr_stack+535, vrr_stack+3357, vrr_stack+183, vrr_stack+66, NULL);
 am[0] = 1;  am[1] = 10;
 vrr_build_xxxx(am,Data,vrr_stack+5018, vrr_stack+2682, vrr_stack+0, NULL, NULL, vrr_stack+535);
 am[0] = 2;  am[1] = 10;
 vrr_build_xxxx(am,Data,vrr_stack+5216, vrr_stack+4622, vrr_stack+5018, vrr_stack+2748, vrr_stack+2682, vrr_stack+3797);
 am[0] = 2;  am[1] = 10;
 vrr_build_xxxx(am,Data,vrr_stack+5612, vrr_stack+4820, vrr_stack+4622, vrr_stack+1718, vrr_stack+2748, vrr_stack+3412);
   tmp = vrr_stack + 5612;
   target_ptr = Libint->vrr_classes[2][10];
   for(i=0;i<396;i++)
     target_ptr[i] += tmp[i];
 _BUILD_f0h0(Data,vrr_stack+0, vrr_stack+724, vrr_stack+598, vrr_stack+451, vrr_stack+352, vrr_stack+241);
   tmp = vrr_stack + 0;
   target_ptr = Libint->vrr_classes[3][5];
   for(i=0;i<210;i++)
     target_ptr[i] += tmp[i];
 _BUILD_f0i0(Data,vrr_stack+210, vrr_stack+1298, vrr_stack+1130, vrr_stack+934, vrr_stack+850, vrr_stack+598);
   tmp = vrr_stack + 210;
   target_ptr = Libint->vrr_classes[3][6];
   for(i=0;i<280;i++)
     target_ptr[i] += tmp[i];
 am[0] = 3;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+490, vrr_stack+2106, vrr_stack+1890, vrr_stack+1610, vrr_stack+1502, vrr_stack+1130);
   tmp = vrr_stack + 490;
   target_ptr = Libint->vrr_classes[3][7];
   for(i=0;i<360;i++)
     target_ptr[i] += tmp[i];
 am[0] = 3;  am[1] = 8;
 vrr_build_xxxx(am,Data,vrr_stack+850, vrr_stack+3087, vrr_stack+2817, vrr_stack+2547, vrr_stack+2367, vrr_stack+1890);
   tmp = vrr_stack + 850;
   target_ptr = Libint->vrr_classes[3][8];
   for(i=0;i<450;i++)
     target_ptr[i] += tmp[i];
 am[0] = 3;  am[1] = 9;
 vrr_build_xxxx(am,Data,vrr_stack+1300, vrr_stack+4292, vrr_stack+3962, vrr_stack+3632, vrr_stack+3412, vrr_stack+2817);
   tmp = vrr_stack + 1300;
   target_ptr = Libint->vrr_classes[3][9];
   for(i=0;i<550;i++)
     target_ptr[i] += tmp[i];
 am[0] = 3;  am[1] = 10;
 vrr_build_xxxx(am,Data,vrr_stack+1850, vrr_stack+5612, vrr_stack+5216, vrr_stack+4820, vrr_stack+4622, vrr_stack+3962);
   tmp = vrr_stack + 1850;
   target_ptr = Libint->vrr_classes[3][10];
   for(i=0;i<660;i++)
     target_ptr[i] += tmp[i];

}

