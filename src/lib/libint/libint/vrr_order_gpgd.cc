#include <stdio.h>
#include "libint.h"
#include "vrr_header.h"

  /* Computes quartets necessary to compute (gp|gd) integrals */

void vrr_order_gpgd(Libint_t * Libint, prim_data *Data)
{
 REALTYPE *vrr_stack = Libint->vrr_stack;
 REALTYPE *tmp, *target_ptr;
 int i, am[2];
 _BUILD_p000(Data,vrr_stack+0, Data->F+4, Data->F+5, NULL, NULL, NULL);
 _BUILD_00p0(Data,vrr_stack+3, Data->F+4, Data->F+5, NULL, NULL, NULL);
 _BUILD_00p0(Data,vrr_stack+6, Data->F+3, Data->F+4, NULL, NULL, NULL);
 _BUILD_00p0(Data,vrr_stack+9, Data->F+5, Data->F+6, NULL, NULL, NULL);
 _BUILD_p0p0(Data,vrr_stack+12, vrr_stack+3, vrr_stack+9, NULL, NULL, Data->F+5);
 _BUILD_p0p0(Data,vrr_stack+21, vrr_stack+6, vrr_stack+3, NULL, NULL, Data->F+4);
 _BUILD_d0p0(Data,vrr_stack+30, vrr_stack+21, vrr_stack+12, vrr_stack+6, vrr_stack+3, vrr_stack+0);
 _BUILD_00d0(Data,vrr_stack+48, vrr_stack+3, vrr_stack+9, Data->F+4, Data->F+5, NULL);
 _BUILD_00d0(Data,vrr_stack+54, vrr_stack+6, vrr_stack+3, Data->F+3, Data->F+4, NULL);
 _BUILD_p0d0(Data,vrr_stack+60, vrr_stack+54, vrr_stack+48, NULL, NULL, vrr_stack+3);
 _BUILD_00p0(Data,vrr_stack+0, Data->F+2, Data->F+3, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+78, vrr_stack+0, vrr_stack+6, Data->F+2, Data->F+3, NULL);
 _BUILD_p0d0(Data,vrr_stack+84, vrr_stack+78, vrr_stack+54, NULL, NULL, vrr_stack+6);
 _BUILD_00p0(Data,vrr_stack+102, Data->F+6, Data->F+7, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+105, vrr_stack+9, vrr_stack+102, Data->F+5, Data->F+6, NULL);
 _BUILD_p0d0(Data,vrr_stack+111, vrr_stack+48, vrr_stack+105, NULL, NULL, vrr_stack+9);
 _BUILD_d0d0(Data,vrr_stack+129, vrr_stack+60, vrr_stack+111, vrr_stack+54, vrr_stack+48, vrr_stack+12);
 _BUILD_d0d0(Data,vrr_stack+165, vrr_stack+84, vrr_stack+60, vrr_stack+78, vrr_stack+54, vrr_stack+21);
 _BUILD_f0d0(Data,vrr_stack+201, vrr_stack+165, vrr_stack+129, vrr_stack+84, vrr_stack+60, vrr_stack+30);
 _BUILD_00f0(Data,vrr_stack+12, vrr_stack+54, vrr_stack+48, vrr_stack+6, vrr_stack+3, NULL);
 _BUILD_00f0(Data,vrr_stack+22, vrr_stack+78, vrr_stack+54, vrr_stack+0, vrr_stack+6, NULL);
 _BUILD_00f0(Data,vrr_stack+32, vrr_stack+48, vrr_stack+105, vrr_stack+3, vrr_stack+9, NULL);
 _BUILD_p0f0(Data,vrr_stack+261, vrr_stack+12, vrr_stack+32, NULL, NULL, vrr_stack+48);
 _BUILD_p0f0(Data,vrr_stack+291, vrr_stack+22, vrr_stack+12, NULL, NULL, vrr_stack+54);
 _BUILD_d0f0(Data,vrr_stack+321, vrr_stack+291, vrr_stack+261, vrr_stack+22, vrr_stack+12, vrr_stack+60);
 _BUILD_00p0(Data,vrr_stack+60, Data->F+1, Data->F+2, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+3, vrr_stack+60, vrr_stack+0, Data->F+1, Data->F+2, NULL);
 _BUILD_00f0(Data,vrr_stack+63, vrr_stack+3, vrr_stack+78, vrr_stack+60, vrr_stack+0, NULL);
 _BUILD_p0f0(Data,vrr_stack+381, vrr_stack+63, vrr_stack+22, NULL, NULL, vrr_stack+78);
 _BUILD_d0f0(Data,vrr_stack+411, vrr_stack+381, vrr_stack+291, vrr_stack+63, vrr_stack+22, vrr_stack+84);
 _BUILD_00p0(Data,vrr_stack+0, Data->F+7, Data->F+8, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+42, vrr_stack+102, vrr_stack+0, Data->F+6, Data->F+7, NULL);
 _BUILD_00f0(Data,vrr_stack+84, vrr_stack+105, vrr_stack+42, vrr_stack+9, vrr_stack+102, NULL);
 _BUILD_p0f0(Data,vrr_stack+471, vrr_stack+32, vrr_stack+84, NULL, NULL, vrr_stack+105);
 _BUILD_d0f0(Data,vrr_stack+501, vrr_stack+261, vrr_stack+471, vrr_stack+12, vrr_stack+32, vrr_stack+111);
 _BUILD_f0f0(Data,vrr_stack+561, vrr_stack+321, vrr_stack+501, vrr_stack+291, vrr_stack+261, vrr_stack+129);
 _BUILD_f0f0(Data,vrr_stack+661, vrr_stack+411, vrr_stack+321, vrr_stack+381, vrr_stack+291, vrr_stack+165);
 _BUILD_g0f0(Data,vrr_stack+761, vrr_stack+661, vrr_stack+561, vrr_stack+411, vrr_stack+321, vrr_stack+201);
 _BUILD_00g0(Data,vrr_stack+111, vrr_stack+12, vrr_stack+32, vrr_stack+54, vrr_stack+48, NULL);
 _BUILD_00g0(Data,vrr_stack+126, vrr_stack+22, vrr_stack+12, vrr_stack+78, vrr_stack+54, NULL);
 _BUILD_p0g0(Data,vrr_stack+141, vrr_stack+126, vrr_stack+111, NULL, NULL, vrr_stack+12);
 _BUILD_00g0(Data,vrr_stack+186, vrr_stack+63, vrr_stack+22, vrr_stack+3, vrr_stack+78, NULL);
 _BUILD_p0g0(Data,vrr_stack+201, vrr_stack+186, vrr_stack+126, NULL, NULL, vrr_stack+22);
 _BUILD_00g0(Data,vrr_stack+246, vrr_stack+32, vrr_stack+84, vrr_stack+48, vrr_stack+105, NULL);
 _BUILD_p0g0(Data,vrr_stack+911, vrr_stack+111, vrr_stack+246, NULL, NULL, vrr_stack+32);
 _BUILD_d0g0(Data,vrr_stack+956, vrr_stack+141, vrr_stack+911, vrr_stack+126, vrr_stack+111, vrr_stack+261);
 _BUILD_d0g0(Data,vrr_stack+1046, vrr_stack+201, vrr_stack+141, vrr_stack+186, vrr_stack+126, vrr_stack+291);
 _BUILD_f0g0(Data,vrr_stack+1136, vrr_stack+1046, vrr_stack+956, vrr_stack+201, vrr_stack+141, vrr_stack+321);
 _BUILD_00p0(Data,vrr_stack+9, Data->F+0, Data->F+1, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+261, vrr_stack+9, vrr_stack+60, Data->F+0, Data->F+1, NULL);
 _BUILD_00f0(Data,vrr_stack+267, vrr_stack+261, vrr_stack+3, vrr_stack+9, vrr_stack+60, NULL);
 _BUILD_00g0(Data,vrr_stack+48, vrr_stack+267, vrr_stack+63, vrr_stack+261, vrr_stack+3, NULL);
 _BUILD_p0g0(Data,vrr_stack+277, vrr_stack+48, vrr_stack+186, NULL, NULL, vrr_stack+63);
 _BUILD_d0g0(Data,vrr_stack+1286, vrr_stack+277, vrr_stack+201, vrr_stack+48, vrr_stack+186, vrr_stack+381);
 _BUILD_f0g0(Data,vrr_stack+1376, vrr_stack+1286, vrr_stack+1046, vrr_stack+277, vrr_stack+201, vrr_stack+411);
 _BUILD_00p0(Data,vrr_stack+277, Data->F+8, Data->F+9, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+261, vrr_stack+0, vrr_stack+277, Data->F+7, Data->F+8, NULL);
 _BUILD_00f0(Data,vrr_stack+280, vrr_stack+42, vrr_stack+261, vrr_stack+102, vrr_stack+0, NULL);
 _BUILD_00g0(Data,vrr_stack+290, vrr_stack+84, vrr_stack+280, vrr_stack+105, vrr_stack+42, NULL);
 _BUILD_p0g0(Data,vrr_stack+305, vrr_stack+246, vrr_stack+290, NULL, NULL, vrr_stack+84);
 _BUILD_d0g0(Data,vrr_stack+350, vrr_stack+911, vrr_stack+305, vrr_stack+111, vrr_stack+246, vrr_stack+471);
 _BUILD_f0g0(Data,vrr_stack+1526, vrr_stack+956, vrr_stack+350, vrr_stack+141, vrr_stack+911, vrr_stack+501);
 _BUILD_g0g0(Data,vrr_stack+1676, vrr_stack+1136, vrr_stack+1526, vrr_stack+1046, vrr_stack+956, vrr_stack+561);
 _BUILD_g0g0(Data,vrr_stack+1901, vrr_stack+1376, vrr_stack+1136, vrr_stack+1286, vrr_stack+1046, vrr_stack+661);
   tmp = vrr_stack + 1901;
   target_ptr = Libint->vrr_classes[4][4];
   for(i=0;i<225;i++)
     target_ptr[i] += tmp[i];
 _BUILD_00h0(Data,vrr_stack+1286, vrr_stack+111, vrr_stack+246, vrr_stack+12, vrr_stack+32, NULL);
 _BUILD_00h0(Data,vrr_stack+1307, vrr_stack+126, vrr_stack+111, vrr_stack+22, vrr_stack+12, NULL);
 _BUILD_p0h0(Data,vrr_stack+440, vrr_stack+1307, vrr_stack+1286, NULL, NULL, vrr_stack+111);
 _BUILD_00h0(Data,vrr_stack+1328, vrr_stack+186, vrr_stack+126, vrr_stack+63, vrr_stack+22, NULL);
 _BUILD_p0h0(Data,vrr_stack+503, vrr_stack+1328, vrr_stack+1307, NULL, NULL, vrr_stack+126);
 _BUILD_00h0(Data,vrr_stack+1349, vrr_stack+246, vrr_stack+290, vrr_stack+32, vrr_stack+84, NULL);
 _BUILD_p0h0(Data,vrr_stack+566, vrr_stack+1286, vrr_stack+1349, NULL, NULL, vrr_stack+246);
 _BUILD_d0h0(Data,vrr_stack+629, vrr_stack+440, vrr_stack+566, vrr_stack+1307, vrr_stack+1286, vrr_stack+911);
 _BUILD_d0h0(Data,vrr_stack+2126, vrr_stack+503, vrr_stack+440, vrr_stack+1328, vrr_stack+1307, vrr_stack+141);
 _BUILD_f0h0(Data,vrr_stack+2252, vrr_stack+2126, vrr_stack+629, vrr_stack+503, vrr_stack+440, vrr_stack+956);
 _BUILD_00h0(Data,vrr_stack+141, vrr_stack+48, vrr_stack+186, vrr_stack+267, vrr_stack+63, NULL);
 _BUILD_p0h0(Data,vrr_stack+911, vrr_stack+141, vrr_stack+1328, NULL, NULL, vrr_stack+186);
 _BUILD_d0h0(Data,vrr_stack+2462, vrr_stack+911, vrr_stack+503, vrr_stack+141, vrr_stack+1328, vrr_stack+201);
 _BUILD_f0h0(Data,vrr_stack+2588, vrr_stack+2462, vrr_stack+2126, vrr_stack+911, vrr_stack+503, vrr_stack+1046);
 _BUILD_00p0(Data,vrr_stack+911, Data->F+9, Data->F+10, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+1370, vrr_stack+277, vrr_stack+911, Data->F+8, Data->F+9, NULL);
 _BUILD_00f0(Data,vrr_stack+267, vrr_stack+261, vrr_stack+1370, vrr_stack+0, vrr_stack+277, NULL);
 _BUILD_00g0(Data,vrr_stack+0, vrr_stack+280, vrr_stack+267, vrr_stack+42, vrr_stack+261, NULL);
 _BUILD_00h0(Data,vrr_stack+63, vrr_stack+290, vrr_stack+0, vrr_stack+84, vrr_stack+280, NULL);
 _BUILD_p0h0(Data,vrr_stack+914, vrr_stack+1349, vrr_stack+63, NULL, NULL, vrr_stack+290);
 _BUILD_d0h0(Data,vrr_stack+977, vrr_stack+566, vrr_stack+914, vrr_stack+1286, vrr_stack+1349, vrr_stack+305);
 _BUILD_f0h0(Data,vrr_stack+2798, vrr_stack+629, vrr_stack+977, vrr_stack+440, vrr_stack+566, vrr_stack+350);
 _BUILD_g0h0(Data,vrr_stack+3008, vrr_stack+2252, vrr_stack+2798, vrr_stack+2126, vrr_stack+629, vrr_stack+1526);
 _BUILD_g0h0(Data,vrr_stack+3323, vrr_stack+2588, vrr_stack+2252, vrr_stack+2462, vrr_stack+2126, vrr_stack+1136);
   tmp = vrr_stack + 3323;
   target_ptr = Libint->vrr_classes[4][5];
   for(i=0;i<315;i++)
     target_ptr[i] += tmp[i];
 _BUILD_00i0(Data,vrr_stack+2462, vrr_stack+1286, vrr_stack+1349, vrr_stack+111, vrr_stack+246, NULL);
 _BUILD_00i0(Data,vrr_stack+2490, vrr_stack+1307, vrr_stack+1286, vrr_stack+126, vrr_stack+111, NULL);
 _BUILD_p0i0(Data,vrr_stack+1526, vrr_stack+2490, vrr_stack+2462, NULL, NULL, vrr_stack+1286);
 _BUILD_00i0(Data,vrr_stack+2518, vrr_stack+1328, vrr_stack+1307, vrr_stack+186, vrr_stack+126, NULL);
 _BUILD_p0i0(Data,vrr_stack+305, vrr_stack+2518, vrr_stack+2490, NULL, NULL, vrr_stack+1307);
 _BUILD_00i0(Data,vrr_stack+1286, vrr_stack+1349, vrr_stack+63, vrr_stack+246, vrr_stack+290, NULL);
 _BUILD_p0i0(Data,vrr_stack+3638, vrr_stack+2462, vrr_stack+1286, NULL, NULL, vrr_stack+1349);
 _BUILD_d0i0(Data,vrr_stack+3722, vrr_stack+1526, vrr_stack+3638, vrr_stack+2490, vrr_stack+2462, vrr_stack+566);
 _BUILD_d0i0(Data,vrr_stack+3890, vrr_stack+305, vrr_stack+1526, vrr_stack+2518, vrr_stack+2490, vrr_stack+440);
 _BUILD_f0i0(Data,vrr_stack+4058, vrr_stack+3890, vrr_stack+3722, vrr_stack+305, vrr_stack+1526, vrr_stack+629);
 _BUILD_00i0(Data,vrr_stack+2490, vrr_stack+141, vrr_stack+1328, vrr_stack+48, vrr_stack+186, NULL);
 _BUILD_p0i0(Data,vrr_stack+566, vrr_stack+2490, vrr_stack+2518, NULL, NULL, vrr_stack+1328);
 _BUILD_d0i0(Data,vrr_stack+84, vrr_stack+566, vrr_stack+305, vrr_stack+2490, vrr_stack+2518, vrr_stack+503);
 _BUILD_f0i0(Data,vrr_stack+4338, vrr_stack+84, vrr_stack+3890, vrr_stack+566, vrr_stack+305, vrr_stack+2126);
 _BUILD_00p0(Data,vrr_stack+2126, Data->F+10, Data->F+11, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+2129, vrr_stack+911, vrr_stack+2126, Data->F+9, Data->F+10, NULL);
 _BUILD_00f0(Data,vrr_stack+2135, vrr_stack+1370, vrr_stack+2129, vrr_stack+277, vrr_stack+911, NULL);
 _BUILD_00g0(Data,vrr_stack+2145, vrr_stack+267, vrr_stack+2135, vrr_stack+261, vrr_stack+1370, NULL);
 _BUILD_00h0(Data,vrr_stack+2160, vrr_stack+0, vrr_stack+2145, vrr_stack+280, vrr_stack+267, NULL);
 _BUILD_00i0(Data,vrr_stack+2126, vrr_stack+63, vrr_stack+2160, vrr_stack+290, vrr_stack+0, NULL);
 _BUILD_p0i0(Data,vrr_stack+2154, vrr_stack+1286, vrr_stack+2126, NULL, NULL, vrr_stack+63);
 _BUILD_d0i0(Data,vrr_stack+252, vrr_stack+3638, vrr_stack+2154, vrr_stack+2462, vrr_stack+1286, vrr_stack+914);
 _BUILD_f0i0(Data,vrr_stack+420, vrr_stack+3722, vrr_stack+252, vrr_stack+1526, vrr_stack+3638, vrr_stack+977);
 _BUILD_g0i0(Data,vrr_stack+4618, vrr_stack+4058, vrr_stack+420, vrr_stack+3890, vrr_stack+3722, vrr_stack+2798);
 _BUILD_g0i0(Data,vrr_stack+252, vrr_stack+4338, vrr_stack+4058, vrr_stack+84, vrr_stack+3890, vrr_stack+2252);
   tmp = vrr_stack + 252;
   target_ptr = Libint->vrr_classes[4][6];
   for(i=0;i<420;i++)
     target_ptr[i] += tmp[i];
 _BUILD_h0g0(Data,vrr_stack+3638, vrr_stack+1901, vrr_stack+1676, vrr_stack+1376, vrr_stack+1136, vrr_stack+761);
   tmp = vrr_stack + 3638;
   target_ptr = Libint->vrr_classes[5][4];
   for(i=0;i<315;i++)
     target_ptr[i] += tmp[i];
 _BUILD_h0h0(Data,vrr_stack+672, vrr_stack+3323, vrr_stack+3008, vrr_stack+2588, vrr_stack+2252, vrr_stack+1676);
   tmp = vrr_stack + 672;
   target_ptr = Libint->vrr_classes[5][5];
   for(i=0;i<441;i++)
     target_ptr[i] += tmp[i];
 _BUILD_h0i0(Data,vrr_stack+1113, vrr_stack+252, vrr_stack+4618, vrr_stack+4338, vrr_stack+4058, vrr_stack+3008);
   tmp = vrr_stack + 1113;
   target_ptr = Libint->vrr_classes[5][6];
   for(i=0;i<588;i++)
     target_ptr[i] += tmp[i];

}

