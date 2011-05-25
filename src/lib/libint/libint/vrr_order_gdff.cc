#include <stdio.h>
#include "libint.h"
#include "vrr_header.h"

  /* Computes quartets necessary to compute (gd|ff) integrals */

void vrr_order_gdff(Libint_t * Libint, prim_data *Data)
{
 REALTYPE *vrr_stack = Libint->vrr_stack;
 REALTYPE *tmp, *target_ptr;
 int i, am[2];
 _BUILD_p000(Data,vrr_stack+0, Data->F+4, Data->F+5, NULL, NULL, NULL);
 _BUILD_p000(Data,vrr_stack+3, Data->F+3, Data->F+4, NULL, NULL, NULL);
 _BUILD_p000(Data,vrr_stack+6, Data->F+5, Data->F+6, NULL, NULL, NULL);
 _BUILD_d000(Data,vrr_stack+9, vrr_stack+0, vrr_stack+6, Data->F+4, Data->F+5, NULL);
 _BUILD_d000(Data,vrr_stack+15, vrr_stack+3, vrr_stack+0, Data->F+3, Data->F+4, NULL);
 _BUILD_f000(Data,vrr_stack+21, vrr_stack+15, vrr_stack+9, vrr_stack+3, vrr_stack+0, NULL);
 _BUILD_00p0(Data,vrr_stack+31, Data->F+4, Data->F+5, NULL, NULL, NULL);
 _BUILD_00p0(Data,vrr_stack+34, Data->F+3, Data->F+4, NULL, NULL, NULL);
 _BUILD_00p0(Data,vrr_stack+37, Data->F+5, Data->F+6, NULL, NULL, NULL);
 _BUILD_p0p0(Data,vrr_stack+40, vrr_stack+31, vrr_stack+37, NULL, NULL, Data->F+5);
 _BUILD_p0p0(Data,vrr_stack+49, vrr_stack+34, vrr_stack+31, NULL, NULL, Data->F+4);
 _BUILD_d0p0(Data,vrr_stack+58, vrr_stack+49, vrr_stack+40, vrr_stack+34, vrr_stack+31, vrr_stack+0);
 _BUILD_00p0(Data,vrr_stack+0, Data->F+2, Data->F+3, NULL, NULL, NULL);
 _BUILD_p0p0(Data,vrr_stack+76, vrr_stack+0, vrr_stack+34, NULL, NULL, Data->F+3);
 _BUILD_d0p0(Data,vrr_stack+85, vrr_stack+76, vrr_stack+49, vrr_stack+0, vrr_stack+34, vrr_stack+3);
 _BUILD_00p0(Data,vrr_stack+3, Data->F+6, Data->F+7, NULL, NULL, NULL);
 _BUILD_p0p0(Data,vrr_stack+103, vrr_stack+37, vrr_stack+3, NULL, NULL, Data->F+6);
 _BUILD_d0p0(Data,vrr_stack+112, vrr_stack+40, vrr_stack+103, vrr_stack+31, vrr_stack+37, vrr_stack+6);
 _BUILD_f0p0(Data,vrr_stack+130, vrr_stack+58, vrr_stack+112, vrr_stack+49, vrr_stack+40, vrr_stack+9);
 _BUILD_f0p0(Data,vrr_stack+160, vrr_stack+85, vrr_stack+58, vrr_stack+76, vrr_stack+49, vrr_stack+15);
 _BUILD_g0p0(Data,vrr_stack+190, vrr_stack+160, vrr_stack+130, vrr_stack+85, vrr_stack+58, vrr_stack+21);
 _BUILD_00d0(Data,vrr_stack+6, vrr_stack+31, vrr_stack+37, Data->F+4, Data->F+5, NULL);
 _BUILD_00d0(Data,vrr_stack+12, vrr_stack+34, vrr_stack+31, Data->F+3, Data->F+4, NULL);
 _BUILD_p0d0(Data,vrr_stack+235, vrr_stack+12, vrr_stack+6, NULL, NULL, vrr_stack+31);
 _BUILD_00d0(Data,vrr_stack+18, vrr_stack+0, vrr_stack+34, Data->F+2, Data->F+3, NULL);
 _BUILD_p0d0(Data,vrr_stack+253, vrr_stack+18, vrr_stack+12, NULL, NULL, vrr_stack+34);
 _BUILD_00d0(Data,vrr_stack+24, vrr_stack+37, vrr_stack+3, Data->F+5, Data->F+6, NULL);
 _BUILD_p0d0(Data,vrr_stack+271, vrr_stack+6, vrr_stack+24, NULL, NULL, vrr_stack+37);
 _BUILD_d0d0(Data,vrr_stack+289, vrr_stack+235, vrr_stack+271, vrr_stack+12, vrr_stack+6, vrr_stack+40);
 _BUILD_d0d0(Data,vrr_stack+325, vrr_stack+253, vrr_stack+235, vrr_stack+18, vrr_stack+12, vrr_stack+49);
 _BUILD_f0d0(Data,vrr_stack+361, vrr_stack+325, vrr_stack+289, vrr_stack+253, vrr_stack+235, vrr_stack+58);
 _BUILD_00p0(Data,vrr_stack+40, Data->F+1, Data->F+2, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+43, vrr_stack+40, vrr_stack+0, Data->F+1, Data->F+2, NULL);
 _BUILD_p0d0(Data,vrr_stack+49, vrr_stack+43, vrr_stack+18, NULL, NULL, vrr_stack+0);
 _BUILD_d0d0(Data,vrr_stack+421, vrr_stack+49, vrr_stack+253, vrr_stack+43, vrr_stack+18, vrr_stack+76);
 _BUILD_f0d0(Data,vrr_stack+457, vrr_stack+421, vrr_stack+325, vrr_stack+49, vrr_stack+253, vrr_stack+85);
 _BUILD_00p0(Data,vrr_stack+67, Data->F+7, Data->F+8, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+70, vrr_stack+3, vrr_stack+67, Data->F+6, Data->F+7, NULL);
 _BUILD_p0d0(Data,vrr_stack+76, vrr_stack+24, vrr_stack+70, NULL, NULL, vrr_stack+3);
 _BUILD_d0d0(Data,vrr_stack+517, vrr_stack+271, vrr_stack+76, vrr_stack+6, vrr_stack+24, vrr_stack+103);
 _BUILD_f0d0(Data,vrr_stack+553, vrr_stack+289, vrr_stack+517, vrr_stack+235, vrr_stack+271, vrr_stack+112);
 _BUILD_g0d0(Data,vrr_stack+613, vrr_stack+361, vrr_stack+553, vrr_stack+325, vrr_stack+289, vrr_stack+130);
 _BUILD_g0d0(Data,vrr_stack+703, vrr_stack+457, vrr_stack+361, vrr_stack+421, vrr_stack+325, vrr_stack+160);
 _BUILD_h0d0(Data,vrr_stack+793, vrr_stack+703, vrr_stack+613, vrr_stack+457, vrr_stack+361, vrr_stack+190);
 _BUILD_00f0(Data,vrr_stack+94, vrr_stack+12, vrr_stack+6, vrr_stack+34, vrr_stack+31, NULL);
 _BUILD_00f0(Data,vrr_stack+104, vrr_stack+18, vrr_stack+12, vrr_stack+0, vrr_stack+34, NULL);
 _BUILD_00f0(Data,vrr_stack+114, vrr_stack+6, vrr_stack+24, vrr_stack+31, vrr_stack+37, NULL);
 _BUILD_p0f0(Data,vrr_stack+124, vrr_stack+94, vrr_stack+114, NULL, NULL, vrr_stack+6);
 _BUILD_p0f0(Data,vrr_stack+154, vrr_stack+104, vrr_stack+94, NULL, NULL, vrr_stack+12);
 _BUILD_d0f0(Data,vrr_stack+919, vrr_stack+154, vrr_stack+124, vrr_stack+104, vrr_stack+94, vrr_stack+235);
 _BUILD_00f0(Data,vrr_stack+184, vrr_stack+43, vrr_stack+18, vrr_stack+40, vrr_stack+0, NULL);
 _BUILD_p0f0(Data,vrr_stack+194, vrr_stack+184, vrr_stack+104, NULL, NULL, vrr_stack+18);
 _BUILD_d0f0(Data,vrr_stack+979, vrr_stack+194, vrr_stack+154, vrr_stack+184, vrr_stack+104, vrr_stack+253);
 _BUILD_00f0(Data,vrr_stack+224, vrr_stack+24, vrr_stack+70, vrr_stack+37, vrr_stack+3, NULL);
 _BUILD_p0f0(Data,vrr_stack+234, vrr_stack+114, vrr_stack+224, NULL, NULL, vrr_stack+24);
 _BUILD_d0f0(Data,vrr_stack+1039, vrr_stack+124, vrr_stack+234, vrr_stack+94, vrr_stack+114, vrr_stack+271);
 _BUILD_f0f0(Data,vrr_stack+1099, vrr_stack+919, vrr_stack+1039, vrr_stack+154, vrr_stack+124, vrr_stack+289);
 _BUILD_f0f0(Data,vrr_stack+1199, vrr_stack+979, vrr_stack+919, vrr_stack+194, vrr_stack+154, vrr_stack+325);
 _BUILD_g0f0(Data,vrr_stack+1299, vrr_stack+1199, vrr_stack+1099, vrr_stack+979, vrr_stack+919, vrr_stack+361);
 _BUILD_00p0(Data,vrr_stack+0, Data->F+0, Data->F+1, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+264, vrr_stack+0, vrr_stack+40, Data->F+0, Data->F+1, NULL);
 _BUILD_00f0(Data,vrr_stack+30, vrr_stack+264, vrr_stack+43, vrr_stack+0, vrr_stack+40, NULL);
 _BUILD_p0f0(Data,vrr_stack+270, vrr_stack+30, vrr_stack+184, NULL, NULL, vrr_stack+43);
 _BUILD_d0f0(Data,vrr_stack+300, vrr_stack+270, vrr_stack+194, vrr_stack+30, vrr_stack+184, vrr_stack+49);
 _BUILD_f0f0(Data,vrr_stack+1449, vrr_stack+300, vrr_stack+979, vrr_stack+270, vrr_stack+194, vrr_stack+421);
 _BUILD_g0f0(Data,vrr_stack+1549, vrr_stack+1449, vrr_stack+1199, vrr_stack+300, vrr_stack+979, vrr_stack+457);
   tmp = vrr_stack + 1549;
   target_ptr = Libint->vrr_classes[4][3];
   for(i=0;i<150;i++)
     target_ptr[i] += tmp[i];
 _BUILD_00p0(Data,vrr_stack+40, Data->F+8, Data->F+9, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+270, vrr_stack+67, vrr_stack+40, Data->F+7, Data->F+8, NULL);
 _BUILD_00f0(Data,vrr_stack+276, vrr_stack+70, vrr_stack+270, vrr_stack+3, vrr_stack+67, NULL);
 _BUILD_p0f0(Data,vrr_stack+286, vrr_stack+224, vrr_stack+276, NULL, NULL, vrr_stack+70);
 _BUILD_d0f0(Data,vrr_stack+316, vrr_stack+234, vrr_stack+286, vrr_stack+114, vrr_stack+224, vrr_stack+76);
 _BUILD_f0f0(Data,vrr_stack+376, vrr_stack+1039, vrr_stack+316, vrr_stack+124, vrr_stack+234, vrr_stack+517);
 _BUILD_g0f0(Data,vrr_stack+1699, vrr_stack+1099, vrr_stack+376, vrr_stack+919, vrr_stack+1039, vrr_stack+553);
 _BUILD_h0f0(Data,vrr_stack+1849, vrr_stack+1299, vrr_stack+1699, vrr_stack+1199, vrr_stack+1099, vrr_stack+613);
 _BUILD_h0f0(Data,vrr_stack+476, vrr_stack+1549, vrr_stack+1299, vrr_stack+1449, vrr_stack+1199, vrr_stack+703);
   tmp = vrr_stack + 476;
   target_ptr = Libint->vrr_classes[5][3];
   for(i=0;i<210;i++)
     target_ptr[i] += tmp[i];
 _BUILD_00g0(Data,vrr_stack+1449, vrr_stack+94, vrr_stack+114, vrr_stack+12, vrr_stack+6, NULL);
 _BUILD_00g0(Data,vrr_stack+1464, vrr_stack+104, vrr_stack+94, vrr_stack+18, vrr_stack+12, NULL);
 _BUILD_00g0(Data,vrr_stack+1479, vrr_stack+114, vrr_stack+224, vrr_stack+6, vrr_stack+24, NULL);
 _BUILD_p0g0(Data,vrr_stack+1494, vrr_stack+1449, vrr_stack+1479, NULL, NULL, vrr_stack+114);
 _BUILD_p0g0(Data,vrr_stack+686, vrr_stack+1464, vrr_stack+1449, NULL, NULL, vrr_stack+94);
 _BUILD_d0g0(Data,vrr_stack+2059, vrr_stack+686, vrr_stack+1494, vrr_stack+1464, vrr_stack+1449, vrr_stack+124);
 _BUILD_00g0(Data,vrr_stack+124, vrr_stack+184, vrr_stack+104, vrr_stack+43, vrr_stack+18, NULL);
 _BUILD_p0g0(Data,vrr_stack+731, vrr_stack+124, vrr_stack+1464, NULL, NULL, vrr_stack+104);
 _BUILD_d0g0(Data,vrr_stack+2149, vrr_stack+731, vrr_stack+686, vrr_stack+124, vrr_stack+1464, vrr_stack+154);
 _BUILD_00g0(Data,vrr_stack+139, vrr_stack+224, vrr_stack+276, vrr_stack+24, vrr_stack+70, NULL);
 _BUILD_p0g0(Data,vrr_stack+2239, vrr_stack+1479, vrr_stack+139, NULL, NULL, vrr_stack+224);
 _BUILD_d0g0(Data,vrr_stack+2284, vrr_stack+1494, vrr_stack+2239, vrr_stack+1449, vrr_stack+1479, vrr_stack+234);
 _BUILD_f0g0(Data,vrr_stack+2374, vrr_stack+2059, vrr_stack+2284, vrr_stack+686, vrr_stack+1494, vrr_stack+1039);
 _BUILD_f0g0(Data,vrr_stack+2524, vrr_stack+2149, vrr_stack+2059, vrr_stack+731, vrr_stack+686, vrr_stack+919);
 _BUILD_g0g0(Data,vrr_stack+2674, vrr_stack+2524, vrr_stack+2374, vrr_stack+2149, vrr_stack+2059, vrr_stack+1099);
 _BUILD_00g0(Data,vrr_stack+919, vrr_stack+30, vrr_stack+184, vrr_stack+264, vrr_stack+43, NULL);
 _BUILD_p0g0(Data,vrr_stack+934, vrr_stack+919, vrr_stack+124, NULL, NULL, vrr_stack+184);
 _BUILD_d0g0(Data,vrr_stack+1039, vrr_stack+934, vrr_stack+731, vrr_stack+919, vrr_stack+124, vrr_stack+194);
 _BUILD_f0g0(Data,vrr_stack+2899, vrr_stack+1039, vrr_stack+2149, vrr_stack+934, vrr_stack+731, vrr_stack+979);
 _BUILD_g0g0(Data,vrr_stack+3049, vrr_stack+2899, vrr_stack+2524, vrr_stack+1039, vrr_stack+2149, vrr_stack+1199);
   tmp = vrr_stack + 3049;
   target_ptr = Libint->vrr_classes[4][4];
   for(i=0;i<225;i++)
     target_ptr[i] += tmp[i];
 _BUILD_00p0(Data,vrr_stack+934, Data->F+9, Data->F+10, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+937, vrr_stack+40, vrr_stack+934, Data->F+8, Data->F+9, NULL);
 _BUILD_00f0(Data,vrr_stack+1539, vrr_stack+270, vrr_stack+937, vrr_stack+67, vrr_stack+40, NULL);
 _BUILD_00g0(Data,vrr_stack+943, vrr_stack+276, vrr_stack+1539, vrr_stack+70, vrr_stack+270, NULL);
 _BUILD_p0g0(Data,vrr_stack+958, vrr_stack+139, vrr_stack+943, NULL, NULL, vrr_stack+276);
 _BUILD_d0g0(Data,vrr_stack+1003, vrr_stack+2239, vrr_stack+958, vrr_stack+1479, vrr_stack+139, vrr_stack+286);
 _BUILD_f0g0(Data,vrr_stack+1093, vrr_stack+2284, vrr_stack+1003, vrr_stack+1494, vrr_stack+2239, vrr_stack+316);
 _BUILD_g0g0(Data,vrr_stack+3274, vrr_stack+2374, vrr_stack+1093, vrr_stack+2059, vrr_stack+2284, vrr_stack+376);
 _BUILD_h0g0(Data,vrr_stack+3499, vrr_stack+2674, vrr_stack+3274, vrr_stack+2524, vrr_stack+2374, vrr_stack+1699);
 _BUILD_h0g0(Data,vrr_stack+3814, vrr_stack+3049, vrr_stack+2674, vrr_stack+2899, vrr_stack+2524, vrr_stack+1299);
   tmp = vrr_stack + 3814;
   target_ptr = Libint->vrr_classes[5][4];
   for(i=0;i<315;i++)
     target_ptr[i] += tmp[i];
 _BUILD_00h0(Data,vrr_stack+2899, vrr_stack+1449, vrr_stack+1479, vrr_stack+94, vrr_stack+114, NULL);
 _BUILD_00h0(Data,vrr_stack+2920, vrr_stack+1464, vrr_stack+1449, vrr_stack+104, vrr_stack+94, NULL);
 _BUILD_00h0(Data,vrr_stack+2941, vrr_stack+1479, vrr_stack+139, vrr_stack+114, vrr_stack+224, NULL);
 _BUILD_p0h0(Data,vrr_stack+2962, vrr_stack+2899, vrr_stack+2941, NULL, NULL, vrr_stack+1479);
 _BUILD_p0h0(Data,vrr_stack+1699, vrr_stack+2920, vrr_stack+2899, NULL, NULL, vrr_stack+1449);
 _BUILD_d0h0(Data,vrr_stack+286, vrr_stack+1699, vrr_stack+2962, vrr_stack+2920, vrr_stack+2899, vrr_stack+1494);
 _BUILD_00h0(Data,vrr_stack+1494, vrr_stack+124, vrr_stack+1464, vrr_stack+184, vrr_stack+104, NULL);
 _BUILD_p0h0(Data,vrr_stack+1762, vrr_stack+1494, vrr_stack+2920, NULL, NULL, vrr_stack+1464);
 _BUILD_d0h0(Data,vrr_stack+4129, vrr_stack+1762, vrr_stack+1699, vrr_stack+1494, vrr_stack+2920, vrr_stack+686);
 _BUILD_00h0(Data,vrr_stack+686, vrr_stack+139, vrr_stack+943, vrr_stack+224, vrr_stack+276, NULL);
 _BUILD_p0h0(Data,vrr_stack+412, vrr_stack+2941, vrr_stack+686, NULL, NULL, vrr_stack+139);
 _BUILD_d0h0(Data,vrr_stack+4255, vrr_stack+2962, vrr_stack+412, vrr_stack+2899, vrr_stack+2941, vrr_stack+2239);
 _BUILD_f0h0(Data,vrr_stack+4381, vrr_stack+286, vrr_stack+4255, vrr_stack+1699, vrr_stack+2962, vrr_stack+2284);
 _BUILD_f0h0(Data,vrr_stack+4591, vrr_stack+4129, vrr_stack+286, vrr_stack+1762, vrr_stack+1699, vrr_stack+2059);
 _BUILD_g0h0(Data,vrr_stack+4801, vrr_stack+4591, vrr_stack+4381, vrr_stack+4129, vrr_stack+286, vrr_stack+2374);
 _BUILD_00h0(Data,vrr_stack+2059, vrr_stack+919, vrr_stack+124, vrr_stack+30, vrr_stack+184, NULL);
 _BUILD_p0h0(Data,vrr_stack+2080, vrr_stack+2059, vrr_stack+1494, NULL, NULL, vrr_stack+124);
 _BUILD_d0h0(Data,vrr_stack+2239, vrr_stack+2080, vrr_stack+1762, vrr_stack+2059, vrr_stack+1494, vrr_stack+731);
 _BUILD_f0h0(Data,vrr_stack+5116, vrr_stack+2239, vrr_stack+4129, vrr_stack+2080, vrr_stack+1762, vrr_stack+2149);
 _BUILD_g0h0(Data,vrr_stack+5326, vrr_stack+5116, vrr_stack+4591, vrr_stack+2239, vrr_stack+4129, vrr_stack+2524);
   tmp = vrr_stack + 5326;
   target_ptr = Libint->vrr_classes[4][5];
   for(i=0;i<315;i++)
     target_ptr[i] += tmp[i];
 _BUILD_00p0(Data,vrr_stack+2080, Data->F+10, Data->F+11, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+2083, vrr_stack+934, vrr_stack+2080, Data->F+9, Data->F+10, NULL);
 _BUILD_00f0(Data,vrr_stack+2089, vrr_stack+937, vrr_stack+2083, vrr_stack+40, vrr_stack+934, NULL);
 _BUILD_00g0(Data,vrr_stack+2099, vrr_stack+1539, vrr_stack+2089, vrr_stack+270, vrr_stack+937, NULL);
 _BUILD_00h0(Data,vrr_stack+2114, vrr_stack+943, vrr_stack+2099, vrr_stack+276, vrr_stack+1539, NULL);
 _BUILD_p0h0(Data,vrr_stack+2135, vrr_stack+686, vrr_stack+2114, NULL, NULL, vrr_stack+943);
 _BUILD_d0h0(Data,vrr_stack+2198, vrr_stack+412, vrr_stack+2135, vrr_stack+2941, vrr_stack+686, vrr_stack+958);
 _BUILD_f0h0(Data,vrr_stack+2324, vrr_stack+4255, vrr_stack+2198, vrr_stack+2962, vrr_stack+412, vrr_stack+1003);
 _BUILD_g0h0(Data,vrr_stack+5641, vrr_stack+4381, vrr_stack+2324, vrr_stack+286, vrr_stack+4255, vrr_stack+1093);
 _BUILD_h0h0(Data,vrr_stack+5956, vrr_stack+4801, vrr_stack+5641, vrr_stack+4591, vrr_stack+4381, vrr_stack+3274);
 _BUILD_h0h0(Data,vrr_stack+6397, vrr_stack+5326, vrr_stack+4801, vrr_stack+5116, vrr_stack+4591, vrr_stack+2674);
   tmp = vrr_stack + 6397;
   target_ptr = Libint->vrr_classes[5][5];
   for(i=0;i<441;i++)
     target_ptr[i] += tmp[i];
 _BUILD_00i0(Data,vrr_stack+5116, vrr_stack+2899, vrr_stack+2941, vrr_stack+1449, vrr_stack+1479, NULL);
 _BUILD_00i0(Data,vrr_stack+5144, vrr_stack+2920, vrr_stack+2899, vrr_stack+1464, vrr_stack+1449, NULL);
 _BUILD_00i0(Data,vrr_stack+5172, vrr_stack+2941, vrr_stack+686, vrr_stack+1479, vrr_stack+139, NULL);
 _BUILD_p0i0(Data,vrr_stack+5200, vrr_stack+5116, vrr_stack+5172, NULL, NULL, vrr_stack+2941);
 _BUILD_p0i0(Data,vrr_stack+3274, vrr_stack+5144, vrr_stack+5116, NULL, NULL, vrr_stack+2899);
 _BUILD_d0i0(Data,vrr_stack+958, vrr_stack+3274, vrr_stack+5200, vrr_stack+5144, vrr_stack+5116, vrr_stack+2962);
 _BUILD_00i0(Data,vrr_stack+2941, vrr_stack+1494, vrr_stack+2920, vrr_stack+124, vrr_stack+1464, NULL);
 _BUILD_p0i0(Data,vrr_stack+3358, vrr_stack+2941, vrr_stack+5144, NULL, NULL, vrr_stack+2920);
 _BUILD_d0i0(Data,vrr_stack+1126, vrr_stack+3358, vrr_stack+3274, vrr_stack+2941, vrr_stack+5144, vrr_stack+1699);
 _BUILD_00i0(Data,vrr_stack+5144, vrr_stack+686, vrr_stack+2114, vrr_stack+139, vrr_stack+943, NULL);
 _BUILD_p0i0(Data,vrr_stack+139, vrr_stack+5172, vrr_stack+5144, NULL, NULL, vrr_stack+686);
 _BUILD_d0i0(Data,vrr_stack+6838, vrr_stack+5200, vrr_stack+139, vrr_stack+5116, vrr_stack+5172, vrr_stack+412);
 _BUILD_f0i0(Data,vrr_stack+7006, vrr_stack+958, vrr_stack+6838, vrr_stack+3274, vrr_stack+5200, vrr_stack+4255);
 _BUILD_f0i0(Data,vrr_stack+7286, vrr_stack+1126, vrr_stack+958, vrr_stack+3358, vrr_stack+3274, vrr_stack+286);
 _BUILD_g0i0(Data,vrr_stack+7566, vrr_stack+7286, vrr_stack+7006, vrr_stack+1126, vrr_stack+958, vrr_stack+4381);
 _BUILD_00i0(Data,vrr_stack+5116, vrr_stack+2059, vrr_stack+1494, vrr_stack+919, vrr_stack+124, NULL);
 _BUILD_p0i0(Data,vrr_stack+3274, vrr_stack+5116, vrr_stack+2941, NULL, NULL, vrr_stack+1494);
 _BUILD_d0i0(Data,vrr_stack+4255, vrr_stack+3274, vrr_stack+3358, vrr_stack+5116, vrr_stack+2941, vrr_stack+1762);
 _BUILD_f0i0(Data,vrr_stack+7986, vrr_stack+4255, vrr_stack+1126, vrr_stack+3274, vrr_stack+3358, vrr_stack+4129);
 _BUILD_g0i0(Data,vrr_stack+8266, vrr_stack+7986, vrr_stack+7286, vrr_stack+4255, vrr_stack+1126, vrr_stack+4591);
   tmp = vrr_stack + 8266;
   target_ptr = Libint->vrr_classes[4][6];
   for(i=0;i<420;i++)
     target_ptr[i] += tmp[i];
 _BUILD_00p0(Data,vrr_stack+1126, Data->F+11, Data->F+12, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+1129, vrr_stack+2080, vrr_stack+1126, Data->F+10, Data->F+11, NULL);
 _BUILD_00f0(Data,vrr_stack+1135, vrr_stack+2083, vrr_stack+1129, vrr_stack+934, vrr_stack+2080, NULL);
 _BUILD_00g0(Data,vrr_stack+1145, vrr_stack+2089, vrr_stack+1135, vrr_stack+937, vrr_stack+2083, NULL);
 _BUILD_00h0(Data,vrr_stack+1160, vrr_stack+2099, vrr_stack+1145, vrr_stack+1539, vrr_stack+2089, NULL);
 _BUILD_00i0(Data,vrr_stack+5116, vrr_stack+2114, vrr_stack+1160, vrr_stack+943, vrr_stack+2099, NULL);
 _BUILD_p0i0(Data,vrr_stack+1126, vrr_stack+5144, vrr_stack+5116, NULL, NULL, vrr_stack+2114);
 _BUILD_d0i0(Data,vrr_stack+4129, vrr_stack+139, vrr_stack+1126, vrr_stack+5172, vrr_stack+5144, vrr_stack+2135);
 _BUILD_f0i0(Data,vrr_stack+4297, vrr_stack+6838, vrr_stack+4129, vrr_stack+5200, vrr_stack+139, vrr_stack+2198);
 _BUILD_g0i0(Data,vrr_stack+0, vrr_stack+7006, vrr_stack+4297, vrr_stack+958, vrr_stack+6838, vrr_stack+2324);
 _BUILD_h0i0(Data,vrr_stack+4129, vrr_stack+7566, vrr_stack+0, vrr_stack+7286, vrr_stack+7006, vrr_stack+5641);
 _BUILD_h0i0(Data,vrr_stack+2059, vrr_stack+8266, vrr_stack+7566, vrr_stack+7986, vrr_stack+7286, vrr_stack+4801);
   tmp = vrr_stack + 2059;
   target_ptr = Libint->vrr_classes[5][6];
   for(i=0;i<588;i++)
     target_ptr[i] += tmp[i];
 _BUILD_i0f0(Data,vrr_stack+7986, vrr_stack+476, vrr_stack+1849, vrr_stack+1549, vrr_stack+1299, vrr_stack+793);
   tmp = vrr_stack + 7986;
   target_ptr = Libint->vrr_classes[6][3];
   for(i=0;i<280;i++)
     target_ptr[i] += tmp[i];
 _BUILD_i0g0(Data,vrr_stack+0, vrr_stack+3814, vrr_stack+3499, vrr_stack+3049, vrr_stack+2674, vrr_stack+1849);
   tmp = vrr_stack + 0;
   target_ptr = Libint->vrr_classes[6][4];
   for(i=0;i<420;i++)
     target_ptr[i] += tmp[i];
 _BUILD_i0h0(Data,vrr_stack+420, vrr_stack+6397, vrr_stack+5956, vrr_stack+5326, vrr_stack+4801, vrr_stack+3499);
   tmp = vrr_stack + 420;
   target_ptr = Libint->vrr_classes[6][5];
   for(i=0;i<588;i++)
     target_ptr[i] += tmp[i];
 _BUILD_i0i0(Data,vrr_stack+6397, vrr_stack+2059, vrr_stack+4129, vrr_stack+8266, vrr_stack+7566, vrr_stack+5956);
   tmp = vrr_stack + 6397;
   target_ptr = Libint->vrr_classes[6][6];
   for(i=0;i<784;i++)
     target_ptr[i] += tmp[i];

}

