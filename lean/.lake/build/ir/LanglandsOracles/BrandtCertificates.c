// Lean compiler output
// Module: LanglandsOracles.BrandtCertificates
// Imports: public import Init public meta import Init public import LanglandsOracles.TraceFormula public import LanglandsOracles.Matrix public import LanglandsOracles.Data
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
lean_object* lp_LanglandsOracles_Oracles_IMat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_IMat_rowSums(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_IMat_scaleCols(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_IMat_transpose(lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_IMat_identity(lean_object*);
lean_object* lp_LanglandsOracles_Oracles_IMat_scale(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_IMat_sub(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_IMat_trace(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_eichlerBrandt12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_find_x3f___at___00Oracles_lookup_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_find_x3f___at___00Oracles_lookup_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_lookup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_lookup___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_heckeOf_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_heckeOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00List_findSome_x3f___at___00Oracles_heckeOf_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00List_findSome_x3f___at___00Oracles_heckeOf_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_heckeOf_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_heckeOf_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_heckeOf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_heckeOf___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_traceCertified___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_traceCertified___closed__0;
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_traceCertified(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_traceCertified___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_brandtCertified_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_brandtCertified_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_brandtCertified_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_brandtCertified_spec__6___closed__0 = (const lean_object*)&lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_brandtCertified_spec__6___closed__0_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_brandtCertified_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_brandtCertified_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_beq___at___00List_beq___at___00Oracles_brandtCertified_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_beq___at___00List_beq___at___00Oracles_brandtCertified_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_beq___at___00Oracles_brandtCertified_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_beq___at___00Oracles_brandtCertified_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__10___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__8(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_brandtCertified_spec__5(lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtCertified_spec__4_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtCertified_spec__4_spec__5___closed__0;
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtCertified_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtCertified_spec__4_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__9(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__9___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_brandtCertified_spec__2(lean_object*, lean_object*);
static const lean_ctor_object lp_LanglandsOracles_Oracles_brandtCertified___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_LanglandsOracles_Oracles_brandtCertified___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_brandtCertified___closed__0_value;
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_brandtCertified(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_brandtCertified___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_find_x3f___at___00Oracles_lookup_spec__0(lean_object* v_ell_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
lean_object* v___x_3_; 
v___x_3_ = lean_box(0);
return v___x_3_;
}
else
{
lean_object* v_head_4_; lean_object* v_tail_5_; lean_object* v_fst_6_; uint8_t v___x_7_; 
v_head_4_ = lean_ctor_get(v_x_2_, 0);
v_tail_5_ = lean_ctor_get(v_x_2_, 1);
v_fst_6_ = lean_ctor_get(v_head_4_, 0);
v___x_7_ = lean_nat_dec_eq(v_fst_6_, v_ell_1_);
if (v___x_7_ == 0)
{
v_x_2_ = v_tail_5_;
goto _start;
}
else
{
lean_object* v___x_9_; 
lean_inc(v_head_4_);
v___x_9_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_9_, 0, v_head_4_);
return v___x_9_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_find_x3f___at___00Oracles_lookup_spec__0___boxed(lean_object* v_ell_10_, lean_object* v_x_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = lp_LanglandsOracles_List_find_x3f___at___00Oracles_lookup_spec__0(v_ell_10_, v_x_11_);
lean_dec(v_x_11_);
lean_dec(v_ell_10_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_lookup(lean_object* v_ms_13_, lean_object* v_ell_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lp_LanglandsOracles_List_find_x3f___at___00Oracles_lookup_spec__0(v_ell_14_, v_ms_13_);
if (lean_obj_tag(v___x_15_) == 0)
{
lean_object* v___x_16_; 
v___x_16_ = lean_box(0);
return v___x_16_;
}
else
{
lean_object* v_val_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_25_; 
v_val_17_ = lean_ctor_get(v___x_15_, 0);
v_isSharedCheck_25_ = !lean_is_exclusive(v___x_15_);
if (v_isSharedCheck_25_ == 0)
{
v___x_19_ = v___x_15_;
v_isShared_20_ = v_isSharedCheck_25_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_val_17_);
lean_dec(v___x_15_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_25_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v_snd_21_; lean_object* v___x_23_; 
v_snd_21_ = lean_ctor_get(v_val_17_, 1);
lean_inc(v_snd_21_);
lean_dec(v_val_17_);
if (v_isShared_20_ == 0)
{
lean_ctor_set(v___x_19_, 0, v_snd_21_);
v___x_23_ = v___x_19_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v_snd_21_);
v___x_23_ = v_reuseFailAlloc_24_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
return v___x_23_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_lookup___boxed(lean_object* v_ms_26_, lean_object* v_ell_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = lp_LanglandsOracles_Oracles_lookup(v_ms_26_, v_ell_27_);
lean_dec(v_ell_27_);
lean_dec(v_ms_26_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_heckeOf_spec__0(lean_object* v_m_29_, lean_object* v___x_30_, lean_object* v_n_31_, lean_object* v_x_32_){
_start:
{
if (lean_obj_tag(v_x_32_) == 0)
{
lean_object* v___x_33_; 
lean_dec_ref(v_m_29_);
v___x_33_ = lean_box(0);
return v___x_33_;
}
else
{
lean_object* v_head_34_; lean_object* v_tail_35_; lean_object* v_fst_36_; lean_object* v_snd_37_; uint8_t v___y_39_; uint8_t v___x_44_; 
v_head_34_ = lean_ctor_get(v_x_32_, 0);
lean_inc(v_head_34_);
v_tail_35_ = lean_ctor_get(v_x_32_, 1);
lean_inc(v_tail_35_);
lean_dec_ref_known(v_x_32_, 2);
v_fst_36_ = lean_ctor_get(v_head_34_, 0);
lean_inc(v_fst_36_);
v_snd_37_ = lean_ctor_get(v_head_34_, 1);
lean_inc(v_snd_37_);
lean_dec(v_head_34_);
v___x_44_ = lean_nat_dec_lt(v___x_30_, v_fst_36_);
if (v___x_44_ == 0)
{
lean_dec(v_fst_36_);
v___y_39_ = v___x_44_;
goto v___jp_38_;
}
else
{
lean_object* v___x_45_; uint8_t v___x_46_; 
v___x_45_ = lean_nat_mul(v___x_30_, v_fst_36_);
lean_dec(v_fst_36_);
v___x_46_ = lean_nat_dec_eq(v_n_31_, v___x_45_);
lean_dec(v___x_45_);
v___y_39_ = v___x_46_;
goto v___jp_38_;
}
v___jp_38_:
{
if (v___y_39_ == 0)
{
lean_dec(v_snd_37_);
v_x_32_ = v_tail_35_;
goto _start;
}
else
{
lean_object* v_snd_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
lean_dec(v_tail_35_);
v_snd_41_ = lean_ctor_get(v_m_29_, 1);
lean_inc(v_snd_41_);
lean_dec_ref(v_m_29_);
v___x_42_ = lp_LanglandsOracles_Oracles_IMat_mul(v_snd_41_, v_snd_37_);
v___x_43_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
return v___x_43_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_heckeOf_spec__0___boxed(lean_object* v_m_47_, lean_object* v___x_48_, lean_object* v_n_49_, lean_object* v_x_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_heckeOf_spec__0(v_m_47_, v___x_48_, v_n_49_, v_x_50_);
lean_dec(v_n_49_);
lean_dec(v___x_48_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00List_findSome_x3f___at___00Oracles_heckeOf_spec__1_spec__1(lean_object* v_n_52_, lean_object* v_ms_53_, lean_object* v_size_54_, lean_object* v_x_55_){
_start:
{
if (lean_obj_tag(v_x_55_) == 0)
{
lean_object* v___x_56_; 
lean_dec(v_size_54_);
lean_dec(v_ms_53_);
v___x_56_ = lean_box(0);
return v___x_56_;
}
else
{
lean_object* v_head_57_; lean_object* v_tail_58_; lean_object* v_fst_59_; lean_object* v_snd_60_; lean_object* v___x_61_; uint8_t v___x_62_; 
v_head_57_ = lean_ctor_get(v_x_55_, 0);
lean_inc(v_head_57_);
v_tail_58_ = lean_ctor_get(v_x_55_, 1);
lean_inc(v_tail_58_);
lean_dec_ref_known(v_x_55_, 2);
v_fst_59_ = lean_ctor_get(v_head_57_, 0);
lean_inc(v_fst_59_);
v_snd_60_ = lean_ctor_get(v_head_57_, 1);
v___x_61_ = lean_nat_mul(v_fst_59_, v_fst_59_);
v___x_62_ = lean_nat_dec_eq(v_n_52_, v___x_61_);
lean_dec(v___x_61_);
if (v___x_62_ == 0)
{
lean_object* v___x_63_; 
lean_inc(v_ms_53_);
v___x_63_ = lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_heckeOf_spec__0(v_head_57_, v_fst_59_, v_n_52_, v_ms_53_);
lean_dec(v_fst_59_);
if (lean_obj_tag(v___x_63_) == 0)
{
v_x_55_ = v_tail_58_;
goto _start;
}
else
{
lean_dec(v_tail_58_);
lean_dec(v_size_54_);
lean_dec(v_ms_53_);
return v___x_63_;
}
}
else
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
lean_inc_n(v_snd_60_, 2);
lean_dec(v_tail_58_);
lean_dec(v_head_57_);
lean_dec(v_ms_53_);
v___x_65_ = lp_LanglandsOracles_Oracles_IMat_mul(v_snd_60_, v_snd_60_);
v___x_66_ = lean_nat_to_int(v_fst_59_);
v___x_67_ = lp_LanglandsOracles_Oracles_IMat_identity(v_size_54_);
v___x_68_ = lp_LanglandsOracles_Oracles_IMat_scale(v___x_66_, v___x_67_);
lean_dec(v___x_66_);
v___x_69_ = lp_LanglandsOracles_Oracles_IMat_sub(v___x_65_, v___x_68_);
v___x_70_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
return v___x_70_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00List_findSome_x3f___at___00Oracles_heckeOf_spec__1_spec__1___boxed(lean_object* v_n_71_, lean_object* v_ms_72_, lean_object* v_size_73_, lean_object* v_x_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = lp_LanglandsOracles_List_findSome_x3f___at___00List_findSome_x3f___at___00Oracles_heckeOf_spec__1_spec__1(v_n_71_, v_ms_72_, v_size_73_, v_x_74_);
lean_dec(v_n_71_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_heckeOf_spec__1(lean_object* v_n_76_, lean_object* v_ms_77_, lean_object* v_size_78_, lean_object* v_x_79_){
_start:
{
if (lean_obj_tag(v_x_79_) == 0)
{
lean_object* v___x_80_; 
lean_dec(v_size_78_);
lean_dec(v_ms_77_);
v___x_80_ = lean_box(0);
return v___x_80_;
}
else
{
lean_object* v_head_81_; lean_object* v_tail_82_; lean_object* v_fst_83_; lean_object* v_snd_84_; lean_object* v___x_85_; uint8_t v___x_86_; 
v_head_81_ = lean_ctor_get(v_x_79_, 0);
lean_inc(v_head_81_);
v_tail_82_ = lean_ctor_get(v_x_79_, 1);
lean_inc(v_tail_82_);
lean_dec_ref_known(v_x_79_, 2);
v_fst_83_ = lean_ctor_get(v_head_81_, 0);
lean_inc(v_fst_83_);
v_snd_84_ = lean_ctor_get(v_head_81_, 1);
v___x_85_ = lean_nat_mul(v_fst_83_, v_fst_83_);
v___x_86_ = lean_nat_dec_eq(v_n_76_, v___x_85_);
lean_dec(v___x_85_);
if (v___x_86_ == 0)
{
lean_object* v___x_87_; 
lean_inc(v_ms_77_);
v___x_87_ = lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_heckeOf_spec__0(v_head_81_, v_fst_83_, v_n_76_, v_ms_77_);
lean_dec(v_fst_83_);
if (lean_obj_tag(v___x_87_) == 0)
{
lean_object* v___x_88_; 
v___x_88_ = lp_LanglandsOracles_List_findSome_x3f___at___00List_findSome_x3f___at___00Oracles_heckeOf_spec__1_spec__1(v_n_76_, v_ms_77_, v_size_78_, v_tail_82_);
return v___x_88_;
}
else
{
lean_dec(v_tail_82_);
lean_dec(v_size_78_);
lean_dec(v_ms_77_);
return v___x_87_;
}
}
else
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
lean_inc_n(v_snd_84_, 2);
lean_dec(v_tail_82_);
lean_dec(v_head_81_);
lean_dec(v_ms_77_);
v___x_89_ = lp_LanglandsOracles_Oracles_IMat_mul(v_snd_84_, v_snd_84_);
v___x_90_ = lean_nat_to_int(v_fst_83_);
v___x_91_ = lp_LanglandsOracles_Oracles_IMat_identity(v_size_78_);
v___x_92_ = lp_LanglandsOracles_Oracles_IMat_scale(v___x_90_, v___x_91_);
lean_dec(v___x_90_);
v___x_93_ = lp_LanglandsOracles_Oracles_IMat_sub(v___x_89_, v___x_92_);
v___x_94_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
return v___x_94_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_heckeOf_spec__1___boxed(lean_object* v_n_95_, lean_object* v_ms_96_, lean_object* v_size_97_, lean_object* v_x_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_heckeOf_spec__1(v_n_95_, v_ms_96_, v_size_97_, v_x_98_);
lean_dec(v_n_95_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_heckeOf(lean_object* v_ms_100_, lean_object* v_n_101_, lean_object* v_size_102_){
_start:
{
lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_103_ = lean_unsigned_to_nat(1u);
v___x_104_ = lean_nat_dec_eq(v_n_101_, v___x_103_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; 
v___x_105_ = lp_LanglandsOracles_List_find_x3f___at___00Oracles_lookup_spec__0(v_n_101_, v_ms_100_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v___x_106_; 
lean_inc(v_ms_100_);
v___x_106_ = lp_LanglandsOracles_List_findSome_x3f___at___00Oracles_heckeOf_spec__1(v_n_101_, v_ms_100_, v_size_102_, v_ms_100_);
return v___x_106_;
}
else
{
lean_object* v_val_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_115_; 
lean_dec(v_size_102_);
lean_dec(v_ms_100_);
v_val_107_ = lean_ctor_get(v___x_105_, 0);
v_isSharedCheck_115_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_115_ == 0)
{
v___x_109_ = v___x_105_;
v_isShared_110_ = v_isSharedCheck_115_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_val_107_);
lean_dec(v___x_105_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_115_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v_snd_111_; lean_object* v___x_113_; 
v_snd_111_ = lean_ctor_get(v_val_107_, 1);
lean_inc(v_snd_111_);
lean_dec(v_val_107_);
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 0, v_snd_111_);
v___x_113_ = v___x_109_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v_snd_111_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
}
}
else
{
lean_object* v___x_116_; lean_object* v___x_117_; 
lean_dec(v_ms_100_);
v___x_116_ = lp_LanglandsOracles_Oracles_IMat_identity(v_size_102_);
v___x_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
return v___x_117_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_heckeOf___boxed(lean_object* v_ms_118_, lean_object* v_n_119_, lean_object* v_size_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = lp_LanglandsOracles_Oracles_heckeOf(v_ms_118_, v_n_119_, v_size_120_);
lean_dec(v_n_119_);
return v_res_121_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_traceCertified___closed__0(void){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_122_ = lean_unsigned_to_nat(12u);
v___x_123_ = lean_nat_to_int(v___x_122_);
return v___x_123_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_traceCertified(lean_object* v_p_124_, lean_object* v_ms_125_, lean_object* v_size_126_, lean_object* v_n_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = lp_LanglandsOracles_Oracles_heckeOf(v_ms_125_, v_n_127_, v_size_126_);
if (lean_obj_tag(v___x_128_) == 0)
{
uint8_t v___x_129_; 
lean_dec(v_n_127_);
lean_dec(v_p_124_);
v___x_129_ = 0;
return v___x_129_;
}
else
{
lean_object* v_val_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; uint8_t v___x_135_; 
v_val_130_ = lean_ctor_get(v___x_128_, 0);
lean_inc(v_val_130_);
lean_dec_ref_known(v___x_128_, 1);
v___x_131_ = lean_obj_once(&lp_LanglandsOracles_Oracles_traceCertified___closed__0, &lp_LanglandsOracles_Oracles_traceCertified___closed__0_once, _init_lp_LanglandsOracles_Oracles_traceCertified___closed__0);
v___x_132_ = lp_LanglandsOracles_Oracles_IMat_trace(v_val_130_);
v___x_133_ = lean_int_mul(v___x_131_, v___x_132_);
lean_dec(v___x_132_);
v___x_134_ = lp_LanglandsOracles_Oracles_eichlerBrandt12(v_p_124_, v_n_127_);
v___x_135_ = lean_int_dec_eq(v___x_133_, v___x_134_);
lean_dec(v___x_134_);
lean_dec(v___x_133_);
return v___x_135_;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_traceCertified___boxed(lean_object* v_p_136_, lean_object* v_ms_137_, lean_object* v_size_138_, lean_object* v_n_139_){
_start:
{
uint8_t v_res_140_; lean_object* v_r_141_; 
v_res_140_ = lp_LanglandsOracles_Oracles_traceCertified(v_p_136_, v_ms_137_, v_size_138_, v_n_139_);
v_r_141_ = lean_box(v_res_140_);
return v_r_141_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_brandtCertified_spec__3(lean_object* v_l_142_, lean_object* v_a_143_, lean_object* v_a_144_){
_start:
{
if (lean_obj_tag(v_a_143_) == 0)
{
lean_object* v___x_145_; 
v___x_145_ = lean_array_to_list(v_a_144_);
return v___x_145_;
}
else
{
lean_object* v_head_146_; lean_object* v_tail_147_; uint8_t v___x_148_; 
v_head_146_ = lean_ctor_get(v_a_143_, 0);
v_tail_147_ = lean_ctor_get(v_a_143_, 1);
v___x_148_ = lean_nat_dec_lt(v_l_142_, v_head_146_);
if (v___x_148_ == 0)
{
v_a_143_ = v_tail_147_;
goto _start;
}
else
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = lean_nat_mul(v_l_142_, v_head_146_);
v___x_151_ = lean_array_push(v_a_144_, v___x_150_);
v_a_143_ = v_tail_147_;
v_a_144_ = v___x_151_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_brandtCertified_spec__3___boxed(lean_object* v_l_153_, lean_object* v_a_154_, lean_object* v_a_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_brandtCertified_spec__3(v_l_153_, v_a_154_, v_a_155_);
lean_dec(v_a_154_);
lean_dec(v_l_153_);
return v_res_156_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_brandtCertified_spec__6(lean_object* v_ells_159_, lean_object* v_a_160_, lean_object* v_a_161_){
_start:
{
if (lean_obj_tag(v_a_160_) == 0)
{
lean_object* v___x_162_; 
v___x_162_ = lean_array_to_list(v_a_161_);
return v___x_162_;
}
else
{
lean_object* v_head_163_; lean_object* v_tail_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v_head_163_ = lean_ctor_get(v_a_160_, 0);
v_tail_164_ = lean_ctor_get(v_a_160_, 1);
v___x_165_ = ((lean_object*)(lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_brandtCertified_spec__6___closed__0));
v___x_166_ = lp_LanglandsOracles_List_filterMapTR_go___at___00Oracles_brandtCertified_spec__3(v_head_163_, v_ells_159_, v___x_165_);
v___x_167_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_161_, v___x_166_);
v_a_160_ = v_tail_164_;
v_a_161_ = v___x_167_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_brandtCertified_spec__6___boxed(lean_object* v_ells_169_, lean_object* v_a_170_, lean_object* v_a_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_brandtCertified_spec__6(v_ells_169_, v_a_170_, v_a_171_);
lean_dec(v_a_170_);
lean_dec(v_ells_169_);
return v_res_172_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_beq___at___00List_beq___at___00Oracles_brandtCertified_spec__0_spec__0(lean_object* v_x_173_, lean_object* v_x_174_){
_start:
{
if (lean_obj_tag(v_x_173_) == 0)
{
if (lean_obj_tag(v_x_174_) == 0)
{
uint8_t v___x_175_; 
v___x_175_ = 1;
return v___x_175_;
}
else
{
uint8_t v___x_176_; 
v___x_176_ = 0;
return v___x_176_;
}
}
else
{
if (lean_obj_tag(v_x_174_) == 0)
{
uint8_t v___x_177_; 
v___x_177_ = 0;
return v___x_177_;
}
else
{
lean_object* v_head_178_; lean_object* v_tail_179_; lean_object* v_head_180_; lean_object* v_tail_181_; uint8_t v___x_182_; 
v_head_178_ = lean_ctor_get(v_x_173_, 0);
v_tail_179_ = lean_ctor_get(v_x_173_, 1);
v_head_180_ = lean_ctor_get(v_x_174_, 0);
v_tail_181_ = lean_ctor_get(v_x_174_, 1);
v___x_182_ = lean_int_dec_eq(v_head_178_, v_head_180_);
if (v___x_182_ == 0)
{
return v___x_182_;
}
else
{
v_x_173_ = v_tail_179_;
v_x_174_ = v_tail_181_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_beq___at___00List_beq___at___00Oracles_brandtCertified_spec__0_spec__0___boxed(lean_object* v_x_184_, lean_object* v_x_185_){
_start:
{
uint8_t v_res_186_; lean_object* v_r_187_; 
v_res_186_ = lp_LanglandsOracles_List_beq___at___00List_beq___at___00Oracles_brandtCertified_spec__0_spec__0(v_x_184_, v_x_185_);
lean_dec(v_x_185_);
lean_dec(v_x_184_);
v_r_187_ = lean_box(v_res_186_);
return v_r_187_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_beq___at___00Oracles_brandtCertified_spec__0(lean_object* v_x_188_, lean_object* v_x_189_){
_start:
{
if (lean_obj_tag(v_x_188_) == 0)
{
if (lean_obj_tag(v_x_189_) == 0)
{
uint8_t v___x_190_; 
v___x_190_ = 1;
return v___x_190_;
}
else
{
uint8_t v___x_191_; 
v___x_191_ = 0;
return v___x_191_;
}
}
else
{
if (lean_obj_tag(v_x_189_) == 0)
{
uint8_t v___x_192_; 
v___x_192_ = 0;
return v___x_192_;
}
else
{
lean_object* v_head_193_; lean_object* v_tail_194_; lean_object* v_head_195_; lean_object* v_tail_196_; uint8_t v___x_197_; 
v_head_193_ = lean_ctor_get(v_x_188_, 0);
v_tail_194_ = lean_ctor_get(v_x_188_, 1);
v_head_195_ = lean_ctor_get(v_x_189_, 0);
v_tail_196_ = lean_ctor_get(v_x_189_, 1);
v___x_197_ = lp_LanglandsOracles_List_beq___at___00List_beq___at___00Oracles_brandtCertified_spec__0_spec__0(v_head_193_, v_head_195_);
if (v___x_197_ == 0)
{
return v___x_197_;
}
else
{
v_x_188_ = v_tail_194_;
v_x_189_ = v_tail_196_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_beq___at___00Oracles_brandtCertified_spec__0___boxed(lean_object* v_x_199_, lean_object* v_x_200_){
_start:
{
uint8_t v_res_201_; lean_object* v_r_202_; 
v_res_201_ = lp_LanglandsOracles_List_beq___at___00Oracles_brandtCertified_spec__0(v_x_199_, v_x_200_);
lean_dec(v_x_200_);
lean_dec(v_x_199_);
v_r_202_ = lean_box(v_res_201_);
return v_r_202_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__1(lean_object* v_m_203_, lean_object* v_x_204_){
_start:
{
if (lean_obj_tag(v_x_204_) == 0)
{
uint8_t v___x_205_; 
lean_dec_ref(v_m_203_);
v___x_205_ = 1;
return v___x_205_;
}
else
{
lean_object* v_head_206_; lean_object* v_tail_207_; lean_object* v_snd_208_; lean_object* v_snd_209_; lean_object* v___x_210_; lean_object* v___x_211_; uint8_t v___x_212_; 
v_head_206_ = lean_ctor_get(v_x_204_, 0);
lean_inc(v_head_206_);
v_tail_207_ = lean_ctor_get(v_x_204_, 1);
lean_inc(v_tail_207_);
lean_dec_ref_known(v_x_204_, 2);
v_snd_208_ = lean_ctor_get(v_m_203_, 1);
v_snd_209_ = lean_ctor_get(v_head_206_, 1);
lean_inc_n(v_snd_209_, 2);
lean_dec(v_head_206_);
lean_inc_n(v_snd_208_, 2);
v___x_210_ = lp_LanglandsOracles_Oracles_IMat_mul(v_snd_208_, v_snd_209_);
v___x_211_ = lp_LanglandsOracles_Oracles_IMat_mul(v_snd_209_, v_snd_208_);
v___x_212_ = lp_LanglandsOracles_List_beq___at___00Oracles_brandtCertified_spec__0(v___x_210_, v___x_211_);
lean_dec(v___x_211_);
lean_dec(v___x_210_);
if (v___x_212_ == 0)
{
lean_dec(v_tail_207_);
lean_dec_ref(v_m_203_);
return v___x_212_;
}
else
{
v_x_204_ = v_tail_207_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__1___boxed(lean_object* v_m_214_, lean_object* v_x_215_){
_start:
{
uint8_t v_res_216_; lean_object* v_r_217_; 
v_res_216_ = lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__1(v_m_214_, v_x_215_);
v_r_217_ = lean_box(v_res_216_);
return v_r_217_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__10(lean_object* v_snd_218_, lean_object* v_x_219_){
_start:
{
if (lean_obj_tag(v_x_219_) == 0)
{
uint8_t v___x_220_; 
lean_dec(v_snd_218_);
v___x_220_ = 1;
return v___x_220_;
}
else
{
lean_object* v_head_221_; lean_object* v_tail_222_; uint8_t v___x_223_; 
v_head_221_ = lean_ctor_get(v_x_219_, 0);
lean_inc(v_head_221_);
v_tail_222_ = lean_ctor_get(v_x_219_, 1);
lean_inc(v_tail_222_);
lean_dec_ref_known(v_x_219_, 2);
lean_inc(v_snd_218_);
v___x_223_ = lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__1(v_head_221_, v_snd_218_);
if (v___x_223_ == 0)
{
lean_dec(v_tail_222_);
lean_dec(v_snd_218_);
return v___x_223_;
}
else
{
v_x_219_ = v_tail_222_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__10___boxed(lean_object* v_snd_225_, lean_object* v_x_226_){
_start:
{
uint8_t v_res_227_; lean_object* v_r_228_; 
v_res_227_ = lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__10(v_snd_225_, v_x_226_);
v_r_228_ = lean_box(v_res_227_);
return v_r_228_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__8(lean_object* v_fst_229_, lean_object* v_snd_230_, lean_object* v_size_231_, uint8_t v___x_232_, lean_object* v_x_233_){
_start:
{
if (lean_obj_tag(v_x_233_) == 0)
{
uint8_t v___x_234_; 
lean_dec(v_size_231_);
lean_dec(v_snd_230_);
lean_dec(v_fst_229_);
v___x_234_ = 1;
return v___x_234_;
}
else
{
lean_object* v_head_235_; lean_object* v_tail_236_; lean_object* v___x_237_; lean_object* v___x_238_; uint8_t v___x_239_; 
v_head_235_ = lean_ctor_get(v_x_233_, 0);
lean_inc(v_head_235_);
v_tail_236_ = lean_ctor_get(v_x_233_, 1);
lean_inc(v_tail_236_);
lean_dec_ref_known(v_x_233_, 2);
v___x_237_ = lean_nat_mod(v_head_235_, v_fst_229_);
v___x_238_ = lean_unsigned_to_nat(0u);
v___x_239_ = lean_nat_dec_eq(v___x_237_, v___x_238_);
lean_dec(v___x_237_);
if (v___x_239_ == 0)
{
if (v___x_232_ == 0)
{
lean_dec(v_head_235_);
v_x_233_ = v_tail_236_;
goto _start;
}
else
{
uint8_t v___x_241_; 
lean_inc(v_size_231_);
lean_inc(v_snd_230_);
lean_inc(v_fst_229_);
v___x_241_ = lp_LanglandsOracles_Oracles_traceCertified(v_fst_229_, v_snd_230_, v_size_231_, v_head_235_);
if (v___x_241_ == 0)
{
lean_dec(v_tail_236_);
lean_dec(v_size_231_);
lean_dec(v_snd_230_);
lean_dec(v_fst_229_);
return v___x_241_;
}
else
{
v_x_233_ = v_tail_236_;
goto _start;
}
}
}
else
{
lean_dec(v_head_235_);
v_x_233_ = v_tail_236_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__8___boxed(lean_object* v_fst_244_, lean_object* v_snd_245_, lean_object* v_size_246_, lean_object* v___x_247_, lean_object* v_x_248_){
_start:
{
uint8_t v___x_968__boxed_249_; uint8_t v_res_250_; lean_object* v_r_251_; 
v___x_968__boxed_249_ = lean_unbox(v___x_247_);
v_res_250_ = lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__8(v_fst_244_, v_snd_245_, v_size_246_, v___x_968__boxed_249_, v_x_248_);
v_r_251_ = lean_box(v_res_250_);
return v_r_251_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_brandtCertified_spec__5(lean_object* v_a_252_, lean_object* v_a_253_){
_start:
{
if (lean_obj_tag(v_a_252_) == 0)
{
lean_object* v___x_254_; 
v___x_254_ = l_List_reverse___redArg(v_a_253_);
return v___x_254_;
}
else
{
lean_object* v_head_255_; lean_object* v_tail_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_265_; 
v_head_255_ = lean_ctor_get(v_a_252_, 0);
v_tail_256_ = lean_ctor_get(v_a_252_, 1);
v_isSharedCheck_265_ = !lean_is_exclusive(v_a_252_);
if (v_isSharedCheck_265_ == 0)
{
v___x_258_ = v_a_252_;
v_isShared_259_ = v_isSharedCheck_265_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_tail_256_);
lean_inc(v_head_255_);
lean_dec(v_a_252_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_265_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_260_; lean_object* v___x_262_; 
v___x_260_ = lean_nat_mul(v_head_255_, v_head_255_);
lean_dec(v_head_255_);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 1, v_a_253_);
lean_ctor_set(v___x_258_, 0, v___x_260_);
v___x_262_ = v___x_258_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v___x_260_);
lean_ctor_set(v_reuseFailAlloc_264_, 1, v_a_253_);
v___x_262_ = v_reuseFailAlloc_264_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
v_a_252_ = v_tail_256_;
v_a_253_ = v___x_262_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtCertified_spec__4_spec__5___closed__0(void){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_266_ = lean_unsigned_to_nat(1u);
v___x_267_ = lean_nat_to_int(v___x_266_);
return v___x_267_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtCertified_spec__4_spec__5(lean_object* v_m_268_, lean_object* v_x_269_){
_start:
{
if (lean_obj_tag(v_x_269_) == 0)
{
uint8_t v___x_270_; 
lean_dec_ref(v_m_268_);
v___x_270_ = 1;
return v___x_270_;
}
else
{
lean_object* v_head_271_; lean_object* v_tail_272_; lean_object* v_fst_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; uint8_t v___x_277_; 
v_head_271_ = lean_ctor_get(v_x_269_, 0);
v_tail_272_ = lean_ctor_get(v_x_269_, 1);
v_fst_273_ = lean_ctor_get(v_m_268_, 0);
lean_inc(v_fst_273_);
v___x_274_ = lean_nat_to_int(v_fst_273_);
v___x_275_ = lean_obj_once(&lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtCertified_spec__4_spec__5___closed__0, &lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtCertified_spec__4_spec__5___closed__0_once, _init_lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtCertified_spec__4_spec__5___closed__0);
v___x_276_ = lean_int_add(v___x_274_, v___x_275_);
lean_dec(v___x_274_);
v___x_277_ = lean_int_dec_eq(v_head_271_, v___x_276_);
lean_dec(v___x_276_);
if (v___x_277_ == 0)
{
lean_dec_ref(v_m_268_);
return v___x_277_;
}
else
{
v_x_269_ = v_tail_272_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtCertified_spec__4_spec__5___boxed(lean_object* v_m_279_, lean_object* v_x_280_){
_start:
{
uint8_t v_res_281_; lean_object* v_r_282_; 
v_res_281_ = lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtCertified_spec__4_spec__5(v_m_279_, v_x_280_);
lean_dec(v_x_280_);
v_r_282_ = lean_box(v_res_281_);
return v_r_282_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__4(lean_object* v_m_283_, lean_object* v_x_284_){
_start:
{
if (lean_obj_tag(v_x_284_) == 0)
{
uint8_t v___x_285_; 
lean_dec_ref(v_m_283_);
v___x_285_ = 1;
return v___x_285_;
}
else
{
lean_object* v_head_286_; lean_object* v_tail_287_; lean_object* v_fst_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; uint8_t v___x_292_; 
v_head_286_ = lean_ctor_get(v_x_284_, 0);
v_tail_287_ = lean_ctor_get(v_x_284_, 1);
v_fst_288_ = lean_ctor_get(v_m_283_, 0);
lean_inc(v_fst_288_);
v___x_289_ = lean_nat_to_int(v_fst_288_);
v___x_290_ = lean_obj_once(&lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtCertified_spec__4_spec__5___closed__0, &lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtCertified_spec__4_spec__5___closed__0_once, _init_lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtCertified_spec__4_spec__5___closed__0);
v___x_291_ = lean_int_add(v___x_289_, v___x_290_);
lean_dec(v___x_289_);
v___x_292_ = lean_int_dec_eq(v_head_286_, v___x_291_);
lean_dec(v___x_291_);
if (v___x_292_ == 0)
{
lean_dec_ref(v_m_283_);
return v___x_292_;
}
else
{
uint8_t v___x_293_; 
v___x_293_ = lp_LanglandsOracles_List_all___at___00List_all___at___00Oracles_brandtCertified_spec__4_spec__5(v_m_283_, v_tail_287_);
return v___x_293_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__4___boxed(lean_object* v_m_294_, lean_object* v_x_295_){
_start:
{
uint8_t v_res_296_; lean_object* v_r_297_; 
v_res_296_ = lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__4(v_m_294_, v_x_295_);
lean_dec(v_x_295_);
v_r_297_ = lean_box(v_res_296_);
return v_r_297_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__9(lean_object* v_x_298_){
_start:
{
if (lean_obj_tag(v_x_298_) == 0)
{
uint8_t v___x_299_; 
v___x_299_ = 1;
return v___x_299_;
}
else
{
lean_object* v_head_300_; lean_object* v_tail_301_; lean_object* v_snd_302_; lean_object* v___x_303_; uint8_t v___x_304_; 
v_head_300_ = lean_ctor_get(v_x_298_, 0);
lean_inc(v_head_300_);
v_tail_301_ = lean_ctor_get(v_x_298_, 1);
lean_inc(v_tail_301_);
lean_dec_ref_known(v_x_298_, 2);
v_snd_302_ = lean_ctor_get(v_head_300_, 1);
lean_inc(v_snd_302_);
v___x_303_ = lp_LanglandsOracles_Oracles_IMat_rowSums(v_snd_302_);
v___x_304_ = lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__4(v_head_300_, v___x_303_);
lean_dec(v___x_303_);
if (v___x_304_ == 0)
{
lean_dec(v_tail_301_);
return v___x_304_;
}
else
{
v_x_298_ = v_tail_301_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__9___boxed(lean_object* v_x_306_){
_start:
{
uint8_t v_res_307_; lean_object* v_r_308_; 
v_res_307_ = lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__9(v_x_306_);
v_r_308_ = lean_box(v_res_307_);
return v_r_308_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__7(lean_object* v_fst_309_, lean_object* v_x_310_){
_start:
{
if (lean_obj_tag(v_x_310_) == 0)
{
uint8_t v___x_311_; 
lean_dec(v_fst_309_);
v___x_311_ = 1;
return v___x_311_;
}
else
{
lean_object* v_head_312_; lean_object* v_tail_313_; lean_object* v_snd_314_; lean_object* v___x_315_; lean_object* v___x_316_; uint8_t v___x_317_; 
v_head_312_ = lean_ctor_get(v_x_310_, 0);
lean_inc(v_head_312_);
v_tail_313_ = lean_ctor_get(v_x_310_, 1);
lean_inc(v_tail_313_);
lean_dec_ref_known(v_x_310_, 2);
v_snd_314_ = lean_ctor_get(v_head_312_, 1);
lean_inc(v_snd_314_);
lean_dec(v_head_312_);
lean_inc(v_fst_309_);
v___x_315_ = lp_LanglandsOracles_Oracles_IMat_scaleCols(v_fst_309_, v_snd_314_);
lean_inc(v___x_315_);
v___x_316_ = lp_LanglandsOracles_Oracles_IMat_transpose(v___x_315_);
v___x_317_ = lp_LanglandsOracles_List_beq___at___00Oracles_brandtCertified_spec__0(v___x_315_, v___x_316_);
lean_dec(v___x_316_);
lean_dec(v___x_315_);
if (v___x_317_ == 0)
{
lean_dec(v_tail_313_);
lean_dec(v_fst_309_);
return v___x_317_;
}
else
{
v_x_310_ = v_tail_313_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__7___boxed(lean_object* v_fst_319_, lean_object* v_x_320_){
_start:
{
uint8_t v_res_321_; lean_object* v_r_322_; 
v_res_321_ = lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__7(v_fst_319_, v_x_320_);
v_r_322_ = lean_box(v_res_321_);
return v_r_322_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_brandtCertified_spec__2(lean_object* v_a_323_, lean_object* v_a_324_){
_start:
{
if (lean_obj_tag(v_a_323_) == 0)
{
lean_object* v___x_325_; 
v___x_325_ = l_List_reverse___redArg(v_a_324_);
return v___x_325_;
}
else
{
lean_object* v_head_326_; lean_object* v_tail_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_336_; 
v_head_326_ = lean_ctor_get(v_a_323_, 0);
v_tail_327_ = lean_ctor_get(v_a_323_, 1);
v_isSharedCheck_336_ = !lean_is_exclusive(v_a_323_);
if (v_isSharedCheck_336_ == 0)
{
v___x_329_ = v_a_323_;
v_isShared_330_ = v_isSharedCheck_336_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_tail_327_);
lean_inc(v_head_326_);
lean_dec(v_a_323_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_336_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v_fst_331_; lean_object* v___x_333_; 
v_fst_331_ = lean_ctor_get(v_head_326_, 0);
lean_inc(v_fst_331_);
lean_dec(v_head_326_);
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 1, v_a_324_);
lean_ctor_set(v___x_329_, 0, v_fst_331_);
v___x_333_ = v___x_329_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_fst_331_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v_a_324_);
v___x_333_ = v_reuseFailAlloc_335_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
v_a_323_ = v_tail_327_;
v_a_324_ = v___x_333_;
goto _start;
}
}
}
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_brandtCertified(lean_object* v_entry_340_){
_start:
{
lean_object* v_snd_341_; lean_object* v_fst_342_; lean_object* v_fst_343_; lean_object* v_snd_344_; lean_object* v_size_345_; lean_object* v___x_346_; lean_object* v_ells_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v_ns_354_; uint8_t v___y_356_; uint8_t v___x_359_; 
v_snd_341_ = lean_ctor_get(v_entry_340_, 1);
lean_inc(v_snd_341_);
v_fst_342_ = lean_ctor_get(v_entry_340_, 0);
lean_inc(v_fst_342_);
lean_dec_ref(v_entry_340_);
v_fst_343_ = lean_ctor_get(v_snd_341_, 0);
lean_inc(v_fst_343_);
v_snd_344_ = lean_ctor_get(v_snd_341_, 1);
lean_inc_n(v_snd_344_, 3);
lean_dec(v_snd_341_);
v_size_345_ = l_List_lengthTR___redArg(v_fst_343_);
v___x_346_ = lean_box(0);
v_ells_347_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_brandtCertified_spec__2(v_snd_344_, v___x_346_);
v___x_348_ = ((lean_object*)(lp_LanglandsOracles_Oracles_brandtCertified___closed__0));
lean_inc_n(v_ells_347_, 2);
v___x_349_ = l_List_appendTR___redArg(v___x_348_, v_ells_347_);
v___x_350_ = lp_LanglandsOracles_List_mapTR_loop___at___00Oracles_brandtCertified_spec__5(v_ells_347_, v___x_346_);
v___x_351_ = l_List_appendTR___redArg(v___x_349_, v___x_350_);
v___x_352_ = ((lean_object*)(lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_brandtCertified_spec__6___closed__0));
v___x_353_ = lp_LanglandsOracles___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Oracles_brandtCertified_spec__6(v_ells_347_, v_ells_347_, v___x_352_);
lean_dec(v_ells_347_);
v_ns_354_ = l_List_appendTR___redArg(v___x_351_, v___x_353_);
v___x_359_ = lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__9(v_snd_344_);
if (v___x_359_ == 0)
{
v___y_356_ = v___x_359_;
goto v___jp_355_;
}
else
{
uint8_t v___x_360_; 
lean_inc_n(v_snd_344_, 2);
v___x_360_ = lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__10(v_snd_344_, v_snd_344_);
v___y_356_ = v___x_360_;
goto v___jp_355_;
}
v___jp_355_:
{
if (v___y_356_ == 0)
{
lean_dec(v_ns_354_);
lean_dec(v_size_345_);
lean_dec(v_snd_344_);
lean_dec(v_fst_343_);
lean_dec(v_fst_342_);
return v___y_356_;
}
else
{
uint8_t v___x_357_; 
lean_inc(v_snd_344_);
v___x_357_ = lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__7(v_fst_343_, v_snd_344_);
if (v___x_357_ == 0)
{
lean_dec(v_ns_354_);
lean_dec(v_size_345_);
lean_dec(v_snd_344_);
lean_dec(v_fst_342_);
return v___x_357_;
}
else
{
uint8_t v___x_358_; 
v___x_358_ = lp_LanglandsOracles_List_all___at___00Oracles_brandtCertified_spec__8(v_fst_342_, v_snd_344_, v_size_345_, v___x_357_, v_ns_354_);
return v___x_358_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_brandtCertified___boxed(lean_object* v_entry_361_){
_start:
{
uint8_t v_res_362_; lean_object* v_r_363_; 
v_res_362_ = lp_LanglandsOracles_Oracles_brandtCertified(v_entry_361_);
v_r_363_ = lean_box(v_res_362_);
return v_r_363_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_TraceFormula(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Matrix(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Data(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LanglandsOracles_LanglandsOracles_BrandtCertificates(uint8_t builtin) {
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
res = initialize_LanglandsOracles_LanglandsOracles_TraceFormula(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_Matrix(builtin);
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
