// Lean compiler output
// Module: LanglandsOracles.PseudocharSearch
// Imports: public import Init public meta import Init public import LanglandsOracles.ImageMod3 public import LanglandsOracles.ExcursionInstance
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
lean_object* lp_LanglandsOracles_Oracles_Mat2_det(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_invariants_spec__0(lean_object*);
lean_object* l_Fin_mul(lean_object*, lean_object*, lean_object*);
lean_object* l_Fin_add(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lp_LanglandsOracles_Oracles_Mat2_gl(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Fin_sub(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_Mat2_encode(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants_spec__1;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_Mat2_mulIdx___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_Mat2_decode___redArg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_frobMat3(lean_object*);
lean_object* lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_invariants_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_twist(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_Tprime(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_Tprime___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Mat2_glIdx_spec__0(lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_glIdx___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_glIdx___closed__0;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_glIdx___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_glIdx___closed__1;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_glIdx;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_twistIdx(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_twistIdx___boxed(lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_Tbad___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_Tbad___closed__0;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_Tbad(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_Tbad___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_detOf_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_detOf_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_detOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Mat2_candidates_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_candidates(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_tget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_tget___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_tset(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_tset___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_extend_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_extend_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_extend_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_extend_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_extend(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_relationsHold_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_relationsHold_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_relationsHold_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_relationsHold_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_relationsHold(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_relationsHold___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_one3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_one3___closed__0;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_one3;
static lean_once_cell_t lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___closed__0;
static lean_once_cell_t lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___closed__1;
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_searchRep(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_certified_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_certified_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_certified_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_certified_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_certified_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_certified_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_certified(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_certified___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_g_u2080___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_g_u2080___closed__0;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_g_u2080;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_h_u2080___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_h_u2080___closed__0;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_h_u2080;
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_Mat2_searchAll_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_Mat2_searchAll_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_searchAll_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_searchAll_spec__1_spec__1___closed__0 = (const lean_object*)&lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_searchAll_spec__1_spec__1___closed__0_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_searchAll_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_searchAll_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_searchAll_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_searchAll_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_searchAll(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_conjugator_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_conjugator_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_find_x3f___at___00List_find_x3f___at___00Oracles_Mat2_conjugator_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_find_x3f___at___00List_find_x3f___at___00Oracles_Mat2_conjugator_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_find_x3f___at___00Oracles_Mat2_conjugator_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_find_x3f___at___00Oracles_Mat2_conjugator_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_conjugator(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_conjugator___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_conjugateAll_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_conjugateAll_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_conjugateAll(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_conjugateAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_LanglandsOracles_Oracles_Mat2_solsTprime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LanglandsOracles_Oracles_Mat2_Tprime___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_solsTprime___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_solsTprime___closed__0_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_solsTprime___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_solsTprime___closed__1;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_solsTprime;
static const lean_closure_object lp_LanglandsOracles_Oracles_Mat2_solsTrace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_invariants_spec__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LanglandsOracles_Oracles_Mat2_solsTrace___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_Mat2_solsTrace___closed__0_value;
static lean_once_cell_t lp_LanglandsOracles_Oracles_Mat2_solsTrace___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_Mat2_solsTrace___closed__1;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_solsTrace;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_twist(lean_object* v_g_1_){
_start:
{
lean_object* v_a_2_; lean_object* v_b_3_; lean_object* v_c_4_; lean_object* v_d_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_9_; uint8_t v_isShared_10_; uint8_t v_isSharedCheck_18_; 
v_a_2_ = lean_ctor_get(v_g_1_, 0);
lean_inc(v_a_2_);
v_b_3_ = lean_ctor_get(v_g_1_, 1);
lean_inc(v_b_3_);
v_c_4_ = lean_ctor_get(v_g_1_, 2);
lean_inc(v_c_4_);
v_d_5_ = lean_ctor_get(v_g_1_, 3);
lean_inc(v_d_5_);
v___x_6_ = lean_unsigned_to_nat(3u);
v___x_7_ = lp_LanglandsOracles_Oracles_Mat2_det(v___x_6_, v_g_1_);
v_isSharedCheck_18_ = !lean_is_exclusive(v_g_1_);
if (v_isSharedCheck_18_ == 0)
{
lean_object* v_unused_19_; lean_object* v_unused_20_; lean_object* v_unused_21_; lean_object* v_unused_22_; 
v_unused_19_ = lean_ctor_get(v_g_1_, 3);
lean_dec(v_unused_19_);
v_unused_20_ = lean_ctor_get(v_g_1_, 2);
lean_dec(v_unused_20_);
v_unused_21_ = lean_ctor_get(v_g_1_, 1);
lean_dec(v_unused_21_);
v_unused_22_ = lean_ctor_get(v_g_1_, 0);
lean_dec(v_unused_22_);
v___x_9_ = v_g_1_;
v_isShared_10_ = v_isSharedCheck_18_;
goto v_resetjp_8_;
}
else
{
lean_dec(v_g_1_);
v___x_9_ = lean_box(0);
v_isShared_10_ = v_isSharedCheck_18_;
goto v_resetjp_8_;
}
v_resetjp_8_:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_16_; 
v___x_11_ = l_Fin_mul(v___x_6_, v___x_7_, v_a_2_);
lean_dec(v_a_2_);
v___x_12_ = l_Fin_mul(v___x_6_, v___x_7_, v_b_3_);
lean_dec(v_b_3_);
v___x_13_ = l_Fin_mul(v___x_6_, v___x_7_, v_c_4_);
lean_dec(v_c_4_);
v___x_14_ = l_Fin_mul(v___x_6_, v___x_7_, v_d_5_);
lean_dec(v_d_5_);
lean_dec(v___x_7_);
if (v_isShared_10_ == 0)
{
lean_ctor_set(v___x_9_, 3, v___x_14_);
lean_ctor_set(v___x_9_, 2, v___x_13_);
lean_ctor_set(v___x_9_, 1, v___x_12_);
lean_ctor_set(v___x_9_, 0, v___x_11_);
v___x_16_ = v___x_9_;
goto v_reusejp_15_;
}
else
{
lean_object* v_reuseFailAlloc_17_; 
v_reuseFailAlloc_17_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_17_, 0, v___x_11_);
lean_ctor_set(v_reuseFailAlloc_17_, 1, v___x_12_);
lean_ctor_set(v_reuseFailAlloc_17_, 2, v___x_13_);
lean_ctor_set(v_reuseFailAlloc_17_, 3, v___x_14_);
v___x_16_ = v_reuseFailAlloc_17_;
goto v_reusejp_15_;
}
v_reusejp_15_:
{
return v___x_16_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_Tprime(lean_object* v_g_23_){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_24_ = lean_unsigned_to_nat(3u);
v___x_25_ = lp_LanglandsOracles_Oracles_Mat2_det(v___x_24_, v_g_23_);
v___x_26_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_invariants_spec__0(v_g_23_);
v___x_27_ = l_Fin_mul(v___x_24_, v___x_25_, v___x_26_);
lean_dec(v___x_26_);
lean_dec(v___x_25_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_Tprime___boxed(lean_object* v_g_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = lp_LanglandsOracles_Oracles_Mat2_Tprime(v_g_28_);
lean_dec_ref(v_g_28_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Mat2_glIdx_spec__0(lean_object* v_a_30_, lean_object* v_a_31_){
_start:
{
if (lean_obj_tag(v_a_30_) == 0)
{
lean_object* v___x_32_; 
v___x_32_ = l_List_reverse___redArg(v_a_31_);
return v___x_32_;
}
else
{
lean_object* v_head_33_; lean_object* v_tail_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_44_; 
v_head_33_ = lean_ctor_get(v_a_30_, 0);
v_tail_34_ = lean_ctor_get(v_a_30_, 1);
v_isSharedCheck_44_ = !lean_is_exclusive(v_a_30_);
if (v_isSharedCheck_44_ == 0)
{
v___x_36_ = v_a_30_;
v_isShared_37_ = v_isSharedCheck_44_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_tail_34_);
lean_inc(v_head_33_);
lean_dec(v_a_30_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_44_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_41_; 
v___x_38_ = lean_unsigned_to_nat(3u);
v___x_39_ = lp_LanglandsOracles_Oracles_Mat2_encode(v___x_38_, v_head_33_);
lean_dec(v_head_33_);
if (v_isShared_37_ == 0)
{
lean_ctor_set(v___x_36_, 1, v_a_31_);
lean_ctor_set(v___x_36_, 0, v___x_39_);
v___x_41_ = v___x_36_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v___x_39_);
lean_ctor_set(v_reuseFailAlloc_43_, 1, v_a_31_);
v___x_41_ = v_reuseFailAlloc_43_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
v_a_30_ = v_tail_34_;
v_a_31_ = v___x_41_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_glIdx___closed__0(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_unsigned_to_nat(3u);
v___x_46_ = lp_LanglandsOracles_Oracles_Mat2_gl(v___x_45_);
return v___x_46_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_glIdx___closed__1(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_47_ = lean_box(0);
v___x_48_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_glIdx___closed__0, &lp_LanglandsOracles_Oracles_Mat2_glIdx___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_glIdx___closed__0);
v___x_49_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Mat2_glIdx_spec__0(v___x_48_, v___x_47_);
return v___x_49_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_glIdx(void){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_glIdx___closed__1, &lp_LanglandsOracles_Oracles_Mat2_glIdx___closed__1_once, _init_lp_LanglandsOracles_Oracles_Mat2_glIdx___closed__1);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_twistIdx(lean_object* v_i_51_){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_52_ = lean_unsigned_to_nat(3u);
v___x_53_ = lp_LanglandsOracles_Oracles_Mat2_decode___redArg(v___x_52_, v_i_51_);
v___x_54_ = lp_LanglandsOracles_Oracles_Mat2_twist(v___x_53_);
v___x_55_ = lp_LanglandsOracles_Oracles_Mat2_encode(v___x_52_, v___x_54_);
lean_dec_ref(v___x_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_twistIdx___boxed(lean_object* v_i_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = lp_LanglandsOracles_Oracles_Mat2_twistIdx(v_i_56_);
lean_dec(v_i_56_);
return v_res_57_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_Tbad___closed__0(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_58_ = lean_unsigned_to_nat(3u);
v___x_59_ = lean_unsigned_to_nat(2u);
v___x_60_ = lean_nat_mod(v___x_59_, v___x_58_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_Tbad(lean_object* v_g_61_){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_62_ = lean_unsigned_to_nat(3u);
v___x_63_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_invariants_spec__0(v_g_61_);
v___x_64_ = lp_LanglandsOracles_Oracles_Mat2_det(v___x_62_, v_g_61_);
v___x_65_ = l_Fin_add(v___x_62_, v___x_63_, v___x_64_);
lean_dec(v___x_64_);
lean_dec(v___x_63_);
v___x_66_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_Tbad___closed__0, &lp_LanglandsOracles_Oracles_Mat2_Tbad___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_Tbad___closed__0);
v___x_67_ = l_Fin_add(v___x_62_, v___x_65_, v___x_66_);
lean_dec(v___x_65_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_Tbad___boxed(lean_object* v_g_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = lp_LanglandsOracles_Oracles_Mat2_Tbad(v_g_68_);
lean_dec_ref(v_g_68_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_detOf_spec__0(lean_object* v_x_70_, lean_object* v_y_71_){
_start:
{
lean_object* v_a_72_; lean_object* v_b_73_; lean_object* v_c_74_; lean_object* v_d_75_; lean_object* v_a_76_; lean_object* v_b_77_; lean_object* v_c_78_; lean_object* v_d_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_99_; 
v_a_72_ = lean_ctor_get(v_x_70_, 0);
v_b_73_ = lean_ctor_get(v_x_70_, 1);
v_c_74_ = lean_ctor_get(v_x_70_, 2);
v_d_75_ = lean_ctor_get(v_x_70_, 3);
v_a_76_ = lean_ctor_get(v_y_71_, 0);
v_b_77_ = lean_ctor_get(v_y_71_, 1);
v_c_78_ = lean_ctor_get(v_y_71_, 2);
v_d_79_ = lean_ctor_get(v_y_71_, 3);
v_isSharedCheck_99_ = !lean_is_exclusive(v_y_71_);
if (v_isSharedCheck_99_ == 0)
{
v___x_81_ = v_y_71_;
v_isShared_82_ = v_isSharedCheck_99_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_d_79_);
lean_inc(v_c_78_);
lean_inc(v_b_77_);
lean_inc(v_a_76_);
lean_dec(v_y_71_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_99_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_97_; 
v___x_83_ = lean_unsigned_to_nat(3u);
v___x_84_ = l_Fin_mul(v___x_83_, v_a_72_, v_a_76_);
v___x_85_ = l_Fin_mul(v___x_83_, v_b_73_, v_c_78_);
v___x_86_ = l_Fin_add(v___x_83_, v___x_84_, v___x_85_);
lean_dec(v___x_85_);
lean_dec(v___x_84_);
v___x_87_ = l_Fin_mul(v___x_83_, v_a_72_, v_b_77_);
v___x_88_ = l_Fin_mul(v___x_83_, v_b_73_, v_d_79_);
v___x_89_ = l_Fin_add(v___x_83_, v___x_87_, v___x_88_);
lean_dec(v___x_88_);
lean_dec(v___x_87_);
v___x_90_ = l_Fin_mul(v___x_83_, v_c_74_, v_a_76_);
lean_dec(v_a_76_);
v___x_91_ = l_Fin_mul(v___x_83_, v_d_75_, v_c_78_);
lean_dec(v_c_78_);
v___x_92_ = l_Fin_add(v___x_83_, v___x_90_, v___x_91_);
lean_dec(v___x_91_);
lean_dec(v___x_90_);
v___x_93_ = l_Fin_mul(v___x_83_, v_c_74_, v_b_77_);
lean_dec(v_b_77_);
v___x_94_ = l_Fin_mul(v___x_83_, v_d_75_, v_d_79_);
lean_dec(v_d_79_);
v___x_95_ = l_Fin_add(v___x_83_, v___x_93_, v___x_94_);
lean_dec(v___x_94_);
lean_dec(v___x_93_);
if (v_isShared_82_ == 0)
{
lean_ctor_set(v___x_81_, 3, v___x_95_);
lean_ctor_set(v___x_81_, 2, v___x_92_);
lean_ctor_set(v___x_81_, 1, v___x_89_);
lean_ctor_set(v___x_81_, 0, v___x_86_);
v___x_97_ = v___x_81_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v___x_86_);
lean_ctor_set(v_reuseFailAlloc_98_, 1, v___x_89_);
lean_ctor_set(v_reuseFailAlloc_98_, 2, v___x_92_);
lean_ctor_set(v_reuseFailAlloc_98_, 3, v___x_95_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_detOf_spec__0___boxed(lean_object* v_x_100_, lean_object* v_y_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_detOf_spec__0(v_x_100_, v_y_101_);
lean_dec_ref(v_x_100_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_detOf(lean_object* v_T_103_, lean_object* v_g_104_){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_105_ = lean_unsigned_to_nat(3u);
lean_inc_ref(v_T_103_);
lean_inc_ref_n(v_g_104_, 2);
v___x_106_ = lean_apply_1(v_T_103_, v_g_104_);
v___x_107_ = l_Fin_mul(v___x_105_, v___x_106_, v___x_106_);
lean_dec(v___x_106_);
v___x_108_ = lp_LanglandsOracles_Oracles_M2_mul___at___00Oracles_Mat2_detOf_spec__0(v_g_104_, v_g_104_);
lean_dec_ref(v_g_104_);
v___x_109_ = lean_apply_1(v_T_103_, v___x_108_);
v___x_110_ = l_Fin_sub(v___x_105_, v___x_107_, v___x_109_);
lean_dec(v___x_109_);
lean_dec(v___x_107_);
v___x_111_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_Tbad___closed__0, &lp_LanglandsOracles_Oracles_Mat2_Tbad___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_Tbad___closed__0);
v___x_112_ = l_Fin_mul(v___x_105_, v___x_110_, v___x_111_);
lean_dec(v___x_110_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Mat2_candidates_spec__0(lean_object* v_T_113_, lean_object* v_g_114_, lean_object* v_a_115_, lean_object* v_a_116_){
_start:
{
if (lean_obj_tag(v_a_115_) == 0)
{
lean_object* v___x_117_; 
lean_dec_ref(v_g_114_);
lean_dec_ref(v_T_113_);
v___x_117_ = l_List_reverse___redArg(v_a_116_);
return v___x_117_;
}
else
{
lean_object* v_head_118_; lean_object* v_tail_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_137_; 
v_head_118_ = lean_ctor_get(v_a_115_, 0);
v_tail_119_ = lean_ctor_get(v_a_115_, 1);
v_isSharedCheck_137_ = !lean_is_exclusive(v_a_115_);
if (v_isSharedCheck_137_ == 0)
{
v___x_121_ = v_a_115_;
v_isShared_122_ = v_isSharedCheck_137_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_tail_119_);
lean_inc(v_head_118_);
lean_dec(v_a_115_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_137_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
uint8_t v___y_124_; lean_object* v___x_130_; lean_object* v___x_131_; uint8_t v___x_132_; 
v___x_130_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_invariants_spec__0(v_head_118_);
lean_inc_ref(v_T_113_);
lean_inc_ref(v_g_114_);
v___x_131_ = lean_apply_1(v_T_113_, v_g_114_);
v___x_132_ = lean_nat_dec_eq(v___x_130_, v___x_131_);
lean_dec(v___x_131_);
lean_dec(v___x_130_);
if (v___x_132_ == 0)
{
v___y_124_ = v___x_132_;
goto v___jp_123_;
}
else
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; uint8_t v___x_136_; 
v___x_133_ = lean_unsigned_to_nat(3u);
v___x_134_ = lp_LanglandsOracles_Oracles_Mat2_det(v___x_133_, v_head_118_);
lean_inc_ref(v_g_114_);
lean_inc_ref(v_T_113_);
v___x_135_ = lp_LanglandsOracles_Oracles_Mat2_detOf(v_T_113_, v_g_114_);
v___x_136_ = lean_nat_dec_eq(v___x_134_, v___x_135_);
lean_dec(v___x_135_);
lean_dec(v___x_134_);
v___y_124_ = v___x_136_;
goto v___jp_123_;
}
v___jp_123_:
{
if (v___y_124_ == 0)
{
lean_del_object(v___x_121_);
lean_dec(v_head_118_);
v_a_115_ = v_tail_119_;
goto _start;
}
else
{
lean_object* v___x_127_; 
if (v_isShared_122_ == 0)
{
lean_ctor_set(v___x_121_, 1, v_a_116_);
v___x_127_ = v___x_121_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_head_118_);
lean_ctor_set(v_reuseFailAlloc_129_, 1, v_a_116_);
v___x_127_ = v_reuseFailAlloc_129_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
v_a_115_ = v_tail_119_;
v_a_116_ = v___x_127_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_candidates(lean_object* v_T_138_, lean_object* v_g_139_){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_140_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_glIdx___closed__0, &lp_LanglandsOracles_Oracles_Mat2_glIdx___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_glIdx___closed__0);
v___x_141_ = lean_box(0);
v___x_142_ = lp_LanglandsOracles_List_filterTR_loop___at___00Oracles_Mat2_candidates_spec__0(v_T_138_, v_g_139_, v___x_140_, v___x_141_);
v___x_143_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_Mat2_glIdx_spec__0(v___x_142_, v___x_141_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_tget(lean_object* v_tbl_144_, lean_object* v_i_145_){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_146_ = lean_unsigned_to_nat(128u);
v___x_147_ = lean_nat_pow(v___x_146_, v_i_145_);
v___x_148_ = lean_nat_div(v_tbl_144_, v___x_147_);
lean_dec(v___x_147_);
v___x_149_ = lean_nat_mod(v___x_148_, v___x_146_);
lean_dec(v___x_148_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_tget___boxed(lean_object* v_tbl_150_, lean_object* v_i_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = lp_LanglandsOracles_Oracles_Mat2_tget(v_tbl_150_, v_i_151_);
lean_dec(v_i_151_);
lean_dec(v_tbl_150_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_tset(lean_object* v_tbl_153_, lean_object* v_i_154_, lean_object* v_v_155_){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_156_ = lean_unsigned_to_nat(1u);
v___x_157_ = lean_nat_add(v_v_155_, v___x_156_);
v___x_158_ = lean_unsigned_to_nat(128u);
v___x_159_ = lean_nat_pow(v___x_158_, v_i_154_);
v___x_160_ = lean_nat_mul(v___x_157_, v___x_159_);
lean_dec(v___x_159_);
lean_dec(v___x_157_);
v___x_161_ = lean_nat_add(v_tbl_153_, v___x_160_);
lean_dec(v___x_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_tset___boxed(lean_object* v_tbl_162_, lean_object* v_i_163_, lean_object* v_v_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = lp_LanglandsOracles_Oracles_Mat2_tset(v_tbl_162_, v_i_163_, v_v_164_);
lean_dec(v_v_164_);
lean_dec(v_i_163_);
lean_dec(v_tbl_162_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_extend_spec__0(lean_object* v_x_166_, lean_object* v_x_167_, lean_object* v_x_168_){
_start:
{
if (lean_obj_tag(v_x_168_) == 0)
{
return v_x_167_;
}
else
{
lean_object* v_head_169_; lean_object* v_tail_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_202_; 
v_head_169_ = lean_ctor_get(v_x_168_, 0);
v_tail_170_ = lean_ctor_get(v_x_168_, 1);
v_isSharedCheck_202_ = !lean_is_exclusive(v_x_168_);
if (v_isSharedCheck_202_ == 0)
{
v___x_172_ = v_x_168_;
v_isShared_173_ = v_isSharedCheck_202_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_tail_170_);
lean_inc(v_head_169_);
lean_dec(v_x_168_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_202_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v_fst_174_; lean_object* v_snd_175_; lean_object* v_fst_176_; lean_object* v_snd_177_; lean_object* v___x_178_; lean_object* v_y_179_; lean_object* v___x_180_; lean_object* v___x_181_; uint8_t v___x_182_; 
v_fst_174_ = lean_ctor_get(v_head_169_, 0);
lean_inc(v_fst_174_);
v_snd_175_ = lean_ctor_get(v_head_169_, 1);
lean_inc(v_snd_175_);
lean_dec(v_head_169_);
v_fst_176_ = lean_ctor_get(v_x_167_, 0);
v_snd_177_ = lean_ctor_get(v_x_167_, 1);
v___x_178_ = lean_unsigned_to_nat(3u);
v_y_179_ = lp_LanglandsOracles_Oracles_Mat2_mulIdx___redArg(v___x_178_, v_x_166_, v_fst_174_);
lean_dec(v_fst_174_);
v___x_180_ = lp_LanglandsOracles_Oracles_Mat2_tget(v_fst_176_, v_y_179_);
v___x_181_ = lean_unsigned_to_nat(0u);
v___x_182_ = lean_nat_dec_eq(v___x_180_, v___x_181_);
lean_dec(v___x_180_);
if (v___x_182_ == 0)
{
lean_dec(v_y_179_);
lean_dec(v_snd_175_);
lean_del_object(v___x_172_);
v_x_168_ = v_tail_170_;
goto _start;
}
else
{
lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_199_; 
lean_inc(v_snd_177_);
lean_inc(v_fst_176_);
v_isSharedCheck_199_ = !lean_is_exclusive(v_x_167_);
if (v_isSharedCheck_199_ == 0)
{
lean_object* v_unused_200_; lean_object* v_unused_201_; 
v_unused_200_ = lean_ctor_get(v_x_167_, 1);
lean_dec(v_unused_200_);
v_unused_201_ = lean_ctor_get(v_x_167_, 0);
lean_dec(v_unused_201_);
v___x_185_ = v_x_167_;
v_isShared_186_ = v_isSharedCheck_199_;
goto v_resetjp_184_;
}
else
{
lean_dec(v_x_167_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_199_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_193_; 
v___x_187_ = lp_LanglandsOracles_Oracles_Mat2_tget(v_fst_176_, v_x_166_);
v___x_188_ = lean_unsigned_to_nat(1u);
v___x_189_ = lean_nat_sub(v___x_187_, v___x_188_);
lean_dec(v___x_187_);
v___x_190_ = lp_LanglandsOracles_Oracles_Mat2_mulIdx___redArg(v___x_178_, v___x_189_, v_snd_175_);
lean_dec(v_snd_175_);
lean_dec(v___x_189_);
v___x_191_ = lp_LanglandsOracles_Oracles_Mat2_tset(v_fst_176_, v_y_179_, v___x_190_);
lean_dec(v___x_190_);
lean_dec(v_fst_176_);
if (v_isShared_173_ == 0)
{
lean_ctor_set(v___x_172_, 1, v_snd_177_);
lean_ctor_set(v___x_172_, 0, v_y_179_);
v___x_193_ = v___x_172_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v_y_179_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v_snd_177_);
v___x_193_ = v_reuseFailAlloc_198_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
lean_object* v___x_195_; 
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 1, v___x_193_);
lean_ctor_set(v___x_185_, 0, v___x_191_);
v___x_195_ = v___x_185_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v___x_191_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v___x_193_);
v___x_195_ = v_reuseFailAlloc_197_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
v_x_167_ = v___x_195_;
v_x_168_ = v_tail_170_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_extend_spec__0___boxed(lean_object* v_x_203_, lean_object* v_x_204_, lean_object* v_x_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_extend_spec__0(v_x_203_, v_x_204_, v_x_205_);
lean_dec(v_x_203_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_extend_spec__1(lean_object* v_gens_207_, lean_object* v_x_208_, lean_object* v_x_209_){
_start:
{
if (lean_obj_tag(v_x_209_) == 0)
{
lean_dec(v_gens_207_);
return v_x_208_;
}
else
{
lean_object* v_head_210_; lean_object* v_tail_211_; lean_object* v___x_212_; 
v_head_210_ = lean_ctor_get(v_x_209_, 0);
v_tail_211_ = lean_ctor_get(v_x_209_, 1);
lean_inc(v_gens_207_);
v___x_212_ = lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_extend_spec__0(v_head_210_, v_x_208_, v_gens_207_);
v_x_208_ = v___x_212_;
v_x_209_ = v_tail_211_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_extend_spec__1___boxed(lean_object* v_gens_214_, lean_object* v_x_215_, lean_object* v_x_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_extend_spec__1(v_gens_214_, v_x_215_, v_x_216_);
lean_dec(v_x_216_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_extend(lean_object* v_gens_218_, lean_object* v_x_219_, lean_object* v_x_220_, lean_object* v_x_221_){
_start:
{
lean_object* v_zero_222_; uint8_t v_isZero_223_; 
v_zero_222_ = lean_unsigned_to_nat(0u);
v_isZero_223_ = lean_nat_dec_eq(v_x_219_, v_zero_222_);
if (v_isZero_223_ == 1)
{
lean_dec(v_x_221_);
lean_dec(v_x_219_);
lean_dec(v_gens_218_);
return v_x_220_;
}
else
{
if (lean_obj_tag(v_x_221_) == 0)
{
lean_dec(v_x_219_);
lean_dec(v_gens_218_);
return v_x_220_;
}
else
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v_acc_226_; lean_object* v_fst_227_; lean_object* v_snd_228_; lean_object* v_one_229_; lean_object* v_n_230_; 
v___x_224_ = lean_box(0);
v___x_225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_225_, 0, v_x_220_);
lean_ctor_set(v___x_225_, 1, v___x_224_);
lean_inc(v_gens_218_);
v_acc_226_ = lp_LanglandsOracles_List_foldl___at___00Oracles_Mat2_extend_spec__1(v_gens_218_, v___x_225_, v_x_221_);
lean_dec(v_x_221_);
v_fst_227_ = lean_ctor_get(v_acc_226_, 0);
lean_inc(v_fst_227_);
v_snd_228_ = lean_ctor_get(v_acc_226_, 1);
lean_inc(v_snd_228_);
lean_dec_ref(v_acc_226_);
v_one_229_ = lean_unsigned_to_nat(1u);
v_n_230_ = lean_nat_sub(v_x_219_, v_one_229_);
lean_dec(v_x_219_);
v_x_219_ = v_n_230_;
v_x_220_ = v_fst_227_;
v_x_221_ = v_snd_228_;
goto _start;
}
}
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_relationsHold_spec__0(lean_object* v_i_232_, lean_object* v_tbl_233_, lean_object* v_d_234_, lean_object* v_x_235_){
_start:
{
if (lean_obj_tag(v_x_235_) == 0)
{
uint8_t v___x_236_; 
v___x_236_ = 1;
return v___x_236_;
}
else
{
lean_object* v_head_237_; lean_object* v_tail_238_; lean_object* v_fst_239_; lean_object* v_snd_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; uint8_t v___x_248_; 
v_head_237_ = lean_ctor_get(v_x_235_, 0);
v_tail_238_ = lean_ctor_get(v_x_235_, 1);
v_fst_239_ = lean_ctor_get(v_head_237_, 0);
v_snd_240_ = lean_ctor_get(v_head_237_, 1);
v___x_241_ = lean_unsigned_to_nat(3u);
v___x_242_ = lp_LanglandsOracles_Oracles_Mat2_mulIdx___redArg(v___x_241_, v_i_232_, v_fst_239_);
v___x_243_ = lp_LanglandsOracles_Oracles_Mat2_tget(v_tbl_233_, v___x_242_);
lean_dec(v___x_242_);
v___x_244_ = lean_unsigned_to_nat(1u);
v___x_245_ = lean_nat_sub(v_d_234_, v___x_244_);
v___x_246_ = lp_LanglandsOracles_Oracles_Mat2_mulIdx___redArg(v___x_241_, v___x_245_, v_snd_240_);
lean_dec(v___x_245_);
v___x_247_ = lean_nat_add(v___x_246_, v___x_244_);
lean_dec(v___x_246_);
v___x_248_ = lean_nat_dec_eq(v___x_243_, v___x_247_);
lean_dec(v___x_247_);
lean_dec(v___x_243_);
if (v___x_248_ == 0)
{
return v___x_248_;
}
else
{
v_x_235_ = v_tail_238_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_relationsHold_spec__0___boxed(lean_object* v_i_250_, lean_object* v_tbl_251_, lean_object* v_d_252_, lean_object* v_x_253_){
_start:
{
uint8_t v_res_254_; lean_object* v_r_255_; 
v_res_254_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_relationsHold_spec__0(v_i_250_, v_tbl_251_, v_d_252_, v_x_253_);
lean_dec(v_x_253_);
lean_dec(v_d_252_);
lean_dec(v_tbl_251_);
lean_dec(v_i_250_);
v_r_255_ = lean_box(v_res_254_);
return v_r_255_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_relationsHold_spec__1(lean_object* v_tbl_256_, lean_object* v_T_257_, lean_object* v_gens_258_, lean_object* v_x_259_){
_start:
{
if (lean_obj_tag(v_x_259_) == 0)
{
uint8_t v___x_260_; 
lean_dec_ref(v_T_257_);
v___x_260_ = 1;
return v___x_260_;
}
else
{
lean_object* v_head_261_; lean_object* v_tail_262_; uint8_t v___y_264_; lean_object* v_d_266_; lean_object* v___x_267_; uint8_t v___x_268_; 
v_head_261_ = lean_ctor_get(v_x_259_, 0);
v_tail_262_ = lean_ctor_get(v_x_259_, 1);
v_d_266_ = lp_LanglandsOracles_Oracles_Mat2_tget(v_tbl_256_, v_head_261_);
v___x_267_ = lean_unsigned_to_nat(0u);
v___x_268_ = lean_nat_dec_eq(v_d_266_, v___x_267_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; uint8_t v___x_276_; 
v___x_269_ = lean_unsigned_to_nat(3u);
v___x_270_ = lean_unsigned_to_nat(1u);
v___x_271_ = lean_nat_sub(v_d_266_, v___x_270_);
v___x_272_ = lp_LanglandsOracles_Oracles_Mat2_decode___redArg(v___x_269_, v___x_271_);
lean_dec(v___x_271_);
v___x_273_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_invariants_spec__0(v___x_272_);
lean_dec_ref(v___x_272_);
v___x_274_ = lp_LanglandsOracles_Oracles_Mat2_decode___redArg(v___x_269_, v_head_261_);
lean_inc_ref(v_T_257_);
v___x_275_ = lean_apply_1(v_T_257_, v___x_274_);
v___x_276_ = lean_nat_dec_eq(v___x_273_, v___x_275_);
lean_dec(v___x_275_);
lean_dec(v___x_273_);
if (v___x_276_ == 0)
{
lean_dec(v_d_266_);
v___y_264_ = v___x_276_;
goto v___jp_263_;
}
else
{
uint8_t v___x_277_; 
v___x_277_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_relationsHold_spec__0(v_head_261_, v_tbl_256_, v_d_266_, v_gens_258_);
lean_dec(v_d_266_);
v___y_264_ = v___x_277_;
goto v___jp_263_;
}
}
else
{
uint8_t v___x_278_; 
lean_dec(v_d_266_);
lean_dec_ref(v_T_257_);
v___x_278_ = 0;
return v___x_278_;
}
v___jp_263_:
{
if (v___y_264_ == 0)
{
lean_dec_ref(v_T_257_);
return v___y_264_;
}
else
{
v_x_259_ = v_tail_262_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_relationsHold_spec__1___boxed(lean_object* v_tbl_279_, lean_object* v_T_280_, lean_object* v_gens_281_, lean_object* v_x_282_){
_start:
{
uint8_t v_res_283_; lean_object* v_r_284_; 
v_res_283_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_relationsHold_spec__1(v_tbl_279_, v_T_280_, v_gens_281_, v_x_282_);
lean_dec(v_x_282_);
lean_dec(v_gens_281_);
lean_dec(v_tbl_279_);
v_r_284_ = lean_box(v_res_283_);
return v_r_284_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_relationsHold(lean_object* v_T_285_, lean_object* v_gens_286_, lean_object* v_tbl_287_){
_start:
{
lean_object* v___x_288_; uint8_t v___x_289_; 
v___x_288_ = lp_LanglandsOracles_Oracles_Mat2_glIdx;
v___x_289_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_relationsHold_spec__1(v_tbl_287_, v_T_285_, v_gens_286_, v___x_288_);
return v___x_289_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_relationsHold___boxed(lean_object* v_T_290_, lean_object* v_gens_291_, lean_object* v_tbl_292_){
_start:
{
uint8_t v_res_293_; lean_object* v_r_294_; 
v_res_293_ = lp_LanglandsOracles_Oracles_Mat2_relationsHold(v_T_290_, v_gens_291_, v_tbl_292_);
lean_dec(v_tbl_292_);
lean_dec(v_gens_291_);
v_r_294_ = lean_box(v_res_293_);
return v_r_294_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_one3___closed__0(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_295_ = lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants_spec__1;
v___x_296_ = lean_unsigned_to_nat(3u);
v___x_297_ = lp_LanglandsOracles_Oracles_Mat2_encode(v___x_296_, v___x_295_);
return v___x_297_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_one3(void){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_one3___closed__0, &lp_LanglandsOracles_Oracles_Mat2_one3___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_one3___closed__0);
return v___x_298_;
}
}
static lean_object* _init_lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___closed__0(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_299_ = lp_LanglandsOracles_Oracles_Mat2_one3;
v___x_300_ = lean_unsigned_to_nat(0u);
v___x_301_ = lp_LanglandsOracles_Oracles_Mat2_tset(v___x_300_, v___x_299_, v___x_299_);
return v___x_301_;
}
}
static lean_object* _init_lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___closed__1(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_302_ = lean_box(0);
v___x_303_ = lp_LanglandsOracles_Oracles_Mat2_one3;
v___x_304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
lean_ctor_set(v___x_304_, 1, v___x_302_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0(lean_object* v_g_u2080_305_, lean_object* v_A_306_, lean_object* v_h_u2080_307_, lean_object* v_T_308_, lean_object* v_x_309_){
_start:
{
if (lean_obj_tag(v_x_309_) == 0)
{
lean_object* v___x_310_; 
lean_dec_ref(v_T_308_);
lean_dec(v_A_306_);
v___x_310_ = lean_box(0);
return v___x_310_;
}
else
{
lean_object* v_head_311_; lean_object* v_tail_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_333_; 
v_head_311_ = lean_ctor_get(v_x_309_, 0);
v_tail_312_ = lean_ctor_get(v_x_309_, 1);
v_isSharedCheck_333_ = !lean_is_exclusive(v_x_309_);
if (v_isSharedCheck_333_ == 0)
{
v___x_314_ = v_x_309_;
v_isShared_315_ = v_isSharedCheck_333_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_tail_312_);
lean_inc(v_head_311_);
lean_dec(v_x_309_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_333_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_323_; 
v___x_316_ = lean_unsigned_to_nat(3u);
v___x_317_ = lp_LanglandsOracles_Oracles_Mat2_encode(v___x_316_, v_g_u2080_305_);
lean_inc(v_A_306_);
v___x_318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_317_);
lean_ctor_set(v___x_318_, 1, v_A_306_);
v___x_319_ = lp_LanglandsOracles_Oracles_Mat2_encode(v___x_316_, v_h_u2080_307_);
v___x_320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
lean_ctor_set(v___x_320_, 1, v_head_311_);
v___x_321_ = lean_box(0);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 1, v___x_321_);
lean_ctor_set(v___x_314_, 0, v___x_320_);
v___x_323_ = v___x_314_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v___x_320_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v___x_321_);
v___x_323_ = v_reuseFailAlloc_332_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
lean_object* v_gens_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v_tbl_328_; uint8_t v___x_329_; 
v_gens_324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_gens_324_, 0, v___x_318_);
lean_ctor_set(v_gens_324_, 1, v___x_323_);
v___x_325_ = lean_unsigned_to_nat(48u);
v___x_326_ = lean_obj_once(&lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___closed__0, &lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___closed__0_once, _init_lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___closed__0);
v___x_327_ = lean_obj_once(&lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___closed__1, &lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___closed__1_once, _init_lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___closed__1);
lean_inc_ref(v_gens_324_);
v_tbl_328_ = lp_LanglandsOracles_Oracles_Mat2_extend(v_gens_324_, v___x_325_, v___x_326_, v___x_327_);
lean_inc_ref(v_T_308_);
v___x_329_ = lp_LanglandsOracles_Oracles_Mat2_relationsHold(v_T_308_, v_gens_324_, v_tbl_328_);
lean_dec_ref_known(v_gens_324_, 2);
if (v___x_329_ == 0)
{
lean_dec(v_tbl_328_);
v_x_309_ = v_tail_312_;
goto _start;
}
else
{
lean_object* v___x_331_; 
lean_dec(v_tail_312_);
lean_dec_ref(v_T_308_);
lean_dec(v_A_306_);
v___x_331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_331_, 0, v_tbl_328_);
return v___x_331_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___boxed(lean_object* v_g_u2080_334_, lean_object* v_A_335_, lean_object* v_h_u2080_336_, lean_object* v_T_337_, lean_object* v_x_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0(v_g_u2080_334_, v_A_335_, v_h_u2080_336_, v_T_337_, v_x_338_);
lean_dec_ref(v_h_u2080_336_);
lean_dec_ref(v_g_u2080_334_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__1_spec__1(lean_object* v_T_340_, lean_object* v_h_u2080_341_, lean_object* v_g_u2080_342_, lean_object* v_x_343_){
_start:
{
if (lean_obj_tag(v_x_343_) == 0)
{
lean_object* v___x_344_; 
lean_dec_ref(v_h_u2080_341_);
lean_dec_ref(v_T_340_);
v___x_344_ = lean_box(0);
return v___x_344_;
}
else
{
lean_object* v_head_345_; lean_object* v_tail_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v_head_345_ = lean_ctor_get(v_x_343_, 0);
lean_inc(v_head_345_);
v_tail_346_ = lean_ctor_get(v_x_343_, 1);
lean_inc(v_tail_346_);
lean_dec_ref_known(v_x_343_, 2);
lean_inc_ref(v_h_u2080_341_);
lean_inc_ref_n(v_T_340_, 2);
v___x_347_ = lp_LanglandsOracles_Oracles_Mat2_candidates(v_T_340_, v_h_u2080_341_);
v___x_348_ = lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0(v_g_u2080_342_, v_head_345_, v_h_u2080_341_, v_T_340_, v___x_347_);
if (lean_obj_tag(v___x_348_) == 0)
{
v_x_343_ = v_tail_346_;
goto _start;
}
else
{
lean_dec(v_tail_346_);
lean_dec_ref(v_h_u2080_341_);
lean_dec_ref(v_T_340_);
return v___x_348_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__1_spec__1___boxed(lean_object* v_T_350_, lean_object* v_h_u2080_351_, lean_object* v_g_u2080_352_, lean_object* v_x_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = lp_LanglandsOracles_List_findSome_x3f___at___00List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__1_spec__1(v_T_350_, v_h_u2080_351_, v_g_u2080_352_, v_x_353_);
lean_dec_ref(v_g_u2080_352_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__1(lean_object* v_g_u2080_355_, lean_object* v_h_u2080_356_, lean_object* v_T_357_, lean_object* v_x_358_){
_start:
{
if (lean_obj_tag(v_x_358_) == 0)
{
lean_object* v___x_359_; 
lean_dec_ref(v_T_357_);
lean_dec_ref(v_h_u2080_356_);
v___x_359_ = lean_box(0);
return v___x_359_;
}
else
{
lean_object* v_head_360_; lean_object* v_tail_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v_head_360_ = lean_ctor_get(v_x_358_, 0);
lean_inc(v_head_360_);
v_tail_361_ = lean_ctor_get(v_x_358_, 1);
lean_inc(v_tail_361_);
lean_dec_ref_known(v_x_358_, 2);
lean_inc_ref(v_h_u2080_356_);
lean_inc_ref_n(v_T_357_, 2);
v___x_362_ = lp_LanglandsOracles_Oracles_Mat2_candidates(v_T_357_, v_h_u2080_356_);
v___x_363_ = lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0(v_g_u2080_355_, v_head_360_, v_h_u2080_356_, v_T_357_, v___x_362_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v___x_364_; 
v___x_364_ = lp_LanglandsOracles_List_findSome_x3f___at___00List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__1_spec__1(v_T_357_, v_h_u2080_356_, v_g_u2080_355_, v_tail_361_);
return v___x_364_;
}
else
{
lean_dec(v_tail_361_);
lean_dec_ref(v_T_357_);
lean_dec_ref(v_h_u2080_356_);
return v___x_363_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__1___boxed(lean_object* v_g_u2080_365_, lean_object* v_h_u2080_366_, lean_object* v_T_367_, lean_object* v_x_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__1(v_g_u2080_365_, v_h_u2080_366_, v_T_367_, v_x_368_);
lean_dec_ref(v_g_u2080_365_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_searchRep(lean_object* v_T_370_, lean_object* v_g_u2080_371_, lean_object* v_h_u2080_372_){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
lean_inc_ref(v_g_u2080_371_);
lean_inc_ref(v_T_370_);
v___x_373_ = lp_LanglandsOracles_Oracles_Mat2_candidates(v_T_370_, v_g_u2080_371_);
v___x_374_ = lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__1(v_g_u2080_371_, v_h_u2080_372_, v_T_370_, v___x_373_);
lean_dec_ref(v_g_u2080_371_);
return v___x_374_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_certified_spec__2(lean_object* v_tbl_375_, lean_object* v_T_376_, lean_object* v_x_377_){
_start:
{
if (lean_obj_tag(v_x_377_) == 0)
{
uint8_t v___x_378_; 
lean_dec_ref(v_T_376_);
v___x_378_ = 1;
return v___x_378_;
}
else
{
lean_object* v_head_379_; lean_object* v_tail_380_; lean_object* v___x_381_; lean_object* v___x_382_; uint8_t v___x_383_; 
v_head_379_ = lean_ctor_get(v_x_377_, 0);
v_tail_380_ = lean_ctor_get(v_x_377_, 1);
v___x_381_ = lp_LanglandsOracles_Oracles_Mat2_tget(v_tbl_375_, v_head_379_);
v___x_382_ = lean_unsigned_to_nat(0u);
v___x_383_ = lean_nat_dec_eq(v___x_381_, v___x_382_);
if (v___x_383_ == 0)
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; uint8_t v___x_391_; 
v___x_384_ = lean_unsigned_to_nat(3u);
v___x_385_ = lean_unsigned_to_nat(1u);
v___x_386_ = lean_nat_sub(v___x_381_, v___x_385_);
lean_dec(v___x_381_);
v___x_387_ = lp_LanglandsOracles_Oracles_Mat2_decode___redArg(v___x_384_, v___x_386_);
lean_dec(v___x_386_);
v___x_388_ = lp_LanglandsOracles_Oracles_M2_trace___at___00Oracles_Mat2_invariants_spec__0(v___x_387_);
lean_dec_ref(v___x_387_);
v___x_389_ = lp_LanglandsOracles_Oracles_Mat2_decode___redArg(v___x_384_, v_head_379_);
lean_inc_ref(v_T_376_);
v___x_390_ = lean_apply_1(v_T_376_, v___x_389_);
v___x_391_ = lean_nat_dec_eq(v___x_388_, v___x_390_);
lean_dec(v___x_390_);
lean_dec(v___x_388_);
if (v___x_391_ == 0)
{
lean_dec_ref(v_T_376_);
return v___x_391_;
}
else
{
v_x_377_ = v_tail_380_;
goto _start;
}
}
else
{
uint8_t v___x_393_; 
lean_dec(v___x_381_);
lean_dec_ref(v_T_376_);
v___x_393_ = 0;
return v___x_393_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_certified_spec__2___boxed(lean_object* v_tbl_394_, lean_object* v_T_395_, lean_object* v_x_396_){
_start:
{
uint8_t v_res_397_; lean_object* v_r_398_; 
v_res_397_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_certified_spec__2(v_tbl_394_, v_T_395_, v_x_396_);
lean_dec(v_x_396_);
lean_dec(v_tbl_394_);
v_r_398_ = lean_box(v_res_397_);
return v_r_398_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_certified_spec__0(lean_object* v_tbl_399_, lean_object* v_i_400_, lean_object* v_x_401_){
_start:
{
if (lean_obj_tag(v_x_401_) == 0)
{
uint8_t v___x_402_; 
v___x_402_ = 1;
return v___x_402_;
}
else
{
lean_object* v_head_403_; lean_object* v_tail_404_; uint8_t v___y_406_; lean_object* v___x_408_; lean_object* v___x_409_; uint8_t v___x_410_; 
v_head_403_ = lean_ctor_get(v_x_401_, 0);
v_tail_404_ = lean_ctor_get(v_x_401_, 1);
v___x_408_ = lp_LanglandsOracles_Oracles_Mat2_tget(v_tbl_399_, v_i_400_);
v___x_409_ = lean_unsigned_to_nat(0u);
v___x_410_ = lean_nat_dec_eq(v___x_408_, v___x_409_);
if (v___x_410_ == 0)
{
lean_object* v___x_411_; uint8_t v___x_412_; 
v___x_411_ = lp_LanglandsOracles_Oracles_Mat2_tget(v_tbl_399_, v_head_403_);
v___x_412_ = lean_nat_dec_eq(v___x_411_, v___x_409_);
if (v___x_412_ == 0)
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; uint8_t v___x_421_; 
v___x_413_ = lean_unsigned_to_nat(3u);
v___x_414_ = lp_LanglandsOracles_Oracles_Mat2_mulIdx___redArg(v___x_413_, v_i_400_, v_head_403_);
v___x_415_ = lp_LanglandsOracles_Oracles_Mat2_tget(v_tbl_399_, v___x_414_);
lean_dec(v___x_414_);
v___x_416_ = lean_unsigned_to_nat(1u);
v___x_417_ = lean_nat_sub(v___x_408_, v___x_416_);
lean_dec(v___x_408_);
v___x_418_ = lean_nat_sub(v___x_411_, v___x_416_);
lean_dec(v___x_411_);
v___x_419_ = lp_LanglandsOracles_Oracles_Mat2_mulIdx___redArg(v___x_413_, v___x_417_, v___x_418_);
lean_dec(v___x_418_);
lean_dec(v___x_417_);
v___x_420_ = lean_nat_add(v___x_419_, v___x_416_);
lean_dec(v___x_419_);
v___x_421_ = lean_nat_dec_eq(v___x_415_, v___x_420_);
lean_dec(v___x_420_);
lean_dec(v___x_415_);
v___y_406_ = v___x_421_;
goto v___jp_405_;
}
else
{
lean_dec(v___x_411_);
lean_dec(v___x_408_);
v___y_406_ = v___x_410_;
goto v___jp_405_;
}
}
else
{
uint8_t v___x_422_; 
lean_dec(v___x_408_);
v___x_422_ = 0;
return v___x_422_;
}
v___jp_405_:
{
if (v___y_406_ == 0)
{
return v___y_406_;
}
else
{
v_x_401_ = v_tail_404_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_certified_spec__0___boxed(lean_object* v_tbl_423_, lean_object* v_i_424_, lean_object* v_x_425_){
_start:
{
uint8_t v_res_426_; lean_object* v_r_427_; 
v_res_426_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_certified_spec__0(v_tbl_423_, v_i_424_, v_x_425_);
lean_dec(v_x_425_);
lean_dec(v_i_424_);
lean_dec(v_tbl_423_);
v_r_427_ = lean_box(v_res_426_);
return v_r_427_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_certified_spec__1(lean_object* v_tbl_428_, lean_object* v_x_429_){
_start:
{
if (lean_obj_tag(v_x_429_) == 0)
{
uint8_t v___x_430_; 
v___x_430_ = 1;
return v___x_430_;
}
else
{
lean_object* v_head_431_; lean_object* v_tail_432_; lean_object* v___x_433_; uint8_t v___x_434_; 
v_head_431_ = lean_ctor_get(v_x_429_, 0);
v_tail_432_ = lean_ctor_get(v_x_429_, 1);
v___x_433_ = lp_LanglandsOracles_Oracles_Mat2_glIdx;
v___x_434_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_certified_spec__0(v_tbl_428_, v_head_431_, v___x_433_);
if (v___x_434_ == 0)
{
return v___x_434_;
}
else
{
v_x_429_ = v_tail_432_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_certified_spec__1___boxed(lean_object* v_tbl_436_, lean_object* v_x_437_){
_start:
{
uint8_t v_res_438_; lean_object* v_r_439_; 
v_res_438_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_certified_spec__1(v_tbl_436_, v_x_437_);
lean_dec(v_x_437_);
lean_dec(v_tbl_436_);
v_r_439_ = lean_box(v_res_438_);
return v_r_439_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_certified(lean_object* v_T_440_, lean_object* v_tbl_441_){
_start:
{
lean_object* v___x_442_; uint8_t v___x_443_; 
v___x_442_ = lp_LanglandsOracles_Oracles_Mat2_glIdx;
v___x_443_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_certified_spec__1(v_tbl_441_, v___x_442_);
if (v___x_443_ == 0)
{
lean_dec_ref(v_T_440_);
return v___x_443_;
}
else
{
uint8_t v___x_444_; 
v___x_444_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_certified_spec__2(v_tbl_441_, v_T_440_, v___x_442_);
return v___x_444_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_certified___boxed(lean_object* v_T_445_, lean_object* v_tbl_446_){
_start:
{
uint8_t v_res_447_; lean_object* v_r_448_; 
v_res_447_ = lp_LanglandsOracles_Oracles_Mat2_certified(v_T_445_, v_tbl_446_);
lean_dec(v_tbl_446_);
v_r_448_ = lean_box(v_res_447_);
return v_r_448_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_g_u2080___closed__0(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_449_ = lean_unsigned_to_nat(5u);
v___x_450_ = lp_LanglandsOracles_Oracles_frobMat3(v___x_449_);
return v___x_450_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_g_u2080(void){
_start:
{
lean_object* v___x_451_; 
v___x_451_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_g_u2080___closed__0, &lp_LanglandsOracles_Oracles_Mat2_g_u2080___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_g_u2080___closed__0);
if (lean_obj_tag(v___x_451_) == 0)
{
lean_object* v___x_452_; 
v___x_452_ = lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants_spec__1;
return v___x_452_;
}
else
{
lean_object* v_val_453_; 
v_val_453_ = lean_ctor_get(v___x_451_, 0);
lean_inc(v_val_453_);
return v_val_453_;
}
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_h_u2080___closed__0(void){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_454_ = lean_unsigned_to_nat(7u);
v___x_455_ = lp_LanglandsOracles_Oracles_frobMat3(v___x_454_);
return v___x_455_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_h_u2080(void){
_start:
{
lean_object* v___x_456_; 
v___x_456_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_h_u2080___closed__0, &lp_LanglandsOracles_Oracles_Mat2_h_u2080___closed__0_once, _init_lp_LanglandsOracles_Oracles_Mat2_h_u2080___closed__0);
if (lean_obj_tag(v___x_456_) == 0)
{
lean_object* v___x_457_; 
v___x_457_ = lp_LanglandsOracles_Oracles_M2_one___at___00Oracles_Mat2_invariants_spec__1;
return v___x_457_;
}
else
{
lean_object* v_val_458_; 
v_val_458_ = lean_ctor_get(v___x_456_, 0);
lean_inc(v_val_458_);
return v_val_458_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_Mat2_searchAll_spec__0(lean_object* v_g_u2080_459_, lean_object* v_A_460_, lean_object* v_h_u2080_461_, lean_object* v_T_462_, lean_object* v_a_463_, lean_object* v_a_464_){
_start:
{
if (lean_obj_tag(v_a_463_) == 0)
{
lean_object* v___x_465_; 
lean_dec_ref(v_T_462_);
lean_dec(v_A_460_);
v___x_465_ = lean_array_to_list(v_a_464_);
return v___x_465_;
}
else
{
lean_object* v_head_466_; lean_object* v_tail_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_489_; 
v_head_466_ = lean_ctor_get(v_a_463_, 0);
v_tail_467_ = lean_ctor_get(v_a_463_, 1);
v_isSharedCheck_489_ = !lean_is_exclusive(v_a_463_);
if (v_isSharedCheck_489_ == 0)
{
v___x_469_ = v_a_463_;
v_isShared_470_ = v_isSharedCheck_489_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_tail_467_);
lean_inc(v_head_466_);
lean_dec(v_a_463_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_489_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_478_; 
v___x_471_ = lean_unsigned_to_nat(3u);
v___x_472_ = lp_LanglandsOracles_Oracles_Mat2_encode(v___x_471_, v_g_u2080_459_);
lean_inc(v_A_460_);
v___x_473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
lean_ctor_set(v___x_473_, 1, v_A_460_);
v___x_474_ = lp_LanglandsOracles_Oracles_Mat2_encode(v___x_471_, v_h_u2080_461_);
v___x_475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_475_, 0, v___x_474_);
lean_ctor_set(v___x_475_, 1, v_head_466_);
v___x_476_ = lean_box(0);
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 1, v___x_476_);
lean_ctor_set(v___x_469_, 0, v___x_475_);
v___x_478_ = v___x_469_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v___x_475_);
lean_ctor_set(v_reuseFailAlloc_488_, 1, v___x_476_);
v___x_478_ = v_reuseFailAlloc_488_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
lean_object* v_gens_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v_tbl_483_; uint8_t v___x_484_; 
v_gens_479_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_gens_479_, 0, v___x_473_);
lean_ctor_set(v_gens_479_, 1, v___x_478_);
v___x_480_ = lean_unsigned_to_nat(48u);
v___x_481_ = lean_obj_once(&lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___closed__0, &lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___closed__0_once, _init_lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___closed__0);
v___x_482_ = lean_obj_once(&lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___closed__1, &lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___closed__1_once, _init_lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_Mat2_searchRep_spec__0___closed__1);
lean_inc_ref(v_gens_479_);
v_tbl_483_ = lp_LanglandsOracles_Oracles_Mat2_extend(v_gens_479_, v___x_480_, v___x_481_, v___x_482_);
lean_inc_ref(v_T_462_);
v___x_484_ = lp_LanglandsOracles_Oracles_Mat2_relationsHold(v_T_462_, v_gens_479_, v_tbl_483_);
lean_dec_ref_known(v_gens_479_, 2);
if (v___x_484_ == 0)
{
lean_dec(v_tbl_483_);
v_a_463_ = v_tail_467_;
goto _start;
}
else
{
lean_object* v___x_486_; 
v___x_486_ = lean_array_push(v_a_464_, v_tbl_483_);
v_a_463_ = v_tail_467_;
v_a_464_ = v___x_486_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_Mat2_searchAll_spec__0___boxed(lean_object* v_g_u2080_490_, lean_object* v_A_491_, lean_object* v_h_u2080_492_, lean_object* v_T_493_, lean_object* v_a_494_, lean_object* v_a_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_Mat2_searchAll_spec__0(v_g_u2080_490_, v_A_491_, v_h_u2080_492_, v_T_493_, v_a_494_, v_a_495_);
lean_dec_ref(v_h_u2080_492_);
lean_dec_ref(v_g_u2080_490_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_searchAll_spec__1_spec__1(lean_object* v_T_499_, lean_object* v_h_u2080_500_, lean_object* v_g_u2080_501_, lean_object* v_a_502_, lean_object* v_a_503_){
_start:
{
if (lean_obj_tag(v_a_502_) == 0)
{
lean_object* v___x_504_; 
lean_dec_ref(v_h_u2080_500_);
lean_dec_ref(v_T_499_);
v___x_504_ = lean_array_to_list(v_a_503_);
return v___x_504_;
}
else
{
lean_object* v_head_505_; lean_object* v_tail_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v_head_505_ = lean_ctor_get(v_a_502_, 0);
lean_inc(v_head_505_);
v_tail_506_ = lean_ctor_get(v_a_502_, 1);
lean_inc(v_tail_506_);
lean_dec_ref_known(v_a_502_, 2);
lean_inc_ref(v_h_u2080_500_);
lean_inc_ref_n(v_T_499_, 2);
v___x_507_ = lp_LanglandsOracles_Oracles_Mat2_candidates(v_T_499_, v_h_u2080_500_);
v___x_508_ = ((lean_object*)(lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_searchAll_spec__1_spec__1___closed__0));
v___x_509_ = lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_Mat2_searchAll_spec__0(v_g_u2080_501_, v_head_505_, v_h_u2080_500_, v_T_499_, v___x_507_, v___x_508_);
v___x_510_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_503_, v___x_509_);
v_a_502_ = v_tail_506_;
v_a_503_ = v___x_510_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_searchAll_spec__1_spec__1___boxed(lean_object* v_T_512_, lean_object* v_h_u2080_513_, lean_object* v_g_u2080_514_, lean_object* v_a_515_, lean_object* v_a_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_searchAll_spec__1_spec__1(v_T_512_, v_h_u2080_513_, v_g_u2080_514_, v_a_515_, v_a_516_);
lean_dec_ref(v_g_u2080_514_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_searchAll_spec__1(lean_object* v_g_u2080_518_, lean_object* v_h_u2080_519_, lean_object* v_T_520_, lean_object* v_a_521_, lean_object* v_a_522_){
_start:
{
if (lean_obj_tag(v_a_521_) == 0)
{
lean_object* v___x_523_; 
lean_dec_ref(v_T_520_);
lean_dec_ref(v_h_u2080_519_);
v___x_523_ = lean_array_to_list(v_a_522_);
return v___x_523_;
}
else
{
lean_object* v_head_524_; lean_object* v_tail_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v_head_524_ = lean_ctor_get(v_a_521_, 0);
lean_inc(v_head_524_);
v_tail_525_ = lean_ctor_get(v_a_521_, 1);
lean_inc(v_tail_525_);
lean_dec_ref_known(v_a_521_, 2);
lean_inc_ref(v_h_u2080_519_);
lean_inc_ref_n(v_T_520_, 2);
v___x_526_ = lp_LanglandsOracles_Oracles_Mat2_candidates(v_T_520_, v_h_u2080_519_);
v___x_527_ = ((lean_object*)(lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_searchAll_spec__1_spec__1___closed__0));
v___x_528_ = lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_Mat2_searchAll_spec__0(v_g_u2080_518_, v_head_524_, v_h_u2080_519_, v_T_520_, v___x_526_, v___x_527_);
v___x_529_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_522_, v___x_528_);
v___x_530_ = lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_searchAll_spec__1_spec__1(v_T_520_, v_h_u2080_519_, v_g_u2080_518_, v_tail_525_, v___x_529_);
return v___x_530_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_searchAll_spec__1___boxed(lean_object* v_g_u2080_531_, lean_object* v_h_u2080_532_, lean_object* v_T_533_, lean_object* v_a_534_, lean_object* v_a_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_searchAll_spec__1(v_g_u2080_531_, v_h_u2080_532_, v_T_533_, v_a_534_, v_a_535_);
lean_dec_ref(v_g_u2080_531_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_searchAll(lean_object* v_T_537_, lean_object* v_g_u2080_538_, lean_object* v_h_u2080_539_){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
lean_inc_ref(v_g_u2080_538_);
lean_inc_ref(v_T_537_);
v___x_540_ = lp_LanglandsOracles_Oracles_Mat2_candidates(v_T_537_, v_g_u2080_538_);
v___x_541_ = ((lean_object*)(lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_searchAll_spec__1_spec__1___closed__0));
v___x_542_ = lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_Mat2_searchAll_spec__1(v_g_u2080_538_, v_h_u2080_539_, v_T_537_, v___x_540_, v___x_541_);
lean_dec_ref(v_g_u2080_538_);
return v___x_542_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_conjugator_spec__0(lean_object* v_tbl_u2081_543_, lean_object* v_c_544_, lean_object* v_tbl_u2082_545_, lean_object* v_x_546_){
_start:
{
if (lean_obj_tag(v_x_546_) == 0)
{
uint8_t v___x_547_; 
v___x_547_ = 1;
return v___x_547_;
}
else
{
lean_object* v_head_548_; lean_object* v_tail_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; uint8_t v___x_558_; 
v_head_548_ = lean_ctor_get(v_x_546_, 0);
v_tail_549_ = lean_ctor_get(v_x_546_, 1);
v___x_550_ = lean_unsigned_to_nat(3u);
v___x_551_ = lp_LanglandsOracles_Oracles_Mat2_tget(v_tbl_u2081_543_, v_head_548_);
v___x_552_ = lean_unsigned_to_nat(1u);
v___x_553_ = lean_nat_sub(v___x_551_, v___x_552_);
lean_dec(v___x_551_);
v___x_554_ = lp_LanglandsOracles_Oracles_Mat2_mulIdx___redArg(v___x_550_, v_c_544_, v___x_553_);
lean_dec(v___x_553_);
v___x_555_ = lp_LanglandsOracles_Oracles_Mat2_tget(v_tbl_u2082_545_, v_head_548_);
v___x_556_ = lean_nat_sub(v___x_555_, v___x_552_);
lean_dec(v___x_555_);
v___x_557_ = lp_LanglandsOracles_Oracles_Mat2_mulIdx___redArg(v___x_550_, v___x_556_, v_c_544_);
lean_dec(v___x_556_);
v___x_558_ = lean_nat_dec_eq(v___x_554_, v___x_557_);
lean_dec(v___x_557_);
lean_dec(v___x_554_);
if (v___x_558_ == 0)
{
return v___x_558_;
}
else
{
v_x_546_ = v_tail_549_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_conjugator_spec__0___boxed(lean_object* v_tbl_u2081_560_, lean_object* v_c_561_, lean_object* v_tbl_u2082_562_, lean_object* v_x_563_){
_start:
{
uint8_t v_res_564_; lean_object* v_r_565_; 
v_res_564_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_conjugator_spec__0(v_tbl_u2081_560_, v_c_561_, v_tbl_u2082_562_, v_x_563_);
lean_dec(v_x_563_);
lean_dec(v_tbl_u2082_562_);
lean_dec(v_c_561_);
lean_dec(v_tbl_u2081_560_);
v_r_565_ = lean_box(v_res_564_);
return v_r_565_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_find_x3f___at___00List_find_x3f___at___00Oracles_Mat2_conjugator_spec__1_spec__1(lean_object* v_g_u2080_566_, lean_object* v_h_u2080_567_, lean_object* v_tbl_u2081_568_, lean_object* v_tbl_u2082_569_, lean_object* v_x_570_){
_start:
{
if (lean_obj_tag(v_x_570_) == 0)
{
lean_object* v___x_571_; 
v___x_571_ = lean_box(0);
return v___x_571_;
}
else
{
lean_object* v_head_572_; lean_object* v_tail_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_588_; 
v_head_572_ = lean_ctor_get(v_x_570_, 0);
v_tail_573_ = lean_ctor_get(v_x_570_, 1);
v_isSharedCheck_588_ = !lean_is_exclusive(v_x_570_);
if (v_isSharedCheck_588_ == 0)
{
v___x_575_ = v_x_570_;
v_isShared_576_ = v_isSharedCheck_588_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_tail_573_);
lean_inc(v_head_572_);
lean_dec(v_x_570_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_588_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_582_; 
v___x_577_ = lean_unsigned_to_nat(3u);
v___x_578_ = lp_LanglandsOracles_Oracles_Mat2_encode(v___x_577_, v_g_u2080_566_);
v___x_579_ = lp_LanglandsOracles_Oracles_Mat2_encode(v___x_577_, v_h_u2080_567_);
v___x_580_ = lean_box(0);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 1, v___x_580_);
lean_ctor_set(v___x_575_, 0, v___x_579_);
v___x_582_ = v___x_575_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v___x_579_);
lean_ctor_set(v_reuseFailAlloc_587_, 1, v___x_580_);
v___x_582_ = v_reuseFailAlloc_587_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
lean_object* v___x_583_; uint8_t v___x_584_; 
v___x_583_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_578_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___x_584_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_conjugator_spec__0(v_tbl_u2081_568_, v_head_572_, v_tbl_u2082_569_, v___x_583_);
lean_dec_ref_known(v___x_583_, 2);
if (v___x_584_ == 0)
{
lean_dec(v_head_572_);
v_x_570_ = v_tail_573_;
goto _start;
}
else
{
lean_object* v___x_586_; 
lean_dec(v_tail_573_);
v___x_586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_586_, 0, v_head_572_);
return v___x_586_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_find_x3f___at___00List_find_x3f___at___00Oracles_Mat2_conjugator_spec__1_spec__1___boxed(lean_object* v_g_u2080_589_, lean_object* v_h_u2080_590_, lean_object* v_tbl_u2081_591_, lean_object* v_tbl_u2082_592_, lean_object* v_x_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = lp_LanglandsOracles_List_find_x3f___at___00List_find_x3f___at___00Oracles_Mat2_conjugator_spec__1_spec__1(v_g_u2080_589_, v_h_u2080_590_, v_tbl_u2081_591_, v_tbl_u2082_592_, v_x_593_);
lean_dec(v_tbl_u2082_592_);
lean_dec(v_tbl_u2081_591_);
lean_dec_ref(v_h_u2080_590_);
lean_dec_ref(v_g_u2080_589_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_find_x3f___at___00Oracles_Mat2_conjugator_spec__1(lean_object* v_tbl_u2081_595_, lean_object* v_tbl_u2082_596_, lean_object* v_g_u2080_597_, lean_object* v_h_u2080_598_, lean_object* v_x_599_){
_start:
{
if (lean_obj_tag(v_x_599_) == 0)
{
lean_object* v___x_600_; 
v___x_600_ = lean_box(0);
return v___x_600_;
}
else
{
lean_object* v_head_601_; lean_object* v_tail_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_617_; 
v_head_601_ = lean_ctor_get(v_x_599_, 0);
v_tail_602_ = lean_ctor_get(v_x_599_, 1);
v_isSharedCheck_617_ = !lean_is_exclusive(v_x_599_);
if (v_isSharedCheck_617_ == 0)
{
v___x_604_ = v_x_599_;
v_isShared_605_ = v_isSharedCheck_617_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_tail_602_);
lean_inc(v_head_601_);
lean_dec(v_x_599_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_617_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_611_; 
v___x_606_ = lean_unsigned_to_nat(3u);
v___x_607_ = lp_LanglandsOracles_Oracles_Mat2_encode(v___x_606_, v_g_u2080_597_);
v___x_608_ = lp_LanglandsOracles_Oracles_Mat2_encode(v___x_606_, v_h_u2080_598_);
v___x_609_ = lean_box(0);
if (v_isShared_605_ == 0)
{
lean_ctor_set(v___x_604_, 1, v___x_609_);
lean_ctor_set(v___x_604_, 0, v___x_608_);
v___x_611_ = v___x_604_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v___x_608_);
lean_ctor_set(v_reuseFailAlloc_616_, 1, v___x_609_);
v___x_611_ = v_reuseFailAlloc_616_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
lean_object* v___x_612_; uint8_t v___x_613_; 
v___x_612_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_612_, 0, v___x_607_);
lean_ctor_set(v___x_612_, 1, v___x_611_);
v___x_613_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_conjugator_spec__0(v_tbl_u2081_595_, v_head_601_, v_tbl_u2082_596_, v___x_612_);
lean_dec_ref_known(v___x_612_, 2);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; 
lean_dec(v_head_601_);
v___x_614_ = lp_LanglandsOracles_List_find_x3f___at___00List_find_x3f___at___00Oracles_Mat2_conjugator_spec__1_spec__1(v_g_u2080_597_, v_h_u2080_598_, v_tbl_u2081_595_, v_tbl_u2082_596_, v_tail_602_);
return v___x_614_;
}
else
{
lean_object* v___x_615_; 
lean_dec(v_tail_602_);
v___x_615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_615_, 0, v_head_601_);
return v___x_615_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_find_x3f___at___00Oracles_Mat2_conjugator_spec__1___boxed(lean_object* v_tbl_u2081_618_, lean_object* v_tbl_u2082_619_, lean_object* v_g_u2080_620_, lean_object* v_h_u2080_621_, lean_object* v_x_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = lp_LanglandsOracles_List_find_x3f___at___00Oracles_Mat2_conjugator_spec__1(v_tbl_u2081_618_, v_tbl_u2082_619_, v_g_u2080_620_, v_h_u2080_621_, v_x_622_);
lean_dec_ref(v_h_u2080_621_);
lean_dec_ref(v_g_u2080_620_);
lean_dec(v_tbl_u2082_619_);
lean_dec(v_tbl_u2081_618_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_conjugator(lean_object* v_tbl_u2081_624_, lean_object* v_tbl_u2082_625_, lean_object* v_g_u2080_626_, lean_object* v_h_u2080_627_){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_628_ = lp_LanglandsOracles_Oracles_Mat2_glIdx;
v___x_629_ = lp_LanglandsOracles_List_find_x3f___at___00Oracles_Mat2_conjugator_spec__1(v_tbl_u2081_624_, v_tbl_u2082_625_, v_g_u2080_626_, v_h_u2080_627_, v___x_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_conjugator___boxed(lean_object* v_tbl_u2081_630_, lean_object* v_tbl_u2082_631_, lean_object* v_g_u2080_632_, lean_object* v_h_u2080_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = lp_LanglandsOracles_Oracles_Mat2_conjugator(v_tbl_u2081_630_, v_tbl_u2082_631_, v_g_u2080_632_, v_h_u2080_633_);
lean_dec_ref(v_h_u2080_633_);
lean_dec_ref(v_g_u2080_632_);
lean_dec(v_tbl_u2082_631_);
lean_dec(v_tbl_u2081_630_);
return v_res_634_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_Mat2_conjugateAll_spec__0(lean_object* v_tbl_u2081_635_, lean_object* v_val_636_, lean_object* v_tbl_u2082_637_, lean_object* v_x_638_){
_start:
{
if (lean_obj_tag(v_x_638_) == 0)
{
uint8_t v___x_639_; 
v___x_639_ = 1;
return v___x_639_;
}
else
{
lean_object* v_head_640_; lean_object* v_tail_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; uint8_t v___x_650_; 
v_head_640_ = lean_ctor_get(v_x_638_, 0);
v_tail_641_ = lean_ctor_get(v_x_638_, 1);
v___x_642_ = lean_unsigned_to_nat(3u);
v___x_643_ = lp_LanglandsOracles_Oracles_Mat2_tget(v_tbl_u2081_635_, v_head_640_);
v___x_644_ = lean_unsigned_to_nat(1u);
v___x_645_ = lean_nat_sub(v___x_643_, v___x_644_);
lean_dec(v___x_643_);
v___x_646_ = lp_LanglandsOracles_Oracles_Mat2_mulIdx___redArg(v___x_642_, v_val_636_, v___x_645_);
lean_dec(v___x_645_);
v___x_647_ = lp_LanglandsOracles_Oracles_Mat2_tget(v_tbl_u2082_637_, v_head_640_);
v___x_648_ = lean_nat_sub(v___x_647_, v___x_644_);
lean_dec(v___x_647_);
v___x_649_ = lp_LanglandsOracles_Oracles_Mat2_mulIdx___redArg(v___x_642_, v___x_648_, v_val_636_);
lean_dec(v___x_648_);
v___x_650_ = lean_nat_dec_eq(v___x_646_, v___x_649_);
lean_dec(v___x_649_);
lean_dec(v___x_646_);
if (v___x_650_ == 0)
{
return v___x_650_;
}
else
{
v_x_638_ = v_tail_641_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_Mat2_conjugateAll_spec__0___boxed(lean_object* v_tbl_u2081_652_, lean_object* v_val_653_, lean_object* v_tbl_u2082_654_, lean_object* v_x_655_){
_start:
{
uint8_t v_res_656_; lean_object* v_r_657_; 
v_res_656_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_conjugateAll_spec__0(v_tbl_u2081_652_, v_val_653_, v_tbl_u2082_654_, v_x_655_);
lean_dec(v_x_655_);
lean_dec(v_tbl_u2082_654_);
lean_dec(v_val_653_);
lean_dec(v_tbl_u2081_652_);
v_r_657_ = lean_box(v_res_656_);
return v_r_657_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_Mat2_conjugateAll(lean_object* v_tbl_u2081_658_, lean_object* v_tbl_u2082_659_, lean_object* v_g_u2080_660_, lean_object* v_h_u2080_661_){
_start:
{
lean_object* v___x_662_; 
v___x_662_ = lp_LanglandsOracles_Oracles_Mat2_conjugator(v_tbl_u2081_658_, v_tbl_u2082_659_, v_g_u2080_660_, v_h_u2080_661_);
if (lean_obj_tag(v___x_662_) == 0)
{
uint8_t v___x_663_; 
v___x_663_ = 0;
return v___x_663_;
}
else
{
lean_object* v_val_664_; lean_object* v___x_665_; uint8_t v___x_666_; 
v_val_664_ = lean_ctor_get(v___x_662_, 0);
lean_inc(v_val_664_);
lean_dec_ref_known(v___x_662_, 1);
v___x_665_ = lp_LanglandsOracles_Oracles_Mat2_glIdx;
v___x_666_ = lp_LanglandsOracles_List_all___at___00Oracles_Mat2_conjugateAll_spec__0(v_tbl_u2081_658_, v_val_664_, v_tbl_u2082_659_, v___x_665_);
lean_dec(v_val_664_);
return v___x_666_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_Mat2_conjugateAll___boxed(lean_object* v_tbl_u2081_667_, lean_object* v_tbl_u2082_668_, lean_object* v_g_u2080_669_, lean_object* v_h_u2080_670_){
_start:
{
uint8_t v_res_671_; lean_object* v_r_672_; 
v_res_671_ = lp_LanglandsOracles_Oracles_Mat2_conjugateAll(v_tbl_u2081_667_, v_tbl_u2082_668_, v_g_u2080_669_, v_h_u2080_670_);
lean_dec_ref(v_h_u2080_670_);
lean_dec_ref(v_g_u2080_669_);
lean_dec(v_tbl_u2082_668_);
lean_dec(v_tbl_u2081_667_);
v_r_672_ = lean_box(v_res_671_);
return v_r_672_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_solsTprime___closed__1(void){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_674_ = lp_LanglandsOracles_Oracles_Mat2_h_u2080;
v___x_675_ = lp_LanglandsOracles_Oracles_Mat2_g_u2080;
v___x_676_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2_solsTprime___closed__0));
v___x_677_ = lp_LanglandsOracles_Oracles_Mat2_searchAll(v___x_676_, v___x_675_, v___x_674_);
return v___x_677_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_solsTprime(void){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_solsTprime___closed__1, &lp_LanglandsOracles_Oracles_Mat2_solsTprime___closed__1_once, _init_lp_LanglandsOracles_Oracles_Mat2_solsTprime___closed__1);
return v___x_678_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_solsTrace___closed__1(void){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___f_682_; lean_object* v___x_683_; 
v___x_680_ = lp_LanglandsOracles_Oracles_Mat2_h_u2080;
v___x_681_ = lp_LanglandsOracles_Oracles_Mat2_g_u2080;
v___f_682_ = ((lean_object*)(lp_LanglandsOracles_Oracles_Mat2_solsTrace___closed__0));
v___x_683_ = lp_LanglandsOracles_Oracles_Mat2_searchAll(v___f_682_, v___x_681_, v___x_680_);
return v___x_683_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_Mat2_solsTrace(void){
_start:
{
lean_object* v___x_684_; 
v___x_684_ = lean_obj_once(&lp_LanglandsOracles_Oracles_Mat2_solsTrace___closed__1, &lp_LanglandsOracles_Oracles_Mat2_solsTrace___closed__1_once, _init_lp_LanglandsOracles_Oracles_Mat2_solsTrace___closed__1);
return v___x_684_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ImageMod3(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ExcursionInstance(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LanglandsOracles_LanglandsOracles_PseudocharSearch(uint8_t builtin) {
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
res = initialize_LanglandsOracles_LanglandsOracles_ImageMod3(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_ExcursionInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_LanglandsOracles_Oracles_Mat2_glIdx = _init_lp_LanglandsOracles_Oracles_Mat2_glIdx();
lean_mark_persistent(lp_LanglandsOracles_Oracles_Mat2_glIdx);
lp_LanglandsOracles_Oracles_Mat2_one3 = _init_lp_LanglandsOracles_Oracles_Mat2_one3();
lean_mark_persistent(lp_LanglandsOracles_Oracles_Mat2_one3);
lp_LanglandsOracles_Oracles_Mat2_g_u2080 = _init_lp_LanglandsOracles_Oracles_Mat2_g_u2080();
lean_mark_persistent(lp_LanglandsOracles_Oracles_Mat2_g_u2080);
lp_LanglandsOracles_Oracles_Mat2_h_u2080 = _init_lp_LanglandsOracles_Oracles_Mat2_h_u2080();
lean_mark_persistent(lp_LanglandsOracles_Oracles_Mat2_h_u2080);
lp_LanglandsOracles_Oracles_Mat2_solsTprime = _init_lp_LanglandsOracles_Oracles_Mat2_solsTprime();
lean_mark_persistent(lp_LanglandsOracles_Oracles_Mat2_solsTprime);
lp_LanglandsOracles_Oracles_Mat2_solsTrace = _init_lp_LanglandsOracles_Oracles_Mat2_solsTrace();
lean_mark_persistent(lp_LanglandsOracles_Oracles_Mat2_solsTrace);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
