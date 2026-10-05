// Lean compiler output
// Module: LanglandsOracles.ImageMod2
// Imports: public import Init public meta import Init public import LanglandsOracles.Generation public import LanglandsOracles.Data
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Fin_add(lean_object*, lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
extern lean_object* l_Int_instInhabited;
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_Mat2_det(lean_object*, lean_object*);
lean_object* l_instDecidableEqFin___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableEqProd___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_mul(lean_object*, lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_Mat2_gl(lean_object*);
uint8_t lp_LanglandsOracles_Oracles_instDecidableEqM2_decEq___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_invariants2_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_invariants2_spec__0___boxed(lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0;
static lean_once_cell_t lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__1;
static lean_once_cell_t lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__2;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1;
static const lean_closure_object lp_LanglandsOracles_Oracles_Mat2_invariants2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instDecidableEqFin___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))} };
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_invariants2___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_invariants2___closed__0_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_invariants2(lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_ord3___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_ord3___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_ord3___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_ord3___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_LanglandsOracles_Oracles_Mat2_ord3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LanglandsOracles_Oracles_Mat2_ord3___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_ord3___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_ord3___closed__0_value;
static const lean_closure_object lp_LanglandsOracles_Oracles_Mat2_ord3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LanglandsOracles_Oracles_Mat2_ord3___lam__1___boxed, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_invariants2___closed__0_value),((lean_object*)&lp_LanglandsOracles_Oracles_Mat2_ord3___closed__0_value)} };
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_ord3___closed__1 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_ord3___closed__1_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_ord3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_ord3___closed__2;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_ord3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_ord3___closed__3;
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_ord3(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_ord3___boxed(lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_ord2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_ord2___closed__0;
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_ord2(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_ord2___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_apply(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_apply___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__0;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__1;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__2;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__3;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__4;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__5;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_nonzero;
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Mat2_stab_spec__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_stab___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_stab___closed__0;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_stab(lean_object*);
static lean_once_cell_t lp_LanglandsOracles_List_filterTR_loop___at___00List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00List_foldl___at___00Oracles_pointCountGeneral_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00List_foldl___at___00Oracles_pointCountGeneral_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_pointCountGeneral_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_pointCountGeneral_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_pointCountGeneral___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_pointCountGeneral___closed__0;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_pointCountGeneral(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_pointCountGeneral___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_apGeneral(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_apGeneral___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_ofList2___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_ofList2___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_ofList2(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_ofList2___boxed(lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_psi2AtRational___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_psi2AtRational___closed__0;
static lean_once_cell_t lp_LanglandsOracles_Oracles_psi2AtRational___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_psi2AtRational___closed__1;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_psi2AtRational(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_psi2AtRational___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_any___at___00Oracles_hasWitness_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_any___at___00Oracles_hasWitness_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_hasWitness(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_hasWitness___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_mod2Certified_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_mod2Certified_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_mod2Certified_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_mod2Certified_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_mod2Certified_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_mod2Certified_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_LanglandsOracles_Oracles_mod2Certified___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LanglandsOracles_Oracles_Mat2_ord2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LanglandsOracles_Oracles_mod2Certified___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_mod2Certified___closed__0_value;
static const lean_closure_object lp_LanglandsOracles_Oracles_mod2Certified___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LanglandsOracles_Oracles_Mat2_ord3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LanglandsOracles_Oracles_mod2Certified___closed__1 = (const lean_object*)&lp_LanglandsOracles_Oracles_mod2Certified___closed__1_value;
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_mod2Certified(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_mod2Certified___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_invariants2_spec__0(lean_object* v_x_1_){
_start:
{
lean_object* v_a_2_; lean_object* v_d_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v_a_2_ = lean_ctor_get(v_x_1_, 0);
v_d_3_ = lean_ctor_get(v_x_1_, 3);
v___x_4_ = lean_unsigned_to_nat(2u);
v___x_5_ = l_Fin_add(v___x_4_, v_a_2_, v_d_3_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_invariants2_spec__0___boxed(lean_object* v_x_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_invariants2_spec__0(v_x_6_);
lean_dec_ref(v_x_6_);
return v_res_7_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_8_ = lean_unsigned_to_nat(2u);
v___x_9_ = lean_unsigned_to_nat(1u);
v___x_10_ = lean_nat_mod(v___x_9_, v___x_8_);
return v___x_10_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__1(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = lean_unsigned_to_nat(2u);
v___x_12_ = lean_unsigned_to_nat(0u);
v___x_13_ = lean_nat_mod(v___x_12_, v___x_11_);
return v___x_13_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__2(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_14_ = lean_obj_once(&lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__1, &lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__1_once, _init_lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__1);
v___x_15_ = lean_obj_once(&lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0, &lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0_once, _init_lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0);
v___x_16_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
lean_ctor_set(v___x_16_, 1, v___x_14_);
lean_ctor_set(v___x_16_, 2, v___x_14_);
lean_ctor_set(v___x_16_, 3, v___x_15_);
return v___x_16_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_obj_once(&lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__2, &lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__2_once, _init_lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__2);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_invariants2(lean_object* v_x_20_){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; uint8_t v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_21_ = lean_unsigned_to_nat(2u);
v___x_22_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_invariants2_spec__0(v_x_20_);
v___x_23_ = lp_LanglandsOracles_Oracles_Mat2_det(v___x_21_, v_x_20_);
v___x_24_ = lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1;
v___x_25_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2_invariants2___closed__0));
v___x_26_ = lp_LanglandsOracles_Oracles_instDecidableEqM2_decEq___redArg(v___x_25_, v_x_20_, v___x_24_);
v___x_27_ = lean_box(v___x_26_);
v___x_28_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_28_, 0, v___x_23_);
lean_ctor_set(v___x_28_, 1, v___x_27_);
v___x_29_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_29_, 0, v___x_22_);
lean_ctor_set(v___x_29_, 1, v___x_28_);
return v___x_29_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_ord3___lam__0(uint8_t v___y_30_, uint8_t v___y_31_){
_start:
{
if (v___y_30_ == 0)
{
if (v___y_31_ == 0)
{
uint8_t v___x_32_; 
v___x_32_ = 1;
return v___x_32_;
}
else
{
return v___y_30_;
}
}
else
{
return v___y_31_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_ord3___lam__0___boxed(lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
uint8_t v___y_35__boxed_35_; uint8_t v___y_36__boxed_36_; uint8_t v_res_37_; lean_object* v_r_38_; 
v___y_35__boxed_35_ = lean_unbox(v___y_33_);
v___y_36__boxed_36_ = lean_unbox(v___y_34_);
v_res_37_ = lp_LanglandsOracles_Oracles_Mat2_ord3___lam__0(v___y_35__boxed_35_, v___y_36__boxed_36_);
v_r_38_ = lean_box(v_res_37_);
return v_r_38_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_ord3___lam__1(lean_object* v___x_39_, lean_object* v___f_40_, lean_object* v_a_41_, lean_object* v_b_42_){
_start:
{
uint8_t v___x_43_; 
v___x_43_ = l_instDecidableEqProd___redArg(v___x_39_, v___f_40_, v_a_41_, v_b_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_ord3___lam__1___boxed(lean_object* v___x_44_, lean_object* v___f_45_, lean_object* v_a_46_, lean_object* v_b_47_){
_start:
{
uint8_t v_res_48_; lean_object* v_r_49_; 
v_res_48_ = lp_LanglandsOracles_Oracles_Mat2_ord3___lam__1(v___x_44_, v___f_45_, v_a_46_, v_b_47_);
v_r_49_ = lean_box(v_res_48_);
return v_r_49_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_ord3___closed__2(void){
_start:
{
uint8_t v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_54_ = 0;
v___x_55_ = lean_obj_once(&lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0, &lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0_once, _init_lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0);
v___x_56_ = lean_box(v___x_54_);
v___x_57_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_57_, 0, v___x_55_);
lean_ctor_set(v___x_57_, 1, v___x_56_);
return v___x_57_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_ord3___closed__3(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_58_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_ord3___closed__2, &lp_LanglandsOracles_Oracles_Mat2_ord3___closed__2_once, _init_lp_LanglandsOracles_Oracles_Mat2_ord3___closed__2);
v___x_59_ = lean_obj_once(&lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0, &lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0_once, _init_lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0);
v___x_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
lean_ctor_set(v___x_60_, 1, v___x_58_);
return v___x_60_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_ord3(lean_object* v_x_61_){
_start:
{
lean_object* v___x_62_; lean_object* v___f_63_; lean_object* v___x_64_; lean_object* v___x_65_; uint8_t v___x_66_; 
v___x_62_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2_invariants2___closed__0));
v___f_63_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2_ord3___closed__1));
v___x_64_ = lp_LanglandsOracles_Oracles_Mat2_invariants2(v_x_61_);
v___x_65_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_ord3___closed__3, &lp_LanglandsOracles_Oracles_Mat2_ord3___closed__3_once, _init_lp_LanglandsOracles_Oracles_Mat2_ord3___closed__3);
v___x_66_ = l_instDecidableEqProd___redArg(v___x_62_, v___f_63_, v___x_64_, v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_ord3___boxed(lean_object* v_x_67_){
_start:
{
uint8_t v_res_68_; lean_object* v_r_69_; 
v_res_68_ = lp_LanglandsOracles_Oracles_Mat2_ord3(v_x_67_);
v_r_69_ = lean_box(v_res_68_);
return v_r_69_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_ord2___closed__0(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_ord3___closed__2, &lp_LanglandsOracles_Oracles_Mat2_ord3___closed__2_once, _init_lp_LanglandsOracles_Oracles_Mat2_ord3___closed__2);
v___x_71_ = lean_obj_once(&lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__1, &lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__1_once, _init_lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__1);
v___x_72_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
lean_ctor_set(v___x_72_, 1, v___x_70_);
return v___x_72_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_ord2(lean_object* v_x_73_){
_start:
{
lean_object* v___x_74_; lean_object* v___f_75_; lean_object* v___x_76_; lean_object* v___x_77_; uint8_t v___x_78_; 
v___x_74_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2_invariants2___closed__0));
v___f_75_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2_ord3___closed__1));
v___x_76_ = lp_LanglandsOracles_Oracles_Mat2_invariants2(v_x_73_);
v___x_77_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_ord2___closed__0, &lp_LanglandsOracles_Oracles_Mat2_ord2___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_ord2___closed__0);
v___x_78_ = l_instDecidableEqProd___redArg(v___x_74_, v___f_75_, v___x_76_, v___x_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_ord2___boxed(lean_object* v_x_79_){
_start:
{
uint8_t v_res_80_; lean_object* v_r_81_; 
v_res_80_ = lp_LanglandsOracles_Oracles_Mat2_ord2(v_x_79_);
v_r_81_ = lean_box(v_res_80_);
return v_r_81_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_apply(lean_object* v_g_82_, lean_object* v_v_83_){
_start:
{
lean_object* v_a_84_; lean_object* v_b_85_; lean_object* v_c_86_; lean_object* v_d_87_; lean_object* v_fst_88_; lean_object* v_snd_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_103_; 
v_a_84_ = lean_ctor_get(v_g_82_, 0);
v_b_85_ = lean_ctor_get(v_g_82_, 1);
v_c_86_ = lean_ctor_get(v_g_82_, 2);
v_d_87_ = lean_ctor_get(v_g_82_, 3);
v_fst_88_ = lean_ctor_get(v_v_83_, 0);
v_snd_89_ = lean_ctor_get(v_v_83_, 1);
v_isSharedCheck_103_ = !lean_is_exclusive(v_v_83_);
if (v_isSharedCheck_103_ == 0)
{
v___x_91_ = v_v_83_;
v_isShared_92_ = v_isSharedCheck_103_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_snd_89_);
lean_inc(v_fst_88_);
lean_dec(v_v_83_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_103_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_101_; 
v___x_93_ = lean_unsigned_to_nat(2u);
v___x_94_ = l_Fin_mul(v___x_93_, v_a_84_, v_fst_88_);
v___x_95_ = l_Fin_mul(v___x_93_, v_b_85_, v_snd_89_);
v___x_96_ = l_Fin_add(v___x_93_, v___x_94_, v___x_95_);
lean_dec(v___x_95_);
lean_dec(v___x_94_);
v___x_97_ = l_Fin_mul(v___x_93_, v_c_86_, v_fst_88_);
lean_dec(v_fst_88_);
v___x_98_ = l_Fin_mul(v___x_93_, v_d_87_, v_snd_89_);
lean_dec(v_snd_89_);
v___x_99_ = l_Fin_add(v___x_93_, v___x_97_, v___x_98_);
lean_dec(v___x_98_);
lean_dec(v___x_97_);
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 1, v___x_99_);
lean_ctor_set(v___x_91_, 0, v___x_96_);
v___x_101_ = v___x_91_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v___x_96_);
lean_ctor_set(v_reuseFailAlloc_102_, 1, v___x_99_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
return v___x_101_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_apply___boxed(lean_object* v_g_104_, lean_object* v_v_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = lp_LanglandsOracles_Oracles_Mat2_apply(v_g_104_, v_v_105_);
lean_dec_ref(v_g_104_);
return v_res_106_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__0(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = lean_obj_once(&lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__1, &lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__1_once, _init_lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__1);
v___x_108_ = lean_obj_once(&lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0, &lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0_once, _init_lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0);
v___x_109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
lean_ctor_set(v___x_109_, 1, v___x_107_);
return v___x_109_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__1(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_110_ = lean_obj_once(&lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0, &lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0_once, _init_lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0);
v___x_111_ = lean_obj_once(&lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__1, &lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__1_once, _init_lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__1);
v___x_112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
lean_ctor_set(v___x_112_, 1, v___x_110_);
return v___x_112_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__2(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_113_ = lean_obj_once(&lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0, &lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0_once, _init_lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1___closed__0);
v___x_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
lean_ctor_set(v___x_114_, 1, v___x_113_);
return v___x_114_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__3(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_115_ = lean_box(0);
v___x_116_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__2, &lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__2_once, _init_lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__2);
v___x_117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v___x_115_);
return v___x_117_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__4(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_118_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__3, &lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__3_once, _init_lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__3);
v___x_119_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__1, &lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__1_once, _init_lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__1);
v___x_120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
lean_ctor_set(v___x_120_, 1, v___x_118_);
return v___x_120_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__5(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_121_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__4, &lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__4_once, _init_lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__4);
v___x_122_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__0, &lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__0);
v___x_123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
lean_ctor_set(v___x_123_, 1, v___x_121_);
return v___x_123_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_nonzero(void){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__5, &lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__5_once, _init_lp_LanglandsOracles_Oracles_Mat2_nonzero___closed__5);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Mat2_stab_spec__0(lean_object* v_v_125_, lean_object* v_a_126_, lean_object* v_a_127_){
_start:
{
if (lean_obj_tag(v_a_126_) == 0)
{
lean_object* v___x_128_; 
lean_dec_ref(v_v_125_);
v___x_128_ = l_List_reverse___redArg(v_a_127_);
return v___x_128_;
}
else
{
lean_object* v_head_129_; lean_object* v_tail_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_148_; 
v_head_129_ = lean_ctor_get(v_a_126_, 0);
v_tail_130_ = lean_ctor_get(v_a_126_, 1);
v_isSharedCheck_148_ = !lean_is_exclusive(v_a_126_);
if (v_isSharedCheck_148_ == 0)
{
v___x_132_ = v_a_126_;
v_isShared_133_ = v_isSharedCheck_148_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_tail_130_);
lean_inc(v_head_129_);
lean_dec(v_a_126_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_148_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
uint8_t v___y_135_; lean_object* v___x_141_; lean_object* v_fst_142_; lean_object* v_snd_143_; lean_object* v_fst_144_; lean_object* v_snd_145_; uint8_t v___x_146_; 
lean_inc_ref(v_v_125_);
v___x_141_ = lp_LanglandsOracles_Oracles_Mat2_apply(v_head_129_, v_v_125_);
v_fst_142_ = lean_ctor_get(v___x_141_, 0);
lean_inc(v_fst_142_);
v_snd_143_ = lean_ctor_get(v___x_141_, 1);
lean_inc(v_snd_143_);
lean_dec_ref(v___x_141_);
v_fst_144_ = lean_ctor_get(v_v_125_, 0);
v_snd_145_ = lean_ctor_get(v_v_125_, 1);
v___x_146_ = lean_nat_dec_eq(v_fst_142_, v_fst_144_);
lean_dec(v_fst_142_);
if (v___x_146_ == 0)
{
lean_dec(v_snd_143_);
v___y_135_ = v___x_146_;
goto v___jp_134_;
}
else
{
uint8_t v___x_147_; 
v___x_147_ = lean_nat_dec_eq(v_snd_143_, v_snd_145_);
lean_dec(v_snd_143_);
v___y_135_ = v___x_147_;
goto v___jp_134_;
}
v___jp_134_:
{
if (v___y_135_ == 0)
{
lean_del_object(v___x_132_);
lean_dec(v_head_129_);
v_a_126_ = v_tail_130_;
goto _start;
}
else
{
lean_object* v___x_138_; 
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 1, v_a_127_);
v___x_138_ = v___x_132_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v_head_129_);
lean_ctor_set(v_reuseFailAlloc_140_, 1, v_a_127_);
v___x_138_ = v_reuseFailAlloc_140_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
v_a_126_ = v_tail_130_;
v_a_127_ = v___x_138_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_stab___closed__0(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = lean_unsigned_to_nat(2u);
v___x_150_ = lp_LanglandsOracles_Oracles_Mat2_gl(v___x_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_stab(lean_object* v_v_151_){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_152_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_stab___closed__0, &lp_LanglandsOracles_Oracles_Mat2_stab___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_stab___closed__0);
v___x_153_ = lean_box(0);
v___x_154_ = lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Mat2_stab_spec__0(v_v_151_, v___x_152_, v___x_153_);
return v___x_154_;
}
}
static lean_object* _init_lp_LanglandsOracles_List_filterTR_loop___at___00List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = lean_unsigned_to_nat(0u);
v___x_156_ = lean_nat_to_int(v___x_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0_spec__0(lean_object* v_a1_157_, lean_object* v_xi_158_, lean_object* v_a3_159_, lean_object* v_a2_160_, lean_object* v_a4_161_, lean_object* v_a6_162_, lean_object* v_p_163_, lean_object* v_a_164_, lean_object* v_a_165_){
_start:
{
if (lean_obj_tag(v_a_164_) == 0)
{
lean_object* v___x_166_; 
lean_dec(v_p_163_);
v___x_166_ = l_List_reverse___redArg(v_a_165_);
return v___x_166_;
}
else
{
lean_object* v_head_167_; lean_object* v_tail_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_197_; 
v_head_167_ = lean_ctor_get(v_a_164_, 0);
v_tail_168_ = lean_ctor_get(v_a_164_, 1);
v_isSharedCheck_197_ = !lean_is_exclusive(v_a_164_);
if (v_isSharedCheck_197_ == 0)
{
v___x_170_ = v_a_164_;
v_isShared_171_ = v_isSharedCheck_197_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_tail_168_);
lean_inc(v_head_167_);
lean_dec(v_a_164_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_197_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_172_; lean_object* v_yi_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; uint8_t v___x_191_; 
v___x_172_ = lean_unsigned_to_nat(3u);
lean_inc(v_head_167_);
v_yi_173_ = lean_nat_to_int(v_head_167_);
v___x_174_ = lean_int_mul(v_yi_173_, v_yi_173_);
v___x_175_ = lean_int_mul(v_a1_157_, v_xi_158_);
v___x_176_ = lean_int_mul(v___x_175_, v_yi_173_);
lean_dec(v___x_175_);
v___x_177_ = lean_int_add(v___x_174_, v___x_176_);
lean_dec(v___x_176_);
lean_dec(v___x_174_);
v___x_178_ = lean_int_mul(v_a3_159_, v_yi_173_);
lean_dec(v_yi_173_);
v___x_179_ = lean_int_add(v___x_177_, v___x_178_);
lean_dec(v___x_178_);
lean_dec(v___x_177_);
v___x_180_ = l_Int_pow(v_xi_158_, v___x_172_);
v___x_181_ = lean_int_mul(v_a2_160_, v_xi_158_);
v___x_182_ = lean_int_mul(v___x_181_, v_xi_158_);
lean_dec(v___x_181_);
v___x_183_ = lean_int_add(v___x_180_, v___x_182_);
lean_dec(v___x_182_);
lean_dec(v___x_180_);
v___x_184_ = lean_int_mul(v_a4_161_, v_xi_158_);
v___x_185_ = lean_int_add(v___x_183_, v___x_184_);
lean_dec(v___x_184_);
lean_dec(v___x_183_);
v___x_186_ = lean_int_add(v___x_185_, v_a6_162_);
lean_dec(v___x_185_);
v___x_187_ = lean_int_sub(v___x_179_, v___x_186_);
lean_dec(v___x_186_);
lean_dec(v___x_179_);
lean_inc(v_p_163_);
v___x_188_ = lean_nat_to_int(v_p_163_);
v___x_189_ = lean_int_emod(v___x_187_, v___x_188_);
lean_dec(v___x_188_);
lean_dec(v___x_187_);
v___x_190_ = lean_obj_once(&lp_LanglandsOracles_List_filterTR_loop___at___00List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0_spec__0___closed__0, &lp_LanglandsOracles_List_filterTR_loop___at___00List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0_spec__0___closed__0_once, _init_lp_LanglandsOracles_List_filterTR_loop___at___00List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0_spec__0___closed__0);
v___x_191_ = lean_int_dec_eq(v___x_189_, v___x_190_);
lean_dec(v___x_189_);
if (v___x_191_ == 0)
{
lean_del_object(v___x_170_);
lean_dec(v_head_167_);
v_a_164_ = v_tail_168_;
goto _start;
}
else
{
lean_object* v___x_194_; 
if (v_isShared_171_ == 0)
{
lean_ctor_set(v___x_170_, 1, v_a_165_);
v___x_194_ = v___x_170_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v_head_167_);
lean_ctor_set(v_reuseFailAlloc_196_, 1, v_a_165_);
v___x_194_ = v_reuseFailAlloc_196_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
v_a_164_ = v_tail_168_;
v_a_165_ = v___x_194_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0_spec__0___boxed(lean_object* v_a1_198_, lean_object* v_xi_199_, lean_object* v_a3_200_, lean_object* v_a2_201_, lean_object* v_a4_202_, lean_object* v_a6_203_, lean_object* v_p_204_, lean_object* v_a_205_, lean_object* v_a_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = lp_LanglandsOracles_List_filterTR_loop___at___00List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0_spec__0(v_a1_198_, v_xi_199_, v_a3_200_, v_a2_201_, v_a4_202_, v_a6_203_, v_p_204_, v_a_205_, v_a_206_);
lean_dec(v_a6_203_);
lean_dec(v_a4_202_);
lean_dec(v_a2_201_);
lean_dec(v_a3_200_);
lean_dec(v_xi_199_);
lean_dec(v_a1_198_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0(lean_object* v_a1_208_, lean_object* v_xi_209_, lean_object* v_a3_210_, lean_object* v_a2_211_, lean_object* v_a4_212_, lean_object* v_a6_213_, lean_object* v_p_214_, lean_object* v_a_215_, lean_object* v_a_216_){
_start:
{
if (lean_obj_tag(v_a_215_) == 0)
{
lean_object* v___x_217_; 
lean_dec(v_p_214_);
v___x_217_ = l_List_reverse___redArg(v_a_216_);
return v___x_217_;
}
else
{
lean_object* v_head_218_; lean_object* v_tail_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_248_; 
v_head_218_ = lean_ctor_get(v_a_215_, 0);
v_tail_219_ = lean_ctor_get(v_a_215_, 1);
v_isSharedCheck_248_ = !lean_is_exclusive(v_a_215_);
if (v_isSharedCheck_248_ == 0)
{
v___x_221_ = v_a_215_;
v_isShared_222_ = v_isSharedCheck_248_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_tail_219_);
lean_inc(v_head_218_);
lean_dec(v_a_215_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_248_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v___x_223_; lean_object* v_yi_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; uint8_t v___x_242_; 
v___x_223_ = lean_unsigned_to_nat(3u);
lean_inc(v_head_218_);
v_yi_224_ = lean_nat_to_int(v_head_218_);
v___x_225_ = lean_int_mul(v_yi_224_, v_yi_224_);
v___x_226_ = lean_int_mul(v_a1_208_, v_xi_209_);
v___x_227_ = lean_int_mul(v___x_226_, v_yi_224_);
lean_dec(v___x_226_);
v___x_228_ = lean_int_add(v___x_225_, v___x_227_);
lean_dec(v___x_227_);
lean_dec(v___x_225_);
v___x_229_ = lean_int_mul(v_a3_210_, v_yi_224_);
lean_dec(v_yi_224_);
v___x_230_ = lean_int_add(v___x_228_, v___x_229_);
lean_dec(v___x_229_);
lean_dec(v___x_228_);
v___x_231_ = l_Int_pow(v_xi_209_, v___x_223_);
v___x_232_ = lean_int_mul(v_a2_211_, v_xi_209_);
v___x_233_ = lean_int_mul(v___x_232_, v_xi_209_);
lean_dec(v___x_232_);
v___x_234_ = lean_int_add(v___x_231_, v___x_233_);
lean_dec(v___x_233_);
lean_dec(v___x_231_);
v___x_235_ = lean_int_mul(v_a4_212_, v_xi_209_);
v___x_236_ = lean_int_add(v___x_234_, v___x_235_);
lean_dec(v___x_235_);
lean_dec(v___x_234_);
v___x_237_ = lean_int_add(v___x_236_, v_a6_213_);
lean_dec(v___x_236_);
v___x_238_ = lean_int_sub(v___x_230_, v___x_237_);
lean_dec(v___x_237_);
lean_dec(v___x_230_);
lean_inc(v_p_214_);
v___x_239_ = lean_nat_to_int(v_p_214_);
v___x_240_ = lean_int_emod(v___x_238_, v___x_239_);
lean_dec(v___x_239_);
lean_dec(v___x_238_);
v___x_241_ = lean_obj_once(&lp_LanglandsOracles_List_filterTR_loop___at___00List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0_spec__0___closed__0, &lp_LanglandsOracles_List_filterTR_loop___at___00List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0_spec__0___closed__0_once, _init_lp_LanglandsOracles_List_filterTR_loop___at___00List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0_spec__0___closed__0);
v___x_242_ = lean_int_dec_eq(v___x_240_, v___x_241_);
lean_dec(v___x_240_);
if (v___x_242_ == 0)
{
lean_object* v___x_243_; 
lean_del_object(v___x_221_);
lean_dec(v_head_218_);
v___x_243_ = lp_LanglandsOracles_List_filterTR_loop___at___00List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0_spec__0(v_a1_208_, v_xi_209_, v_a3_210_, v_a2_211_, v_a4_212_, v_a6_213_, v_p_214_, v_tail_219_, v_a_216_);
return v___x_243_;
}
else
{
lean_object* v___x_245_; 
if (v_isShared_222_ == 0)
{
lean_ctor_set(v___x_221_, 1, v_a_216_);
v___x_245_ = v___x_221_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v_head_218_);
lean_ctor_set(v_reuseFailAlloc_247_, 1, v_a_216_);
v___x_245_ = v_reuseFailAlloc_247_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
lean_object* v___x_246_; 
v___x_246_ = lp_LanglandsOracles_List_filterTR_loop___at___00List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0_spec__0(v_a1_208_, v_xi_209_, v_a3_210_, v_a2_211_, v_a4_212_, v_a6_213_, v_p_214_, v_tail_219_, v___x_245_);
return v___x_246_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0___boxed(lean_object* v_a1_249_, lean_object* v_xi_250_, lean_object* v_a3_251_, lean_object* v_a2_252_, lean_object* v_a4_253_, lean_object* v_a6_254_, lean_object* v_p_255_, lean_object* v_a_256_, lean_object* v_a_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0(v_a1_249_, v_xi_250_, v_a3_251_, v_a2_252_, v_a4_253_, v_a6_254_, v_p_255_, v_a_256_, v_a_257_);
lean_dec(v_a6_254_);
lean_dec(v_a4_253_);
lean_dec(v_a2_252_);
lean_dec(v_a3_251_);
lean_dec(v_xi_250_);
lean_dec(v_a1_249_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00List_foldl___at___00Oracles_pointCountGeneral_spec__1_spec__2(lean_object* v_p_259_, lean_object* v_a1_260_, lean_object* v_a3_261_, lean_object* v_a2_262_, lean_object* v_a4_263_, lean_object* v_a6_264_, lean_object* v_x_265_, lean_object* v_x_266_){
_start:
{
if (lean_obj_tag(v_x_266_) == 0)
{
lean_dec(v_p_259_);
return v_x_265_;
}
else
{
lean_object* v_head_267_; lean_object* v_tail_268_; lean_object* v_xi_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v_head_267_ = lean_ctor_get(v_x_266_, 0);
lean_inc(v_head_267_);
v_tail_268_ = lean_ctor_get(v_x_266_, 1);
lean_inc(v_tail_268_);
lean_dec_ref_known(v_x_266_, 2);
v_xi_269_ = lean_nat_to_int(v_head_267_);
lean_inc_n(v_p_259_, 2);
v___x_270_ = l_List_range(v_p_259_);
v___x_271_ = lean_box(0);
v___x_272_ = lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0(v_a1_260_, v_xi_269_, v_a3_261_, v_a2_262_, v_a4_263_, v_a6_264_, v_p_259_, v___x_270_, v___x_271_);
lean_dec(v_xi_269_);
v___x_273_ = l_List_lengthTR___redArg(v___x_272_);
lean_dec(v___x_272_);
v___x_274_ = lean_nat_add(v_x_265_, v___x_273_);
lean_dec(v___x_273_);
lean_dec(v_x_265_);
v_x_265_ = v___x_274_;
v_x_266_ = v_tail_268_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00List_foldl___at___00Oracles_pointCountGeneral_spec__1_spec__2___boxed(lean_object* v_p_276_, lean_object* v_a1_277_, lean_object* v_a3_278_, lean_object* v_a2_279_, lean_object* v_a4_280_, lean_object* v_a6_281_, lean_object* v_x_282_, lean_object* v_x_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = lp_LanglandsOracles_List_foldl___at___00List_foldl___at___00Oracles_pointCountGeneral_spec__1_spec__2(v_p_276_, v_a1_277_, v_a3_278_, v_a2_279_, v_a4_280_, v_a6_281_, v_x_282_, v_x_283_);
lean_dec(v_a6_281_);
lean_dec(v_a4_280_);
lean_dec(v_a2_279_);
lean_dec(v_a3_278_);
lean_dec(v_a1_277_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_pointCountGeneral_spec__1(lean_object* v_a1_285_, lean_object* v_a3_286_, lean_object* v_a2_287_, lean_object* v_a4_288_, lean_object* v_a6_289_, lean_object* v_p_290_, lean_object* v_x_291_, lean_object* v_x_292_){
_start:
{
if (lean_obj_tag(v_x_292_) == 0)
{
lean_dec(v_p_290_);
lean_inc(v_x_291_);
return v_x_291_;
}
else
{
lean_object* v_head_293_; lean_object* v_tail_294_; lean_object* v_xi_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v_head_293_ = lean_ctor_get(v_x_292_, 0);
lean_inc(v_head_293_);
v_tail_294_ = lean_ctor_get(v_x_292_, 1);
lean_inc(v_tail_294_);
lean_dec_ref_known(v_x_292_, 2);
v_xi_295_ = lean_nat_to_int(v_head_293_);
lean_inc_n(v_p_290_, 2);
v___x_296_ = l_List_range(v_p_290_);
v___x_297_ = lean_box(0);
v___x_298_ = lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0(v_a1_285_, v_xi_295_, v_a3_286_, v_a2_287_, v_a4_288_, v_a6_289_, v_p_290_, v___x_296_, v___x_297_);
lean_dec(v_xi_295_);
v___x_299_ = l_List_lengthTR___redArg(v___x_298_);
lean_dec(v___x_298_);
v___x_300_ = lean_nat_add(v_x_291_, v___x_299_);
lean_dec(v___x_299_);
v___x_301_ = lp_LanglandsOracles_List_foldl___at___00List_foldl___at___00Oracles_pointCountGeneral_spec__1_spec__2(v_p_290_, v_a1_285_, v_a3_286_, v_a2_287_, v_a4_288_, v_a6_289_, v___x_300_, v_tail_294_);
return v___x_301_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_pointCountGeneral_spec__1___boxed(lean_object* v_a1_302_, lean_object* v_a3_303_, lean_object* v_a2_304_, lean_object* v_a4_305_, lean_object* v_a6_306_, lean_object* v_p_307_, lean_object* v_x_308_, lean_object* v_x_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = lp_LanglandsOracles_List_foldl___at___00Oracles_pointCountGeneral_spec__1(v_a1_302_, v_a3_303_, v_a2_304_, v_a4_305_, v_a6_306_, v_p_307_, v_x_308_, v_x_309_);
lean_dec(v_x_308_);
lean_dec(v_a6_306_);
lean_dec(v_a4_305_);
lean_dec(v_a2_304_);
lean_dec(v_a3_303_);
lean_dec(v_a1_302_);
return v_res_310_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_pointCountGeneral___closed__0(void){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_311_ = lean_unsigned_to_nat(1u);
v___x_312_ = lean_nat_to_int(v___x_311_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_pointCountGeneral(lean_object* v_a_313_, lean_object* v_p_314_){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v_a1_317_; lean_object* v___x_318_; lean_object* v_a2_319_; lean_object* v___x_320_; lean_object* v_a3_321_; lean_object* v___x_322_; lean_object* v_a4_323_; lean_object* v___x_324_; lean_object* v_a6_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_315_ = l_Int_instInhabited;
v___x_316_ = lean_unsigned_to_nat(0u);
v_a1_317_ = l_List_get_x21Internal___redArg(v___x_315_, v_a_313_, v___x_316_);
v___x_318_ = lean_unsigned_to_nat(1u);
v_a2_319_ = l_List_get_x21Internal___redArg(v___x_315_, v_a_313_, v___x_318_);
v___x_320_ = lean_unsigned_to_nat(2u);
v_a3_321_ = l_List_get_x21Internal___redArg(v___x_315_, v_a_313_, v___x_320_);
v___x_322_ = lean_unsigned_to_nat(3u);
v_a4_323_ = l_List_get_x21Internal___redArg(v___x_315_, v_a_313_, v___x_322_);
v___x_324_ = lean_unsigned_to_nat(4u);
v_a6_325_ = l_List_get_x21Internal___redArg(v___x_315_, v_a_313_, v___x_324_);
v___x_326_ = lean_obj_once(&lp_LanglandsOracles_Oracles_pointCountGeneral___closed__0, &lp_LanglandsOracles_Oracles_pointCountGeneral___closed__0_once, _init_lp_LanglandsOracles_Oracles_pointCountGeneral___closed__0);
lean_inc(v_p_314_);
v___x_327_ = l_List_range(v_p_314_);
v___x_328_ = lp_LanglandsOracles_List_foldl___at___00Oracles_pointCountGeneral_spec__1(v_a1_317_, v_a3_321_, v_a2_319_, v_a4_323_, v_a6_325_, v_p_314_, v___x_316_, v___x_327_);
lean_dec(v_a6_325_);
lean_dec(v_a4_323_);
lean_dec(v_a2_319_);
lean_dec(v_a3_321_);
lean_dec(v_a1_317_);
v___x_329_ = lean_nat_to_int(v___x_328_);
v___x_330_ = lean_int_add(v___x_326_, v___x_329_);
lean_dec(v___x_329_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_pointCountGeneral___boxed(lean_object* v_a_331_, lean_object* v_p_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = lp_LanglandsOracles_Oracles_pointCountGeneral(v_a_331_, v_p_332_);
lean_dec(v_a_331_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_apGeneral(lean_object* v_a_334_, lean_object* v_p_335_){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
lean_inc(v_p_335_);
v___x_336_ = lean_nat_to_int(v_p_335_);
v___x_337_ = lean_obj_once(&lp_LanglandsOracles_Oracles_pointCountGeneral___closed__0, &lp_LanglandsOracles_Oracles_pointCountGeneral___closed__0_once, _init_lp_LanglandsOracles_Oracles_pointCountGeneral___closed__0);
v___x_338_ = lean_int_add(v___x_336_, v___x_337_);
lean_dec(v___x_336_);
v___x_339_ = lp_LanglandsOracles_Oracles_pointCountGeneral(v_a_334_, v_p_335_);
v___x_340_ = lean_int_sub(v___x_338_, v___x_339_);
lean_dec(v___x_339_);
lean_dec(v___x_338_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_apGeneral___boxed(lean_object* v_a_341_, lean_object* v_p_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = lp_LanglandsOracles_Oracles_apGeneral(v_a_341_, v_p_342_);
lean_dec(v_a_341_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_ofList2___lam__0(lean_object* v_k_344_){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_345_ = lean_unsigned_to_nat(2u);
v___x_346_ = lean_nat_mod(v_k_344_, v___x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_ofList2___lam__0___boxed(lean_object* v_k_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = lp_LanglandsOracles_Oracles_ofList2___lam__0(v_k_347_);
lean_dec(v_k_347_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_ofList2(lean_object* v_m_349_){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_350_ = lean_unsigned_to_nat(0u);
v___x_351_ = l_List_get_x21Internal___redArg(v___x_350_, v_m_349_, v___x_350_);
v___x_352_ = lp_LanglandsOracles_Oracles_ofList2___lam__0(v___x_351_);
lean_dec(v___x_351_);
v___x_353_ = lean_unsigned_to_nat(1u);
v___x_354_ = l_List_get_x21Internal___redArg(v___x_350_, v_m_349_, v___x_353_);
v___x_355_ = lp_LanglandsOracles_Oracles_ofList2___lam__0(v___x_354_);
lean_dec(v___x_354_);
v___x_356_ = lean_unsigned_to_nat(2u);
v___x_357_ = l_List_get_x21Internal___redArg(v___x_350_, v_m_349_, v___x_356_);
v___x_358_ = lp_LanglandsOracles_Oracles_ofList2___lam__0(v___x_357_);
lean_dec(v___x_357_);
v___x_359_ = lean_unsigned_to_nat(3u);
v___x_360_ = l_List_get_x21Internal___redArg(v___x_350_, v_m_349_, v___x_359_);
v___x_361_ = lp_LanglandsOracles_Oracles_ofList2___lam__0(v___x_360_);
lean_dec(v___x_360_);
v___x_362_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_362_, 0, v___x_352_);
lean_ctor_set(v___x_362_, 1, v___x_355_);
lean_ctor_set(v___x_362_, 2, v___x_358_);
lean_ctor_set(v___x_362_, 3, v___x_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_ofList2___boxed(lean_object* v_m_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = lp_LanglandsOracles_Oracles_ofList2(v_m_363_);
lean_dec(v_m_363_);
return v_res_364_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_psi2AtRational___closed__0(void){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_365_ = lean_unsigned_to_nat(4u);
v___x_366_ = lean_nat_to_int(v___x_365_);
return v___x_366_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_psi2AtRational___closed__1(void){
_start:
{
lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_367_ = lean_unsigned_to_nat(2u);
v___x_368_ = lean_nat_to_int(v___x_367_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_psi2AtRational(lean_object* v_a_369_, lean_object* v_r_370_){
_start:
{
lean_object* v_fst_371_; lean_object* v_snd_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v_a3_375_; lean_object* v___x_376_; lean_object* v_a6_377_; lean_object* v___x_378_; lean_object* v_a1_379_; lean_object* v___x_380_; lean_object* v_a2_381_; lean_object* v___x_382_; lean_object* v_a4_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v_b2_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v_b4_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v_b6_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v_fst_371_ = lean_ctor_get(v_r_370_, 0);
v_snd_372_ = lean_ctor_get(v_r_370_, 1);
v___x_373_ = l_Int_instInhabited;
v___x_374_ = lean_unsigned_to_nat(2u);
v_a3_375_ = l_List_get_x21Internal___redArg(v___x_373_, v_a_369_, v___x_374_);
v___x_376_ = lean_unsigned_to_nat(4u);
v_a6_377_ = l_List_get_x21Internal___redArg(v___x_373_, v_a_369_, v___x_376_);
v___x_378_ = lean_unsigned_to_nat(0u);
v_a1_379_ = l_List_get_x21Internal___redArg(v___x_373_, v_a_369_, v___x_378_);
v___x_380_ = lean_unsigned_to_nat(1u);
v_a2_381_ = l_List_get_x21Internal___redArg(v___x_373_, v_a_369_, v___x_380_);
v___x_382_ = lean_unsigned_to_nat(3u);
v_a4_383_ = l_List_get_x21Internal___redArg(v___x_373_, v_a_369_, v___x_382_);
v___x_384_ = lean_int_mul(v_a1_379_, v_a1_379_);
v___x_385_ = lean_obj_once(&lp_LanglandsOracles_Oracles_psi2AtRational___closed__0, &lp_LanglandsOracles_Oracles_psi2AtRational___closed__0_once, _init_lp_LanglandsOracles_Oracles_psi2AtRational___closed__0);
v___x_386_ = lean_int_mul(v___x_385_, v_a2_381_);
lean_dec(v_a2_381_);
v_b2_387_ = lean_int_add(v___x_384_, v___x_386_);
lean_dec(v___x_386_);
lean_dec(v___x_384_);
v___x_388_ = lean_obj_once(&lp_LanglandsOracles_Oracles_psi2AtRational___closed__1, &lp_LanglandsOracles_Oracles_psi2AtRational___closed__1_once, _init_lp_LanglandsOracles_Oracles_psi2AtRational___closed__1);
v___x_389_ = lean_int_mul(v___x_388_, v_a4_383_);
lean_dec(v_a4_383_);
v___x_390_ = lean_int_mul(v_a1_379_, v_a3_375_);
lean_dec(v_a1_379_);
v_b4_391_ = lean_int_add(v___x_389_, v___x_390_);
lean_dec(v___x_390_);
lean_dec(v___x_389_);
v___x_392_ = lean_int_mul(v_a3_375_, v_a3_375_);
lean_dec(v_a3_375_);
v___x_393_ = lean_int_mul(v___x_385_, v_a6_377_);
lean_dec(v_a6_377_);
v_b6_394_ = lean_int_add(v___x_392_, v___x_393_);
lean_dec(v___x_393_);
lean_dec(v___x_392_);
v___x_395_ = l_Int_pow(v_fst_371_, v___x_382_);
v___x_396_ = lean_int_mul(v___x_385_, v___x_395_);
lean_dec(v___x_395_);
v___x_397_ = l_Int_pow(v_fst_371_, v___x_374_);
v___x_398_ = lean_int_mul(v_b2_387_, v___x_397_);
lean_dec(v___x_397_);
lean_dec(v_b2_387_);
v___x_399_ = lean_int_mul(v___x_398_, v_snd_372_);
lean_dec(v___x_398_);
v___x_400_ = lean_int_add(v___x_396_, v___x_399_);
lean_dec(v___x_399_);
lean_dec(v___x_396_);
v___x_401_ = lean_int_mul(v___x_388_, v_b4_391_);
lean_dec(v_b4_391_);
v___x_402_ = lean_int_mul(v___x_401_, v_fst_371_);
lean_dec(v___x_401_);
v___x_403_ = l_Int_pow(v_snd_372_, v___x_374_);
v___x_404_ = lean_int_mul(v___x_402_, v___x_403_);
lean_dec(v___x_403_);
lean_dec(v___x_402_);
v___x_405_ = lean_int_add(v___x_400_, v___x_404_);
lean_dec(v___x_404_);
lean_dec(v___x_400_);
v___x_406_ = l_Int_pow(v_snd_372_, v___x_382_);
v___x_407_ = lean_int_mul(v_b6_394_, v___x_406_);
lean_dec(v___x_406_);
lean_dec(v_b6_394_);
v___x_408_ = lean_int_add(v___x_405_, v___x_407_);
lean_dec(v___x_407_);
lean_dec(v___x_405_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_psi2AtRational___boxed(lean_object* v_a_409_, lean_object* v_r_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = lp_LanglandsOracles_Oracles_psi2AtRational(v_a_409_, v_r_410_);
lean_dec_ref(v_r_410_);
lean_dec(v_a_409_);
return v_res_411_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_any___at___00Oracles_hasWitness_spec__0(lean_object* v_P_412_, lean_object* v_x_413_){
_start:
{
if (lean_obj_tag(v_x_413_) == 0)
{
uint8_t v___x_414_; 
lean_dec_ref(v_P_412_);
v___x_414_ = 0;
return v___x_414_;
}
else
{
lean_object* v_head_415_; lean_object* v_tail_416_; lean_object* v_snd_417_; lean_object* v___x_418_; lean_object* v___x_419_; uint8_t v___x_420_; 
v_head_415_ = lean_ctor_get(v_x_413_, 0);
v_tail_416_ = lean_ctor_get(v_x_413_, 1);
v_snd_417_ = lean_ctor_get(v_head_415_, 1);
v___x_418_ = lp_LanglandsOracles_Oracles_ofList2(v_snd_417_);
lean_inc_ref(v_P_412_);
v___x_419_ = lean_apply_1(v_P_412_, v___x_418_);
v___x_420_ = lean_unbox(v___x_419_);
if (v___x_420_ == 0)
{
v_x_413_ = v_tail_416_;
goto _start;
}
else
{
uint8_t v___x_422_; 
lean_dec_ref(v_P_412_);
v___x_422_ = lean_unbox(v___x_419_);
return v___x_422_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_any___at___00Oracles_hasWitness_spec__0___boxed(lean_object* v_P_423_, lean_object* v_x_424_){
_start:
{
uint8_t v_res_425_; lean_object* v_r_426_; 
v_res_425_ = lp_LanglandsOracles_List_any___at___00Oracles_hasWitness_spec__0(v_P_423_, v_x_424_);
lean_dec(v_x_424_);
v_r_426_ = lean_box(v_res_425_);
return v_r_426_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_hasWitness(lean_object* v_e_427_, lean_object* v_P_428_){
_start:
{
lean_object* v_snd_429_; lean_object* v_snd_430_; lean_object* v_snd_431_; lean_object* v_snd_432_; uint8_t v___x_433_; 
v_snd_429_ = lean_ctor_get(v_e_427_, 1);
v_snd_430_ = lean_ctor_get(v_snd_429_, 1);
v_snd_431_ = lean_ctor_get(v_snd_430_, 1);
v_snd_432_ = lean_ctor_get(v_snd_431_, 1);
v___x_433_ = lp_LanglandsOracles_List_any___at___00Oracles_hasWitness_spec__0(v_P_428_, v_snd_432_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_hasWitness___boxed(lean_object* v_e_434_, lean_object* v_P_435_){
_start:
{
uint8_t v_res_436_; lean_object* v_r_437_; 
v_res_436_ = lp_LanglandsOracles_Oracles_hasWitness(v_e_434_, v_P_435_);
lean_dec_ref(v_e_434_);
v_r_437_ = lean_box(v_res_436_);
return v_r_437_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_mod2Certified_spec__1_spec__1(lean_object* v_a_438_, lean_object* v_x_439_){
_start:
{
if (lean_obj_tag(v_x_439_) == 0)
{
uint8_t v___x_440_; 
v___x_440_ = 1;
return v___x_440_;
}
else
{
lean_object* v_head_441_; lean_object* v_tail_442_; uint8_t v___y_444_; lean_object* v_fst_446_; lean_object* v_snd_447_; lean_object* v_m_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; uint8_t v___x_457_; 
v_head_441_ = lean_ctor_get(v_x_439_, 0);
lean_inc(v_head_441_);
v_tail_442_ = lean_ctor_get(v_x_439_, 1);
lean_inc(v_tail_442_);
lean_dec_ref_known(v_x_439_, 2);
v_fst_446_ = lean_ctor_get(v_head_441_, 0);
lean_inc_n(v_fst_446_, 2);
v_snd_447_ = lean_ctor_get(v_head_441_, 1);
lean_inc(v_snd_447_);
lean_dec(v_head_441_);
v_m_448_ = lp_LanglandsOracles_Oracles_ofList2(v_snd_447_);
lean_dec(v_snd_447_);
v___x_449_ = lean_unsigned_to_nat(2u);
v___x_450_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_invariants2_spec__0(v_m_448_);
v___x_451_ = lean_nat_to_int(v___x_450_);
v___x_452_ = lp_LanglandsOracles_Oracles_apGeneral(v_a_438_, v_fst_446_);
v___x_453_ = lean_obj_once(&lp_LanglandsOracles_Oracles_psi2AtRational___closed__1, &lp_LanglandsOracles_Oracles_psi2AtRational___closed__1_once, _init_lp_LanglandsOracles_Oracles_psi2AtRational___closed__1);
v___x_454_ = lean_int_emod(v___x_452_, v___x_453_);
lean_dec(v___x_452_);
v___x_455_ = lean_int_add(v___x_454_, v___x_453_);
lean_dec(v___x_454_);
v___x_456_ = lean_int_emod(v___x_455_, v___x_453_);
lean_dec(v___x_455_);
v___x_457_ = lean_int_dec_eq(v___x_451_, v___x_456_);
lean_dec(v___x_456_);
lean_dec(v___x_451_);
if (v___x_457_ == 0)
{
lean_dec_ref(v_m_448_);
lean_dec(v_fst_446_);
v___y_444_ = v___x_457_;
goto v___jp_443_;
}
else
{
lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; uint8_t v___x_462_; 
v___x_458_ = lp_LanglandsOracles_Oracles_Mat2_det(v___x_449_, v_m_448_);
lean_dec_ref(v_m_448_);
v___x_459_ = lean_nat_to_int(v___x_458_);
v___x_460_ = lean_nat_to_int(v_fst_446_);
v___x_461_ = lean_int_emod(v___x_460_, v___x_453_);
lean_dec(v___x_460_);
v___x_462_ = lean_int_dec_eq(v___x_459_, v___x_461_);
lean_dec(v___x_461_);
lean_dec(v___x_459_);
v___y_444_ = v___x_462_;
goto v___jp_443_;
}
v___jp_443_:
{
if (v___y_444_ == 0)
{
lean_dec(v_tail_442_);
return v___y_444_;
}
else
{
v_x_439_ = v_tail_442_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_mod2Certified_spec__1_spec__1___boxed(lean_object* v_a_463_, lean_object* v_x_464_){
_start:
{
uint8_t v_res_465_; lean_object* v_r_466_; 
v_res_465_ = lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_mod2Certified_spec__1_spec__1(v_a_463_, v_x_464_);
lean_dec(v_a_463_);
v_r_466_ = lean_box(v_res_465_);
return v_r_466_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_mod2Certified_spec__1(lean_object* v_a_467_, lean_object* v_x_468_){
_start:
{
if (lean_obj_tag(v_x_468_) == 0)
{
uint8_t v___x_469_; 
v___x_469_ = 1;
return v___x_469_;
}
else
{
lean_object* v_head_470_; lean_object* v_tail_471_; uint8_t v___y_473_; lean_object* v_fst_475_; lean_object* v_snd_476_; lean_object* v_m_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; uint8_t v___x_486_; 
v_head_470_ = lean_ctor_get(v_x_468_, 0);
lean_inc(v_head_470_);
v_tail_471_ = lean_ctor_get(v_x_468_, 1);
lean_inc(v_tail_471_);
lean_dec_ref_known(v_x_468_, 2);
v_fst_475_ = lean_ctor_get(v_head_470_, 0);
lean_inc_n(v_fst_475_, 2);
v_snd_476_ = lean_ctor_get(v_head_470_, 1);
lean_inc(v_snd_476_);
lean_dec(v_head_470_);
v_m_477_ = lp_LanglandsOracles_Oracles_ofList2(v_snd_476_);
lean_dec(v_snd_476_);
v___x_478_ = lean_unsigned_to_nat(2u);
v___x_479_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_invariants2_spec__0(v_m_477_);
v___x_480_ = lean_nat_to_int(v___x_479_);
v___x_481_ = lp_LanglandsOracles_Oracles_apGeneral(v_a_467_, v_fst_475_);
v___x_482_ = lean_obj_once(&lp_LanglandsOracles_Oracles_psi2AtRational___closed__1, &lp_LanglandsOracles_Oracles_psi2AtRational___closed__1_once, _init_lp_LanglandsOracles_Oracles_psi2AtRational___closed__1);
v___x_483_ = lean_int_emod(v___x_481_, v___x_482_);
lean_dec(v___x_481_);
v___x_484_ = lean_int_add(v___x_483_, v___x_482_);
lean_dec(v___x_483_);
v___x_485_ = lean_int_emod(v___x_484_, v___x_482_);
lean_dec(v___x_484_);
v___x_486_ = lean_int_dec_eq(v___x_480_, v___x_485_);
lean_dec(v___x_485_);
lean_dec(v___x_480_);
if (v___x_486_ == 0)
{
lean_dec_ref(v_m_477_);
lean_dec(v_fst_475_);
v___y_473_ = v___x_486_;
goto v___jp_472_;
}
else
{
lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; uint8_t v___x_491_; 
v___x_487_ = lp_LanglandsOracles_Oracles_Mat2_det(v___x_478_, v_m_477_);
lean_dec_ref(v_m_477_);
v___x_488_ = lean_nat_to_int(v___x_487_);
v___x_489_ = lean_nat_to_int(v_fst_475_);
v___x_490_ = lean_int_emod(v___x_489_, v___x_482_);
lean_dec(v___x_489_);
v___x_491_ = lean_int_dec_eq(v___x_488_, v___x_490_);
lean_dec(v___x_490_);
lean_dec(v___x_488_);
v___y_473_ = v___x_491_;
goto v___jp_472_;
}
v___jp_472_:
{
if (v___y_473_ == 0)
{
lean_dec(v_tail_471_);
return v___y_473_;
}
else
{
uint8_t v___x_474_; 
v___x_474_ = lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_mod2Certified_spec__1_spec__1(v_a_467_, v_tail_471_);
return v___x_474_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_mod2Certified_spec__1___boxed(lean_object* v_a_492_, lean_object* v_x_493_){
_start:
{
uint8_t v_res_494_; lean_object* v_r_495_; 
v_res_494_ = lp_LanglandsOracles_List_all___at___00Oracles_mod2Certified_spec__1(v_a_492_, v_x_493_);
lean_dec(v_a_492_);
v_r_495_ = lean_box(v_res_494_);
return v_r_495_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_mod2Certified_spec__0(lean_object* v_a_496_, lean_object* v_x_497_){
_start:
{
if (lean_obj_tag(v_x_497_) == 0)
{
uint8_t v___x_498_; 
v___x_498_ = 1;
return v___x_498_;
}
else
{
lean_object* v_head_499_; lean_object* v_tail_500_; lean_object* v___x_501_; lean_object* v___x_502_; uint8_t v___x_503_; 
v_head_499_ = lean_ctor_get(v_x_497_, 0);
v_tail_500_ = lean_ctor_get(v_x_497_, 1);
v___x_501_ = lp_LanglandsOracles_Oracles_psi2AtRational(v_a_496_, v_head_499_);
v___x_502_ = lean_obj_once(&lp_LanglandsOracles_List_filterTR_loop___at___00List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0_spec__0___closed__0, &lp_LanglandsOracles_List_filterTR_loop___at___00List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0_spec__0___closed__0_once, _init_lp_LanglandsOracles_List_filterTR_loop___at___00List_filterTR_loop___at___00Oracles_pointCountGeneral_spec__0_spec__0___closed__0);
v___x_503_ = lean_int_dec_eq(v___x_501_, v___x_502_);
lean_dec(v___x_501_);
if (v___x_503_ == 0)
{
return v___x_503_;
}
else
{
v_x_497_ = v_tail_500_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_mod2Certified_spec__0___boxed(lean_object* v_a_505_, lean_object* v_x_506_){
_start:
{
uint8_t v_res_507_; lean_object* v_r_508_; 
v_res_507_ = lp_LanglandsOracles_List_all___at___00Oracles_mod2Certified_spec__0(v_a_505_, v_x_506_);
lean_dec(v_x_506_);
lean_dec(v_a_505_);
v_r_508_ = lean_box(v_res_507_);
return v_r_508_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_mod2Certified(lean_object* v_e_511_){
_start:
{
lean_object* v_snd_512_; lean_object* v_snd_513_; lean_object* v_snd_514_; lean_object* v_fst_515_; lean_object* v_fst_516_; lean_object* v_fst_517_; lean_object* v_snd_518_; uint8_t v___y_520_; uint8_t v___y_523_; uint8_t v___x_528_; 
v_snd_512_ = lean_ctor_get(v_e_511_, 1);
v_snd_513_ = lean_ctor_get(v_snd_512_, 1);
v_snd_514_ = lean_ctor_get(v_snd_513_, 1);
v_fst_515_ = lean_ctor_get(v_snd_512_, 0);
v_fst_516_ = lean_ctor_get(v_snd_513_, 0);
v_fst_517_ = lean_ctor_get(v_snd_514_, 0);
lean_inc(v_fst_517_);
v_snd_518_ = lean_ctor_get(v_snd_514_, 1);
lean_inc(v_snd_518_);
v___x_528_ = lp_LanglandsOracles_List_all___at___00Oracles_mod2Certified_spec__1(v_fst_515_, v_snd_518_);
if (v___x_528_ == 0)
{
lean_dec(v_fst_517_);
lean_dec_ref(v_e_511_);
return v___x_528_;
}
else
{
lean_object* v___x_529_; uint8_t v___x_530_; 
v___x_529_ = lean_unsigned_to_nat(0u);
v___x_530_ = lean_nat_dec_eq(v_fst_516_, v___x_529_);
if (v___x_530_ == 0)
{
lean_object* v___x_531_; uint8_t v___x_532_; 
lean_inc(v_fst_515_);
v___x_531_ = lean_unsigned_to_nat(1u);
v___x_532_ = lean_nat_dec_eq(v_fst_516_, v___x_531_);
if (v___x_532_ == 0)
{
lean_dec(v_fst_517_);
lean_dec(v_fst_515_);
lean_dec_ref(v_e_511_);
return v___x_532_;
}
else
{
lean_object* v___x_533_; uint8_t v___x_534_; 
v___x_533_ = ((lean_object*)(lp_LanglandsOracles_Oracles_mod2Certified___closed__0));
v___x_534_ = lp_LanglandsOracles_Oracles_hasWitness(v_e_511_, v___x_533_);
if (v___x_534_ == 0)
{
lean_dec_ref(v_e_511_);
v___y_523_ = v___x_534_;
goto v___jp_522_;
}
else
{
lean_object* v___x_535_; uint8_t v___x_536_; 
v___x_535_ = ((lean_object*)(lp_LanglandsOracles_Oracles_mod2Certified___closed__1));
v___x_536_ = lp_LanglandsOracles_Oracles_hasWitness(v_e_511_, v___x_535_);
lean_dec_ref(v_e_511_);
if (v___x_536_ == 0)
{
v___y_523_ = v___x_534_;
goto v___jp_522_;
}
else
{
lean_dec(v_fst_517_);
lean_dec(v_fst_515_);
return v___x_530_;
}
}
}
}
else
{
lean_object* v___x_537_; uint8_t v___x_538_; 
v___x_537_ = ((lean_object*)(lp_LanglandsOracles_Oracles_mod2Certified___closed__1));
v___x_538_ = lp_LanglandsOracles_Oracles_hasWitness(v_e_511_, v___x_537_);
if (v___x_538_ == 0)
{
lean_dec_ref(v_e_511_);
v___y_520_ = v___x_538_;
goto v___jp_519_;
}
else
{
lean_object* v___x_539_; uint8_t v___x_540_; 
v___x_539_ = ((lean_object*)(lp_LanglandsOracles_Oracles_mod2Certified___closed__0));
v___x_540_ = lp_LanglandsOracles_Oracles_hasWitness(v_e_511_, v___x_539_);
lean_dec_ref(v_e_511_);
v___y_520_ = v___x_540_;
goto v___jp_519_;
}
}
}
v___jp_519_:
{
if (v___y_520_ == 0)
{
lean_dec(v_fst_517_);
return v___y_520_;
}
else
{
uint8_t v___x_521_; 
v___x_521_ = l_List_isEmpty___redArg(v_fst_517_);
lean_dec(v_fst_517_);
return v___x_521_;
}
}
v___jp_522_:
{
if (v___y_523_ == 0)
{
lean_dec(v_fst_517_);
lean_dec(v_fst_515_);
return v___y_523_;
}
else
{
lean_object* v___x_524_; lean_object* v___x_525_; uint8_t v___x_526_; 
v___x_524_ = l_List_lengthTR___redArg(v_fst_517_);
v___x_525_ = lean_unsigned_to_nat(1u);
v___x_526_ = lean_nat_dec_eq(v___x_524_, v___x_525_);
lean_dec(v___x_524_);
if (v___x_526_ == 0)
{
lean_dec(v_fst_517_);
lean_dec(v_fst_515_);
return v___x_526_;
}
else
{
uint8_t v___x_527_; 
v___x_527_ = lp_LanglandsOracles_List_all___at___00Oracles_mod2Certified_spec__0(v_fst_515_, v_fst_517_);
lean_dec(v_fst_517_);
lean_dec(v_fst_515_);
return v___x_527_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_mod2Certified___boxed(lean_object* v_e_541_){
_start:
{
uint8_t v_res_542_; lean_object* v_r_543_; 
v_res_542_ = lp_LanglandsOracles_Oracles_mod2Certified(v_e_541_);
v_r_543_ = lean_box(v_res_542_);
return v_r_543_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Generation(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Data(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LanglandsOracles_LanglandsOracles_ImageMod2(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_Generation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1 = _init_lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1();
lean_mark_persistent(lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants2_spec__1);
lp_LanglandsOracles_Oracles_Mat2_nonzero = _init_lp_LanglandsOracles_Oracles_Mat2_nonzero();
lean_mark_persistent(lp_LanglandsOracles_Oracles_Mat2_nonzero);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
