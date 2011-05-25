#include <stdio.h>
#include <string.h>
#include "libint.h"
#include "hrr_header.h"

extern void vrr_order_00hp(Libint_t*, prim_data*);

  /* Computes quartets of (00|hp) integrals */

REALTYPE *hrr_order_00hp(Libint_t *Libint, int num_prim_comb)
{
 prim_data *Data = Libint->PrimQuartet;
 REALTYPE *int_stack = Libint->int_stack;
 int i;

 Libint->vrr_classes[0][5] = int_stack + 0;
 Libint->vrr_classes[0][6] = int_stack + 21;
 memset(int_stack,0,49*sizeof(REALTYPE));

 Libint->vrr_stack = int_stack + 49;
 for(i=0;i<num_prim_comb;i++) {
   vrr_order_00hp(Libint, Data);
   Data++;
 }
 /*--- compute (00|hp) ---*/
 hrr3_build_hp(Libint->CD,int_stack+49,int_stack+21,int_stack+0,1);
 return int_stack+49;}
