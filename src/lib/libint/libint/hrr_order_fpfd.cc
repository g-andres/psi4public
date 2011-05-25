#include <stdio.h>
#include <string.h>
#include "libint.h"
#include "hrr_header.h"

extern void vrr_order_fpfd(Libint_t*, prim_data*);

  /* Computes quartets of (fp|fd) integrals */

REALTYPE *hrr_order_fpfd(Libint_t *Libint, int num_prim_comb)
{
 prim_data *Data = Libint->PrimQuartet;
 REALTYPE *int_stack = Libint->int_stack;
 int i;

 Libint->vrr_classes[3][3] = int_stack + 0;
 Libint->vrr_classes[3][4] = int_stack + 100;
 Libint->vrr_classes[3][5] = int_stack + 250;
 Libint->vrr_classes[4][3] = int_stack + 460;
 Libint->vrr_classes[4][4] = int_stack + 610;
 Libint->vrr_classes[4][5] = int_stack + 835;
 memset(int_stack,0,1150*sizeof(REALTYPE));

 Libint->vrr_stack = int_stack + 1150;
 for(i=0;i<num_prim_comb;i++) {
   vrr_order_fpfd(Libint, Data);
   Data++;
 }
 /*--- compute (f0|fp) ---*/
 hrr3_build_fp(Libint->CD,int_stack+1150,int_stack+100,int_stack+0,10);
 /*--- compute (f0|gp) ---*/
 hrr3_build_gp(Libint->CD,int_stack+1450,int_stack+250,int_stack+100,10);
 /*--- compute (f0|fd) ---*/
 hrr3_build_fd(Libint->CD,int_stack+1900,int_stack+1450,int_stack+1150,10);
 /*--- compute (g0|fp) ---*/
 hrr3_build_fp(Libint->CD,int_stack+1150,int_stack+610,int_stack+460,15);
 /*--- compute (g0|gp) ---*/
 hrr3_build_gp(Libint->CD,int_stack+2500,int_stack+835,int_stack+610,15);
 /*--- compute (g0|fd) ---*/
 hrr3_build_fd(Libint->CD,int_stack+0,int_stack+2500,int_stack+1150,15);
 /*--- compute (fp|fd) ---*/
 hrr1_build_fp(Libint->AB,int_stack+2500,int_stack+0,int_stack+1900,60);
 return int_stack+2500;}
