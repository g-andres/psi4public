#include <stdio.h>
#include <libint/libint.h>
#include "libderiv.h"
#include <libint/vrr_header.h>
#include <libint/hrr_header.h>
#include "deriv_header.h"

  /* Computes quartets necessary to compute derivatives of (g0|gg) integrals */

void d1vrr_order_g0gg(Libderiv_t *Libderiv, prim_data *Data)
{
 double *dvrr_stack = Libderiv->dvrr_stack;
 double *tmp, *target_ptr;
 int i, am[2];
 /* compute (0 0 | 1 0) m=4 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00p0(Data,dvrr_stack+0, Data->F+4, Data->F+5, NULL, NULL, NULL);

 /* compute (0 0 | 1 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00p0(Data,dvrr_stack+3, Data->F+3, Data->F+4, NULL, NULL, NULL);

 /* compute (1 0 | 1 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_p0p0(Data,dvrr_stack+6, dvrr_stack+3, dvrr_stack+0, NULL, NULL, Data->F+4);

 /* compute (0 0 | 2 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00d0(Data,dvrr_stack+15, dvrr_stack+3, dvrr_stack+0, Data->F+3, Data->F+4, NULL);

 /* compute (0 0 | 1 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00p0(Data,dvrr_stack+21, Data->F+2, Data->F+3, NULL, NULL, NULL);

 /* compute (0 0 | 2 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00d0(Data,dvrr_stack+24, dvrr_stack+21, dvrr_stack+3, Data->F+2, Data->F+3, NULL);

 /* compute (0 0 | 1 0) m=5 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00p0(Data,dvrr_stack+30, Data->F+5, Data->F+6, NULL, NULL, NULL);

 /* compute (0 0 | 2 0) m=4 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00d0(Data,dvrr_stack+33, dvrr_stack+0, dvrr_stack+30, Data->F+4, Data->F+5, NULL);

 /* compute (1 0 | 2 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_p0d0(Data,dvrr_stack+39, dvrr_stack+15, dvrr_stack+33, NULL, NULL, dvrr_stack+0);

 /* compute (1 0 | 2 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_p0d0(Data,dvrr_stack+57, dvrr_stack+24, dvrr_stack+15, NULL, NULL, dvrr_stack+3);

 /* compute (2 0 | 2 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_d0d0(Data,dvrr_stack+75, dvrr_stack+57, dvrr_stack+39, dvrr_stack+24, dvrr_stack+15, dvrr_stack+6);

 /* compute (0 0 | 3 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00f0(Data,dvrr_stack+111, dvrr_stack+15, dvrr_stack+33, dvrr_stack+3, dvrr_stack+0, NULL);

 /* compute (0 0 | 3 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00f0(Data,dvrr_stack+121, dvrr_stack+24, dvrr_stack+15, dvrr_stack+21, dvrr_stack+3, NULL);

 /* compute (1 0 | 3 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_p0f0(Data,dvrr_stack+131, dvrr_stack+121, dvrr_stack+111, NULL, NULL, dvrr_stack+15);

 /* compute (0 0 | 1 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00p0(Data,dvrr_stack+161, Data->F+1, Data->F+2, NULL, NULL, NULL);

 /* compute (0 0 | 2 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00d0(Data,dvrr_stack+164, dvrr_stack+161, dvrr_stack+21, Data->F+1, Data->F+2, NULL);

 /* compute (0 0 | 3 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00f0(Data,dvrr_stack+170, dvrr_stack+164, dvrr_stack+24, dvrr_stack+161, dvrr_stack+21, NULL);

 /* compute (1 0 | 3 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_p0f0(Data,dvrr_stack+180, dvrr_stack+170, dvrr_stack+121, NULL, NULL, dvrr_stack+24);

 /* compute (0 0 | 1 0) m=6 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00p0(Data,dvrr_stack+210, Data->F+6, Data->F+7, NULL, NULL, NULL);

 /* compute (0 0 | 2 0) m=5 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00d0(Data,dvrr_stack+213, dvrr_stack+30, dvrr_stack+210, Data->F+5, Data->F+6, NULL);

 /* compute (0 0 | 3 0) m=4 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00f0(Data,dvrr_stack+219, dvrr_stack+33, dvrr_stack+213, dvrr_stack+0, dvrr_stack+30, NULL);

 /* compute (1 0 | 3 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_p0f0(Data,dvrr_stack+229, dvrr_stack+111, dvrr_stack+219, NULL, NULL, dvrr_stack+33);

 /* compute (2 0 | 3 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_d0f0(Data,dvrr_stack+259, dvrr_stack+131, dvrr_stack+229, dvrr_stack+121, dvrr_stack+111, dvrr_stack+39);

 /* compute (2 0 | 3 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_d0f0(Data,dvrr_stack+319, dvrr_stack+180, dvrr_stack+131, dvrr_stack+170, dvrr_stack+121, dvrr_stack+57);

 /* compute (3 0 | 3 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_f0f0(Data,dvrr_stack+379, dvrr_stack+319, dvrr_stack+259, dvrr_stack+180, dvrr_stack+131, dvrr_stack+75);

 /* compute (0 0 | 4 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+479, dvrr_stack+121, dvrr_stack+111, dvrr_stack+24, dvrr_stack+15, NULL);

 /* compute (0 0 | 4 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+494, dvrr_stack+170, dvrr_stack+121, dvrr_stack+164, dvrr_stack+24, NULL);

 /* compute (0 0 | 4 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+509, dvrr_stack+111, dvrr_stack+219, dvrr_stack+15, dvrr_stack+33, NULL);

 /* compute (1 0 | 4 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+524, dvrr_stack+479, dvrr_stack+509, NULL, NULL, dvrr_stack+111);

 /* compute (1 0 | 4 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+569, dvrr_stack+494, dvrr_stack+479, NULL, NULL, dvrr_stack+121);

 /* compute (2 0 | 4 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+614, dvrr_stack+569, dvrr_stack+524, dvrr_stack+494, dvrr_stack+479, dvrr_stack+131);

 /* compute (0 0 | 1 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00p0(Data,dvrr_stack+704, Data->F+0, Data->F+1, NULL, NULL, NULL);

 /* compute (0 0 | 2 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00d0(Data,dvrr_stack+707, dvrr_stack+704, dvrr_stack+161, Data->F+0, Data->F+1, NULL);

 /* compute (0 0 | 3 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00f0(Data,dvrr_stack+713, dvrr_stack+707, dvrr_stack+164, dvrr_stack+704, dvrr_stack+161, NULL);

 /* compute (0 0 | 4 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+723, dvrr_stack+713, dvrr_stack+170, dvrr_stack+707, dvrr_stack+164, NULL);

 /* compute (1 0 | 4 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+738, dvrr_stack+723, dvrr_stack+494, NULL, NULL, dvrr_stack+170);

 /* compute (2 0 | 4 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+783, dvrr_stack+738, dvrr_stack+569, dvrr_stack+723, dvrr_stack+494, dvrr_stack+180);

 /* compute (0 0 | 1 0) m=7 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00p0(Data,dvrr_stack+161, Data->F+7, Data->F+8, NULL, NULL, NULL);

 /* compute (0 0 | 2 0) m=6 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00d0(Data,dvrr_stack+704, dvrr_stack+210, dvrr_stack+161, Data->F+6, Data->F+7, NULL);

 /* compute (0 0 | 3 0) m=5 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00f0(Data,dvrr_stack+873, dvrr_stack+213, dvrr_stack+704, dvrr_stack+30, dvrr_stack+210, NULL);

 /* compute (0 0 | 4 0) m=4 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+883, dvrr_stack+219, dvrr_stack+873, dvrr_stack+33, dvrr_stack+213, NULL);

 /* compute (1 0 | 4 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+898, dvrr_stack+509, dvrr_stack+883, NULL, NULL, dvrr_stack+219);

 /* compute (2 0 | 4 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+943, dvrr_stack+524, dvrr_stack+898, dvrr_stack+479, dvrr_stack+509, dvrr_stack+229);

 /* compute (3 0 | 4 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 3;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+1033, dvrr_stack+614, dvrr_stack+943, dvrr_stack+569, dvrr_stack+524, dvrr_stack+259);

 /* compute (3 0 | 4 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 3;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+1183, dvrr_stack+783, dvrr_stack+614, dvrr_stack+738, dvrr_stack+569, dvrr_stack+319);

 /* compute (4 0 | 4 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 4;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+1333, dvrr_stack+1183, dvrr_stack+1033, dvrr_stack+783, dvrr_stack+614, dvrr_stack+379);
 tmp = dvrr_stack + 1333;
 target_ptr = Libderiv->dvrr_classes[4][4];
 for(i=0;i<225;i++)
   target_ptr[i] += tmp[i];

 /* compute (0 0 | 5 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+738, dvrr_stack+479, dvrr_stack+509, dvrr_stack+121, dvrr_stack+111, NULL);

 /* compute (0 0 | 5 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+759, dvrr_stack+494, dvrr_stack+479, dvrr_stack+170, dvrr_stack+121, NULL);

 /* compute (0 0 | 5 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+780, dvrr_stack+509, dvrr_stack+883, dvrr_stack+111, dvrr_stack+219, NULL);

 /* compute (1 0 | 5 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+801, dvrr_stack+738, dvrr_stack+780, NULL, NULL, dvrr_stack+509);

 /* compute (1 0 | 5 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+1558, dvrr_stack+759, dvrr_stack+738, NULL, NULL, dvrr_stack+479);

 /* compute (2 0 | 5 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+1621, dvrr_stack+1558, dvrr_stack+801, dvrr_stack+759, dvrr_stack+738, dvrr_stack+524);

 /* compute (0 0 | 5 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+1747, dvrr_stack+723, dvrr_stack+494, dvrr_stack+713, dvrr_stack+170, NULL);

 /* compute (1 0 | 5 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+1768, dvrr_stack+1747, dvrr_stack+759, NULL, NULL, dvrr_stack+494);

 /* compute (2 0 | 5 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+1831, dvrr_stack+1768, dvrr_stack+1558, dvrr_stack+1747, dvrr_stack+759, dvrr_stack+569);

 /* compute (0 0 | 1 0) m=8 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00p0(Data,dvrr_stack+710, Data->F+8, Data->F+9, NULL, NULL, NULL);

 /* compute (0 0 | 2 0) m=7 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00d0(Data,dvrr_stack+569, dvrr_stack+161, dvrr_stack+710, Data->F+7, Data->F+8, NULL);

 /* compute (0 0 | 3 0) m=6 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00f0(Data,dvrr_stack+121, dvrr_stack+704, dvrr_stack+569, dvrr_stack+210, dvrr_stack+161, NULL);

 /* compute (0 0 | 4 0) m=5 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+575, dvrr_stack+873, dvrr_stack+121, dvrr_stack+213, dvrr_stack+704, NULL);

 /* compute (0 0 | 5 0) m=4 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+590, dvrr_stack+883, dvrr_stack+575, dvrr_stack+219, dvrr_stack+873, NULL);

 /* compute (1 0 | 5 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+1957, dvrr_stack+780, dvrr_stack+590, NULL, NULL, dvrr_stack+883);

 /* compute (2 0 | 5 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+2020, dvrr_stack+801, dvrr_stack+1957, dvrr_stack+738, dvrr_stack+780, dvrr_stack+898);

 /* compute (3 0 | 5 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 3;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+2146, dvrr_stack+1621, dvrr_stack+2020, dvrr_stack+1558, dvrr_stack+801, dvrr_stack+943);

 /* compute (3 0 | 5 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 3;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+2356, dvrr_stack+1831, dvrr_stack+1621, dvrr_stack+1768, dvrr_stack+1558, dvrr_stack+614);

 /* compute (4 0 | 5 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 4;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+2566, dvrr_stack+2356, dvrr_stack+2146, dvrr_stack+1831, dvrr_stack+1621, dvrr_stack+1033);
 tmp = dvrr_stack + 2566;
 target_ptr = Libderiv->dvrr_classes[4][5];
 for(i=0;i<315;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 4 1) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 hrr3_build_gp(Libderiv->CD,dvrr_stack+2881,dvrr_stack+2566,dvrr_stack+1333,15);


 /* compute (0 0 | 6 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+1768, dvrr_stack+738, dvrr_stack+780, dvrr_stack+479, dvrr_stack+509, NULL);

 /* compute (0 0 | 6 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+1796, dvrr_stack+759, dvrr_stack+738, dvrr_stack+494, dvrr_stack+479, NULL);

 /* compute (0 0 | 6 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+1824, dvrr_stack+780, dvrr_stack+590, dvrr_stack+509, dvrr_stack+883, NULL);

 /* compute (1 0 | 6 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+1852, dvrr_stack+1768, dvrr_stack+1824, NULL, NULL, dvrr_stack+780);

 /* compute (1 0 | 6 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+3556, dvrr_stack+1796, dvrr_stack+1768, NULL, NULL, dvrr_stack+738);

 /* compute (2 0 | 6 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+3640, dvrr_stack+3556, dvrr_stack+1852, dvrr_stack+1796, dvrr_stack+1768, dvrr_stack+801);

 /* compute (0 0 | 6 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+3808, dvrr_stack+1747, dvrr_stack+759, dvrr_stack+723, dvrr_stack+494, NULL);

 /* compute (1 0 | 6 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+3836, dvrr_stack+3808, dvrr_stack+1796, NULL, NULL, dvrr_stack+759);

 /* compute (2 0 | 6 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+3920, dvrr_stack+3836, dvrr_stack+3556, dvrr_stack+3808, dvrr_stack+1796, dvrr_stack+1558);

 /* compute (0 0 | 1 0) m=9 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00p0(Data,dvrr_stack+210, Data->F+9, Data->F+10, NULL, NULL, NULL);

 /* compute (0 0 | 2 0) m=8 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00d0(Data,dvrr_stack+1558, dvrr_stack+710, dvrr_stack+210, Data->F+8, Data->F+9, NULL);

 /* compute (0 0 | 3 0) m=7 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00f0(Data,dvrr_stack+1564, dvrr_stack+569, dvrr_stack+1558, dvrr_stack+161, dvrr_stack+710, NULL);

 /* compute (0 0 | 4 0) m=6 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+723, dvrr_stack+121, dvrr_stack+1564, dvrr_stack+704, dvrr_stack+569, NULL);

 /* compute (0 0 | 5 0) m=5 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+1936, dvrr_stack+575, dvrr_stack+723, dvrr_stack+873, dvrr_stack+121, NULL);

 /* compute (0 0 | 6 0) m=4 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+1574, dvrr_stack+590, dvrr_stack+1936, dvrr_stack+883, dvrr_stack+575, NULL);

 /* compute (1 0 | 6 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+4088, dvrr_stack+1824, dvrr_stack+1574, NULL, NULL, dvrr_stack+590);

 /* compute (2 0 | 6 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+4172, dvrr_stack+1852, dvrr_stack+4088, dvrr_stack+1768, dvrr_stack+1824, dvrr_stack+1957);

 /* compute (3 0 | 6 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 3;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+4340, dvrr_stack+3640, dvrr_stack+4172, dvrr_stack+3556, dvrr_stack+1852, dvrr_stack+2020);

 /* compute (3 0 | 6 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 3;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+4620, dvrr_stack+3920, dvrr_stack+3640, dvrr_stack+3836, dvrr_stack+3556, dvrr_stack+1621);

 /* compute (4 0 | 6 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 4;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+4900, dvrr_stack+4620, dvrr_stack+4340, dvrr_stack+3920, dvrr_stack+3640, dvrr_stack+2146);
 tmp = dvrr_stack + 4900;
 target_ptr = Libderiv->dvrr_classes[4][6];
 for(i=0;i<420;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 5 1) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 hrr3_build_hp(Libderiv->CD,dvrr_stack+5320,dvrr_stack+4900,dvrr_stack+2566,15);


 /* compute (0 0 | 7 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+3836, dvrr_stack+1768, dvrr_stack+1824, dvrr_stack+738, dvrr_stack+780, NULL);

 /* compute (0 0 | 7 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+3872, dvrr_stack+1796, dvrr_stack+1768, dvrr_stack+759, dvrr_stack+738, NULL);

 /* compute (0 0 | 7 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+3908, dvrr_stack+1824, dvrr_stack+1574, dvrr_stack+780, dvrr_stack+590, NULL);

 /* compute (1 0 | 7 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+3944, dvrr_stack+3836, dvrr_stack+3908, NULL, NULL, dvrr_stack+1824);

 /* compute (1 0 | 7 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+6265, dvrr_stack+3872, dvrr_stack+3836, NULL, NULL, dvrr_stack+1768);

 /* compute (2 0 | 7 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+6373, dvrr_stack+6265, dvrr_stack+3944, dvrr_stack+3872, dvrr_stack+3836, dvrr_stack+1852);

 /* compute (0 0 | 7 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+4052, dvrr_stack+3808, dvrr_stack+1796, dvrr_stack+1747, dvrr_stack+759, NULL);

 /* compute (1 0 | 7 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+6589, dvrr_stack+4052, dvrr_stack+3872, NULL, NULL, dvrr_stack+1796);

 /* compute (2 0 | 7 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+6697, dvrr_stack+6589, dvrr_stack+6265, dvrr_stack+4052, dvrr_stack+3872, dvrr_stack+3556);

 /* compute (0 0 | 1 0) m=10 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00p0(Data,dvrr_stack+161, Data->F+10, Data->F+11, NULL, NULL, NULL);

 /* compute (0 0 | 2 0) m=9 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00d0(Data,dvrr_stack+704, dvrr_stack+210, dvrr_stack+161, Data->F+9, Data->F+10, NULL);

 /* compute (0 0 | 3 0) m=8 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00f0(Data,dvrr_stack+3556, dvrr_stack+1558, dvrr_stack+704, dvrr_stack+710, dvrr_stack+210, NULL);

 /* compute (0 0 | 4 0) m=7 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+3566, dvrr_stack+1564, dvrr_stack+3556, dvrr_stack+569, dvrr_stack+1558, NULL);

 /* compute (0 0 | 5 0) m=6 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+1747, dvrr_stack+723, dvrr_stack+3566, dvrr_stack+121, dvrr_stack+1564, NULL);

 /* compute (0 0 | 6 0) m=5 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+3581, dvrr_stack+1936, dvrr_stack+1747, dvrr_stack+575, dvrr_stack+723, NULL);

 /* compute (0 0 | 7 0) m=4 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+738, dvrr_stack+1574, dvrr_stack+3581, dvrr_stack+590, dvrr_stack+1936, NULL);

 /* compute (1 0 | 7 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+6913, dvrr_stack+3908, dvrr_stack+738, NULL, NULL, dvrr_stack+1574);

 /* compute (2 0 | 7 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+7021, dvrr_stack+3944, dvrr_stack+6913, dvrr_stack+3836, dvrr_stack+3908, dvrr_stack+4088);

 /* compute (3 0 | 7 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 3;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+7237, dvrr_stack+6373, dvrr_stack+7021, dvrr_stack+6265, dvrr_stack+3944, dvrr_stack+4172);

 /* compute (3 0 | 7 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 3;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+7597, dvrr_stack+6697, dvrr_stack+6373, dvrr_stack+6589, dvrr_stack+6265, dvrr_stack+3640);

 /* compute (4 0 | 7 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 4;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+7957, dvrr_stack+7597, dvrr_stack+7237, dvrr_stack+6697, dvrr_stack+6373, dvrr_stack+4340);
 tmp = dvrr_stack + 7957;
 target_ptr = Libderiv->dvrr_classes[4][7];
 for(i=0;i<540;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 6 1) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 hrr3_build_ip(Libderiv->CD,dvrr_stack+8497,dvrr_stack+7957,dvrr_stack+4900,15);


 /* compute (0 0 | 8 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+6589, dvrr_stack+3836, dvrr_stack+3908, dvrr_stack+1768, dvrr_stack+1824, NULL);

 /* compute (0 0 | 8 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+6634, dvrr_stack+3872, dvrr_stack+3836, dvrr_stack+1796, dvrr_stack+1768, NULL);

 /* compute (0 0 | 8 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+6679, dvrr_stack+3908, dvrr_stack+738, dvrr_stack+1824, dvrr_stack+1574, NULL);

 /* compute (1 0 | 8 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+6724, dvrr_stack+6589, dvrr_stack+6679, NULL, NULL, dvrr_stack+3908);

 /* compute (1 0 | 8 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+9757, dvrr_stack+6634, dvrr_stack+6589, NULL, NULL, dvrr_stack+3836);

 /* compute (2 0 | 8 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+9892, dvrr_stack+9757, dvrr_stack+6724, dvrr_stack+6634, dvrr_stack+6589, dvrr_stack+3944);

 /* compute (0 0 | 8 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+6859, dvrr_stack+4052, dvrr_stack+3872, dvrr_stack+3808, dvrr_stack+1796, NULL);

 /* compute (1 0 | 8 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+10162, dvrr_stack+6859, dvrr_stack+6634, NULL, NULL, dvrr_stack+3872);

 /* compute (2 0 | 8 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+10297, dvrr_stack+10162, dvrr_stack+9757, dvrr_stack+6859, dvrr_stack+6634, dvrr_stack+6265);

 /* compute (0 0 | 1 0) m=11 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00p0(Data,dvrr_stack+710, Data->F+11, Data->F+12, NULL, NULL, NULL);

 /* compute (0 0 | 2 0) m=10 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00d0(Data,dvrr_stack+569, dvrr_stack+161, dvrr_stack+710, Data->F+10, Data->F+11, NULL);

 /* compute (0 0 | 3 0) m=9 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00f0(Data,dvrr_stack+121, dvrr_stack+704, dvrr_stack+569, dvrr_stack+210, dvrr_stack+161, NULL);

 /* compute (0 0 | 4 0) m=8 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+6265, dvrr_stack+3556, dvrr_stack+121, dvrr_stack+1558, dvrr_stack+704, NULL);

 /* compute (0 0 | 5 0) m=7 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+6280, dvrr_stack+3566, dvrr_stack+6265, dvrr_stack+1564, dvrr_stack+3556, NULL);

 /* compute (0 0 | 6 0) m=6 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+3808, dvrr_stack+1747, dvrr_stack+6280, dvrr_stack+723, dvrr_stack+3566, NULL);

 /* compute (0 0 | 7 0) m=5 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+6301, dvrr_stack+3581, dvrr_stack+3808, dvrr_stack+1936, dvrr_stack+1747, NULL);

 /* compute (0 0 | 8 0) m=4 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+1768, dvrr_stack+738, dvrr_stack+6301, dvrr_stack+1574, dvrr_stack+3581, NULL);

 /* compute (1 0 | 8 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+10567, dvrr_stack+6679, dvrr_stack+1768, NULL, NULL, dvrr_stack+738);

 /* compute (2 0 | 8 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+10702, dvrr_stack+6724, dvrr_stack+10567, dvrr_stack+6589, dvrr_stack+6679, dvrr_stack+6913);

 /* compute (3 0 | 8 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 3;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+10972, dvrr_stack+9892, dvrr_stack+10702, dvrr_stack+9757, dvrr_stack+6724, dvrr_stack+7021);

 /* compute (3 0 | 8 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 3;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+11422, dvrr_stack+10297, dvrr_stack+9892, dvrr_stack+10162, dvrr_stack+9757, dvrr_stack+6373);

 /* compute (4 0 | 8 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 4;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+11872, dvrr_stack+11422, dvrr_stack+10972, dvrr_stack+10297, dvrr_stack+9892, dvrr_stack+7237);

 /* compute (4 0 | 7 1) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 hrr3_build_kp(Libderiv->CD,dvrr_stack+12547,dvrr_stack+11872,dvrr_stack+7957,15);


 /* compute (0 0 | 9 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 9;
 vrr_build_xxxx(am,Data,dvrr_stack+10162, dvrr_stack+6589, dvrr_stack+6679, dvrr_stack+3836, dvrr_stack+3908, NULL);

 /* compute (0 0 | 9 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 9;
 vrr_build_xxxx(am,Data,dvrr_stack+10217, dvrr_stack+6634, dvrr_stack+6589, dvrr_stack+3872, dvrr_stack+3836, NULL);

 /* compute (0 0 | 9 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 9;
 vrr_build_xxxx(am,Data,dvrr_stack+10272, dvrr_stack+6679, dvrr_stack+1768, dvrr_stack+3908, dvrr_stack+738, NULL);

 /* compute (1 0 | 9 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 9;
 vrr_build_xxxx(am,Data,dvrr_stack+10327, dvrr_stack+10162, dvrr_stack+10272, NULL, NULL, dvrr_stack+6679);

 /* compute (1 0 | 9 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 9;
 vrr_build_xxxx(am,Data,dvrr_stack+14167, dvrr_stack+10217, dvrr_stack+10162, NULL, NULL, dvrr_stack+6589);

 /* compute (2 0 | 9 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 9;
 vrr_build_xxxx(am,Data,dvrr_stack+14332, dvrr_stack+14167, dvrr_stack+10327, dvrr_stack+10217, dvrr_stack+10162, dvrr_stack+6724);

 /* compute (0 0 | 9 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 9;
 vrr_build_xxxx(am,Data,dvrr_stack+10492, dvrr_stack+6859, dvrr_stack+6634, dvrr_stack+4052, dvrr_stack+3872, NULL);

 /* compute (1 0 | 9 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 9;
 vrr_build_xxxx(am,Data,dvrr_stack+14662, dvrr_stack+10492, dvrr_stack+10217, NULL, NULL, dvrr_stack+6634);

 /* compute (2 0 | 9 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 9;
 vrr_build_xxxx(am,Data,dvrr_stack+14827, dvrr_stack+14662, dvrr_stack+14167, dvrr_stack+10492, dvrr_stack+10217, dvrr_stack+9757);

 /* compute (0 0 | 1 0) m=12 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00p0(Data,dvrr_stack+210, Data->F+12, Data->F+13, NULL, NULL, NULL);

 /* compute (0 0 | 2 0) m=11 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00d0(Data,dvrr_stack+774, dvrr_stack+710, dvrr_stack+210, Data->F+11, Data->F+12, NULL);

 /* compute (0 0 | 3 0) m=10 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_00f0(Data,dvrr_stack+9757, dvrr_stack+569, dvrr_stack+774, dvrr_stack+161, dvrr_stack+710, NULL);

 /* compute (0 0 | 4 0) m=9 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+723, dvrr_stack+121, dvrr_stack+9757, dvrr_stack+704, dvrr_stack+569, NULL);

 /* compute (0 0 | 5 0) m=8 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+9757, dvrr_stack+6265, dvrr_stack+723, dvrr_stack+3556, dvrr_stack+121, NULL);

 /* compute (0 0 | 6 0) m=7 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+9778, dvrr_stack+6280, dvrr_stack+9757, dvrr_stack+3566, dvrr_stack+6265, NULL);

 /* compute (0 0 | 7 0) m=6 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+4052, dvrr_stack+3808, dvrr_stack+9778, dvrr_stack+1747, dvrr_stack+6280, NULL);

 /* compute (0 0 | 8 0) m=5 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+9757, dvrr_stack+6301, dvrr_stack+4052, dvrr_stack+3581, dvrr_stack+3808, NULL);

 /* compute (0 0 | 9 0) m=4 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 0;  am[1] = 9;
 vrr_build_xxxx(am,Data,dvrr_stack+10217, dvrr_stack+1768, dvrr_stack+9757, dvrr_stack+738, dvrr_stack+6301, NULL);

 /* compute (1 0 | 9 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 9;
 vrr_build_xxxx(am,Data,dvrr_stack+15157, dvrr_stack+10272, dvrr_stack+10217, NULL, NULL, dvrr_stack+1768);

 /* compute (2 0 | 9 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 9;
 vrr_build_xxxx(am,Data,dvrr_stack+15322, dvrr_stack+10327, dvrr_stack+15157, dvrr_stack+10162, dvrr_stack+10272, dvrr_stack+10567);

 /* compute (3 0 | 9 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 3;  am[1] = 9;
 vrr_build_xxxx(am,Data,dvrr_stack+15652, dvrr_stack+14332, dvrr_stack+15322, dvrr_stack+14167, dvrr_stack+10327, dvrr_stack+10702);

 /* compute (3 0 | 9 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 3;  am[1] = 9;
 vrr_build_xxxx(am,Data,dvrr_stack+16202, dvrr_stack+14827, dvrr_stack+14332, dvrr_stack+14662, dvrr_stack+14167, dvrr_stack+9892);

 /* compute (4 0 | 9 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 4;  am[1] = 9;
 vrr_build_xxxx(am,Data,dvrr_stack+16752, dvrr_stack+16202, dvrr_stack+15652, dvrr_stack+14827, dvrr_stack+14332, dvrr_stack+10972);

 /* compute (4 0 | 8 1) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 hrr3_build_lp(Libderiv->CD,dvrr_stack+14167,dvrr_stack+16752,dvrr_stack+11872,15);


 /* compute (1 0 | 0 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_p000(Data,dvrr_stack+161, Data->F+3, Data->F+4, NULL, NULL, NULL);

 /* compute (1 0 | 1 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_p0p0(Data,dvrr_stack+704, dvrr_stack+21, dvrr_stack+3, NULL, NULL, Data->F+3);

 /* compute (2 0 | 1 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_d0p0(Data,dvrr_stack+16192, dvrr_stack+704, dvrr_stack+6, dvrr_stack+21, dvrr_stack+3, dvrr_stack+161);

 /* compute (1 0 | 2 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_p0d0(Data,dvrr_stack+16210, dvrr_stack+164, dvrr_stack+24, NULL, NULL, dvrr_stack+21);

 /* compute (2 0 | 2 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_d0d0(Data,dvrr_stack+4052, dvrr_stack+16210, dvrr_stack+57, dvrr_stack+164, dvrr_stack+24, dvrr_stack+704);

 /* compute (3 0 | 2 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_f0d0(Data,dvrr_stack+16228, dvrr_stack+4052, dvrr_stack+75, dvrr_stack+16210, dvrr_stack+57, dvrr_stack+16192);

 /* compute (1 0 | 3 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_p0f0(Data,dvrr_stack+479, dvrr_stack+713, dvrr_stack+170, NULL, NULL, dvrr_stack+164);

 /* compute (2 0 | 3 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_d0f0(Data,dvrr_stack+16288, dvrr_stack+479, dvrr_stack+180, dvrr_stack+713, dvrr_stack+170, dvrr_stack+16210);

 /* compute (3 0 | 3 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_f0f0(Data,dvrr_stack+3808, dvrr_stack+16288, dvrr_stack+319, dvrr_stack+479, dvrr_stack+180, dvrr_stack+4052);

 /* compute (4 0 | 3 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 4;  am[1] = 3;
 vrr_build_xxxx(am,Data,dvrr_stack+16348, dvrr_stack+3808, dvrr_stack+379, dvrr_stack+16288, dvrr_stack+319, dvrr_stack+16228);

 /* compute (1 0 | 0 0) m=4 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_p000(Data,dvrr_stack+611, Data->F+4, Data->F+5, NULL, NULL, NULL);

 /* compute (1 0 | 1 0) m=4 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_p0p0(Data,dvrr_stack+21, dvrr_stack+0, dvrr_stack+30, NULL, NULL, Data->F+5);

 /* compute (2 0 | 1 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_d0p0(Data,dvrr_stack+3808, dvrr_stack+6, dvrr_stack+21, dvrr_stack+3, dvrr_stack+0, dvrr_stack+611);

 /* compute (1 0 | 2 0) m=4 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_p0d0(Data,dvrr_stack+3826, dvrr_stack+33, dvrr_stack+213, NULL, NULL, dvrr_stack+30);

 /* compute (2 0 | 2 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_d0d0(Data,dvrr_stack+4052, dvrr_stack+39, dvrr_stack+3826, dvrr_stack+15, dvrr_stack+33, dvrr_stack+21);

 /* compute (3 0 | 2 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_f0d0(Data,dvrr_stack+3844, dvrr_stack+75, dvrr_stack+4052, dvrr_stack+57, dvrr_stack+39, dvrr_stack+3808);

 /* compute (1 0 | 3 0) m=4 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_p0f0(Data,dvrr_stack+479, dvrr_stack+219, dvrr_stack+873, NULL, NULL, dvrr_stack+213);

 /* compute (2 0 | 3 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_d0f0(Data,dvrr_stack+0, dvrr_stack+229, dvrr_stack+479, dvrr_stack+111, dvrr_stack+219, dvrr_stack+3826);

 /* compute (3 0 | 3 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 _BUILD_f0f0(Data,dvrr_stack+16192, dvrr_stack+259, dvrr_stack+0, dvrr_stack+131, dvrr_stack+229, dvrr_stack+4052);

 /* compute (4 0 | 3 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 4;  am[1] = 3;
 vrr_build_xxxx(am,Data,dvrr_stack+60, dvrr_stack+379, dvrr_stack+16192, dvrr_stack+319, dvrr_stack+259, dvrr_stack+3844);

 /* compute (1 0 | 4 0) m=4 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+3808, dvrr_stack+883, dvrr_stack+575, NULL, NULL, dvrr_stack+873);

 /* compute (2 0 | 4 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+9802, dvrr_stack+898, dvrr_stack+3808, dvrr_stack+509, dvrr_stack+883, dvrr_stack+479);

 /* compute (3 0 | 4 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 3;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+210, dvrr_stack+943, dvrr_stack+9802, dvrr_stack+524, dvrr_stack+898, dvrr_stack+0);

 /* compute (4 0 | 4 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 4;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+16498, dvrr_stack+1033, dvrr_stack+210, dvrr_stack+614, dvrr_stack+943, dvrr_stack+16192);

 /* compute (5 0 | 4 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 5;  am[1] = 4;
 vrr_build_xxxx(am,Data,dvrr_stack+10162, dvrr_stack+1333, dvrr_stack+16498, dvrr_stack+1183, dvrr_stack+1033, dvrr_stack+60);

 /* compute (1 0 | 5 0) m=4 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+16192, dvrr_stack+590, dvrr_stack+1936, NULL, NULL, dvrr_stack+575);

 /* compute (2 0 | 5 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+0, dvrr_stack+1957, dvrr_stack+16192, dvrr_stack+780, dvrr_stack+590, dvrr_stack+3808);

 /* compute (3 0 | 5 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 3;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+360, dvrr_stack+2020, dvrr_stack+0, dvrr_stack+801, dvrr_stack+1957, dvrr_stack+9802);

 /* compute (4 0 | 5 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 4;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+774, dvrr_stack+2146, dvrr_stack+360, dvrr_stack+1621, dvrr_stack+2020, dvrr_stack+210);

 /* compute (5 0 | 5 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 5;  am[1] = 5;
 vrr_build_xxxx(am,Data,dvrr_stack+17577, dvrr_stack+2566, dvrr_stack+774, dvrr_stack+2356, dvrr_stack+2146, dvrr_stack+16498);

 /* compute (1 0 | 6 0) m=4 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+16498, dvrr_stack+1574, dvrr_stack+3581, NULL, NULL, dvrr_stack+1936);

 /* compute (2 0 | 6 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+570, dvrr_stack+4088, dvrr_stack+16498, dvrr_stack+1824, dvrr_stack+1574, dvrr_stack+16192);

 /* compute (3 0 | 6 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 3;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+1936, dvrr_stack+4172, dvrr_stack+570, dvrr_stack+1852, dvrr_stack+4088, dvrr_stack+0);

 /* compute (4 0 | 6 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 4;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+18018, dvrr_stack+4340, dvrr_stack+1936, dvrr_stack+3640, dvrr_stack+4172, dvrr_stack+360);

 /* compute (5 0 | 6 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 5;  am[1] = 6;
 vrr_build_xxxx(am,Data,dvrr_stack+18438, dvrr_stack+4900, dvrr_stack+18018, dvrr_stack+4620, dvrr_stack+4340, dvrr_stack+774);

 /* compute (1 0 | 7 0) m=4 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+774, dvrr_stack+738, dvrr_stack+6301, NULL, NULL, dvrr_stack+3581);

 /* compute (2 0 | 7 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+882, dvrr_stack+6913, dvrr_stack+774, dvrr_stack+3908, dvrr_stack+738, dvrr_stack+16498);

 /* compute (3 0 | 7 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 3;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+0, dvrr_stack+7021, dvrr_stack+882, dvrr_stack+3944, dvrr_stack+6913, dvrr_stack+570);

 /* compute (4 0 | 7 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 4;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+3556, dvrr_stack+7237, dvrr_stack+0, dvrr_stack+6373, dvrr_stack+7021, dvrr_stack+1936);

 /* compute (5 0 | 7 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 5;  am[1] = 7;
 vrr_build_xxxx(am,Data,dvrr_stack+19026, dvrr_stack+7957, dvrr_stack+3556, dvrr_stack+7597, dvrr_stack+7237, dvrr_stack+18018);

 /* compute (1 0 | 8 0) m=4 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 1;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+18018, dvrr_stack+1768, dvrr_stack+9757, NULL, NULL, dvrr_stack+6301);

 /* compute (2 0 | 8 0) m=3 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 2;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+18153, dvrr_stack+10567, dvrr_stack+18018, dvrr_stack+6679, dvrr_stack+1768, dvrr_stack+774);

 /* compute (3 0 | 8 0) m=2 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 3;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+360, dvrr_stack+10702, dvrr_stack+18153, dvrr_stack+6724, dvrr_stack+10567, dvrr_stack+882);

 /* compute (4 0 | 8 0) m=1 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 4;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+6265, dvrr_stack+10972, dvrr_stack+360, dvrr_stack+9892, dvrr_stack+10702, dvrr_stack+0);

 /* compute (5 0 | 8 0) m=0 deriv level 0 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 0 */
 am[0] = 5;  am[1] = 8;
 vrr_build_xxxx(am,Data,dvrr_stack+0, dvrr_stack+11872, dvrr_stack+6265, dvrr_stack+11422, dvrr_stack+10972, dvrr_stack+3556);

 /* compute (4 0 | 4 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 1 */
 deriv_build_DZ_0(Data,225,dvrr_stack+3556, dvrr_stack+2881, NULL);
 tmp = dvrr_stack + 3556;
 target_ptr = Libderiv->deriv_classes[4][4][11];
 for(i=0;i<225;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 5 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 1 */
 deriv_build_DZ_0(Data,315,dvrr_stack+3781, dvrr_stack+5320, NULL);
 tmp = dvrr_stack + 3781;
 target_ptr = Libderiv->deriv_classes[4][5][11];
 for(i=0;i<315;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 6 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 1 */
 deriv_build_DZ_0(Data,420,dvrr_stack+18018, dvrr_stack+8497, NULL);
 tmp = dvrr_stack + 18018;
 target_ptr = Libderiv->deriv_classes[4][6][11];
 for(i=0;i<420;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 7 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 1 */
 deriv_build_DZ_0(Data,540,dvrr_stack+6265, dvrr_stack+12547, NULL);
 tmp = dvrr_stack + 6265;
 target_ptr = Libderiv->deriv_classes[4][7][11];
 for(i=0;i<540;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 8 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 0 1 */
 deriv_build_DZ_0(Data,675,dvrr_stack+6805, dvrr_stack+14167, NULL);
 tmp = dvrr_stack + 6805;
 target_ptr = Libderiv->deriv_classes[4][8][11];
 for(i=0;i<675;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 4 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 1 0 */
 deriv_build_DY_0(Data,225,dvrr_stack+4096, dvrr_stack+2881, NULL);
 tmp = dvrr_stack + 4096;
 target_ptr = Libderiv->deriv_classes[4][4][10];
 for(i=0;i<225;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 5 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 1 0 */
 deriv_build_DY_0(Data,315,dvrr_stack+9757, dvrr_stack+5320, NULL);
 tmp = dvrr_stack + 9757;
 target_ptr = Libderiv->deriv_classes[4][5][10];
 for(i=0;i<315;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 6 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 1 0 */
 deriv_build_DY_0(Data,420,dvrr_stack+10477, dvrr_stack+8497, NULL);
 tmp = dvrr_stack + 10477;
 target_ptr = Libderiv->deriv_classes[4][6][10];
 for(i=0;i<420;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 7 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 1 0 */
 deriv_build_DY_0(Data,540,dvrr_stack+1558, dvrr_stack+12547, NULL);
 tmp = dvrr_stack + 1558;
 target_ptr = Libderiv->deriv_classes[4][7][10];
 for(i=0;i<540;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 8 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  0 1 0 */
 deriv_build_DY_0(Data,675,dvrr_stack+19782, dvrr_stack+14167, NULL);
 tmp = dvrr_stack + 19782;
 target_ptr = Libderiv->deriv_classes[4][8][10];
 for(i=0;i<675;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 4 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  1 0 0 */
 deriv_build_DX_0(Data,225,dvrr_stack+4321, dvrr_stack+2881, NULL);
 tmp = dvrr_stack + 4321;
 target_ptr = Libderiv->deriv_classes[4][4][9];
 for(i=0;i<225;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 5 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  1 0 0 */
 deriv_build_DX_0(Data,315,dvrr_stack+2881, dvrr_stack+5320, NULL);
 tmp = dvrr_stack + 2881;
 target_ptr = Libderiv->deriv_classes[4][5][9];
 for(i=0;i<315;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 6 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  1 0 0 */
 deriv_build_DX_0(Data,420,dvrr_stack+5320, dvrr_stack+8497, NULL);
 tmp = dvrr_stack + 5320;
 target_ptr = Libderiv->deriv_classes[4][6][9];
 for(i=0;i<420;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 7 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  1 0 0 */
 deriv_build_DX_0(Data,540,dvrr_stack+8497, dvrr_stack+12547, NULL);
 tmp = dvrr_stack + 8497;
 target_ptr = Libderiv->deriv_classes[4][7][9];
 for(i=0;i<540;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 8 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 0  1 0 0 */
 deriv_build_DX_0(Data,675,dvrr_stack+12547, dvrr_stack+14167, NULL);
 tmp = dvrr_stack + 12547;
 target_ptr = Libderiv->deriv_classes[4][8][9];
 for(i=0;i<675;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 4 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 1  0 0 0 */
 deriv_build_CZ_g(Data,15,1,dvrr_stack+13222, dvrr_stack+2566, dvrr_stack+16348);
 tmp = dvrr_stack + 13222;
 target_ptr = Libderiv->deriv_classes[4][4][8];
 for(i=0;i<225;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 5 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 1  0 0 0 */
 deriv_build_CZ_h(Data,15,1,dvrr_stack+13447, dvrr_stack+4900, dvrr_stack+1333);
 tmp = dvrr_stack + 13447;
 target_ptr = Libderiv->deriv_classes[4][5][8];
 for(i=0;i<315;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 6 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 1  0 0 0 */
 deriv_build_CZ_i(Data,15,1,dvrr_stack+13762, dvrr_stack+7957, dvrr_stack+2566);
 tmp = dvrr_stack + 13762;
 target_ptr = Libderiv->deriv_classes[4][6][8];
 for(i=0;i<420;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 7 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 1  0 0 0 */
 deriv_build_CZ_k(Data,15,1,dvrr_stack+14182, dvrr_stack+11872, dvrr_stack+4900);
 tmp = dvrr_stack + 14182;
 target_ptr = Libderiv->deriv_classes[4][7][8];
 for(i=0;i<540;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 8 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 0 1  0 0 0 */
 deriv_build_CZ_l(Data,15,1,dvrr_stack+14722, dvrr_stack+16752, dvrr_stack+7957);
 tmp = dvrr_stack + 14722;
 target_ptr = Libderiv->deriv_classes[4][8][8];
 for(i=0;i<675;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 4 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 1 0  0 0 0 */
 deriv_build_CY_g(Data,15,1,dvrr_stack+15397, dvrr_stack+2566, dvrr_stack+16348);
 tmp = dvrr_stack + 15397;
 target_ptr = Libderiv->deriv_classes[4][4][7];
 for(i=0;i<225;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 5 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 1 0  0 0 0 */
 deriv_build_CY_h(Data,15,1,dvrr_stack+15622, dvrr_stack+4900, dvrr_stack+1333);
 tmp = dvrr_stack + 15622;
 target_ptr = Libderiv->deriv_classes[4][5][7];
 for(i=0;i<315;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 6 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 1 0  0 0 0 */
 deriv_build_CY_i(Data,15,1,dvrr_stack+9037, dvrr_stack+7957, dvrr_stack+2566);
 tmp = dvrr_stack + 9037;
 target_ptr = Libderiv->deriv_classes[4][6][7];
 for(i=0;i<420;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 7 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 1 0  0 0 0 */
 deriv_build_CY_k(Data,15,1,dvrr_stack+20457, dvrr_stack+11872, dvrr_stack+4900);
 tmp = dvrr_stack + 20457;
 target_ptr = Libderiv->deriv_classes[4][7][7];
 for(i=0;i<540;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 8 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  0 1 0  0 0 0 */
 deriv_build_CY_l(Data,15,1,dvrr_stack+20997, dvrr_stack+16752, dvrr_stack+7957);
 tmp = dvrr_stack + 20997;
 target_ptr = Libderiv->deriv_classes[4][8][7];
 for(i=0;i<675;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 4 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  1 0 0  0 0 0 */
 deriv_build_CX_g(Data,15,1,dvrr_stack+15937, dvrr_stack+2566, dvrr_stack+16348);
 tmp = dvrr_stack + 15937;
 target_ptr = Libderiv->deriv_classes[4][4][6];
 for(i=0;i<225;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 5 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  1 0 0  0 0 0 */
 deriv_build_CX_h(Data,15,1,dvrr_stack+16162, dvrr_stack+4900, dvrr_stack+1333);
 tmp = dvrr_stack + 16162;
 target_ptr = Libderiv->deriv_classes[4][5][6];
 for(i=0;i<315;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 6 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  1 0 0  0 0 0 */
 deriv_build_CX_i(Data,15,1,dvrr_stack+5740, dvrr_stack+7957, dvrr_stack+2566);
 tmp = dvrr_stack + 5740;
 target_ptr = Libderiv->deriv_classes[4][6][6];
 for(i=0;i<420;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 7 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  1 0 0  0 0 0 */
 deriv_build_CX_k(Data,15,1,dvrr_stack+21672, dvrr_stack+11872, dvrr_stack+4900);
 tmp = dvrr_stack + 21672;
 target_ptr = Libderiv->deriv_classes[4][7][6];
 for(i=0;i<540;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 8 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 0  0 0 0  1 0 0  0 0 0 */
 deriv_build_CX_l(Data,15,1,dvrr_stack+11872, dvrr_stack+16752, dvrr_stack+7957);
 tmp = dvrr_stack + 11872;
 target_ptr = Libderiv->deriv_classes[4][8][6];
 for(i=0;i<675;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 4 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 1  0 0 0  0 0 0  0 0 0 */
 deriv_build_AZ_g(Data,15,dvrr_stack+1333, dvrr_stack+10162, dvrr_stack+1183);
 tmp = dvrr_stack + 1333;
 target_ptr = Libderiv->deriv_classes[4][4][2];
 for(i=0;i<225;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 5 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 1  0 0 0  0 0 0  0 0 0 */
 deriv_build_AZ_g(Data,21,dvrr_stack+2566, dvrr_stack+17577, dvrr_stack+2356);
 tmp = dvrr_stack + 2566;
 target_ptr = Libderiv->deriv_classes[4][5][2];
 for(i=0;i<315;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 6 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 1  0 0 0  0 0 0  0 0 0 */
 deriv_build_AZ_g(Data,28,dvrr_stack+4900, dvrr_stack+18438, dvrr_stack+4620);
 tmp = dvrr_stack + 4900;
 target_ptr = Libderiv->deriv_classes[4][6][2];
 for(i=0;i<420;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 7 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 1  0 0 0  0 0 0  0 0 0 */
 deriv_build_AZ_g(Data,36,dvrr_stack+7957, dvrr_stack+19026, dvrr_stack+7597);
 tmp = dvrr_stack + 7957;
 target_ptr = Libderiv->deriv_classes[4][7][2];
 for(i=0;i<540;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 8 0) m=0 deriv level 1 */
 /* deriv_ind: 0 0 1  0 0 0  0 0 0  0 0 0 */
 deriv_build_AZ_g(Data,45,dvrr_stack+16477, dvrr_stack+0, dvrr_stack+11422);
 tmp = dvrr_stack + 16477;
 target_ptr = Libderiv->deriv_classes[4][8][2];
 for(i=0;i<675;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 4 0) m=0 deriv level 1 */
 /* deriv_ind: 0 1 0  0 0 0  0 0 0  0 0 0 */
 deriv_build_AY_g(Data,15,dvrr_stack+17152, dvrr_stack+10162, dvrr_stack+1183);
 tmp = dvrr_stack + 17152;
 target_ptr = Libderiv->deriv_classes[4][4][1];
 for(i=0;i<225;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 5 0) m=0 deriv level 1 */
 /* deriv_ind: 0 1 0  0 0 0  0 0 0  0 0 0 */
 deriv_build_AY_g(Data,21,dvrr_stack+3196, dvrr_stack+17577, dvrr_stack+2356);
 tmp = dvrr_stack + 3196;
 target_ptr = Libderiv->deriv_classes[4][5][1];
 for(i=0;i<315;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 6 0) m=0 deriv level 1 */
 /* deriv_ind: 0 1 0  0 0 0  0 0 0  0 0 0 */
 deriv_build_AY_g(Data,28,dvrr_stack+10897, dvrr_stack+18438, dvrr_stack+4620);
 tmp = dvrr_stack + 10897;
 target_ptr = Libderiv->deriv_classes[4][6][1];
 for(i=0;i<420;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 7 0) m=0 deriv level 1 */
 /* deriv_ind: 0 1 0  0 0 0  0 0 0  0 0 0 */
 deriv_build_AY_g(Data,36,dvrr_stack+22212, dvrr_stack+19026, dvrr_stack+7597);
 tmp = dvrr_stack + 22212;
 target_ptr = Libderiv->deriv_classes[4][7][1];
 for(i=0;i<540;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 8 0) m=0 deriv level 1 */
 /* deriv_ind: 0 1 0  0 0 0  0 0 0  0 0 0 */
 deriv_build_AY_g(Data,45,dvrr_stack+22752, dvrr_stack+0, dvrr_stack+11422);
 tmp = dvrr_stack + 22752;
 target_ptr = Libderiv->deriv_classes[4][8][1];
 for(i=0;i<675;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 4 0) m=0 deriv level 1 */
 /* deriv_ind: 1 0 0  0 0 0  0 0 0  0 0 0 */
 deriv_build_AX_g(Data,15,dvrr_stack+9457, dvrr_stack+10162, dvrr_stack+1183);
 tmp = dvrr_stack + 9457;
 target_ptr = Libderiv->deriv_classes[4][4][0];
 for(i=0;i<225;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 5 0) m=0 deriv level 1 */
 /* deriv_ind: 1 0 0  0 0 0  0 0 0  0 0 0 */
 deriv_build_AX_g(Data,21,dvrr_stack+945, dvrr_stack+17577, dvrr_stack+2356);
 tmp = dvrr_stack + 945;
 target_ptr = Libderiv->deriv_classes[4][5][0];
 for(i=0;i<315;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 6 0) m=0 deriv level 1 */
 /* deriv_ind: 1 0 0  0 0 0  0 0 0  0 0 0 */
 deriv_build_AX_g(Data,28,dvrr_stack+17377, dvrr_stack+18438, dvrr_stack+4620);
 tmp = dvrr_stack + 17377;
 target_ptr = Libderiv->deriv_classes[4][6][0];
 for(i=0;i<420;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 7 0) m=0 deriv level 1 */
 /* deriv_ind: 1 0 0  0 0 0  0 0 0  0 0 0 */
 deriv_build_AX_g(Data,36,dvrr_stack+18438, dvrr_stack+19026, dvrr_stack+7597);
 tmp = dvrr_stack + 18438;
 target_ptr = Libderiv->deriv_classes[4][7][0];
 for(i=0;i<540;i++)
   target_ptr[i] += tmp[i];

 /* compute (4 0 | 8 0) m=0 deriv level 1 */
 /* deriv_ind: 1 0 0  0 0 0  0 0 0  0 0 0 */
 deriv_build_AX_g(Data,45,dvrr_stack+18978, dvrr_stack+0, dvrr_stack+11422);
 tmp = dvrr_stack + 18978;
 target_ptr = Libderiv->deriv_classes[4][8][0];
 for(i=0;i<675;i++)
   target_ptr[i] += tmp[i];


}

