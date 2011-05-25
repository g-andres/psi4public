#include <stdio.h>
#include "libint.h"
#include "vrr_header.h"

  /* Computes quartets necessary to compute (hp|gf) integrals */

void vrr_order_hpgf(Libint_t * Libint, prim_data *Data)
{
 REALTYPE *vrr_stack = Libint->vrr_stack;
 REALTYPE *tmp, *target_ptr;
 int i, am[2];
 _BUILD_p000(Data,vrr_stack+0, Data->F+5, Data->F+6, NULL, NULL, NULL);
 _BUILD_p000(Data,vrr_stack+3, Data->F+4, Data->F+5, NULL, NULL, NULL);
 _BUILD_d000(Data,vrr_stack+6, vrr_stack+3, vrr_stack+0, Data->F+4, Data->F+5, NULL);
 _BUILD_00p0(Data,vrr_stack+12, Data->F+5, Data->F+6, NULL, NULL, NULL);
 _BUILD_00p0(Data,vrr_stack+15, Data->F+4, Data->F+5, NULL, NULL, NULL);
 _BUILD_p0p0(Data,vrr_stack+18, vrr_stack+15, vrr_stack+12, NULL, NULL, Data->F+5);
 _BUILD_00p0(Data,vrr_stack+27, Data->F+3, Data->F+4, NULL, NULL, NULL);
 _BUILD_p0p0(Data,vrr_stack+30, vrr_stack+27, vrr_stack+15, NULL, NULL, Data->F+4);
 _BUILD_00p0(Data,vrr_stack+39, Data->F+6, Data->F+7, NULL, NULL, NULL);
 _BUILD_p0p0(Data,vrr_stack+42, vrr_stack+12, vrr_stack+39, NULL, NULL, Data->F+6);
 _BUILD_d0p0(Data,vrr_stack+51, vrr_stack+18, vrr_stack+42, vrr_stack+15, vrr_stack+12, vrr_stack+0);
 _BUILD_d0p0(Data,vrr_stack+69, vrr_stack+30, vrr_stack+18, vrr_stack+27, vrr_stack+15, vrr_stack+3);
 _BUILD_f0p0(Data,vrr_stack+87, vrr_stack+69, vrr_stack+51, vrr_stack+30, vrr_stack+18, vrr_stack+6);
 _BUILD_00d0(Data,vrr_stack+0, vrr_stack+15, vrr_stack+12, Data->F+4, Data->F+5, NULL);
 _BUILD_00d0(Data,vrr_stack+6, vrr_stack+27, vrr_stack+15, Data->F+3, Data->F+4, NULL);
 _BUILD_00d0(Data,vrr_stack+117, vrr_stack+12, vrr_stack+39, Data->F+5, Data->F+6, NULL);
 _BUILD_p0d0(Data,vrr_stack+123, vrr_stack+0, vrr_stack+117, NULL, NULL, vrr_stack+12);
 _BUILD_p0d0(Data,vrr_stack+141, vrr_stack+6, vrr_stack+0, NULL, NULL, vrr_stack+15);
 _BUILD_d0d0(Data,vrr_stack+159, vrr_stack+141, vrr_stack+123, vrr_stack+6, vrr_stack+0, vrr_stack+18);
 _BUILD_00p0(Data,vrr_stack+18, Data->F+2, Data->F+3, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+21, vrr_stack+18, vrr_stack+27, Data->F+2, Data->F+3, NULL);
 _BUILD_p0d0(Data,vrr_stack+195, vrr_stack+21, vrr_stack+6, NULL, NULL, vrr_stack+27);
 _BUILD_d0d0(Data,vrr_stack+213, vrr_stack+195, vrr_stack+141, vrr_stack+21, vrr_stack+6, vrr_stack+30);
 _BUILD_00p0(Data,vrr_stack+30, Data->F+7, Data->F+8, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+33, vrr_stack+39, vrr_stack+30, Data->F+6, Data->F+7, NULL);
 _BUILD_p0d0(Data,vrr_stack+249, vrr_stack+117, vrr_stack+33, NULL, NULL, vrr_stack+39);
 _BUILD_d0d0(Data,vrr_stack+267, vrr_stack+123, vrr_stack+249, vrr_stack+0, vrr_stack+117, vrr_stack+42);
 _BUILD_f0d0(Data,vrr_stack+303, vrr_stack+159, vrr_stack+267, vrr_stack+141, vrr_stack+123, vrr_stack+51);
 _BUILD_f0d0(Data,vrr_stack+363, vrr_stack+213, vrr_stack+159, vrr_stack+195, vrr_stack+141, vrr_stack+69);
 _BUILD_g0d0(Data,vrr_stack+423, vrr_stack+363, vrr_stack+303, vrr_stack+213, vrr_stack+159, vrr_stack+87);
 _BUILD_00f0(Data,vrr_stack+42, vrr_stack+0, vrr_stack+117, vrr_stack+15, vrr_stack+12, NULL);
 _BUILD_00f0(Data,vrr_stack+52, vrr_stack+6, vrr_stack+0, vrr_stack+27, vrr_stack+15, NULL);
 _BUILD_p0f0(Data,vrr_stack+62, vrr_stack+52, vrr_stack+42, NULL, NULL, vrr_stack+0);
 _BUILD_00f0(Data,vrr_stack+92, vrr_stack+21, vrr_stack+6, vrr_stack+18, vrr_stack+27, NULL);
 _BUILD_p0f0(Data,vrr_stack+513, vrr_stack+92, vrr_stack+52, NULL, NULL, vrr_stack+6);
 _BUILD_00f0(Data,vrr_stack+102, vrr_stack+117, vrr_stack+33, vrr_stack+12, vrr_stack+39, NULL);
 _BUILD_p0f0(Data,vrr_stack+543, vrr_stack+42, vrr_stack+102, NULL, NULL, vrr_stack+117);
 _BUILD_d0f0(Data,vrr_stack+573, vrr_stack+62, vrr_stack+543, vrr_stack+52, vrr_stack+42, vrr_stack+123);
 _BUILD_d0f0(Data,vrr_stack+633, vrr_stack+513, vrr_stack+62, vrr_stack+92, vrr_stack+52, vrr_stack+141);
 _BUILD_f0f0(Data,vrr_stack+693, vrr_stack+633, vrr_stack+573, vrr_stack+513, vrr_stack+62, vrr_stack+159);
 _BUILD_00p0(Data,vrr_stack+27, Data->F+1, Data->F+2, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+12, vrr_stack+27, vrr_stack+18, Data->F+1, Data->F+2, NULL);
 _BUILD_00f0(Data,vrr_stack+123, vrr_stack+12, vrr_stack+21, vrr_stack+27, vrr_stack+18, NULL);
 _BUILD_p0f0(Data,vrr_stack+133, vrr_stack+123, vrr_stack+92, NULL, NULL, vrr_stack+21);
 _BUILD_d0f0(Data,vrr_stack+793, vrr_stack+133, vrr_stack+513, vrr_stack+123, vrr_stack+92, vrr_stack+195);
 _BUILD_f0f0(Data,vrr_stack+853, vrr_stack+793, vrr_stack+633, vrr_stack+133, vrr_stack+513, vrr_stack+213);
 _BUILD_00p0(Data,vrr_stack+18, Data->F+8, Data->F+9, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+163, vrr_stack+30, vrr_stack+18, Data->F+7, Data->F+8, NULL);
 _BUILD_00f0(Data,vrr_stack+169, vrr_stack+33, vrr_stack+163, vrr_stack+39, vrr_stack+30, NULL);
 _BUILD_p0f0(Data,vrr_stack+179, vrr_stack+102, vrr_stack+169, NULL, NULL, vrr_stack+33);
 _BUILD_d0f0(Data,vrr_stack+953, vrr_stack+543, vrr_stack+179, vrr_stack+42, vrr_stack+102, vrr_stack+249);
 _BUILD_f0f0(Data,vrr_stack+1013, vrr_stack+573, vrr_stack+953, vrr_stack+62, vrr_stack+543, vrr_stack+267);
 _BUILD_g0f0(Data,vrr_stack+1113, vrr_stack+693, vrr_stack+1013, vrr_stack+633, vrr_stack+573, vrr_stack+303);
 _BUILD_g0f0(Data,vrr_stack+209, vrr_stack+853, vrr_stack+693, vrr_stack+793, vrr_stack+633, vrr_stack+363);
 _BUILD_h0f0(Data,vrr_stack+1263, vrr_stack+209, vrr_stack+1113, vrr_stack+853, vrr_stack+693, vrr_stack+423);
 _BUILD_00g0(Data,vrr_stack+359, vrr_stack+52, vrr_stack+42, vrr_stack+6, vrr_stack+0, NULL);
 _BUILD_00g0(Data,vrr_stack+374, vrr_stack+92, vrr_stack+52, vrr_stack+21, vrr_stack+6, NULL);
 _BUILD_00g0(Data,vrr_stack+389, vrr_stack+42, vrr_stack+102, vrr_stack+0, vrr_stack+117, NULL);
 _BUILD_p0g0(Data,vrr_stack+404, vrr_stack+359, vrr_stack+389, NULL, NULL, vrr_stack+42);
 _BUILD_p0g0(Data,vrr_stack+449, vrr_stack+374, vrr_stack+359, NULL, NULL, vrr_stack+52);
 _BUILD_d0g0(Data,vrr_stack+1473, vrr_stack+449, vrr_stack+404, vrr_stack+374, vrr_stack+359, vrr_stack+62);
 _BUILD_00g0(Data,vrr_stack+62, vrr_stack+123, vrr_stack+92, vrr_stack+12, vrr_stack+21, NULL);
 _BUILD_p0g0(Data,vrr_stack+1563, vrr_stack+62, vrr_stack+374, NULL, NULL, vrr_stack+92);
 _BUILD_d0g0(Data,vrr_stack+1608, vrr_stack+1563, vrr_stack+449, vrr_stack+62, vrr_stack+374, vrr_stack+513);
 _BUILD_00g0(Data,vrr_stack+77, vrr_stack+102, vrr_stack+169, vrr_stack+117, vrr_stack+33, NULL);
 _BUILD_p0g0(Data,vrr_stack+494, vrr_stack+389, vrr_stack+77, NULL, NULL, vrr_stack+102);
 _BUILD_d0g0(Data,vrr_stack+1698, vrr_stack+404, vrr_stack+494, vrr_stack+359, vrr_stack+389, vrr_stack+543);
 _BUILD_f0g0(Data,vrr_stack+1788, vrr_stack+1473, vrr_stack+1698, vrr_stack+449, vrr_stack+404, vrr_stack+573);
 _BUILD_f0g0(Data,vrr_stack+1938, vrr_stack+1608, vrr_stack+1473, vrr_stack+1563, vrr_stack+449, vrr_stack+633);
 _BUILD_g0g0(Data,vrr_stack+2088, vrr_stack+1938, vrr_stack+1788, vrr_stack+1608, vrr_stack+1473, vrr_stack+693);
 _BUILD_00p0(Data,vrr_stack+39, Data->F+0, Data->F+1, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+21, vrr_stack+39, vrr_stack+27, Data->F+0, Data->F+1, NULL);
 _BUILD_00f0(Data,vrr_stack+0, vrr_stack+21, vrr_stack+12, vrr_stack+39, vrr_stack+27, NULL);
 _BUILD_00g0(Data,vrr_stack+539, vrr_stack+0, vrr_stack+123, vrr_stack+21, vrr_stack+12, NULL);
 _BUILD_p0g0(Data,vrr_stack+554, vrr_stack+539, vrr_stack+62, NULL, NULL, vrr_stack+123);
 _BUILD_d0g0(Data,vrr_stack+599, vrr_stack+554, vrr_stack+1563, vrr_stack+539, vrr_stack+62, vrr_stack+133);
 _BUILD_f0g0(Data,vrr_stack+2313, vrr_stack+599, vrr_stack+1608, vrr_stack+554, vrr_stack+1563, vrr_stack+793);
 _BUILD_g0g0(Data,vrr_stack+2463, vrr_stack+2313, vrr_stack+1938, vrr_stack+599, vrr_stack+1608, vrr_stack+853);
 _BUILD_00p0(Data,vrr_stack+39, Data->F+9, Data->F+10, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+554, vrr_stack+18, vrr_stack+39, Data->F+8, Data->F+9, NULL);
 _BUILD_00f0(Data,vrr_stack+560, vrr_stack+163, vrr_stack+554, vrr_stack+30, vrr_stack+18, NULL);
 _BUILD_00g0(Data,vrr_stack+570, vrr_stack+169, vrr_stack+560, vrr_stack+33, vrr_stack+163, NULL);
 _BUILD_p0g0(Data,vrr_stack+585, vrr_stack+77, vrr_stack+570, NULL, NULL, vrr_stack+169);
 _BUILD_d0g0(Data,vrr_stack+630, vrr_stack+494, vrr_stack+585, vrr_stack+389, vrr_stack+77, vrr_stack+179);
 _BUILD_f0g0(Data,vrr_stack+720, vrr_stack+1698, vrr_stack+630, vrr_stack+404, vrr_stack+494, vrr_stack+953);
 _BUILD_g0g0(Data,vrr_stack+2688, vrr_stack+1788, vrr_stack+720, vrr_stack+1473, vrr_stack+1698, vrr_stack+1013);
 _BUILD_h0g0(Data,vrr_stack+2913, vrr_stack+2088, vrr_stack+2688, vrr_stack+1938, vrr_stack+1788, vrr_stack+1113);
 _BUILD_h0g0(Data,vrr_stack+870, vrr_stack+2463, vrr_stack+2088, vrr_stack+2313, vrr_stack+1938, vrr_stack+209);
   tmp = vrr_stack + 870;
   target_ptr = Libint->vrr_classes[5][4];
   for(i=0;i<315;i++)
     target_ptr[i] += tmp[i];
 _BUILD_00h0(Data,vrr_stack+2313, vrr_stack+359, vrr_stack+389, vrr_stack+52, vrr_stack+42, NULL);
 _BUILD_00h0(Data,vrr_stack+2334, vrr_stack+374, vrr_stack+359, vrr_stack+92, vrr_stack+52, NULL);
 _BUILD_00h0(Data,vrr_stack+2355, vrr_stack+389, vrr_stack+77, vrr_stack+42, vrr_stack+102, NULL);
 _BUILD_p0h0(Data,vrr_stack+2376, vrr_stack+2313, vrr_stack+2355, NULL, NULL, vrr_stack+389);
 _BUILD_p0h0(Data,vrr_stack+179, vrr_stack+2334, vrr_stack+2313, NULL, NULL, vrr_stack+359);
 _BUILD_d0h0(Data,vrr_stack+3228, vrr_stack+179, vrr_stack+2376, vrr_stack+2334, vrr_stack+2313, vrr_stack+404);
 _BUILD_00h0(Data,vrr_stack+404, vrr_stack+62, vrr_stack+374, vrr_stack+123, vrr_stack+92, NULL);
 _BUILD_p0h0(Data,vrr_stack+242, vrr_stack+404, vrr_stack+2334, NULL, NULL, vrr_stack+374);
 _BUILD_d0h0(Data,vrr_stack+3354, vrr_stack+242, vrr_stack+179, vrr_stack+404, vrr_stack+2334, vrr_stack+449);
 _BUILD_00h0(Data,vrr_stack+425, vrr_stack+77, vrr_stack+570, vrr_stack+102, vrr_stack+169, NULL);
 _BUILD_p0h0(Data,vrr_stack+1185, vrr_stack+2355, vrr_stack+425, NULL, NULL, vrr_stack+77);
 _BUILD_d0h0(Data,vrr_stack+3480, vrr_stack+2376, vrr_stack+1185, vrr_stack+2313, vrr_stack+2355, vrr_stack+494);
 _BUILD_f0h0(Data,vrr_stack+3606, vrr_stack+3228, vrr_stack+3480, vrr_stack+179, vrr_stack+2376, vrr_stack+1698);
 _BUILD_f0h0(Data,vrr_stack+3816, vrr_stack+3354, vrr_stack+3228, vrr_stack+242, vrr_stack+179, vrr_stack+1473);
 _BUILD_g0h0(Data,vrr_stack+4026, vrr_stack+3816, vrr_stack+3606, vrr_stack+3354, vrr_stack+3228, vrr_stack+1788);
 _BUILD_00h0(Data,vrr_stack+1473, vrr_stack+539, vrr_stack+62, vrr_stack+0, vrr_stack+123, NULL);
 _BUILD_p0h0(Data,vrr_stack+1494, vrr_stack+1473, vrr_stack+404, NULL, NULL, vrr_stack+62);
 _BUILD_d0h0(Data,vrr_stack+1698, vrr_stack+1494, vrr_stack+242, vrr_stack+1473, vrr_stack+404, vrr_stack+1563);
 _BUILD_f0h0(Data,vrr_stack+4341, vrr_stack+1698, vrr_stack+3354, vrr_stack+1494, vrr_stack+242, vrr_stack+1608);
 _BUILD_g0h0(Data,vrr_stack+4551, vrr_stack+4341, vrr_stack+3816, vrr_stack+1698, vrr_stack+3354, vrr_stack+1938);
 _BUILD_00p0(Data,vrr_stack+1494, Data->F+10, Data->F+11, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+1497, vrr_stack+39, vrr_stack+1494, Data->F+9, Data->F+10, NULL);
 _BUILD_00f0(Data,vrr_stack+1503, vrr_stack+554, vrr_stack+1497, vrr_stack+18, vrr_stack+39, NULL);
 _BUILD_00g0(Data,vrr_stack+1248, vrr_stack+560, vrr_stack+1503, vrr_stack+163, vrr_stack+554, NULL);
 _BUILD_00h0(Data,vrr_stack+1513, vrr_stack+570, vrr_stack+1248, vrr_stack+169, vrr_stack+560, NULL);
 _BUILD_p0h0(Data,vrr_stack+1534, vrr_stack+425, vrr_stack+1513, NULL, NULL, vrr_stack+570);
 _BUILD_d0h0(Data,vrr_stack+1597, vrr_stack+1185, vrr_stack+1534, vrr_stack+2355, vrr_stack+425, vrr_stack+585);
 _BUILD_f0h0(Data,vrr_stack+1723, vrr_stack+3480, vrr_stack+1597, vrr_stack+2376, vrr_stack+1185, vrr_stack+630);
 _BUILD_g0h0(Data,vrr_stack+4866, vrr_stack+3606, vrr_stack+1723, vrr_stack+3228, vrr_stack+3480, vrr_stack+720);
 _BUILD_h0h0(Data,vrr_stack+5181, vrr_stack+4026, vrr_stack+4866, vrr_stack+3816, vrr_stack+3606, vrr_stack+2688);
 _BUILD_h0h0(Data,vrr_stack+5622, vrr_stack+4551, vrr_stack+4026, vrr_stack+4341, vrr_stack+3816, vrr_stack+2088);
   tmp = vrr_stack + 5622;
   target_ptr = Libint->vrr_classes[5][5];
   for(i=0;i<441;i++)
     target_ptr[i] += tmp[i];
 _BUILD_00i0(Data,vrr_stack+4341, vrr_stack+2313, vrr_stack+2355, vrr_stack+359, vrr_stack+389, NULL);
 _BUILD_00i0(Data,vrr_stack+4369, vrr_stack+2334, vrr_stack+2313, vrr_stack+374, vrr_stack+359, NULL);
 _BUILD_00i0(Data,vrr_stack+4397, vrr_stack+2355, vrr_stack+425, vrr_stack+389, vrr_stack+77, NULL);
 _BUILD_p0i0(Data,vrr_stack+4425, vrr_stack+4341, vrr_stack+4397, NULL, NULL, vrr_stack+2355);
 _BUILD_p0i0(Data,vrr_stack+2688, vrr_stack+4369, vrr_stack+4341, NULL, NULL, vrr_stack+2313);
 _BUILD_d0i0(Data,vrr_stack+585, vrr_stack+2688, vrr_stack+4425, vrr_stack+4369, vrr_stack+4341, vrr_stack+2376);
 _BUILD_00i0(Data,vrr_stack+2376, vrr_stack+404, vrr_stack+2334, vrr_stack+62, vrr_stack+374, NULL);
 _BUILD_p0i0(Data,vrr_stack+2772, vrr_stack+2376, vrr_stack+4369, NULL, NULL, vrr_stack+2334);
 _BUILD_d0i0(Data,vrr_stack+6063, vrr_stack+2772, vrr_stack+2688, vrr_stack+2376, vrr_stack+4369, vrr_stack+179);
 _BUILD_00i0(Data,vrr_stack+2404, vrr_stack+425, vrr_stack+1513, vrr_stack+77, vrr_stack+570, NULL);
 _BUILD_p0i0(Data,vrr_stack+77, vrr_stack+4397, vrr_stack+2404, NULL, NULL, vrr_stack+425);
 _BUILD_d0i0(Data,vrr_stack+6231, vrr_stack+4425, vrr_stack+77, vrr_stack+4341, vrr_stack+4397, vrr_stack+1185);
 _BUILD_f0i0(Data,vrr_stack+6399, vrr_stack+585, vrr_stack+6231, vrr_stack+2688, vrr_stack+4425, vrr_stack+3480);
 _BUILD_f0i0(Data,vrr_stack+6679, vrr_stack+6063, vrr_stack+585, vrr_stack+2772, vrr_stack+2688, vrr_stack+3228);
 _BUILD_g0i0(Data,vrr_stack+6959, vrr_stack+6679, vrr_stack+6399, vrr_stack+6063, vrr_stack+585, vrr_stack+3606);
 _BUILD_00i0(Data,vrr_stack+3228, vrr_stack+1473, vrr_stack+404, vrr_stack+539, vrr_stack+62, NULL);
 _BUILD_p0i0(Data,vrr_stack+3256, vrr_stack+3228, vrr_stack+2376, NULL, NULL, vrr_stack+404);
 _BUILD_d0i0(Data,vrr_stack+3480, vrr_stack+3256, vrr_stack+2772, vrr_stack+3228, vrr_stack+2376, vrr_stack+242);
 _BUILD_f0i0(Data,vrr_stack+7379, vrr_stack+3480, vrr_stack+6063, vrr_stack+3256, vrr_stack+2772, vrr_stack+3354);
 _BUILD_g0i0(Data,vrr_stack+7659, vrr_stack+7379, vrr_stack+6679, vrr_stack+3480, vrr_stack+6063, vrr_stack+3816);
 _BUILD_00p0(Data,vrr_stack+3256, Data->F+11, Data->F+12, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+3259, vrr_stack+1494, vrr_stack+3256, Data->F+10, Data->F+11, NULL);
 _BUILD_00f0(Data,vrr_stack+3265, vrr_stack+1497, vrr_stack+3259, vrr_stack+39, vrr_stack+1494, NULL);
 _BUILD_00g0(Data,vrr_stack+3275, vrr_stack+1503, vrr_stack+3265, vrr_stack+554, vrr_stack+1497, NULL);
 _BUILD_00h0(Data,vrr_stack+3290, vrr_stack+1248, vrr_stack+3275, vrr_stack+560, vrr_stack+1503, NULL);
 _BUILD_00i0(Data,vrr_stack+3311, vrr_stack+1513, vrr_stack+3290, vrr_stack+570, vrr_stack+1248, NULL);
 _BUILD_p0i0(Data,vrr_stack+3339, vrr_stack+2404, vrr_stack+3311, NULL, NULL, vrr_stack+1513);
 _BUILD_d0i0(Data,vrr_stack+3423, vrr_stack+77, vrr_stack+3339, vrr_stack+4397, vrr_stack+2404, vrr_stack+1534);
 _BUILD_f0i0(Data,vrr_stack+3591, vrr_stack+6231, vrr_stack+3423, vrr_stack+4425, vrr_stack+77, vrr_stack+1597);
 _BUILD_g0i0(Data,vrr_stack+8079, vrr_stack+6399, vrr_stack+3591, vrr_stack+585, vrr_stack+6231, vrr_stack+1723);
 _BUILD_h0i0(Data,vrr_stack+8499, vrr_stack+6959, vrr_stack+8079, vrr_stack+6679, vrr_stack+6399, vrr_stack+4866);
 _BUILD_h0i0(Data,vrr_stack+9087, vrr_stack+7659, vrr_stack+6959, vrr_stack+7379, vrr_stack+6679, vrr_stack+4026);
   tmp = vrr_stack + 9087;
   target_ptr = Libint->vrr_classes[5][6];
   for(i=0;i<588;i++)
     target_ptr[i] += tmp[i];
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+7379, vrr_stack+4341, vrr_stack+4397, vrr_stack+2313, vrr_stack+2355, NULL);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+7415, vrr_stack+4369, vrr_stack+4341, vrr_stack+2334, vrr_stack+2313, NULL);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+7451, vrr_stack+4397, vrr_stack+2404, vrr_stack+2355, vrr_stack+425, NULL);
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+7487, vrr_stack+7379, vrr_stack+7451, NULL, NULL, vrr_stack+4397);
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+4866, vrr_stack+7415, vrr_stack+7379, NULL, NULL, vrr_stack+4341);
 am[0] = 2;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+1534, vrr_stack+4866, vrr_stack+7487, vrr_stack+7415, vrr_stack+7379, vrr_stack+4425);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+4397, vrr_stack+2376, vrr_stack+4369, vrr_stack+404, vrr_stack+2334, NULL);
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+4433, vrr_stack+4397, vrr_stack+7415, NULL, NULL, vrr_stack+4369);
 am[0] = 2;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+1750, vrr_stack+4433, vrr_stack+4866, vrr_stack+4397, vrr_stack+7415, vrr_stack+2688);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+7415, vrr_stack+2404, vrr_stack+3311, vrr_stack+425, vrr_stack+1513, NULL);
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+425, vrr_stack+7451, vrr_stack+7415, NULL, NULL, vrr_stack+2404);
 am[0] = 2;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+161, vrr_stack+7487, vrr_stack+425, vrr_stack+7379, vrr_stack+7451, vrr_stack+77);
 am[0] = 3;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+9675, vrr_stack+1534, vrr_stack+161, vrr_stack+4866, vrr_stack+7487, vrr_stack+6231);
 am[0] = 3;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+10035, vrr_stack+1750, vrr_stack+1534, vrr_stack+4433, vrr_stack+4866, vrr_stack+585);
 am[0] = 4;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+10395, vrr_stack+10035, vrr_stack+9675, vrr_stack+1750, vrr_stack+1534, vrr_stack+6399);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+7379, vrr_stack+3228, vrr_stack+2376, vrr_stack+1473, vrr_stack+404, NULL);
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+4866, vrr_stack+7379, vrr_stack+4397, NULL, NULL, vrr_stack+2376);
 am[0] = 2;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+6231, vrr_stack+4866, vrr_stack+4433, vrr_stack+7379, vrr_stack+4397, vrr_stack+2772);
 am[0] = 3;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+10935, vrr_stack+6231, vrr_stack+1750, vrr_stack+4866, vrr_stack+4433, vrr_stack+6063);
 am[0] = 4;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+11295, vrr_stack+10935, vrr_stack+10035, vrr_stack+6231, vrr_stack+1750, vrr_stack+6679);
 _BUILD_00p0(Data,vrr_stack+1750, Data->F+12, Data->F+13, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+1753, vrr_stack+3256, vrr_stack+1750, Data->F+11, Data->F+12, NULL);
 _BUILD_00f0(Data,vrr_stack+1759, vrr_stack+3259, vrr_stack+1753, vrr_stack+1494, vrr_stack+3256, NULL);
 _BUILD_00g0(Data,vrr_stack+1769, vrr_stack+3265, vrr_stack+1759, vrr_stack+1497, vrr_stack+3259, NULL);
 _BUILD_00h0(Data,vrr_stack+1784, vrr_stack+3275, vrr_stack+1769, vrr_stack+1503, vrr_stack+3265, NULL);
 _BUILD_00i0(Data,vrr_stack+1750, vrr_stack+3290, vrr_stack+1784, vrr_stack+1248, vrr_stack+3275, NULL);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+7379, vrr_stack+3311, vrr_stack+1750, vrr_stack+1513, vrr_stack+3290, NULL);
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+1750, vrr_stack+7415, vrr_stack+7379, NULL, NULL, vrr_stack+3311);
 am[0] = 2;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+1858, vrr_stack+425, vrr_stack+1750, vrr_stack+7451, vrr_stack+7415, vrr_stack+3339);
 am[0] = 3;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+6063, vrr_stack+161, vrr_stack+1858, vrr_stack+7487, vrr_stack+425, vrr_stack+3423);
 am[0] = 4;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+11835, vrr_stack+9675, vrr_stack+6063, vrr_stack+1534, vrr_stack+161, vrr_stack+3591);
 am[0] = 5;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+6063, vrr_stack+10395, vrr_stack+11835, vrr_stack+10035, vrr_stack+9675, vrr_stack+8079);
 am[0] = 5;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+11835, vrr_stack+11295, vrr_stack+10395, vrr_stack+10935, vrr_stack+10035, vrr_stack+6959);
   tmp = vrr_stack + 11835;
   target_ptr = Libint->vrr_classes[5][7];
   for(i=0;i<756;i++)
     target_ptr[i] += tmp[i];
 _BUILD_i0g0(Data,vrr_stack+8079, vrr_stack+870, vrr_stack+2913, vrr_stack+2463, vrr_stack+2088, vrr_stack+1263);
   tmp = vrr_stack + 8079;
   target_ptr = Libint->vrr_classes[6][4];
   for(i=0;i<420;i++)
     target_ptr[i] += tmp[i];
 _BUILD_i0h0(Data,vrr_stack+9675, vrr_stack+5622, vrr_stack+5181, vrr_stack+4551, vrr_stack+4026, vrr_stack+2913);
   tmp = vrr_stack + 9675;
   target_ptr = Libint->vrr_classes[6][5];
   for(i=0;i<588;i++)
     target_ptr[i] += tmp[i];
 _BUILD_i0i0(Data,vrr_stack+0, vrr_stack+9087, vrr_stack+8499, vrr_stack+7659, vrr_stack+6959, vrr_stack+5181);
   tmp = vrr_stack + 0;
   target_ptr = Libint->vrr_classes[6][6];
   for(i=0;i<784;i++)
     target_ptr[i] += tmp[i];
 am[0] = 6;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+6819, vrr_stack+11835, vrr_stack+6063, vrr_stack+11295, vrr_stack+10395, vrr_stack+8499);
   tmp = vrr_stack + 6819;
   target_ptr = Libint->vrr_classes[6][7];
   for(i=0;i<1008;i++)
     target_ptr[i] += tmp[i];

}

