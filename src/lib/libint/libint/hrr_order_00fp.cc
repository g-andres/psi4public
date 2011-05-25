#include <stdio.h>
#include <string.h>
#include "libint.h"
#include "hrr_header.h"

extern void vrr_order_00fp(Libint_t*, prim_data*);

  /* Computes quartets of (00|fp) integrals */

REALTYPE *hrr_order_00fp(Libint_t *Libint, int num_prim_comb)
{
 prim_data *Data = Libint->PrimQuartet;
 REALTYPE *int_stack = Libint->int_stack;
 int i;

 Libint->vrr_classes[0][3] = int_stack + 0;
 Libint->vrr_classes[0][4] = int_stack + 10;
 memset(int_stack,0,25*sizeof(REALTYPE));

 Libint->vrr_stack = int_stack + 25;
 for(i=0;i<num_prim_comb;i++) {
   vrr_order_00fp(Libint, Data);
   Data++;
 }
 /*--- compute (00|fp) ---*/
 hrr3_build_fp(Libint->CD,int_stack+25,int_stack+10,int_stack+0,1);
 return int_stack+25;}
