// Lean compiler output
// Module: LanglandsOracles.Carlitz
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
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_List_getLast_x21___redArg(lean_object*, lean_object*);
lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_get___redArg(lean_object*, lean_object*);
lean_object* l_List_zipIdxTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_dropWhile___at___00Oracles_trimZeros_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_dropWhile___at___00Oracles_trimZeros_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_trimZeros(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_add___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_add___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_add___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_add___lam__1___boxed(lean_object*, lean_object*);
static const lean_array_object lp_LanglandsOracles_Oracles_FpPoly_add___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_LanglandsOracles_Oracles_FpPoly_add___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_FpPoly_add___closed__0_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_add(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_FpPoly_mul_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_FpPoly_mul_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_mul_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_mul_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_mul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_mul___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_scale_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_scale_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_scale(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_scale___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_frobenius_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_frobenius_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_frobenius(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_frobenius___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_mod_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_mod_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_mod_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_mod_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_mod(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__0___closed__0 = (const lean_object*)&lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__0___closed__0_value;
static const lean_ctor_object lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__0___closed__0_value)}};
static const lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__0___closed__1 = (const lean_object*)&lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__0___closed__1_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_carlitz_spec__2(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__3___closed__0 = (const lean_object*)&lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__3___closed__0_value;
static const lean_ctor_object lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__3___closed__1 = (const lean_object*)&lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__3___closed__1_value;
static const lean_ctor_object lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__3___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__3___closed__2 = (const lean_object*)&lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__3___closed__2_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_carlitz_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_carlitz_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_carlitz_spec__1(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_LanglandsOracles_Oracles_carlitz___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__0___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles_Oracles_carlitz___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_carlitz___closed__0_value;
static const lean_ctor_object lp_LanglandsOracles_Oracles_carlitz___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_LanglandsOracles_Oracles_carlitz___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles_Oracles_carlitz___closed__1 = (const lean_object*)&lp_LanglandsOracles_Oracles_carlitz___closed__1_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_carlitz(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_carlitz___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_beq___at___00Oracles_fermatCarlitz_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_beq___at___00Oracles_fermatCarlitz_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_fermatCarlitz_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_fermatCarlitz_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_fermatCarlitz(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_fermatCarlitz___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_dropWhile___at___00Oracles_trimZeros_spec__0(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
return v_x_1_;
}
else
{
lean_object* v_head_2_; lean_object* v_tail_3_; lean_object* v___x_4_; uint8_t v___x_5_; 
v_head_2_ = lean_ctor_get(v_x_1_, 0);
v_tail_3_ = lean_ctor_get(v_x_1_, 1);
v___x_4_ = lean_unsigned_to_nat(0u);
v___x_5_ = lean_nat_dec_eq(v_head_2_, v___x_4_);
if (v___x_5_ == 0)
{
lean_inc_ref(v_x_1_);
return v_x_1_;
}
else
{
v_x_1_ = v_tail_3_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_dropWhile___at___00Oracles_trimZeros_spec__0___boxed(lean_object* v_x_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = lp_LanglandsOracles_List_dropWhile___at___00Oracles_trimZeros_spec__0(v_x_7_);
lean_dec(v_x_7_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_trimZeros(lean_object* v_a_9_){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_10_ = l_List_reverse___redArg(v_a_9_);
v___x_11_ = lp_LanglandsOracles_List_dropWhile___at___00Oracles_trimZeros_spec__0(v___x_10_);
lean_dec(v___x_10_);
v___x_12_ = l_List_reverse___redArg(v___x_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_add___lam__0(lean_object* v_p_13_, lean_object* v_x_14_, lean_object* v_y_15_){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_nat_add(v_x_14_, v_y_15_);
v___x_17_ = lean_nat_mod(v___x_16_, v_p_13_);
lean_dec(v___x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_add___lam__0___boxed(lean_object* v_p_18_, lean_object* v_x_19_, lean_object* v_y_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = lp_LanglandsOracles_Oracles_FpPoly_add___lam__0(v_p_18_, v_x_19_, v_y_20_);
lean_dec(v_y_20_);
lean_dec(v_x_19_);
lean_dec(v_p_18_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_add___lam__1(lean_object* v___y_22_, lean_object* v_x_23_){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_24_ = l_List_lengthTR___redArg(v_x_23_);
v___x_25_ = lean_nat_sub(v___y_22_, v___x_24_);
lean_dec(v___x_24_);
v___x_26_ = lean_unsigned_to_nat(0u);
v___x_27_ = l_List_replicateTR___redArg(v___x_25_, v___x_26_);
v___x_28_ = l_List_appendTR___redArg(v_x_23_, v___x_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_add___lam__1___boxed(lean_object* v___y_29_, lean_object* v_x_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = lp_LanglandsOracles_Oracles_FpPoly_add___lam__1(v___y_29_, v_x_30_);
lean_dec(v___y_29_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_add(lean_object* v_p_34_, lean_object* v_a_35_, lean_object* v_b_36_){
_start:
{
lean_object* v___f_37_; lean_object* v___y_39_; lean_object* v___x_45_; lean_object* v___x_46_; uint8_t v___x_47_; 
v___f_37_ = lean_alloc_closure((void*)(lp_LanglandsOracles_Oracles_FpPoly_add___lam__0___boxed), 3, 1);
lean_closure_set(v___f_37_, 0, v_p_34_);
v___x_45_ = l_List_lengthTR___redArg(v_a_35_);
v___x_46_ = l_List_lengthTR___redArg(v_b_36_);
v___x_47_ = lean_nat_dec_le(v___x_45_, v___x_46_);
if (v___x_47_ == 0)
{
lean_dec(v___x_46_);
v___y_39_ = v___x_45_;
goto v___jp_38_;
}
else
{
lean_dec(v___x_45_);
v___y_39_ = v___x_46_;
goto v___jp_38_;
}
v___jp_38_:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_40_ = lp_LanglandsOracles_Oracles_FpPoly_add___lam__1(v___y_39_, v_a_35_);
v___x_41_ = lp_LanglandsOracles_Oracles_FpPoly_add___lam__1(v___y_39_, v_b_36_);
lean_dec(v___y_39_);
v___x_42_ = ((lean_object*)(lp_LanglandsOracles_Oracles_FpPoly_add___closed__0));
v___x_43_ = l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(v___f_37_, v___x_40_, v___x_41_, v___x_42_);
v___x_44_ = lp_LanglandsOracles_Oracles_trimZeros(v___x_43_);
return v___x_44_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_FpPoly_mul_spec__0(lean_object* v_a_48_, lean_object* v_k_49_, lean_object* v_b_50_, lean_object* v___x_51_, lean_object* v___x_52_, lean_object* v_x_53_, lean_object* v_x_54_){
_start:
{
if (lean_obj_tag(v_x_54_) == 0)
{
return v_x_53_;
}
else
{
lean_object* v_head_55_; lean_object* v_tail_56_; uint8_t v___y_58_; uint8_t v___x_67_; 
v_head_55_ = lean_ctor_get(v_x_54_, 0);
lean_inc(v_head_55_);
v_tail_56_ = lean_ctor_get(v_x_54_, 1);
lean_inc(v_tail_56_);
lean_dec_ref_known(v_x_54_, 2);
v___x_67_ = lean_nat_dec_lt(v_head_55_, v___x_51_);
if (v___x_67_ == 0)
{
v___y_58_ = v___x_67_;
goto v___jp_57_;
}
else
{
lean_object* v___x_68_; uint8_t v___x_69_; 
v___x_68_ = lean_nat_sub(v_k_49_, v_head_55_);
v___x_69_ = lean_nat_dec_lt(v___x_68_, v___x_52_);
lean_dec(v___x_68_);
v___y_58_ = v___x_69_;
goto v___jp_57_;
}
v___jp_57_:
{
if (v___y_58_ == 0)
{
lean_dec(v_head_55_);
v_x_54_ = v_tail_56_;
goto _start;
}
else
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_60_ = lean_unsigned_to_nat(0u);
lean_inc(v_head_55_);
v___x_61_ = l_List_get_x21Internal___redArg(v___x_60_, v_a_48_, v_head_55_);
v___x_62_ = lean_nat_sub(v_k_49_, v_head_55_);
lean_dec(v_head_55_);
v___x_63_ = l_List_get_x21Internal___redArg(v___x_60_, v_b_50_, v___x_62_);
v___x_64_ = lean_nat_mul(v___x_61_, v___x_63_);
lean_dec(v___x_63_);
lean_dec(v___x_61_);
v___x_65_ = lean_nat_add(v_x_53_, v___x_64_);
lean_dec(v___x_64_);
lean_dec(v_x_53_);
v_x_53_ = v___x_65_;
v_x_54_ = v_tail_56_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_FpPoly_mul_spec__0___boxed(lean_object* v_a_70_, lean_object* v_k_71_, lean_object* v_b_72_, lean_object* v___x_73_, lean_object* v___x_74_, lean_object* v_x_75_, lean_object* v_x_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = lp_LanglandsOracles_List_foldl___at___00Oracles_FpPoly_mul_spec__0(v_a_70_, v_k_71_, v_b_72_, v___x_73_, v___x_74_, v_x_75_, v_x_76_);
lean_dec(v___x_74_);
lean_dec(v___x_73_);
lean_dec(v_b_72_);
lean_dec(v_k_71_);
lean_dec(v_a_70_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_mul_spec__1(lean_object* v_a_78_, lean_object* v_b_79_, lean_object* v___x_80_, lean_object* v___x_81_, lean_object* v_p_82_, lean_object* v_a_83_, lean_object* v_a_84_){
_start:
{
if (lean_obj_tag(v_a_83_) == 0)
{
lean_object* v___x_85_; 
v___x_85_ = l_List_reverse___redArg(v_a_84_);
return v___x_85_;
}
else
{
lean_object* v_head_86_; lean_object* v_tail_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_101_; 
v_head_86_ = lean_ctor_get(v_a_83_, 0);
v_tail_87_ = lean_ctor_get(v_a_83_, 1);
v_isSharedCheck_101_ = !lean_is_exclusive(v_a_83_);
if (v_isSharedCheck_101_ == 0)
{
v___x_89_ = v_a_83_;
v_isShared_90_ = v_isSharedCheck_101_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_tail_87_);
lean_inc(v_head_86_);
lean_dec(v_a_83_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_101_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_98_; 
v___x_91_ = lean_unsigned_to_nat(1u);
v___x_92_ = lean_unsigned_to_nat(0u);
v___x_93_ = lean_nat_add(v_head_86_, v___x_91_);
v___x_94_ = l_List_range(v___x_93_);
v___x_95_ = lp_LanglandsOracles_List_foldl___at___00Oracles_FpPoly_mul_spec__0(v_a_78_, v_head_86_, v_b_79_, v___x_80_, v___x_81_, v___x_92_, v___x_94_);
lean_dec(v_head_86_);
v___x_96_ = lean_nat_mod(v___x_95_, v_p_82_);
lean_dec(v___x_95_);
if (v_isShared_90_ == 0)
{
lean_ctor_set(v___x_89_, 1, v_a_84_);
lean_ctor_set(v___x_89_, 0, v___x_96_);
v___x_98_ = v___x_89_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v___x_96_);
lean_ctor_set(v_reuseFailAlloc_100_, 1, v_a_84_);
v___x_98_ = v_reuseFailAlloc_100_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
v_a_83_ = v_tail_87_;
v_a_84_ = v___x_98_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_mul_spec__1___boxed(lean_object* v_a_102_, lean_object* v_b_103_, lean_object* v___x_104_, lean_object* v___x_105_, lean_object* v_p_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_mul_spec__1(v_a_102_, v_b_103_, v___x_104_, v___x_105_, v_p_106_, v_a_107_, v_a_108_);
lean_dec(v_p_106_);
lean_dec(v___x_105_);
lean_dec(v___x_104_);
lean_dec(v_b_103_);
lean_dec(v_a_102_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_mul(lean_object* v_p_110_, lean_object* v_a_111_, lean_object* v_b_112_){
_start:
{
uint8_t v___y_114_; uint8_t v___x_125_; 
v___x_125_ = l_List_isEmpty___redArg(v_a_111_);
if (v___x_125_ == 0)
{
uint8_t v___x_126_; 
v___x_126_ = l_List_isEmpty___redArg(v_b_112_);
v___y_114_ = v___x_126_;
goto v___jp_113_;
}
else
{
v___y_114_ = v___x_125_;
goto v___jp_113_;
}
v___jp_113_:
{
if (v___y_114_ == 0)
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v_n_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_115_ = l_List_lengthTR___redArg(v_a_111_);
v___x_116_ = l_List_lengthTR___redArg(v_b_112_);
v___x_117_ = lean_nat_add(v___x_115_, v___x_116_);
v___x_118_ = lean_unsigned_to_nat(1u);
v_n_119_ = lean_nat_sub(v___x_117_, v___x_118_);
lean_dec(v___x_117_);
v___x_120_ = l_List_range(v_n_119_);
v___x_121_ = lean_box(0);
v___x_122_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_mul_spec__1(v_a_111_, v_b_112_, v___x_115_, v___x_116_, v_p_110_, v___x_120_, v___x_121_);
lean_dec(v___x_116_);
lean_dec(v___x_115_);
v___x_123_ = lp_LanglandsOracles_Oracles_trimZeros(v___x_122_);
return v___x_123_;
}
else
{
lean_object* v___x_124_; 
v___x_124_ = lean_box(0);
return v___x_124_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_mul___boxed(lean_object* v_p_127_, lean_object* v_a_128_, lean_object* v_b_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = lp_LanglandsOracles_Oracles_FpPoly_mul(v_p_127_, v_a_128_, v_b_129_);
lean_dec(v_b_129_);
lean_dec(v_a_128_);
lean_dec(v_p_127_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_scale_spec__0(lean_object* v_c_131_, lean_object* v_p_132_, lean_object* v_a_133_, lean_object* v_a_134_){
_start:
{
if (lean_obj_tag(v_a_133_) == 0)
{
lean_object* v___x_135_; 
v___x_135_ = l_List_reverse___redArg(v_a_134_);
return v___x_135_;
}
else
{
lean_object* v_head_136_; lean_object* v_tail_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_147_; 
v_head_136_ = lean_ctor_get(v_a_133_, 0);
v_tail_137_ = lean_ctor_get(v_a_133_, 1);
v_isSharedCheck_147_ = !lean_is_exclusive(v_a_133_);
if (v_isSharedCheck_147_ == 0)
{
v___x_139_ = v_a_133_;
v_isShared_140_ = v_isSharedCheck_147_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_tail_137_);
lean_inc(v_head_136_);
lean_dec(v_a_133_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_147_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_144_; 
v___x_141_ = lean_nat_mul(v_c_131_, v_head_136_);
lean_dec(v_head_136_);
v___x_142_ = lean_nat_mod(v___x_141_, v_p_132_);
lean_dec(v___x_141_);
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 1, v_a_134_);
lean_ctor_set(v___x_139_, 0, v___x_142_);
v___x_144_ = v___x_139_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v___x_142_);
lean_ctor_set(v_reuseFailAlloc_146_, 1, v_a_134_);
v___x_144_ = v_reuseFailAlloc_146_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
v_a_133_ = v_tail_137_;
v_a_134_ = v___x_144_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_scale_spec__0___boxed(lean_object* v_c_148_, lean_object* v_p_149_, lean_object* v_a_150_, lean_object* v_a_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_scale_spec__0(v_c_148_, v_p_149_, v_a_150_, v_a_151_);
lean_dec(v_p_149_);
lean_dec(v_c_148_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_scale(lean_object* v_p_153_, lean_object* v_c_154_, lean_object* v_a_155_){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_156_ = lean_box(0);
v___x_157_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_scale_spec__0(v_c_154_, v_p_153_, v_a_155_, v___x_156_);
v___x_158_ = lp_LanglandsOracles_Oracles_trimZeros(v___x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_scale___boxed(lean_object* v_p_159_, lean_object* v_c_160_, lean_object* v_a_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = lp_LanglandsOracles_Oracles_FpPoly_scale(v_p_159_, v_c_160_, v_a_161_);
lean_dec(v_c_160_);
lean_dec(v_p_159_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_frobenius_spec__0(lean_object* v_p_163_, lean_object* v_c_164_, lean_object* v_a_165_, lean_object* v_a_166_){
_start:
{
if (lean_obj_tag(v_a_165_) == 0)
{
lean_object* v___x_167_; 
v___x_167_ = l_List_reverse___redArg(v_a_166_);
return v___x_167_;
}
else
{
lean_object* v_head_168_; lean_object* v_tail_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_184_; 
v_head_168_ = lean_ctor_get(v_a_165_, 0);
v_tail_169_ = lean_ctor_get(v_a_165_, 1);
v_isSharedCheck_184_ = !lean_is_exclusive(v_a_165_);
if (v_isSharedCheck_184_ == 0)
{
v___x_171_ = v_a_165_;
v_isShared_172_ = v_isSharedCheck_184_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_tail_169_);
lean_inc(v_head_168_);
lean_dec(v_a_165_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_184_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___y_174_; lean_object* v___x_179_; lean_object* v___x_180_; uint8_t v___x_181_; 
v___x_179_ = lean_nat_mod(v_head_168_, v_p_163_);
v___x_180_ = lean_unsigned_to_nat(0u);
v___x_181_ = lean_nat_dec_eq(v___x_179_, v___x_180_);
lean_dec(v___x_179_);
if (v___x_181_ == 0)
{
lean_dec(v_head_168_);
v___y_174_ = v___x_180_;
goto v___jp_173_;
}
else
{
lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_182_ = lean_nat_div(v_head_168_, v_p_163_);
lean_dec(v_head_168_);
v___x_183_ = l_List_get_x21Internal___redArg(v___x_180_, v_c_164_, v___x_182_);
v___y_174_ = v___x_183_;
goto v___jp_173_;
}
v___jp_173_:
{
lean_object* v___x_176_; 
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 1, v_a_166_);
lean_ctor_set(v___x_171_, 0, v___y_174_);
v___x_176_ = v___x_171_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___y_174_);
lean_ctor_set(v_reuseFailAlloc_178_, 1, v_a_166_);
v___x_176_ = v_reuseFailAlloc_178_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
v_a_165_ = v_tail_169_;
v_a_166_ = v___x_176_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_frobenius_spec__0___boxed(lean_object* v_p_185_, lean_object* v_c_186_, lean_object* v_a_187_, lean_object* v_a_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_frobenius_spec__0(v_p_185_, v_c_186_, v_a_187_, v_a_188_);
lean_dec(v_c_186_);
lean_dec(v_p_185_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_frobenius(lean_object* v_p_190_, lean_object* v_c_191_){
_start:
{
uint8_t v___x_192_; 
v___x_192_ = l_List_isEmpty___redArg(v_c_191_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_193_ = l_List_lengthTR___redArg(v_c_191_);
v___x_194_ = lean_unsigned_to_nat(1u);
v___x_195_ = lean_nat_sub(v___x_193_, v___x_194_);
lean_dec(v___x_193_);
v___x_196_ = lean_nat_mul(v_p_190_, v___x_195_);
lean_dec(v___x_195_);
v___x_197_ = lean_nat_add(v___x_196_, v___x_194_);
lean_dec(v___x_196_);
v___x_198_ = l_List_range(v___x_197_);
v___x_199_ = lean_box(0);
v___x_200_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_frobenius_spec__0(v_p_190_, v_c_191_, v___x_198_, v___x_199_);
v___x_201_ = lp_LanglandsOracles_Oracles_trimZeros(v___x_200_);
return v___x_201_;
}
else
{
lean_object* v___x_202_; 
v___x_202_ = lean_box(0);
return v___x_202_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_frobenius___boxed(lean_object* v_p_203_, lean_object* v_c_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = lp_LanglandsOracles_Oracles_FpPoly_frobenius(v_p_203_, v_c_204_);
lean_dec(v_c_204_);
lean_dec(v_p_203_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_mod_go_spec__0(lean_object* v_c_206_, lean_object* v_p_207_, lean_object* v_a_208_, lean_object* v_a_209_){
_start:
{
if (lean_obj_tag(v_a_208_) == 0)
{
lean_object* v___x_210_; 
v___x_210_ = l_List_reverse___redArg(v_a_209_);
return v___x_210_;
}
else
{
lean_object* v_head_211_; lean_object* v_tail_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_224_; 
v_head_211_ = lean_ctor_get(v_a_208_, 0);
v_tail_212_ = lean_ctor_get(v_a_208_, 1);
v_isSharedCheck_224_ = !lean_is_exclusive(v_a_208_);
if (v_isSharedCheck_224_ == 0)
{
v___x_214_ = v_a_208_;
v_isShared_215_ = v_isSharedCheck_224_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_tail_212_);
lean_inc(v_head_211_);
lean_dec(v_a_208_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_224_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_221_; 
v___x_216_ = lean_nat_mul(v_c_206_, v_head_211_);
lean_dec(v_head_211_);
v___x_217_ = lean_nat_mod(v___x_216_, v_p_207_);
lean_dec(v___x_216_);
v___x_218_ = lean_nat_sub(v_p_207_, v___x_217_);
lean_dec(v___x_217_);
v___x_219_ = lean_nat_mod(v___x_218_, v_p_207_);
lean_dec(v___x_218_);
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 1, v_a_209_);
lean_ctor_set(v___x_214_, 0, v___x_219_);
v___x_221_ = v___x_214_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v___x_219_);
lean_ctor_set(v_reuseFailAlloc_223_, 1, v_a_209_);
v___x_221_ = v_reuseFailAlloc_223_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
v_a_208_ = v_tail_212_;
v_a_209_ = v___x_221_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_mod_go_spec__0___boxed(lean_object* v_c_225_, lean_object* v_p_226_, lean_object* v_a_227_, lean_object* v_a_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_mod_go_spec__0(v_c_225_, v_p_226_, v_a_227_, v_a_228_);
lean_dec(v_p_226_);
lean_dec(v_c_225_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_mod_go(lean_object* v_p_230_, lean_object* v_m_231_, lean_object* v_d_232_, lean_object* v_fuel_233_, lean_object* v_r_234_){
_start:
{
lean_object* v_zero_235_; uint8_t v_isZero_236_; 
v_zero_235_ = lean_unsigned_to_nat(0u);
v_isZero_236_ = lean_nat_dec_eq(v_fuel_233_, v_zero_235_);
if (v_isZero_236_ == 1)
{
lean_dec(v_fuel_233_);
lean_dec(v_m_231_);
lean_dec(v_p_230_);
return v_r_234_;
}
else
{
lean_object* v___x_237_; uint8_t v___x_238_; 
v___x_237_ = l_List_lengthTR___redArg(v_r_234_);
v___x_238_ = lean_nat_dec_le(v___x_237_, v_d_232_);
if (v___x_238_ == 0)
{
lean_object* v_one_239_; lean_object* v_n_240_; lean_object* v_c_241_; lean_object* v___x_242_; lean_object* v_shift_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v_sub_247_; lean_object* v___x_248_; 
v_one_239_ = lean_unsigned_to_nat(1u);
v_n_240_ = lean_nat_sub(v_fuel_233_, v_one_239_);
lean_dec(v_fuel_233_);
v_c_241_ = l_List_getLast_x21___redArg(v_zero_235_, v_r_234_);
v___x_242_ = lean_nat_sub(v___x_237_, v_one_239_);
lean_dec(v___x_237_);
v_shift_243_ = lean_nat_sub(v___x_242_, v_d_232_);
lean_dec(v___x_242_);
v___x_244_ = l_List_replicateTR___redArg(v_shift_243_, v_zero_235_);
v___x_245_ = lean_box(0);
lean_inc(v_m_231_);
v___x_246_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_FpPoly_mod_go_spec__0(v_c_241_, v_p_230_, v_m_231_, v___x_245_);
lean_dec(v_c_241_);
v_sub_247_ = l_List_appendTR___redArg(v___x_244_, v___x_246_);
lean_inc(v_p_230_);
v___x_248_ = lp_LanglandsOracles_Oracles_FpPoly_add(v_p_230_, v_r_234_, v_sub_247_);
v_fuel_233_ = v_n_240_;
v_r_234_ = v___x_248_;
goto _start;
}
else
{
lean_dec(v___x_237_);
lean_dec(v_fuel_233_);
lean_dec(v_m_231_);
lean_dec(v_p_230_);
return v_r_234_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_mod_go___boxed(lean_object* v_p_250_, lean_object* v_m_251_, lean_object* v_d_252_, lean_object* v_fuel_253_, lean_object* v_r_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = lp_LanglandsOracles_Oracles_FpPoly_mod_go(v_p_250_, v_m_251_, v_d_252_, v_fuel_253_, v_r_254_);
lean_dec(v_d_252_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_FpPoly_mod(lean_object* v_p_256_, lean_object* v_a_257_, lean_object* v_m_258_){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v_d_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_259_ = l_List_lengthTR___redArg(v_m_258_);
v___x_260_ = lean_unsigned_to_nat(1u);
v_d_261_ = lean_nat_sub(v___x_259_, v___x_260_);
lean_dec(v___x_259_);
v___x_262_ = l_List_lengthTR___redArg(v_a_257_);
v___x_263_ = lp_LanglandsOracles_Oracles_trimZeros(v_a_257_);
v___x_264_ = lp_LanglandsOracles_Oracles_FpPoly_mod_go(v_p_256_, v_m_258_, v_d_261_, v___x_262_, v___x_263_);
lean_dec(v_d_261_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__0(lean_object* v___x_271_, lean_object* v_p_272_, lean_object* v_a_273_, lean_object* v_a_274_){
_start:
{
if (lean_obj_tag(v_a_273_) == 0)
{
lean_object* v___x_275_; 
lean_dec(v_p_272_);
v___x_275_ = l_List_reverse___redArg(v_a_274_);
return v___x_275_;
}
else
{
lean_object* v_head_276_; lean_object* v_tail_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_302_; 
v_head_276_ = lean_ctor_get(v_a_273_, 0);
v_tail_277_ = lean_ctor_get(v_a_273_, 1);
v_isSharedCheck_302_ = !lean_is_exclusive(v_a_273_);
if (v_isSharedCheck_302_ == 0)
{
v___x_279_ = v_a_273_;
v_isShared_280_ = v_isSharedCheck_302_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_tail_277_);
lean_inc(v_head_276_);
lean_dec(v_a_273_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_302_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___y_282_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; uint8_t v___x_290_; uint8_t v___x_291_; lean_object* v___y_293_; 
v___x_287_ = lean_unsigned_to_nat(1u);
v___x_288_ = lean_box(0);
v___x_289_ = l_List_lengthTR___redArg(v___x_271_);
v___x_290_ = lean_nat_dec_lt(v_head_276_, v___x_289_);
lean_dec(v___x_289_);
v___x_291_ = lean_nat_dec_le(v___x_287_, v_head_276_);
if (v___x_290_ == 0)
{
v___y_293_ = v___x_288_;
goto v___jp_292_;
}
else
{
lean_object* v_t_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v_t_299_ = ((lean_object*)(lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__0___closed__1));
lean_inc(v_head_276_);
v___x_300_ = l_List_get_x21Internal___redArg(v___x_288_, v___x_271_, v_head_276_);
v___x_301_ = lp_LanglandsOracles_Oracles_FpPoly_mul(v_p_272_, v_t_299_, v___x_300_);
lean_dec(v___x_300_);
v___y_293_ = v___x_301_;
goto v___jp_292_;
}
v___jp_281_:
{
lean_object* v___x_284_; 
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 1, v_a_274_);
lean_ctor_set(v___x_279_, 0, v___y_282_);
v___x_284_ = v___x_279_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v___y_282_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v_a_274_);
v___x_284_ = v_reuseFailAlloc_286_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
v_a_273_ = v_tail_277_;
v_a_274_ = v___x_284_;
goto _start;
}
}
v___jp_292_:
{
if (v___x_291_ == 0)
{
lean_object* v___x_294_; 
lean_dec(v_head_276_);
lean_inc(v_p_272_);
v___x_294_ = lp_LanglandsOracles_Oracles_FpPoly_add(v_p_272_, v___y_293_, v___x_288_);
v___y_282_ = v___x_294_;
goto v___jp_281_;
}
else
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_295_ = lean_nat_sub(v_head_276_, v___x_287_);
lean_dec(v_head_276_);
v___x_296_ = l_List_get_x21Internal___redArg(v___x_288_, v___x_271_, v___x_295_);
v___x_297_ = lp_LanglandsOracles_Oracles_FpPoly_frobenius(v_p_272_, v___x_296_);
lean_dec(v___x_296_);
lean_inc(v_p_272_);
v___x_298_ = lp_LanglandsOracles_Oracles_FpPoly_add(v_p_272_, v___y_293_, v___x_297_);
v___y_282_ = v___x_298_;
goto v___jp_281_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__0___boxed(lean_object* v___x_303_, lean_object* v_p_304_, lean_object* v_a_305_, lean_object* v_a_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__0(v___x_303_, v_p_304_, v_a_305_, v_a_306_);
lean_dec(v___x_303_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_carlitz_spec__2(lean_object* v_p_308_, lean_object* v_x_309_, lean_object* v_x_310_){
_start:
{
if (lean_obj_tag(v_x_310_) == 0)
{
lean_dec(v_p_308_);
return v_x_309_;
}
else
{
lean_object* v_tail_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_327_; 
v_tail_311_ = lean_ctor_get(v_x_310_, 1);
v_isSharedCheck_327_ = !lean_is_exclusive(v_x_310_);
if (v_isSharedCheck_327_ == 0)
{
lean_object* v_unused_328_; 
v_unused_328_ = lean_ctor_get(v_x_310_, 0);
lean_dec(v_unused_328_);
v___x_313_ = v_x_310_;
v_isShared_314_ = v_isSharedCheck_327_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_tail_311_);
lean_dec(v_x_310_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_327_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_323_; 
v___x_315_ = lean_box(0);
v___x_316_ = lean_unsigned_to_nat(1u);
v___x_317_ = l_List_getLast_x21___redArg(v___x_315_, v_x_309_);
v___x_318_ = l_List_lengthTR___redArg(v___x_317_);
v___x_319_ = lean_nat_add(v___x_318_, v___x_316_);
lean_dec(v___x_318_);
v___x_320_ = l_List_range(v___x_319_);
lean_inc(v_p_308_);
v___x_321_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__0(v___x_317_, v_p_308_, v___x_320_, v___x_315_);
lean_dec(v___x_317_);
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 1, v___x_315_);
lean_ctor_set(v___x_313_, 0, v___x_321_);
v___x_323_ = v___x_313_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v___x_321_);
lean_ctor_set(v_reuseFailAlloc_326_, 1, v___x_315_);
v___x_323_ = v_reuseFailAlloc_326_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
lean_object* v___x_324_; 
v___x_324_ = l_List_appendTR___redArg(v_x_309_, v___x_323_);
v_x_309_ = v___x_324_;
v_x_310_ = v_tail_311_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__3(lean_object* v_out_338_, lean_object* v_p_339_, lean_object* v___x_340_, lean_object* v_i_341_, lean_object* v_a_342_, lean_object* v_ci_343_, lean_object* v_a_344_, lean_object* v_a_345_){
_start:
{
if (lean_obj_tag(v_a_344_) == 0)
{
lean_object* v___x_346_; 
lean_dec(v_i_341_);
lean_dec(v___x_340_);
lean_dec(v_p_339_);
v___x_346_ = l_List_reverse___redArg(v_a_345_);
return v___x_346_;
}
else
{
lean_object* v_head_347_; lean_object* v_tail_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_371_; 
v_head_347_ = lean_ctor_get(v_a_344_, 0);
v_tail_348_ = lean_ctor_get(v_a_344_, 1);
v_isSharedCheck_371_ = !lean_is_exclusive(v_a_344_);
if (v_isSharedCheck_371_ == 0)
{
v___x_350_ = v_a_344_;
v_isShared_351_ = v_isSharedCheck_371_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_tail_348_);
lean_inc(v_head_347_);
lean_dec(v_a_344_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_371_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___y_353_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_358_ = lean_box(0);
v___x_359_ = ((lean_object*)(lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__3___closed__2));
lean_inc(v_head_347_);
v___x_360_ = l_List_get_x21Internal___redArg(v___x_358_, v_out_338_, v_head_347_);
lean_inc(v___x_340_);
lean_inc(v_p_339_);
v___x_361_ = lp_LanglandsOracles_List_foldl___at___00Oracles_carlitz_spec__2(v_p_339_, v___x_359_, v___x_340_);
lean_inc(v_i_341_);
v___x_362_ = l_List_get_x21Internal___redArg(v___x_358_, v___x_361_, v_i_341_);
lean_dec(v___x_361_);
v___x_363_ = l_List_lengthTR___redArg(v___x_362_);
lean_dec(v___x_362_);
v___x_364_ = lean_nat_dec_lt(v_head_347_, v___x_363_);
lean_dec(v___x_363_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; 
lean_dec(v_head_347_);
lean_inc(v_p_339_);
v___x_365_ = lp_LanglandsOracles_Oracles_FpPoly_add(v_p_339_, v___x_360_, v___x_358_);
v___y_353_ = v___x_365_;
goto v___jp_352_;
}
else
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_366_ = lean_unsigned_to_nat(0u);
lean_inc(v_i_341_);
v___x_367_ = l_List_get_x21Internal___redArg(v___x_366_, v_a_342_, v_i_341_);
v___x_368_ = l_List_get___redArg(v_ci_343_, v_head_347_);
v___x_369_ = lp_LanglandsOracles_Oracles_FpPoly_scale(v_p_339_, v___x_367_, v___x_368_);
lean_dec(v___x_367_);
lean_inc(v_p_339_);
v___x_370_ = lp_LanglandsOracles_Oracles_FpPoly_add(v_p_339_, v___x_360_, v___x_369_);
v___y_353_ = v___x_370_;
goto v___jp_352_;
}
v___jp_352_:
{
lean_object* v___x_355_; 
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 1, v_a_345_);
lean_ctor_set(v___x_350_, 0, v___y_353_);
v___x_355_ = v___x_350_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v___y_353_);
lean_ctor_set(v_reuseFailAlloc_357_, 1, v_a_345_);
v___x_355_ = v_reuseFailAlloc_357_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
v_a_344_ = v_tail_348_;
v_a_345_ = v___x_355_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__3___boxed(lean_object* v_out_372_, lean_object* v_p_373_, lean_object* v___x_374_, lean_object* v_i_375_, lean_object* v_a_376_, lean_object* v_ci_377_, lean_object* v_a_378_, lean_object* v_a_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__3(v_out_372_, v_p_373_, v___x_374_, v_i_375_, v_a_376_, v_ci_377_, v_a_378_, v_a_379_);
lean_dec(v_ci_377_);
lean_dec(v_a_376_);
lean_dec(v_out_372_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_carlitz_spec__4(lean_object* v_powers_381_, lean_object* v_p_382_, lean_object* v___x_383_, lean_object* v_a_384_, lean_object* v_x_385_, lean_object* v_x_386_){
_start:
{
if (lean_obj_tag(v_x_386_) == 0)
{
lean_dec(v___x_383_);
lean_dec(v_p_382_);
return v_x_385_;
}
else
{
lean_object* v_head_387_; lean_object* v_tail_388_; lean_object* v___x_389_; lean_object* v_ci_390_; lean_object* v___x_391_; 
v_head_387_ = lean_ctor_get(v_x_386_, 0);
lean_inc_n(v_head_387_, 2);
v_tail_388_ = lean_ctor_get(v_x_386_, 1);
lean_inc(v_tail_388_);
lean_dec_ref_known(v_x_386_, 2);
v___x_389_ = lean_box(0);
v_ci_390_ = l_List_get_x21Internal___redArg(v___x_389_, v_powers_381_, v_head_387_);
lean_inc_n(v___x_383_, 2);
lean_inc(v_p_382_);
v___x_391_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__3(v_x_385_, v_p_382_, v___x_383_, v_head_387_, v_a_384_, v_ci_390_, v___x_383_, v___x_389_);
lean_dec(v_ci_390_);
lean_dec(v_x_385_);
v_x_385_ = v___x_391_;
v_x_386_ = v_tail_388_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_carlitz_spec__4___boxed(lean_object* v_powers_393_, lean_object* v_p_394_, lean_object* v___x_395_, lean_object* v_a_396_, lean_object* v_x_397_, lean_object* v_x_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = lp_LanglandsOracles_List_foldl___at___00Oracles_carlitz_spec__4(v_powers_393_, v_p_394_, v___x_395_, v_a_396_, v_x_397_, v_x_398_);
lean_dec(v_a_396_);
lean_dec(v_powers_393_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_carlitz_spec__1(lean_object* v_p_400_, lean_object* v_x_401_, lean_object* v_x_402_){
_start:
{
if (lean_obj_tag(v_x_402_) == 0)
{
lean_dec(v_p_400_);
return v_x_401_;
}
else
{
lean_object* v_tail_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_419_; 
v_tail_403_ = lean_ctor_get(v_x_402_, 1);
v_isSharedCheck_419_ = !lean_is_exclusive(v_x_402_);
if (v_isSharedCheck_419_ == 0)
{
lean_object* v_unused_420_; 
v_unused_420_ = lean_ctor_get(v_x_402_, 0);
lean_dec(v_unused_420_);
v___x_405_ = v_x_402_;
v_isShared_406_ = v_isSharedCheck_419_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_tail_403_);
lean_dec(v_x_402_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_419_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_415_; 
v___x_407_ = lean_box(0);
v___x_408_ = lean_unsigned_to_nat(1u);
v___x_409_ = l_List_getLast_x21___redArg(v___x_407_, v_x_401_);
v___x_410_ = l_List_lengthTR___redArg(v___x_409_);
v___x_411_ = lean_nat_add(v___x_410_, v___x_408_);
lean_dec(v___x_410_);
v___x_412_ = l_List_range(v___x_411_);
lean_inc(v_p_400_);
v___x_413_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__0(v___x_409_, v_p_400_, v___x_412_, v___x_407_);
lean_dec(v___x_409_);
if (v_isShared_406_ == 0)
{
lean_ctor_set(v___x_405_, 1, v___x_407_);
lean_ctor_set(v___x_405_, 0, v___x_413_);
v___x_415_ = v___x_405_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v___x_413_);
lean_ctor_set(v_reuseFailAlloc_418_, 1, v___x_407_);
v___x_415_ = v_reuseFailAlloc_418_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
lean_object* v___x_416_; 
v___x_416_ = l_List_appendTR___redArg(v_x_401_, v___x_415_);
v_x_401_ = v___x_416_;
v_x_402_ = v_tail_403_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_carlitz(lean_object* v_p_427_, lean_object* v_a_428_){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v_powers_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_429_ = lean_box(0);
v___x_430_ = ((lean_object*)(lp_LanglandsOracles_Oracles_carlitz___closed__1));
v___x_431_ = l_List_lengthTR___redArg(v_a_428_);
lean_inc(v___x_431_);
v___x_432_ = l_List_range(v___x_431_);
lean_inc_n(v___x_432_, 2);
lean_inc(v_p_427_);
v_powers_433_ = lp_LanglandsOracles_List_foldl___at___00Oracles_carlitz_spec__1(v_p_427_, v___x_430_, v___x_432_);
v___x_434_ = l_List_replicateTR___redArg(v___x_431_, v___x_429_);
v___x_435_ = lp_LanglandsOracles_List_foldl___at___00Oracles_carlitz_spec__4(v_powers_433_, v_p_427_, v___x_432_, v_a_428_, v___x_434_, v___x_432_);
lean_dec(v_powers_433_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_carlitz___boxed(lean_object* v_p_436_, lean_object* v_a_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = lp_LanglandsOracles_Oracles_carlitz(v_p_436_, v_a_437_);
lean_dec(v_a_437_);
return v_res_438_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_beq___at___00Oracles_fermatCarlitz_spec__0(lean_object* v_x_439_, lean_object* v_x_440_){
_start:
{
if (lean_obj_tag(v_x_439_) == 0)
{
if (lean_obj_tag(v_x_440_) == 0)
{
uint8_t v___x_441_; 
v___x_441_ = 1;
return v___x_441_;
}
else
{
uint8_t v___x_442_; 
v___x_442_ = 0;
return v___x_442_;
}
}
else
{
if (lean_obj_tag(v_x_440_) == 0)
{
uint8_t v___x_443_; 
v___x_443_ = 0;
return v___x_443_;
}
else
{
lean_object* v_head_444_; lean_object* v_tail_445_; lean_object* v_head_446_; lean_object* v_tail_447_; uint8_t v___x_448_; 
v_head_444_ = lean_ctor_get(v_x_439_, 0);
v_tail_445_ = lean_ctor_get(v_x_439_, 1);
v_head_446_ = lean_ctor_get(v_x_440_, 0);
v_tail_447_ = lean_ctor_get(v_x_440_, 1);
v___x_448_ = lean_nat_dec_eq(v_head_444_, v_head_446_);
if (v___x_448_ == 0)
{
return v___x_448_;
}
else
{
v_x_439_ = v_tail_445_;
v_x_440_ = v_tail_447_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_beq___at___00Oracles_fermatCarlitz_spec__0___boxed(lean_object* v_x_450_, lean_object* v_x_451_){
_start:
{
uint8_t v_res_452_; lean_object* v_r_453_; 
v_res_452_ = lp_LanglandsOracles_List_beq___at___00Oracles_fermatCarlitz_spec__0(v_x_450_, v_x_451_);
lean_dec(v_x_451_);
lean_dec(v_x_450_);
v_r_453_ = lean_box(v_res_452_);
return v_r_453_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_fermatCarlitz_spec__1(lean_object* v_p_454_, lean_object* v_P_455_, lean_object* v_d_456_, lean_object* v_x_457_){
_start:
{
if (lean_obj_tag(v_x_457_) == 0)
{
uint8_t v___x_458_; 
lean_dec(v_P_455_);
lean_dec(v_p_454_);
v___x_458_ = 1;
return v___x_458_;
}
else
{
lean_object* v_head_459_; lean_object* v_tail_460_; uint8_t v___y_462_; lean_object* v_fst_464_; lean_object* v_snd_465_; lean_object* v___x_466_; uint8_t v___x_467_; 
v_head_459_ = lean_ctor_get(v_x_457_, 0);
lean_inc(v_head_459_);
v_tail_460_ = lean_ctor_get(v_x_457_, 1);
lean_inc(v_tail_460_);
lean_dec_ref_known(v_x_457_, 2);
v_fst_464_ = lean_ctor_get(v_head_459_, 0);
lean_inc(v_fst_464_);
v_snd_465_ = lean_ctor_get(v_head_459_, 1);
lean_inc(v_snd_465_);
lean_dec(v_head_459_);
lean_inc(v_P_455_);
lean_inc(v_p_454_);
v___x_466_ = lp_LanglandsOracles_Oracles_FpPoly_mod(v_p_454_, v_fst_464_, v_P_455_);
v___x_467_ = lean_nat_dec_eq(v_snd_465_, v_d_456_);
lean_dec(v_snd_465_);
if (v___x_467_ == 0)
{
lean_object* v___x_468_; uint8_t v___x_469_; 
v___x_468_ = lean_box(0);
v___x_469_ = lp_LanglandsOracles_List_beq___at___00Oracles_fermatCarlitz_spec__0(v___x_466_, v___x_468_);
lean_dec(v___x_466_);
v___y_462_ = v___x_469_;
goto v___jp_461_;
}
else
{
lean_object* v___x_470_; uint8_t v___x_471_; 
v___x_470_ = ((lean_object*)(lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_carlitz_spec__0___closed__0));
v___x_471_ = lp_LanglandsOracles_List_beq___at___00Oracles_fermatCarlitz_spec__0(v___x_466_, v___x_470_);
lean_dec(v___x_466_);
v___y_462_ = v___x_471_;
goto v___jp_461_;
}
v___jp_461_:
{
if (v___y_462_ == 0)
{
lean_dec(v_tail_460_);
lean_dec(v_P_455_);
lean_dec(v_p_454_);
return v___y_462_;
}
else
{
v_x_457_ = v_tail_460_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_fermatCarlitz_spec__1___boxed(lean_object* v_p_472_, lean_object* v_P_473_, lean_object* v_d_474_, lean_object* v_x_475_){
_start:
{
uint8_t v_res_476_; lean_object* v_r_477_; 
v_res_476_ = lp_LanglandsOracles_List_all___at___00Oracles_fermatCarlitz_spec__1(v_p_472_, v_P_473_, v_d_474_, v_x_475_);
lean_dec(v_d_474_);
v_r_477_ = lean_box(v_res_476_);
return v_r_477_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_fermatCarlitz(lean_object* v_p_478_, lean_object* v_P_479_){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v_d_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; uint8_t v___x_486_; 
v___x_480_ = l_List_lengthTR___redArg(v_P_479_);
v___x_481_ = lean_unsigned_to_nat(1u);
v_d_482_ = lean_nat_sub(v___x_480_, v___x_481_);
lean_dec(v___x_480_);
lean_inc(v_p_478_);
v___x_483_ = lp_LanglandsOracles_Oracles_carlitz(v_p_478_, v_P_479_);
v___x_484_ = lean_unsigned_to_nat(0u);
v___x_485_ = l_List_zipIdxTR___redArg(v___x_483_, v___x_484_);
v___x_486_ = lp_LanglandsOracles_List_all___at___00Oracles_fermatCarlitz_spec__1(v_p_478_, v_P_479_, v_d_482_, v___x_485_);
lean_dec(v_d_482_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_fermatCarlitz___boxed(lean_object* v_p_487_, lean_object* v_P_488_){
_start:
{
uint8_t v_res_489_; lean_object* v_r_490_; 
v_res_489_ = lp_LanglandsOracles_Oracles_fermatCarlitz(v_p_487_, v_P_488_);
v_r_490_ = lean_box(v_res_489_);
return v_r_490_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LanglandsOracles_LanglandsOracles_Carlitz(uint8_t builtin) {
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
