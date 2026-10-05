// Lean compiler output
// Module: LanglandsOracles.Matrix
// Imports: public import Init public meta import Init
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
lean_object* l_List_reverse___redArg(lean_object*);
extern lean_object* l_Int_instInhabited;
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_Int_mul___boxed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Int_sub___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___at___00Lean_Omega_IntList_smul_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
lean_object* l_List_zipIdxTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_trace_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_IMat_trace_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_IMat_trace_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_IMat_trace___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_IMat_trace___closed__0;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_trace(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_rowSums_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_rowSums(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_transpose_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_transpose_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_transpose(lean_object*);
static const lean_closure_object lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_mul_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_mul___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_mul_spec__0___closed__0 = (const lean_object*)&lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_mul_spec__0___closed__0_value;
static const lean_array_object lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_mul_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_mul_spec__0___closed__1 = (const lean_object*)&lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_mul_spec__0___closed__1_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_mul_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_mul_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_scale_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_scale_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_scale(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_scale___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_add___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_LanglandsOracles_Oracles_IMat_add___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LanglandsOracles_Oracles_IMat_add___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_IMat_add___closed__0_value;
static const lean_closure_object lp_LanglandsOracles_Oracles_IMat_add___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LanglandsOracles_Oracles_IMat_add___lam__0, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_IMat_add___closed__0_value)} };
static const lean_object* lp_LanglandsOracles_Oracles_IMat_add___closed__1 = (const lean_object*)&lp_LanglandsOracles_Oracles_IMat_add___closed__1_value;
static const lean_array_object lp_LanglandsOracles_Oracles_IMat_add___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_LanglandsOracles_Oracles_IMat_add___closed__2 = (const lean_object*)&lp_LanglandsOracles_Oracles_IMat_add___closed__2_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_add(lean_object*, lean_object*);
static const lean_closure_object lp_LanglandsOracles_Oracles_IMat_sub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_sub___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LanglandsOracles_Oracles_IMat_sub___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_IMat_sub___closed__0_value;
static const lean_closure_object lp_LanglandsOracles_Oracles_IMat_sub___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LanglandsOracles_Oracles_IMat_add___lam__0, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_IMat_sub___closed__0_value)} };
static const lean_object* lp_LanglandsOracles_Oracles_IMat_sub___closed__1 = (const lean_object*)&lp_LanglandsOracles_Oracles_IMat_sub___closed__1_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_sub(lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_identity_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_identity_spec__0___closed__0;
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_identity_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_identity_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_identity_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_identity(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00List_mapTR_loop___at___00Oracles_IMat_scaleRows_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_scaleRows_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_scaleRows___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_LanglandsOracles_Oracles_IMat_scaleRows___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LanglandsOracles_Oracles_IMat_scaleRows___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LanglandsOracles_Oracles_IMat_scaleRows___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_IMat_scaleRows___closed__0_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_scaleRows(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_scaleCols_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_scaleCols_spec__0___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_LanglandsOracles_List_mapTR_loop___at___00List_mapTR_loop___at___00Oracles_IMat_scaleCols_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_scaleCols_spec__0___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00List_mapTR_loop___at___00Oracles_IMat_scaleCols_spec__0_spec__0___closed__0 = (const lean_object*)&lp_LanglandsOracles_List_mapTR_loop___at___00List_mapTR_loop___at___00Oracles_IMat_scaleCols_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00List_mapTR_loop___at___00Oracles_IMat_scaleCols_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_scaleCols_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_scaleCols(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_trace_spec__0(lean_object* v_a_1_, lean_object* v_a_2_){
_start:
{
if (lean_obj_tag(v_a_1_) == 0)
{
lean_object* v___x_3_; 
v___x_3_ = l_List_reverse___redArg(v_a_2_);
return v___x_3_;
}
else
{
lean_object* v_head_4_; lean_object* v_tail_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_17_; 
v_head_4_ = lean_ctor_get(v_a_1_, 0);
v_tail_5_ = lean_ctor_get(v_a_1_, 1);
v_isSharedCheck_17_ = !lean_is_exclusive(v_a_1_);
if (v_isSharedCheck_17_ == 0)
{
v___x_7_ = v_a_1_;
v_isShared_8_ = v_isSharedCheck_17_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_tail_5_);
lean_inc(v_head_4_);
lean_dec(v_a_1_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_17_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v_fst_9_; lean_object* v_snd_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_14_; 
v_fst_9_ = lean_ctor_get(v_head_4_, 0);
lean_inc(v_fst_9_);
v_snd_10_ = lean_ctor_get(v_head_4_, 1);
lean_inc(v_snd_10_);
lean_dec(v_head_4_);
v___x_11_ = l_Int_instInhabited;
v___x_12_ = l_List_get_x21Internal___redArg(v___x_11_, v_fst_9_, v_snd_10_);
lean_dec(v_fst_9_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 1, v_a_2_);
lean_ctor_set(v___x_7_, 0, v___x_12_);
v___x_14_ = v___x_7_;
goto v_reusejp_13_;
}
else
{
lean_object* v_reuseFailAlloc_16_; 
v_reuseFailAlloc_16_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_16_, 0, v___x_12_);
lean_ctor_set(v_reuseFailAlloc_16_, 1, v_a_2_);
v___x_14_ = v_reuseFailAlloc_16_;
goto v_reusejp_13_;
}
v_reusejp_13_:
{
v_a_1_ = v_tail_5_;
v_a_2_ = v___x_14_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_IMat_trace_spec__1(lean_object* v_x_18_, lean_object* v_x_19_){
_start:
{
if (lean_obj_tag(v_x_19_) == 0)
{
return v_x_18_;
}
else
{
lean_object* v_head_20_; lean_object* v_tail_21_; lean_object* v___x_22_; 
v_head_20_ = lean_ctor_get(v_x_19_, 0);
v_tail_21_ = lean_ctor_get(v_x_19_, 1);
v___x_22_ = lean_int_add(v_x_18_, v_head_20_);
lean_dec(v_x_18_);
v_x_18_ = v___x_22_;
v_x_19_ = v_tail_21_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_IMat_trace_spec__1___boxed(lean_object* v_x_24_, lean_object* v_x_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = lp_LanglandsOracles_List_foldl___at___00Oracles_IMat_trace_spec__1(v_x_24_, v_x_25_);
lean_dec(v_x_25_);
return v_res_26_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_IMat_trace___closed__0(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_unsigned_to_nat(0u);
v___x_28_ = lean_nat_to_int(v___x_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_trace(lean_object* v_m_29_){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_30_ = lean_unsigned_to_nat(0u);
v___x_31_ = lean_obj_once(&lp_LanglandsOracles_Oracles_IMat_trace___closed__0, &lp_LanglandsOracles_Oracles_IMat_trace___closed__0_once, _init_lp_LanglandsOracles_Oracles_IMat_trace___closed__0);
v___x_32_ = l_List_zipIdxTR___redArg(v_m_29_, v___x_30_);
v___x_33_ = lean_box(0);
v___x_34_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_trace_spec__0(v___x_32_, v___x_33_);
v___x_35_ = lp_LanglandsOracles_List_foldl___at___00Oracles_IMat_trace_spec__1(v___x_31_, v___x_34_);
lean_dec(v___x_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_rowSums_spec__0(lean_object* v_a_36_, lean_object* v_a_37_){
_start:
{
if (lean_obj_tag(v_a_36_) == 0)
{
lean_object* v___x_38_; 
v___x_38_ = l_List_reverse___redArg(v_a_37_);
return v___x_38_;
}
else
{
lean_object* v_head_39_; lean_object* v_tail_40_; lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_50_; 
v_head_39_ = lean_ctor_get(v_a_36_, 0);
v_tail_40_ = lean_ctor_get(v_a_36_, 1);
v_isSharedCheck_50_ = !lean_is_exclusive(v_a_36_);
if (v_isSharedCheck_50_ == 0)
{
v___x_42_ = v_a_36_;
v_isShared_43_ = v_isSharedCheck_50_;
goto v_resetjp_41_;
}
else
{
lean_inc(v_tail_40_);
lean_inc(v_head_39_);
lean_dec(v_a_36_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_50_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_47_; 
v___x_44_ = lean_obj_once(&lp_LanglandsOracles_Oracles_IMat_trace___closed__0, &lp_LanglandsOracles_Oracles_IMat_trace___closed__0_once, _init_lp_LanglandsOracles_Oracles_IMat_trace___closed__0);
v___x_45_ = lp_LanglandsOracles_List_foldl___at___00Oracles_IMat_trace_spec__1(v___x_44_, v_head_39_);
lean_dec(v_head_39_);
if (v_isShared_43_ == 0)
{
lean_ctor_set(v___x_42_, 1, v_a_37_);
lean_ctor_set(v___x_42_, 0, v___x_45_);
v___x_47_ = v___x_42_;
goto v_reusejp_46_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v___x_45_);
lean_ctor_set(v_reuseFailAlloc_49_, 1, v_a_37_);
v___x_47_ = v_reuseFailAlloc_49_;
goto v_reusejp_46_;
}
v_reusejp_46_:
{
v_a_36_ = v_tail_40_;
v_a_37_ = v___x_47_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_rowSums(lean_object* v_m_51_){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = lean_box(0);
v___x_53_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_rowSums_spec__0(v_m_51_, v___x_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_transpose_spec__0(lean_object* v_j_54_, lean_object* v_a_55_, lean_object* v_a_56_){
_start:
{
if (lean_obj_tag(v_a_55_) == 0)
{
lean_object* v___x_57_; 
lean_dec(v_j_54_);
v___x_57_ = l_List_reverse___redArg(v_a_56_);
return v___x_57_;
}
else
{
lean_object* v_head_58_; lean_object* v_tail_59_; lean_object* v___x_61_; uint8_t v_isShared_62_; uint8_t v_isSharedCheck_69_; 
v_head_58_ = lean_ctor_get(v_a_55_, 0);
v_tail_59_ = lean_ctor_get(v_a_55_, 1);
v_isSharedCheck_69_ = !lean_is_exclusive(v_a_55_);
if (v_isSharedCheck_69_ == 0)
{
v___x_61_ = v_a_55_;
v_isShared_62_ = v_isSharedCheck_69_;
goto v_resetjp_60_;
}
else
{
lean_inc(v_tail_59_);
lean_inc(v_head_58_);
lean_dec(v_a_55_);
v___x_61_ = lean_box(0);
v_isShared_62_ = v_isSharedCheck_69_;
goto v_resetjp_60_;
}
v_resetjp_60_:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_66_; 
v___x_63_ = l_Int_instInhabited;
lean_inc(v_j_54_);
v___x_64_ = l_List_get_x21Internal___redArg(v___x_63_, v_head_58_, v_j_54_);
lean_dec(v_head_58_);
if (v_isShared_62_ == 0)
{
lean_ctor_set(v___x_61_, 1, v_a_56_);
lean_ctor_set(v___x_61_, 0, v___x_64_);
v___x_66_ = v___x_61_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v___x_64_);
lean_ctor_set(v_reuseFailAlloc_68_, 1, v_a_56_);
v___x_66_ = v_reuseFailAlloc_68_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
v_a_55_ = v_tail_59_;
v_a_56_ = v___x_66_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_transpose_spec__1(lean_object* v_m_70_, lean_object* v_a_71_, lean_object* v_a_72_){
_start:
{
if (lean_obj_tag(v_a_71_) == 0)
{
lean_object* v___x_73_; 
lean_dec(v_m_70_);
v___x_73_ = l_List_reverse___redArg(v_a_72_);
return v___x_73_;
}
else
{
lean_object* v_head_74_; lean_object* v_tail_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_85_; 
v_head_74_ = lean_ctor_get(v_a_71_, 0);
v_tail_75_ = lean_ctor_get(v_a_71_, 1);
v_isSharedCheck_85_ = !lean_is_exclusive(v_a_71_);
if (v_isSharedCheck_85_ == 0)
{
v___x_77_ = v_a_71_;
v_isShared_78_ = v_isSharedCheck_85_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_tail_75_);
lean_inc(v_head_74_);
lean_dec(v_a_71_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_85_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_82_; 
v___x_79_ = lean_box(0);
lean_inc(v_m_70_);
v___x_80_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_transpose_spec__0(v_head_74_, v_m_70_, v___x_79_);
if (v_isShared_78_ == 0)
{
lean_ctor_set(v___x_77_, 1, v_a_72_);
lean_ctor_set(v___x_77_, 0, v___x_80_);
v___x_82_ = v___x_77_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v___x_80_);
lean_ctor_set(v_reuseFailAlloc_84_, 1, v_a_72_);
v___x_82_ = v_reuseFailAlloc_84_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
v_a_71_ = v_tail_75_;
v_a_72_ = v___x_82_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_transpose(lean_object* v_m_86_){
_start:
{
if (lean_obj_tag(v_m_86_) == 0)
{
return v_m_86_;
}
else
{
lean_object* v_head_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v_head_87_ = lean_ctor_get(v_m_86_, 0);
v___x_88_ = l_List_lengthTR___redArg(v_head_87_);
v___x_89_ = l_List_range(v___x_88_);
v___x_90_ = lean_box(0);
v___x_91_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_transpose_spec__1(v_m_86_, v___x_89_, v___x_90_);
return v___x_91_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_mul_spec__0(lean_object* v_row_95_, lean_object* v_a_96_, lean_object* v_a_97_){
_start:
{
if (lean_obj_tag(v_a_96_) == 0)
{
lean_object* v___x_98_; 
lean_dec(v_row_95_);
v___x_98_ = l_List_reverse___redArg(v_a_97_);
return v___x_98_;
}
else
{
lean_object* v_head_99_; lean_object* v_tail_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_113_; 
v_head_99_ = lean_ctor_get(v_a_96_, 0);
v_tail_100_ = lean_ctor_get(v_a_96_, 1);
v_isSharedCheck_113_ = !lean_is_exclusive(v_a_96_);
if (v_isSharedCheck_113_ == 0)
{
v___x_102_ = v_a_96_;
v_isShared_103_ = v_isSharedCheck_113_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_tail_100_);
lean_inc(v_head_99_);
lean_dec(v_a_96_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_113_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v___f_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_110_; 
v___f_104_ = ((lean_object*)(lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_mul_spec__0___closed__0));
v___x_105_ = lean_obj_once(&lp_LanglandsOracles_Oracles_IMat_trace___closed__0, &lp_LanglandsOracles_Oracles_IMat_trace___closed__0_once, _init_lp_LanglandsOracles_Oracles_IMat_trace___closed__0);
v___x_106_ = ((lean_object*)(lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_mul_spec__0___closed__1));
lean_inc(v_row_95_);
v___x_107_ = l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(v___f_104_, v_row_95_, v_head_99_, v___x_106_);
v___x_108_ = lp_LanglandsOracles_List_foldl___at___00Oracles_IMat_trace_spec__1(v___x_105_, v___x_107_);
lean_dec(v___x_107_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 1, v_a_97_);
lean_ctor_set(v___x_102_, 0, v___x_108_);
v___x_110_ = v___x_102_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v___x_108_);
lean_ctor_set(v_reuseFailAlloc_112_, 1, v_a_97_);
v___x_110_ = v_reuseFailAlloc_112_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
v_a_96_ = v_tail_100_;
v_a_97_ = v___x_110_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_mul_spec__1(lean_object* v_bt_114_, lean_object* v_a_115_, lean_object* v_a_116_){
_start:
{
if (lean_obj_tag(v_a_115_) == 0)
{
lean_object* v___x_117_; 
lean_dec(v_bt_114_);
v___x_117_ = l_List_reverse___redArg(v_a_116_);
return v___x_117_;
}
else
{
lean_object* v_head_118_; lean_object* v_tail_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_129_; 
v_head_118_ = lean_ctor_get(v_a_115_, 0);
v_tail_119_ = lean_ctor_get(v_a_115_, 1);
v_isSharedCheck_129_ = !lean_is_exclusive(v_a_115_);
if (v_isSharedCheck_129_ == 0)
{
v___x_121_ = v_a_115_;
v_isShared_122_ = v_isSharedCheck_129_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_tail_119_);
lean_inc(v_head_118_);
lean_dec(v_a_115_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_129_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_126_; 
v___x_123_ = lean_box(0);
lean_inc(v_bt_114_);
v___x_124_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_mul_spec__0(v_head_118_, v_bt_114_, v___x_123_);
if (v_isShared_122_ == 0)
{
lean_ctor_set(v___x_121_, 1, v_a_116_);
lean_ctor_set(v___x_121_, 0, v___x_124_);
v___x_126_ = v___x_121_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v___x_124_);
lean_ctor_set(v_reuseFailAlloc_128_, 1, v_a_116_);
v___x_126_ = v_reuseFailAlloc_128_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
v_a_115_ = v_tail_119_;
v_a_116_ = v___x_126_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_mul(lean_object* v_a_130_, lean_object* v_b_131_){
_start:
{
lean_object* v_bt_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v_bt_132_ = lp_LanglandsOracles_Oracles_IMat_transpose(v_b_131_);
v___x_133_ = lean_box(0);
v___x_134_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_mul_spec__1(v_bt_132_, v_a_130_, v___x_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_scale_spec__0(lean_object* v_c_135_, lean_object* v_a_136_, lean_object* v_a_137_){
_start:
{
if (lean_obj_tag(v_a_136_) == 0)
{
lean_object* v___x_138_; 
v___x_138_ = l_List_reverse___redArg(v_a_137_);
return v___x_138_;
}
else
{
lean_object* v_head_139_; lean_object* v_tail_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_150_; 
v_head_139_ = lean_ctor_get(v_a_136_, 0);
v_tail_140_ = lean_ctor_get(v_a_136_, 1);
v_isSharedCheck_150_ = !lean_is_exclusive(v_a_136_);
if (v_isSharedCheck_150_ == 0)
{
v___x_142_ = v_a_136_;
v_isShared_143_ = v_isSharedCheck_150_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_tail_140_);
lean_inc(v_head_139_);
lean_dec(v_a_136_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_150_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_147_; 
v___x_144_ = lean_box(0);
v___x_145_ = l_List_mapTR_loop___at___00Lean_Omega_IntList_smul_spec__0(v_c_135_, v_head_139_, v___x_144_);
if (v_isShared_143_ == 0)
{
lean_ctor_set(v___x_142_, 1, v_a_137_);
lean_ctor_set(v___x_142_, 0, v___x_145_);
v___x_147_ = v___x_142_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v___x_145_);
lean_ctor_set(v_reuseFailAlloc_149_, 1, v_a_137_);
v___x_147_ = v_reuseFailAlloc_149_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
v_a_136_ = v_tail_140_;
v_a_137_ = v___x_147_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_scale_spec__0___boxed(lean_object* v_c_151_, lean_object* v_a_152_, lean_object* v_a_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_scale_spec__0(v_c_151_, v_a_152_, v_a_153_);
lean_dec(v_c_151_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_scale(lean_object* v_c_155_, lean_object* v_a_156_){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = lean_box(0);
v___x_158_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_scale_spec__0(v_c_155_, v_a_156_, v___x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_scale___boxed(lean_object* v_c_159_, lean_object* v_a_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = lp_LanglandsOracles_Oracles_IMat_scale(v_c_159_, v_a_160_);
lean_dec(v_c_159_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_add___lam__0(lean_object* v___f_162_, lean_object* v___y_163_, lean_object* v___y_164_){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = ((lean_object*)(lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_mul_spec__0___closed__1));
v___x_166_ = l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(v___f_162_, v___y_163_, v___y_164_, v___x_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_add(lean_object* v_a_172_, lean_object* v_b_173_){
_start:
{
lean_object* v___f_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
v___f_174_ = ((lean_object*)(lp_LanglandsOracles_Oracles_IMat_add___closed__1));
v___x_175_ = ((lean_object*)(lp_LanglandsOracles_Oracles_IMat_add___closed__2));
v___x_176_ = l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(v___f_174_, v_a_172_, v_b_173_, v___x_175_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_sub(lean_object* v_a_180_, lean_object* v_b_181_){
_start:
{
lean_object* v___f_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___f_182_ = ((lean_object*)(lp_LanglandsOracles_Oracles_IMat_sub___closed__1));
v___x_183_ = ((lean_object*)(lp_LanglandsOracles_Oracles_IMat_add___closed__2));
v___x_184_ = l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(v___f_182_, v_a_180_, v_b_181_, v___x_183_);
return v___x_184_;
}
}
static lean_object* _init_lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_identity_spec__0___closed__0(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = lean_unsigned_to_nat(1u);
v___x_186_ = lean_nat_to_int(v___x_185_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_identity_spec__0(lean_object* v_i_187_, lean_object* v_a_188_, lean_object* v_a_189_){
_start:
{
if (lean_obj_tag(v_a_188_) == 0)
{
lean_object* v___x_190_; 
v___x_190_ = l_List_reverse___redArg(v_a_189_);
return v___x_190_;
}
else
{
lean_object* v_head_191_; lean_object* v_tail_192_; lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_205_; 
v_head_191_ = lean_ctor_get(v_a_188_, 0);
v_tail_192_ = lean_ctor_get(v_a_188_, 1);
v_isSharedCheck_205_ = !lean_is_exclusive(v_a_188_);
if (v_isSharedCheck_205_ == 0)
{
v___x_194_ = v_a_188_;
v_isShared_195_ = v_isSharedCheck_205_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_tail_192_);
lean_inc(v_head_191_);
lean_dec(v_a_188_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_205_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
lean_object* v___y_197_; uint8_t v___x_202_; 
v___x_202_ = lean_nat_dec_eq(v_i_187_, v_head_191_);
lean_dec(v_head_191_);
if (v___x_202_ == 0)
{
lean_object* v___x_203_; 
v___x_203_ = lean_obj_once(&lp_LanglandsOracles_Oracles_IMat_trace___closed__0, &lp_LanglandsOracles_Oracles_IMat_trace___closed__0_once, _init_lp_LanglandsOracles_Oracles_IMat_trace___closed__0);
v___y_197_ = v___x_203_;
goto v___jp_196_;
}
else
{
lean_object* v___x_204_; 
v___x_204_ = lean_obj_once(&lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_identity_spec__0___closed__0, &lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_identity_spec__0___closed__0_once, _init_lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_identity_spec__0___closed__0);
v___y_197_ = v___x_204_;
goto v___jp_196_;
}
v___jp_196_:
{
lean_object* v___x_199_; 
lean_inc(v___y_197_);
if (v_isShared_195_ == 0)
{
lean_ctor_set(v___x_194_, 1, v_a_189_);
lean_ctor_set(v___x_194_, 0, v___y_197_);
v___x_199_ = v___x_194_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v___y_197_);
lean_ctor_set(v_reuseFailAlloc_201_, 1, v_a_189_);
v___x_199_ = v_reuseFailAlloc_201_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
v_a_188_ = v_tail_192_;
v_a_189_ = v___x_199_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_identity_spec__0___boxed(lean_object* v_i_206_, lean_object* v_a_207_, lean_object* v_a_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_identity_spec__0(v_i_206_, v_a_207_, v_a_208_);
lean_dec(v_i_206_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_identity_spec__1(lean_object* v_n_210_, lean_object* v_a_211_, lean_object* v_a_212_){
_start:
{
if (lean_obj_tag(v_a_211_) == 0)
{
lean_object* v___x_213_; 
lean_dec(v_n_210_);
v___x_213_ = l_List_reverse___redArg(v_a_212_);
return v___x_213_;
}
else
{
lean_object* v_head_214_; lean_object* v_tail_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_226_; 
v_head_214_ = lean_ctor_get(v_a_211_, 0);
v_tail_215_ = lean_ctor_get(v_a_211_, 1);
v_isSharedCheck_226_ = !lean_is_exclusive(v_a_211_);
if (v_isSharedCheck_226_ == 0)
{
v___x_217_ = v_a_211_;
v_isShared_218_ = v_isSharedCheck_226_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_tail_215_);
lean_inc(v_head_214_);
lean_dec(v_a_211_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_226_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_223_; 
lean_inc(v_n_210_);
v___x_219_ = l_List_range(v_n_210_);
v___x_220_ = lean_box(0);
v___x_221_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_identity_spec__0(v_head_214_, v___x_219_, v___x_220_);
lean_dec(v_head_214_);
if (v_isShared_218_ == 0)
{
lean_ctor_set(v___x_217_, 1, v_a_212_);
lean_ctor_set(v___x_217_, 0, v___x_221_);
v___x_223_ = v___x_217_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v___x_221_);
lean_ctor_set(v_reuseFailAlloc_225_, 1, v_a_212_);
v___x_223_ = v_reuseFailAlloc_225_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
v_a_211_ = v_tail_215_;
v_a_212_ = v___x_223_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_identity(lean_object* v_n_227_){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
lean_inc(v_n_227_);
v___x_228_ = l_List_range(v_n_227_);
v___x_229_ = lean_box(0);
v___x_230_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_identity_spec__1(v_n_227_, v___x_228_, v___x_229_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00List_mapTR_loop___at___00Oracles_IMat_scaleRows_spec__0_spec__0(lean_object* v_wi_231_, lean_object* v_a_232_, lean_object* v_a_233_){
_start:
{
if (lean_obj_tag(v_a_232_) == 0)
{
lean_object* v___x_234_; 
lean_dec(v_wi_231_);
v___x_234_ = l_List_reverse___redArg(v_a_233_);
return v___x_234_;
}
else
{
lean_object* v_head_235_; lean_object* v_tail_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_246_; 
v_head_235_ = lean_ctor_get(v_a_232_, 0);
v_tail_236_ = lean_ctor_get(v_a_232_, 1);
v_isSharedCheck_246_ = !lean_is_exclusive(v_a_232_);
if (v_isSharedCheck_246_ == 0)
{
v___x_238_ = v_a_232_;
v_isShared_239_ = v_isSharedCheck_246_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_tail_236_);
lean_inc(v_head_235_);
lean_dec(v_a_232_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_246_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_243_; 
lean_inc(v_wi_231_);
v___x_240_ = lean_nat_to_int(v_wi_231_);
v___x_241_ = lean_int_mul(v___x_240_, v_head_235_);
lean_dec(v_head_235_);
lean_dec(v___x_240_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 1, v_a_233_);
lean_ctor_set(v___x_238_, 0, v___x_241_);
v___x_243_ = v___x_238_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v___x_241_);
lean_ctor_set(v_reuseFailAlloc_245_, 1, v_a_233_);
v___x_243_ = v_reuseFailAlloc_245_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
v_a_232_ = v_tail_236_;
v_a_233_ = v___x_243_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_scaleRows_spec__0(lean_object* v_wi_247_, lean_object* v_a_248_, lean_object* v_a_249_){
_start:
{
if (lean_obj_tag(v_a_248_) == 0)
{
lean_object* v___x_250_; 
lean_dec(v_wi_247_);
v___x_250_ = l_List_reverse___redArg(v_a_249_);
return v___x_250_;
}
else
{
lean_object* v_head_251_; lean_object* v_tail_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_262_; 
v_head_251_ = lean_ctor_get(v_a_248_, 0);
v_tail_252_ = lean_ctor_get(v_a_248_, 1);
v_isSharedCheck_262_ = !lean_is_exclusive(v_a_248_);
if (v_isSharedCheck_262_ == 0)
{
v___x_254_ = v_a_248_;
v_isShared_255_ = v_isSharedCheck_262_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_tail_252_);
lean_inc(v_head_251_);
lean_dec(v_a_248_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_262_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_259_; 
lean_inc(v_wi_247_);
v___x_256_ = lean_nat_to_int(v_wi_247_);
v___x_257_ = lean_int_mul(v___x_256_, v_head_251_);
lean_dec(v_head_251_);
lean_dec(v___x_256_);
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 1, v_a_249_);
lean_ctor_set(v___x_254_, 0, v___x_257_);
v___x_259_ = v___x_254_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v___x_257_);
lean_ctor_set(v_reuseFailAlloc_261_, 1, v_a_249_);
v___x_259_ = v_reuseFailAlloc_261_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
lean_object* v___x_260_; 
v___x_260_ = lp_LanglandsOracles_List_mapTR_loop___at___00List_mapTR_loop___at___00Oracles_IMat_scaleRows_spec__0_spec__0(v_wi_247_, v_tail_252_, v___x_259_);
return v___x_260_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_scaleRows___lam__0(lean_object* v_wi_263_, lean_object* v_r_264_){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_265_ = lean_box(0);
v___x_266_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_scaleRows_spec__0(v_wi_263_, v_r_264_, v___x_265_);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_scaleRows(lean_object* v_w_268_, lean_object* v_a_269_){
_start:
{
lean_object* v___f_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___f_270_ = ((lean_object*)(lp_LanglandsOracles_Oracles_IMat_scaleRows___closed__0));
v___x_271_ = ((lean_object*)(lp_LanglandsOracles_Oracles_IMat_add___closed__2));
v___x_272_ = l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(v___f_270_, v_w_268_, v_a_269_, v___x_271_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_scaleCols_spec__0___lam__0(lean_object* v_x_273_, lean_object* v_wj_274_){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = lean_nat_to_int(v_wj_274_);
v___x_276_ = lean_int_mul(v_x_273_, v___x_275_);
lean_dec(v___x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_scaleCols_spec__0___lam__0___boxed(lean_object* v_x_277_, lean_object* v_wj_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_scaleCols_spec__0___lam__0(v_x_277_, v_wj_278_);
lean_dec(v_x_277_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00List_mapTR_loop___at___00Oracles_IMat_scaleCols_spec__0_spec__0(lean_object* v_w_281_, lean_object* v_a_282_, lean_object* v_a_283_){
_start:
{
if (lean_obj_tag(v_a_282_) == 0)
{
lean_object* v___x_284_; 
lean_dec(v_w_281_);
v___x_284_ = l_List_reverse___redArg(v_a_283_);
return v___x_284_;
}
else
{
lean_object* v_head_285_; lean_object* v_tail_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_297_; 
v_head_285_ = lean_ctor_get(v_a_282_, 0);
v_tail_286_ = lean_ctor_get(v_a_282_, 1);
v_isSharedCheck_297_ = !lean_is_exclusive(v_a_282_);
if (v_isSharedCheck_297_ == 0)
{
v___x_288_ = v_a_282_;
v_isShared_289_ = v_isSharedCheck_297_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_tail_286_);
lean_inc(v_head_285_);
lean_dec(v_a_282_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_297_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___f_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_294_; 
v___f_290_ = ((lean_object*)(lp_LanglandsOracles_List_mapTR_loop___at___00List_mapTR_loop___at___00Oracles_IMat_scaleCols_spec__0_spec__0___closed__0));
v___x_291_ = ((lean_object*)(lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_mul_spec__0___closed__1));
lean_inc(v_w_281_);
v___x_292_ = l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(v___f_290_, v_head_285_, v_w_281_, v___x_291_);
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 1, v_a_283_);
lean_ctor_set(v___x_288_, 0, v___x_292_);
v___x_294_ = v___x_288_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v___x_292_);
lean_ctor_set(v_reuseFailAlloc_296_, 1, v_a_283_);
v___x_294_ = v_reuseFailAlloc_296_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
v_a_282_ = v_tail_286_;
v_a_283_ = v___x_294_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_scaleCols_spec__0(lean_object* v_w_298_, lean_object* v_a_299_, lean_object* v_a_300_){
_start:
{
if (lean_obj_tag(v_a_299_) == 0)
{
lean_object* v___x_301_; 
lean_dec(v_w_298_);
v___x_301_ = l_List_reverse___redArg(v_a_300_);
return v___x_301_;
}
else
{
lean_object* v_head_302_; lean_object* v_tail_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_314_; 
v_head_302_ = lean_ctor_get(v_a_299_, 0);
v_tail_303_ = lean_ctor_get(v_a_299_, 1);
v_isSharedCheck_314_ = !lean_is_exclusive(v_a_299_);
if (v_isSharedCheck_314_ == 0)
{
v___x_305_ = v_a_299_;
v_isShared_306_ = v_isSharedCheck_314_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_tail_303_);
lean_inc(v_head_302_);
lean_dec(v_a_299_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_314_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___f_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_311_; 
v___f_307_ = ((lean_object*)(lp_LanglandsOracles_List_mapTR_loop___at___00List_mapTR_loop___at___00Oracles_IMat_scaleCols_spec__0_spec__0___closed__0));
v___x_308_ = ((lean_object*)(lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_mul_spec__0___closed__1));
lean_inc(v_w_298_);
v___x_309_ = l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(v___f_307_, v_head_302_, v_w_298_, v___x_308_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 1, v_a_300_);
lean_ctor_set(v___x_305_, 0, v___x_309_);
v___x_311_ = v___x_305_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v___x_309_);
lean_ctor_set(v_reuseFailAlloc_313_, 1, v_a_300_);
v___x_311_ = v_reuseFailAlloc_313_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
lean_object* v___x_312_; 
v___x_312_ = lp_LanglandsOracles_List_mapTR_loop___at___00List_mapTR_loop___at___00Oracles_IMat_scaleCols_spec__0_spec__0(v_w_298_, v_tail_303_, v___x_311_);
return v___x_312_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IMat_scaleCols(lean_object* v_w_315_, lean_object* v_a_316_){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = lean_box(0);
v___x_318_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_scaleCols_spec__0(v_w_315_, v_a_316_, v___x_317_);
return v___x_318_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LanglandsOracles_LanglandsOracles_Matrix(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
