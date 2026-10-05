// Lean compiler output
// Module: LanglandsOracles.LSeriesCertificates
// Imports: public import Init public meta import Init public import LanglandsOracles.Data
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
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Int_instInhabited;
lean_object* l_List_getLast_x21___redArg(lean_object*, lean_object*);
lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___at___00Lean_Omega_IntList_smul_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Int_sub___boxed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_range_x27TR_go(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_zipIdxTR___redArg(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_IMat_trace_spec__1(lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_rowSums_spec__0(lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0;
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IPoly_trim(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IPoly_sub___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IPoly_sub___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_LanglandsOracles_Oracles_IPoly_sub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_sub___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LanglandsOracles_Oracles_IPoly_sub___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_IPoly_sub___closed__0_value;
static const lean_array_object lp_LanglandsOracles_Oracles_IPoly_sub___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_LanglandsOracles_Oracles_IPoly_sub___closed__1 = (const lean_object*)&lp_LanglandsOracles_Oracles_IPoly_sub___closed__1_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IPoly_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_IPoly_mul_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_IPoly_mul_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IPoly_mul_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IPoly_mul_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IPoly_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IPoly_mul___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IPoly_divmodMonic_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IPoly_divmodMonic_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IPoly_divmodMonic(lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_xPowMinusOne___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_xPowMinusOne___closed__0;
static lean_once_cell_t lp_LanglandsOracles_Oracles_xPowMinusOne___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_xPowMinusOne___closed__1;
static lean_once_cell_t lp_LanglandsOracles_Oracles_xPowMinusOne___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_xPowMinusOne___closed__2;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_xPowMinusOne(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_xPowMinusOne___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_cyclotomics_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_cyclotomics_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_cyclotomics_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_cyclotomics(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_cyclotomic(lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_beq___at___00Oracles_isZeroInCyclotomicField_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_beq___at___00Oracles_isZeroInCyclotomicField_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_isZeroInCyclotomicField(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_isZeroInCyclotomicField___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_zetaCoefficients_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_zetaCoefficients_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_zetaCoefficients(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_zetaCoefficients___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_lSeriesCertified_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_lSeriesCertified_spec__1___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_lSeriesCertified_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_lSeriesCertified_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_lSeriesCertified_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_lSeriesCertified_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_lSeriesCertified(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_lSeriesCertified___boxed(lean_object*);
static lean_object* _init_lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_nat_to_int(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0(lean_object* v_x_3_){
_start:
{
if (lean_obj_tag(v_x_3_) == 0)
{
return v_x_3_;
}
else
{
lean_object* v_head_4_; lean_object* v_tail_5_; lean_object* v___x_6_; uint8_t v___x_7_; 
v_head_4_ = lean_ctor_get(v_x_3_, 0);
v_tail_5_ = lean_ctor_get(v_x_3_, 1);
v___x_6_ = lean_obj_once(&lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0, &lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0_once, _init_lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0);
v___x_7_ = lean_int_dec_eq(v_head_4_, v___x_6_);
if (v___x_7_ == 0)
{
lean_inc_ref(v_x_3_);
return v_x_3_;
}
else
{
v_x_3_ = v_tail_5_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___boxed(lean_object* v_x_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0(v_x_9_);
lean_dec(v_x_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IPoly_trim(lean_object* v_a_11_){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_12_ = l_List_reverse___redArg(v_a_11_);
v___x_13_ = lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0(v___x_12_);
lean_dec(v___x_12_);
v___x_14_ = l_List_reverse___redArg(v___x_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IPoly_sub___lam__0(lean_object* v___y_15_, lean_object* v_x_16_){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_17_ = l_List_lengthTR___redArg(v_x_16_);
v___x_18_ = lean_nat_sub(v___y_15_, v___x_17_);
lean_dec(v___x_17_);
v___x_19_ = lean_obj_once(&lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0, &lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0_once, _init_lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0);
v___x_20_ = l_List_replicateTR___redArg(v___x_18_, v___x_19_);
v___x_21_ = l_List_appendTR___redArg(v_x_16_, v___x_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IPoly_sub___lam__0___boxed(lean_object* v___y_22_, lean_object* v_x_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_LanglandsOracles_Oracles_IPoly_sub___lam__0(v___y_22_, v_x_23_);
lean_dec(v___y_22_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IPoly_sub(lean_object* v_a_28_, lean_object* v_b_29_){
_start:
{
lean_object* v___f_30_; lean_object* v___y_32_; lean_object* v___x_38_; lean_object* v___x_39_; uint8_t v___x_40_; 
v___f_30_ = ((lean_object*)(lp_LanglandsOracles_Oracles_IPoly_sub___closed__0));
v___x_38_ = l_List_lengthTR___redArg(v_a_28_);
v___x_39_ = l_List_lengthTR___redArg(v_b_29_);
v___x_40_ = lean_nat_dec_le(v___x_38_, v___x_39_);
if (v___x_40_ == 0)
{
lean_dec(v___x_39_);
v___y_32_ = v___x_38_;
goto v___jp_31_;
}
else
{
lean_dec(v___x_38_);
v___y_32_ = v___x_39_;
goto v___jp_31_;
}
v___jp_31_:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_33_ = lp_LanglandsOracles_Oracles_IPoly_sub___lam__0(v___y_32_, v_a_28_);
v___x_34_ = lp_LanglandsOracles_Oracles_IPoly_sub___lam__0(v___y_32_, v_b_29_);
lean_dec(v___y_32_);
v___x_35_ = ((lean_object*)(lp_LanglandsOracles_Oracles_IPoly_sub___closed__1));
v___x_36_ = l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(v___f_30_, v___x_33_, v___x_34_, v___x_35_);
v___x_37_ = lp_LanglandsOracles_Oracles_IPoly_trim(v___x_36_);
return v___x_37_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_IPoly_mul_spec__0(lean_object* v_a_41_, lean_object* v_k_42_, lean_object* v_b_43_, lean_object* v_x_44_, lean_object* v_x_45_){
_start:
{
if (lean_obj_tag(v_x_45_) == 0)
{
return v_x_44_;
}
else
{
lean_object* v_head_46_; lean_object* v_tail_47_; uint8_t v___y_49_; lean_object* v___x_58_; uint8_t v___x_59_; 
v_head_46_ = lean_ctor_get(v_x_45_, 0);
lean_inc(v_head_46_);
v_tail_47_ = lean_ctor_get(v_x_45_, 1);
lean_inc(v_tail_47_);
lean_dec_ref_known(v_x_45_, 2);
v___x_58_ = l_List_lengthTR___redArg(v_a_41_);
v___x_59_ = lean_nat_dec_lt(v_head_46_, v___x_58_);
lean_dec(v___x_58_);
if (v___x_59_ == 0)
{
v___y_49_ = v___x_59_;
goto v___jp_48_;
}
else
{
lean_object* v___x_60_; lean_object* v___x_61_; uint8_t v___x_62_; 
v___x_60_ = lean_nat_sub(v_k_42_, v_head_46_);
v___x_61_ = l_List_lengthTR___redArg(v_b_43_);
v___x_62_ = lean_nat_dec_lt(v___x_60_, v___x_61_);
lean_dec(v___x_61_);
lean_dec(v___x_60_);
v___y_49_ = v___x_62_;
goto v___jp_48_;
}
v___jp_48_:
{
if (v___y_49_ == 0)
{
lean_dec(v_head_46_);
v_x_45_ = v_tail_47_;
goto _start;
}
else
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_51_ = l_Int_instInhabited;
lean_inc(v_head_46_);
v___x_52_ = l_List_get_x21Internal___redArg(v___x_51_, v_a_41_, v_head_46_);
v___x_53_ = lean_nat_sub(v_k_42_, v_head_46_);
lean_dec(v_head_46_);
v___x_54_ = l_List_get_x21Internal___redArg(v___x_51_, v_b_43_, v___x_53_);
v___x_55_ = lean_int_mul(v___x_52_, v___x_54_);
lean_dec(v___x_54_);
lean_dec(v___x_52_);
v___x_56_ = lean_int_add(v_x_44_, v___x_55_);
lean_dec(v___x_55_);
lean_dec(v_x_44_);
v_x_44_ = v___x_56_;
v_x_45_ = v_tail_47_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_IPoly_mul_spec__0___boxed(lean_object* v_a_63_, lean_object* v_k_64_, lean_object* v_b_65_, lean_object* v_x_66_, lean_object* v_x_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = lp_LanglandsOracles_List_foldl___at___00Oracles_IPoly_mul_spec__0(v_a_63_, v_k_64_, v_b_65_, v_x_66_, v_x_67_);
lean_dec(v_b_65_);
lean_dec(v_k_64_);
lean_dec(v_a_63_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IPoly_mul_spec__1(lean_object* v_a_69_, lean_object* v_b_70_, lean_object* v_a_71_, lean_object* v_a_72_){
_start:
{
if (lean_obj_tag(v_a_71_) == 0)
{
lean_object* v___x_73_; 
v___x_73_ = l_List_reverse___redArg(v_a_72_);
return v___x_73_;
}
else
{
lean_object* v_head_74_; lean_object* v_tail_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_88_; 
v_head_74_ = lean_ctor_get(v_a_71_, 0);
v_tail_75_ = lean_ctor_get(v_a_71_, 1);
v_isSharedCheck_88_ = !lean_is_exclusive(v_a_71_);
if (v_isSharedCheck_88_ == 0)
{
v___x_77_ = v_a_71_;
v_isShared_78_ = v_isSharedCheck_88_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_tail_75_);
lean_inc(v_head_74_);
lean_dec(v_a_71_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_88_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_85_; 
v___x_79_ = lean_obj_once(&lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0, &lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0_once, _init_lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0);
v___x_80_ = lean_unsigned_to_nat(1u);
v___x_81_ = lean_nat_add(v_head_74_, v___x_80_);
v___x_82_ = l_List_range(v___x_81_);
v___x_83_ = lp_LanglandsOracles_List_foldl___at___00Oracles_IPoly_mul_spec__0(v_a_69_, v_head_74_, v_b_70_, v___x_79_, v___x_82_);
lean_dec(v_head_74_);
if (v_isShared_78_ == 0)
{
lean_ctor_set(v___x_77_, 1, v_a_72_);
lean_ctor_set(v___x_77_, 0, v___x_83_);
v___x_85_ = v___x_77_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v___x_83_);
lean_ctor_set(v_reuseFailAlloc_87_, 1, v_a_72_);
v___x_85_ = v_reuseFailAlloc_87_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
v_a_71_ = v_tail_75_;
v_a_72_ = v___x_85_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IPoly_mul_spec__1___boxed(lean_object* v_a_89_, lean_object* v_b_90_, lean_object* v_a_91_, lean_object* v_a_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IPoly_mul_spec__1(v_a_89_, v_b_90_, v_a_91_, v_a_92_);
lean_dec(v_b_90_);
lean_dec(v_a_89_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IPoly_mul(lean_object* v_a_94_, lean_object* v_b_95_){
_start:
{
uint8_t v___y_97_; uint8_t v___x_108_; 
v___x_108_ = l_List_isEmpty___redArg(v_a_94_);
if (v___x_108_ == 0)
{
uint8_t v___x_109_; 
v___x_109_ = l_List_isEmpty___redArg(v_b_95_);
v___y_97_ = v___x_109_;
goto v___jp_96_;
}
else
{
v___y_97_ = v___x_108_;
goto v___jp_96_;
}
v___jp_96_:
{
if (v___y_97_ == 0)
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_98_ = l_List_lengthTR___redArg(v_a_94_);
v___x_99_ = l_List_lengthTR___redArg(v_b_95_);
v___x_100_ = lean_nat_add(v___x_98_, v___x_99_);
lean_dec(v___x_99_);
lean_dec(v___x_98_);
v___x_101_ = lean_unsigned_to_nat(1u);
v___x_102_ = lean_nat_sub(v___x_100_, v___x_101_);
lean_dec(v___x_100_);
v___x_103_ = l_List_range(v___x_102_);
v___x_104_ = lean_box(0);
v___x_105_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IPoly_mul_spec__1(v_a_94_, v_b_95_, v___x_103_, v___x_104_);
v___x_106_ = lp_LanglandsOracles_Oracles_IPoly_trim(v___x_105_);
return v___x_106_;
}
else
{
lean_object* v___x_107_; 
v___x_107_ = lean_box(0);
return v___x_107_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IPoly_mul___boxed(lean_object* v_a_110_, lean_object* v_b_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = lp_LanglandsOracles_Oracles_IPoly_mul(v_a_110_, v_b_111_);
lean_dec(v_b_111_);
lean_dec(v_a_110_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IPoly_divmodMonic_go(lean_object* v_m_113_, lean_object* v_d_114_, lean_object* v_fuel_115_, lean_object* v_r_116_, lean_object* v_q_117_){
_start:
{
lean_object* v_zero_118_; uint8_t v_isZero_119_; 
v_zero_118_ = lean_unsigned_to_nat(0u);
v_isZero_119_ = lean_nat_dec_eq(v_fuel_115_, v_zero_118_);
if (v_isZero_119_ == 1)
{
lean_object* v___x_120_; 
lean_dec(v_fuel_115_);
lean_dec(v_m_113_);
v___x_120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_120_, 0, v_q_117_);
lean_ctor_set(v___x_120_, 1, v_r_116_);
return v___x_120_;
}
else
{
lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_121_ = l_List_lengthTR___redArg(v_r_116_);
v___x_122_ = lean_nat_dec_le(v___x_121_, v_d_114_);
if (v___x_122_ == 0)
{
lean_object* v_one_123_; lean_object* v_n_124_; lean_object* v___x_125_; lean_object* v_c_126_; lean_object* v___x_127_; lean_object* v_shift_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v_sub_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v_one_123_ = lean_unsigned_to_nat(1u);
v_n_124_ = lean_nat_sub(v_fuel_115_, v_one_123_);
lean_dec(v_fuel_115_);
v___x_125_ = l_Int_instInhabited;
v_c_126_ = l_List_getLast_x21___redArg(v___x_125_, v_r_116_);
v___x_127_ = lean_nat_sub(v___x_121_, v_one_123_);
lean_dec(v___x_121_);
v_shift_128_ = lean_nat_sub(v___x_127_, v_d_114_);
lean_dec(v___x_127_);
v___x_129_ = lean_obj_once(&lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0, &lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0_once, _init_lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0);
v___x_130_ = l_List_replicateTR___redArg(v_shift_128_, v___x_129_);
v___x_131_ = lean_box(0);
lean_inc(v_m_113_);
v___x_132_ = l_List_mapTR_loop___at___00Lean_Omega_IntList_smul_spec__0(v_c_126_, v_m_113_, v___x_131_);
lean_inc(v___x_130_);
v_sub_133_ = l_List_appendTR___redArg(v___x_130_, v___x_132_);
v___x_134_ = lp_LanglandsOracles_Oracles_IPoly_sub(v_r_116_, v_sub_133_);
v___x_135_ = lean_int_neg(v_c_126_);
lean_dec(v_c_126_);
v___x_136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
lean_ctor_set(v___x_136_, 1, v___x_131_);
v___x_137_ = l_List_appendTR___redArg(v___x_130_, v___x_136_);
v___x_138_ = lp_LanglandsOracles_Oracles_IPoly_sub(v_q_117_, v___x_137_);
v_fuel_115_ = v_n_124_;
v_r_116_ = v___x_134_;
v_q_117_ = v___x_138_;
goto _start;
}
else
{
lean_object* v___x_140_; 
lean_dec(v___x_121_);
lean_dec(v_fuel_115_);
lean_dec(v_m_113_);
v___x_140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_140_, 0, v_q_117_);
lean_ctor_set(v___x_140_, 1, v_r_116_);
return v___x_140_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IPoly_divmodMonic_go___boxed(lean_object* v_m_141_, lean_object* v_d_142_, lean_object* v_fuel_143_, lean_object* v_r_144_, lean_object* v_q_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = lp_LanglandsOracles_Oracles_IPoly_divmodMonic_go(v_m_141_, v_d_142_, v_fuel_143_, v_r_144_, v_q_145_);
lean_dec(v_d_142_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_IPoly_divmodMonic(lean_object* v_a_147_, lean_object* v_m_148_){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v_d_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_149_ = l_List_lengthTR___redArg(v_m_148_);
v___x_150_ = lean_unsigned_to_nat(1u);
v_d_151_ = lean_nat_sub(v___x_149_, v___x_150_);
lean_dec(v___x_149_);
v___x_152_ = l_List_lengthTR___redArg(v_a_147_);
v___x_153_ = lp_LanglandsOracles_Oracles_IPoly_trim(v_a_147_);
v___x_154_ = lean_box(0);
v___x_155_ = lp_LanglandsOracles_Oracles_IPoly_divmodMonic_go(v_m_148_, v_d_151_, v___x_152_, v___x_153_, v___x_154_);
lean_dec(v_d_151_);
return v___x_155_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_xPowMinusOne___closed__0(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = lean_unsigned_to_nat(1u);
v___x_157_ = lean_nat_to_int(v___x_156_);
return v___x_157_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_xPowMinusOne___closed__1(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_158_ = lean_obj_once(&lp_LanglandsOracles_Oracles_xPowMinusOne___closed__0, &lp_LanglandsOracles_Oracles_xPowMinusOne___closed__0_once, _init_lp_LanglandsOracles_Oracles_xPowMinusOne___closed__0);
v___x_159_ = lean_int_neg(v___x_158_);
return v___x_159_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_xPowMinusOne___closed__2(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_160_ = lean_box(0);
v___x_161_ = lean_obj_once(&lp_LanglandsOracles_Oracles_xPowMinusOne___closed__0, &lp_LanglandsOracles_Oracles_xPowMinusOne___closed__0_once, _init_lp_LanglandsOracles_Oracles_xPowMinusOne___closed__0);
v___x_162_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
lean_ctor_set(v___x_162_, 1, v___x_160_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_xPowMinusOne(lean_object* v_n_163_){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_164_ = lean_unsigned_to_nat(1u);
v___x_165_ = lean_obj_once(&lp_LanglandsOracles_Oracles_xPowMinusOne___closed__1, &lp_LanglandsOracles_Oracles_xPowMinusOne___closed__1_once, _init_lp_LanglandsOracles_Oracles_xPowMinusOne___closed__1);
v___x_166_ = lean_nat_sub(v_n_163_, v___x_164_);
v___x_167_ = lean_obj_once(&lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0, &lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0_once, _init_lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0);
v___x_168_ = l_List_replicateTR___redArg(v___x_166_, v___x_167_);
v___x_169_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_169_, 0, v___x_165_);
lean_ctor_set(v___x_169_, 1, v___x_168_);
v___x_170_ = lean_obj_once(&lp_LanglandsOracles_Oracles_xPowMinusOne___closed__2, &lp_LanglandsOracles_Oracles_xPowMinusOne___closed__2_once, _init_lp_LanglandsOracles_Oracles_xPowMinusOne___closed__2);
v___x_171_ = l_List_appendTR___redArg(v___x_169_, v___x_170_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_xPowMinusOne___boxed(lean_object* v_n_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = lp_LanglandsOracles_Oracles_xPowMinusOne(v_n_172_);
lean_dec(v_n_172_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_cyclotomics_spec__0(lean_object* v_n_174_, lean_object* v_x_175_, lean_object* v_x_176_){
_start:
{
if (lean_obj_tag(v_x_176_) == 0)
{
return v_x_175_;
}
else
{
lean_object* v_head_177_; lean_object* v_tail_178_; lean_object* v_fst_179_; lean_object* v_snd_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; uint8_t v___x_185_; 
v_head_177_ = lean_ctor_get(v_x_176_, 0);
v_tail_178_ = lean_ctor_get(v_x_176_, 1);
v_fst_179_ = lean_ctor_get(v_head_177_, 0);
v_snd_180_ = lean_ctor_get(v_head_177_, 1);
v___x_181_ = lean_unsigned_to_nat(1u);
v___x_182_ = lean_nat_add(v_snd_180_, v___x_181_);
v___x_183_ = lean_nat_mod(v_n_174_, v___x_182_);
lean_dec(v___x_182_);
v___x_184_ = lean_unsigned_to_nat(0u);
v___x_185_ = lean_nat_dec_eq(v___x_183_, v___x_184_);
lean_dec(v___x_183_);
if (v___x_185_ == 0)
{
v_x_176_ = v_tail_178_;
goto _start;
}
else
{
lean_object* v___x_187_; 
v___x_187_ = lp_LanglandsOracles_Oracles_IPoly_mul(v_x_175_, v_fst_179_);
lean_dec(v_x_175_);
v_x_175_ = v___x_187_;
v_x_176_ = v_tail_178_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_cyclotomics_spec__0___boxed(lean_object* v_n_189_, lean_object* v_x_190_, lean_object* v_x_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = lp_LanglandsOracles_List_foldl___at___00Oracles_cyclotomics_spec__0(v_n_189_, v_x_190_, v_x_191_);
lean_dec(v_x_191_);
lean_dec(v_n_189_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_cyclotomics_spec__1(lean_object* v_x_193_, lean_object* v_x_194_){
_start:
{
if (lean_obj_tag(v_x_194_) == 0)
{
return v_x_193_;
}
else
{
lean_object* v_head_195_; lean_object* v_tail_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_213_; 
v_head_195_ = lean_ctor_get(v_x_194_, 0);
v_tail_196_ = lean_ctor_get(v_x_194_, 1);
v_isSharedCheck_213_ = !lean_is_exclusive(v_x_194_);
if (v_isSharedCheck_213_ == 0)
{
v___x_198_ = v_x_194_;
v_isShared_199_ = v_isSharedCheck_213_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_tail_196_);
lean_inc(v_head_195_);
lean_dec(v_x_194_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_213_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v_prod_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v_fst_207_; lean_object* v___x_209_; 
v___x_200_ = lean_box(0);
v___x_201_ = lean_obj_once(&lp_LanglandsOracles_Oracles_xPowMinusOne___closed__2, &lp_LanglandsOracles_Oracles_xPowMinusOne___closed__2_once, _init_lp_LanglandsOracles_Oracles_xPowMinusOne___closed__2);
v___x_202_ = lean_unsigned_to_nat(0u);
lean_inc(v_x_193_);
v___x_203_ = l_List_zipIdxTR___redArg(v_x_193_, v___x_202_);
v_prod_204_ = lp_LanglandsOracles_List_foldl___at___00Oracles_cyclotomics_spec__0(v_head_195_, v___x_201_, v___x_203_);
lean_dec(v___x_203_);
v___x_205_ = lp_LanglandsOracles_Oracles_xPowMinusOne(v_head_195_);
lean_dec(v_head_195_);
v___x_206_ = lp_LanglandsOracles_Oracles_IPoly_divmodMonic(v___x_205_, v_prod_204_);
v_fst_207_ = lean_ctor_get(v___x_206_, 0);
lean_inc(v_fst_207_);
lean_dec_ref(v___x_206_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 1, v___x_200_);
lean_ctor_set(v___x_198_, 0, v_fst_207_);
v___x_209_ = v___x_198_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v_fst_207_);
lean_ctor_set(v_reuseFailAlloc_212_, 1, v___x_200_);
v___x_209_ = v_reuseFailAlloc_212_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
lean_object* v___x_210_; 
v___x_210_ = l_List_appendTR___redArg(v_x_193_, v___x_209_);
v_x_193_ = v___x_210_;
v_x_194_ = v_tail_196_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_cyclotomics(lean_object* v_N_214_){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_215_ = lean_box(0);
v___x_216_ = lean_unsigned_to_nat(1u);
v___x_217_ = lean_nat_add(v___x_216_, v_N_214_);
v___x_218_ = l_List_range_x27TR_go(v___x_216_, v_N_214_, v___x_217_, v___x_215_);
v___x_219_ = lp_LanglandsOracles_List_foldl___at___00Oracles_cyclotomics_spec__1(v___x_215_, v___x_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_cyclotomic(lean_object* v_N_220_){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_221_ = lean_box(0);
v___x_222_ = lp_LanglandsOracles_Oracles_cyclotomics(v_N_220_);
v___x_223_ = l_List_getLast_x21___redArg(v___x_221_, v___x_222_);
lean_dec(v___x_222_);
return v___x_223_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_beq___at___00Oracles_isZeroInCyclotomicField_spec__0(lean_object* v_x_224_, lean_object* v_x_225_){
_start:
{
if (lean_obj_tag(v_x_224_) == 0)
{
if (lean_obj_tag(v_x_225_) == 0)
{
uint8_t v___x_226_; 
v___x_226_ = 1;
return v___x_226_;
}
else
{
uint8_t v___x_227_; 
v___x_227_ = 0;
return v___x_227_;
}
}
else
{
if (lean_obj_tag(v_x_225_) == 0)
{
uint8_t v___x_228_; 
v___x_228_ = 0;
return v___x_228_;
}
else
{
lean_object* v_head_229_; lean_object* v_tail_230_; lean_object* v_head_231_; lean_object* v_tail_232_; uint8_t v___x_233_; 
v_head_229_ = lean_ctor_get(v_x_224_, 0);
v_tail_230_ = lean_ctor_get(v_x_224_, 1);
v_head_231_ = lean_ctor_get(v_x_225_, 0);
v_tail_232_ = lean_ctor_get(v_x_225_, 1);
v___x_233_ = lean_int_dec_eq(v_head_229_, v_head_231_);
if (v___x_233_ == 0)
{
return v___x_233_;
}
else
{
v_x_224_ = v_tail_230_;
v_x_225_ = v_tail_232_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_beq___at___00Oracles_isZeroInCyclotomicField_spec__0___boxed(lean_object* v_x_235_, lean_object* v_x_236_){
_start:
{
uint8_t v_res_237_; lean_object* v_r_238_; 
v_res_237_ = lp_LanglandsOracles_List_beq___at___00Oracles_isZeroInCyclotomicField_spec__0(v_x_235_, v_x_236_);
lean_dec(v_x_236_);
lean_dec(v_x_235_);
v_r_238_ = lean_box(v_res_237_);
return v_r_238_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_isZeroInCyclotomicField(lean_object* v_N_239_, lean_object* v_c_240_){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v_snd_243_; lean_object* v___x_244_; uint8_t v___x_245_; 
v___x_241_ = lp_LanglandsOracles_Oracles_cyclotomic(v_N_239_);
v___x_242_ = lp_LanglandsOracles_Oracles_IPoly_divmodMonic(v_c_240_, v___x_241_);
v_snd_243_ = lean_ctor_get(v___x_242_, 1);
lean_inc(v_snd_243_);
lean_dec_ref(v___x_242_);
v___x_244_ = lean_box(0);
v___x_245_ = lp_LanglandsOracles_List_beq___at___00Oracles_isZeroInCyclotomicField_spec__0(v_snd_243_, v___x_244_);
lean_dec(v_snd_243_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_isZeroInCyclotomicField___boxed(lean_object* v_N_246_, lean_object* v_c_247_){
_start:
{
uint8_t v_res_248_; lean_object* v_r_249_; 
v_res_248_ = lp_LanglandsOracles_Oracles_isZeroInCyclotomicField(v_N_246_, v_c_247_);
v_r_249_ = lean_box(v_res_248_);
return v_r_249_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_zetaCoefficients_spec__0(lean_object* v___x_250_, lean_object* v_num_251_, lean_object* v_x_252_, lean_object* v_x_253_){
_start:
{
if (lean_obj_tag(v_x_253_) == 0)
{
return v_x_252_;
}
else
{
lean_object* v_head_254_; lean_object* v_tail_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_297_; 
v_head_254_ = lean_ctor_get(v_x_253_, 0);
v_tail_255_ = lean_ctor_get(v_x_253_, 1);
v_isSharedCheck_297_ = !lean_is_exclusive(v_x_253_);
if (v_isSharedCheck_297_ == 0)
{
v___x_257_ = v_x_253_;
v_isShared_258_ = v_isSharedCheck_297_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_tail_255_);
lean_inc(v_head_254_);
lean_dec(v_x_253_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_297_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___y_263_; lean_object* v___y_264_; lean_object* v___y_265_; lean_object* v___y_277_; lean_object* v___y_278_; lean_object* v___y_285_; uint8_t v___x_292_; 
v___x_259_ = lean_unsigned_to_nat(1u);
v___x_260_ = lean_obj_once(&lp_LanglandsOracles_Oracles_xPowMinusOne___closed__0, &lp_LanglandsOracles_Oracles_xPowMinusOne___closed__0_once, _init_lp_LanglandsOracles_Oracles_xPowMinusOne___closed__0);
v___x_261_ = lean_box(0);
v___x_292_ = lean_nat_dec_le(v___x_259_, v_head_254_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; 
v___x_293_ = lean_obj_once(&lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0, &lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0_once, _init_lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0);
v___y_285_ = v___x_293_;
goto v___jp_284_;
}
else
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_294_ = l_Int_instInhabited;
v___x_295_ = lean_nat_sub(v_head_254_, v___x_259_);
v___x_296_ = l_List_get_x21Internal___redArg(v___x_294_, v_x_252_, v___x_295_);
v___y_285_ = v___x_296_;
goto v___jp_284_;
}
v___jp_262_:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_272_; 
v___x_266_ = lean_int_add(v___x_250_, v___x_260_);
v___x_267_ = lean_int_mul(v___x_266_, v___y_263_);
lean_dec(v___y_263_);
lean_dec(v___x_266_);
v___x_268_ = lean_int_add(v___y_265_, v___x_267_);
lean_dec(v___x_267_);
lean_dec(v___y_265_);
v___x_269_ = lean_int_mul(v___x_250_, v___y_264_);
lean_dec(v___y_264_);
v___x_270_ = lean_int_sub(v___x_268_, v___x_269_);
lean_dec(v___x_269_);
lean_dec(v___x_268_);
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 1, v___x_261_);
lean_ctor_set(v___x_257_, 0, v___x_270_);
v___x_272_ = v___x_257_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_270_);
lean_ctor_set(v_reuseFailAlloc_275_, 1, v___x_261_);
v___x_272_ = v_reuseFailAlloc_275_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
lean_object* v___x_273_; 
v___x_273_ = l_List_appendTR___redArg(v_x_252_, v___x_272_);
v_x_252_ = v___x_273_;
v_x_253_ = v_tail_255_;
goto _start;
}
}
v___jp_276_:
{
lean_object* v___x_279_; uint8_t v___x_280_; 
v___x_279_ = lean_unsigned_to_nat(3u);
v___x_280_ = lean_nat_dec_lt(v_head_254_, v___x_279_);
if (v___x_280_ == 0)
{
lean_object* v___x_281_; 
lean_dec(v_head_254_);
v___x_281_ = lean_obj_once(&lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0, &lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0_once, _init_lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0);
v___y_263_ = v___y_277_;
v___y_264_ = v___y_278_;
v___y_265_ = v___x_281_;
goto v___jp_262_;
}
else
{
lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_282_ = l_Int_instInhabited;
v___x_283_ = l_List_get_x21Internal___redArg(v___x_282_, v_num_251_, v_head_254_);
v___y_263_ = v___y_277_;
v___y_264_ = v___y_278_;
v___y_265_ = v___x_283_;
goto v___jp_262_;
}
}
v___jp_284_:
{
lean_object* v___x_286_; uint8_t v___x_287_; 
v___x_286_ = lean_unsigned_to_nat(2u);
v___x_287_ = lean_nat_dec_le(v___x_286_, v_head_254_);
if (v___x_287_ == 0)
{
lean_object* v___x_288_; 
v___x_288_ = lean_obj_once(&lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0, &lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0_once, _init_lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0);
v___y_277_ = v___y_285_;
v___y_278_ = v___x_288_;
goto v___jp_276_;
}
else
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_289_ = l_Int_instInhabited;
v___x_290_ = lean_nat_sub(v_head_254_, v___x_286_);
v___x_291_ = l_List_get_x21Internal___redArg(v___x_289_, v_x_252_, v___x_290_);
v___y_277_ = v___y_285_;
v___y_278_ = v___x_291_;
goto v___jp_276_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_zetaCoefficients_spec__0___boxed(lean_object* v___x_298_, lean_object* v_num_299_, lean_object* v_x_300_, lean_object* v_x_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = lp_LanglandsOracles_List_foldl___at___00Oracles_zetaCoefficients_spec__0(v___x_298_, v_num_299_, v_x_300_, v_x_301_);
lean_dec(v_num_299_);
lean_dec(v___x_298_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_zetaCoefficients(lean_object* v_p_303_, lean_object* v_a_304_, lean_object* v_D_305_){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v_num_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_306_ = lean_unsigned_to_nat(1u);
v___x_307_ = lean_obj_once(&lp_LanglandsOracles_Oracles_xPowMinusOne___closed__0, &lp_LanglandsOracles_Oracles_xPowMinusOne___closed__0_once, _init_lp_LanglandsOracles_Oracles_xPowMinusOne___closed__0);
v___x_308_ = lean_int_neg(v_a_304_);
v___x_309_ = lean_nat_to_int(v_p_303_);
v___x_310_ = lean_box(0);
lean_inc(v___x_309_);
v___x_311_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_311_, 0, v___x_309_);
lean_ctor_set(v___x_311_, 1, v___x_310_);
v___x_312_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_312_, 0, v___x_308_);
lean_ctor_set(v___x_312_, 1, v___x_311_);
v_num_313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_num_313_, 0, v___x_307_);
lean_ctor_set(v_num_313_, 1, v___x_312_);
v___x_314_ = lean_nat_add(v_D_305_, v___x_306_);
v___x_315_ = l_List_range(v___x_314_);
v___x_316_ = lp_LanglandsOracles_List_foldl___at___00Oracles_zetaCoefficients_spec__0(v___x_309_, v_num_313_, v___x_310_, v___x_315_);
lean_dec_ref_known(v_num_313_, 2);
lean_dec(v___x_309_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_zetaCoefficients___boxed(lean_object* v_p_317_, lean_object* v_a_318_, lean_object* v_D_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = lp_LanglandsOracles_Oracles_zetaCoefficients(v_p_317_, v_a_318_, v_D_319_);
lean_dec(v_D_319_);
lean_dec(v_a_318_);
return v_res_320_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_lSeriesCertified_spec__1(lean_object* v_x_321_){
_start:
{
if (lean_obj_tag(v_x_321_) == 0)
{
uint8_t v___x_322_; 
v___x_322_ = 1;
return v___x_322_;
}
else
{
lean_object* v_head_323_; lean_object* v_tail_324_; lean_object* v___x_325_; lean_object* v___x_326_; uint8_t v___x_327_; 
v_head_323_ = lean_ctor_get(v_x_321_, 0);
v_tail_324_ = lean_ctor_get(v_x_321_, 1);
v___x_325_ = lean_obj_once(&lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0, &lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0_once, _init_lp_LanglandsOracles_List_dropWhile___at___00Oracles_IPoly_trim_spec__0___closed__0);
v___x_326_ = lp_LanglandsOracles_List_foldl___at___00Oracles_IMat_trace_spec__1(v___x_325_, v_head_323_);
v___x_327_ = lean_int_dec_eq(v___x_326_, v___x_325_);
lean_dec(v___x_326_);
if (v___x_327_ == 0)
{
return v___x_327_;
}
else
{
v_x_321_ = v_tail_324_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_lSeriesCertified_spec__1___boxed(lean_object* v_x_329_){
_start:
{
uint8_t v_res_330_; lean_object* v_r_331_; 
v_res_330_ = lp_LanglandsOracles_List_all___at___00Oracles_lSeriesCertified_spec__1(v_x_329_);
lean_dec(v_x_329_);
v_r_331_ = lean_box(v_res_330_);
return v_r_331_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_lSeriesCertified_spec__0(lean_object* v_fst_332_, lean_object* v_x_333_){
_start:
{
if (lean_obj_tag(v_x_333_) == 0)
{
uint8_t v___x_334_; 
lean_dec(v_fst_332_);
v___x_334_ = 1;
return v___x_334_;
}
else
{
lean_object* v_head_335_; lean_object* v_tail_336_; uint8_t v___x_337_; 
v_head_335_ = lean_ctor_get(v_x_333_, 0);
lean_inc(v_head_335_);
v_tail_336_ = lean_ctor_get(v_x_333_, 1);
lean_inc(v_tail_336_);
lean_dec_ref_known(v_x_333_, 2);
lean_inc(v_fst_332_);
v___x_337_ = lp_LanglandsOracles_Oracles_isZeroInCyclotomicField(v_fst_332_, v_head_335_);
if (v___x_337_ == 0)
{
lean_dec(v_tail_336_);
lean_dec(v_fst_332_);
return v___x_337_;
}
else
{
v_x_333_ = v_tail_336_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_lSeriesCertified_spec__0___boxed(lean_object* v_fst_339_, lean_object* v_x_340_){
_start:
{
uint8_t v_res_341_; lean_object* v_r_342_; 
v_res_341_ = lp_LanglandsOracles_List_all___at___00Oracles_lSeriesCertified_spec__0(v_fst_339_, v_x_340_);
v_r_342_ = lean_box(v_res_341_);
return v_r_342_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_lSeriesCertified_spec__2(lean_object* v_fst_343_, lean_object* v_fst_344_, lean_object* v_fst_345_, lean_object* v_x_346_){
_start:
{
if (lean_obj_tag(v_x_346_) == 0)
{
uint8_t v___x_347_; 
lean_dec(v_fst_344_);
lean_dec(v_fst_343_);
v___x_347_ = 1;
return v___x_347_;
}
else
{
lean_object* v_head_348_; lean_object* v_tail_349_; uint8_t v___y_351_; lean_object* v_fst_353_; uint8_t v___x_354_; 
v_head_348_ = lean_ctor_get(v_x_346_, 0);
lean_inc(v_head_348_);
v_tail_349_ = lean_ctor_get(v_x_346_, 1);
lean_inc(v_tail_349_);
lean_dec_ref_known(v_x_346_, 2);
v_fst_353_ = lean_ctor_get(v_head_348_, 0);
v___x_354_ = lean_unbox(v_fst_353_);
if (v___x_354_ == 0)
{
lean_object* v_snd_355_; lean_object* v___x_356_; lean_object* v___x_357_; uint8_t v___x_358_; 
lean_inc(v_fst_353_);
v_snd_355_ = lean_ctor_get(v_head_348_, 1);
lean_inc(v_snd_355_);
lean_dec(v_head_348_);
v___x_356_ = lean_unsigned_to_nat(1u);
v___x_357_ = l_List_drop___redArg(v___x_356_, v_snd_355_);
lean_dec(v_snd_355_);
lean_inc(v___x_357_);
lean_inc(v_fst_343_);
v___x_358_ = lp_LanglandsOracles_List_all___at___00Oracles_lSeriesCertified_spec__0(v_fst_343_, v___x_357_);
if (v___x_358_ == 0)
{
lean_dec(v___x_357_);
lean_dec(v_fst_353_);
v___y_351_ = v___x_358_;
goto v___jp_350_;
}
else
{
uint8_t v___x_359_; 
v___x_359_ = lp_LanglandsOracles_List_all___at___00Oracles_lSeriesCertified_spec__1(v___x_357_);
lean_dec(v___x_357_);
if (v___x_359_ == 0)
{
lean_dec(v_fst_353_);
v___y_351_ = v___x_358_;
goto v___jp_350_;
}
else
{
uint8_t v___x_360_; 
lean_dec(v_tail_349_);
lean_dec(v_fst_344_);
lean_dec(v_fst_343_);
v___x_360_ = lean_unbox(v_fst_353_);
lean_dec(v_fst_353_);
return v___x_360_;
}
}
}
else
{
lean_object* v_snd_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; uint8_t v___x_368_; 
v_snd_361_ = lean_ctor_get(v_head_348_, 1);
lean_inc_n(v_snd_361_, 2);
lean_dec(v_head_348_);
v___x_362_ = lean_box(0);
v___x_363_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_IMat_rowSums_spec__0(v_snd_361_, v___x_362_);
v___x_364_ = l_List_lengthTR___redArg(v_snd_361_);
lean_dec(v_snd_361_);
v___x_365_ = lean_unsigned_to_nat(1u);
v___x_366_ = lean_nat_sub(v___x_364_, v___x_365_);
lean_dec(v___x_364_);
lean_inc(v_fst_344_);
v___x_367_ = lp_LanglandsOracles_Oracles_zetaCoefficients(v_fst_344_, v_fst_345_, v___x_366_);
lean_dec(v___x_366_);
v___x_368_ = lp_LanglandsOracles_List_beq___at___00Oracles_isZeroInCyclotomicField_spec__0(v___x_363_, v___x_367_);
lean_dec(v___x_367_);
lean_dec(v___x_363_);
v___y_351_ = v___x_368_;
goto v___jp_350_;
}
v___jp_350_:
{
if (v___y_351_ == 0)
{
lean_dec(v_tail_349_);
lean_dec(v_fst_344_);
lean_dec(v_fst_343_);
return v___y_351_;
}
else
{
v_x_346_ = v_tail_349_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_lSeriesCertified_spec__2___boxed(lean_object* v_fst_369_, lean_object* v_fst_370_, lean_object* v_fst_371_, lean_object* v_x_372_){
_start:
{
uint8_t v_res_373_; lean_object* v_r_374_; 
v_res_373_ = lp_LanglandsOracles_List_all___at___00Oracles_lSeriesCertified_spec__2(v_fst_369_, v_fst_370_, v_fst_371_, v_x_372_);
lean_dec(v_fst_371_);
v_r_374_ = lean_box(v_res_373_);
return v_r_374_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_lSeriesCertified(lean_object* v_entry_375_){
_start:
{
lean_object* v_snd_376_; lean_object* v_snd_377_; lean_object* v_fst_378_; lean_object* v_fst_379_; lean_object* v_fst_380_; lean_object* v_snd_381_; uint8_t v___x_382_; 
v_snd_376_ = lean_ctor_get(v_entry_375_, 1);
lean_inc(v_snd_376_);
v_snd_377_ = lean_ctor_get(v_snd_376_, 1);
lean_inc(v_snd_377_);
v_fst_378_ = lean_ctor_get(v_entry_375_, 0);
lean_inc(v_fst_378_);
lean_dec_ref(v_entry_375_);
v_fst_379_ = lean_ctor_get(v_snd_376_, 0);
lean_inc(v_fst_379_);
lean_dec(v_snd_376_);
v_fst_380_ = lean_ctor_get(v_snd_377_, 0);
lean_inc(v_fst_380_);
v_snd_381_ = lean_ctor_get(v_snd_377_, 1);
lean_inc(v_snd_381_);
lean_dec(v_snd_377_);
v___x_382_ = lp_LanglandsOracles_List_all___at___00Oracles_lSeriesCertified_spec__2(v_fst_380_, v_fst_378_, v_fst_379_, v_snd_381_);
lean_dec(v_fst_379_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_lSeriesCertified___boxed(lean_object* v_entry_383_){
_start:
{
uint8_t v_res_384_; lean_object* v_r_385_; 
v_res_384_ = lp_LanglandsOracles_Oracles_lSeriesCertified(v_entry_383_);
v_r_385_ = lean_box(v_res_384_);
return v_r_385_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Data(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LanglandsOracles_LanglandsOracles_LSeriesCertificates(uint8_t builtin) {
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
res = initialize_LanglandsOracles_LanglandsOracles_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
