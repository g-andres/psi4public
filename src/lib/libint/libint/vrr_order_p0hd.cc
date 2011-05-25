#include <stdio.h>
#include "libint.h"
#include "vrr_header.h"

  /* Computes quartets necessary to compute (p0|hd) integrals */

void vrr_order_p0hd(Libint_t * Libint, prim_data *Data)
{
 REALTYPE *vrr_stack = Libint->vrr_stack;
 REALTYPE *tmp, *target_ptr;
 int i, am[2];
 _BUILD_00p0(Data,vrr_stack+0, Data->F+3, Data->F+4, NULL, NULL, NULL);
 _BUILD_00p0(Data,vrr_stack+3, Data->F+2, Data->F+3, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+6, vrr_stack+3, vrr_stack+0, Data->F+2, Data->F+3, NULL);
 _BUILD_00p0(Data,vrr_stack+12, Data->F+1, Data->F+2, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+15, vrr_stack+12, vrr_stack+3, Data->F+1, Data->F+2, NULL);
 _BUILD_00p0(Data,vrr_stack+21, Data->F+4, Data->F+5, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+24, vrr_stack+0, vrr_stack+21, Data->F+3, Data->F+4, NULL);
 _BUILD_00f0(Data,vrr_stack+30, vrr_stack+6, vrr_stack+24, vrr_stack+3, vrr_stack+0, NULL);
 _BUILD_00f0(Data,vrr_stack+40, vrr_stack+15, vrr_stack+6, vrr_stack+12, vrr_stack+3, NULL);
 _BUILD_00g0(Data,vrr_stack+50, vrr_stack+40, vrr_stack+30, vrr_stack+15, vrr_stack+6, NULL);
 _BUILD_00p0(Data,vrr_stack+3, Data->F+5, Data->F+6, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+65, vrr_stack+21, vrr_stack+3, Data->F+4, Data->F+5, NULL);
 _BUILD_00f0(Data,vrr_stack+71, vrr_stack+24, vrr_stack+65, vrr_stack+0, vrr_stack+21, NULL);
 _BUILD_00g0(Data,vrr_stack+81, vrr_stack+30, vrr_stack+71, vrr_stack+6, vrr_stack+24, NULL);
 _BUILD_00h0(Data,vrr_stack+96, vrr_stack+50, vrr_stack+81, vrr_stack+40, vrr_stack+30, NULL);
 _BUILD_00p0(Data,vrr_stack+0, Data->F+0, Data->F+1, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+6, vrr_stack+0, vrr_stack+12, Data->F+0, Data->F+1, NULL);
 _BUILD_00f0(Data,vrr_stack+117, vrr_stack+6, vrr_stack+15, vrr_stack+0, vrr_stack+12, NULL);
 _BUILD_00g0(Data,vrr_stack+127, vrr_stack+117, vrr_stack+40, vrr_stack+6, vrr_stack+15, NULL);
 _BUILD_00h0(Data,vrr_stack+142, vrr_stack+127, vrr_stack+50, vrr_stack+117, vrr_stack+40, NULL);
 _BUILD_00p0(Data,vrr_stack+0, Data->F+6, Data->F+7, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+40, vrr_stack+3, vrr_stack+0, Data->F+5, Data->F+6, NULL);
 _BUILD_00f0(Data,vrr_stack+117, vrr_stack+65, vrr_stack+40, vrr_stack+21, vrr_stack+3, NULL);
 _BUILD_00g0(Data,vrr_stack+6, vrr_stack+71, vrr_stack+117, vrr_stack+24, vrr_stack+65, NULL);
 _BUILD_00h0(Data,vrr_stack+163, vrr_stack+81, vrr_stack+6, vrr_stack+30, vrr_stack+71, NULL);
 _BUILD_00i0(Data,vrr_stack+184, vrr_stack+96, vrr_stack+163, vrr_stack+50, vrr_stack+81, NULL);
 _BUILD_00i0(Data,vrr_stack+212, vrr_stack+142, vrr_stack+96, vrr_stack+127, vrr_stack+50, NULL);
 _BUILD_00p0(Data,vrr_stack+127, Data->F+7, Data->F+8, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+130, vrr_stack+0, vrr_stack+127, Data->F+6, Data->F+7, NULL);
 _BUILD_00f0(Data,vrr_stack+21, vrr_stack+40, vrr_stack+130, vrr_stack+3, vrr_stack+0, NULL);
 _BUILD_00g0(Data,vrr_stack+127, vrr_stack+117, vrr_stack+21, vrr_stack+65, vrr_stack+40, NULL);
 _BUILD_00h0(Data,vrr_stack+21, vrr_stack+6, vrr_stack+127, vrr_stack+71, vrr_stack+117, NULL);
 _BUILD_00i0(Data,vrr_stack+240, vrr_stack+163, vrr_stack+21, vrr_stack+81, vrr_stack+6, NULL);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+0, vrr_stack+184, vrr_stack+240, vrr_stack+96, vrr_stack+163, NULL);
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+240, vrr_stack+212, vrr_stack+184, vrr_stack+142, vrr_stack+96, NULL);
 _BUILD_p0h0(Data,vrr_stack+276, vrr_stack+142, vrr_stack+96, NULL, NULL, vrr_stack+50);
   tmp = vrr_stack + 276;
   target_ptr = Libint->vrr_classes[1][5];
   for(i=0;i<63;i++)
     target_ptr[i] += tmp[i];
 _BUILD_p0i0(Data,vrr_stack+339, vrr_stack+212, vrr_stack+184, NULL, NULL, vrr_stack+96);
   tmp = vrr_stack + 339;
   target_ptr = Libint->vrr_classes[1][6];
   for(i=0;i<84;i++)
     target_ptr[i] += tmp[i];
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,vrr_stack+423, vrr_stack+240, vrr_stack+0, NULL, NULL, vrr_stack+184);
   tmp = vrr_stack + 423;
   target_ptr = Libint->vrr_classes[1][7];
   for(i=0;i<108;i++)
     target_ptr[i] += tmp[i];

}

