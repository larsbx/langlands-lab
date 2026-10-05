// Lean compiler output
// Module: LanglandsOracles.FunctionFieldCertificates
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
lean_object* l_List_range(lean_object*);
extern lean_object* l_Int_instInhabited;
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__1___closed__0;
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_divideByFactor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_divideByFactor___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00List_foldl___at___00Oracles_eulerProduct_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00List_foldl___at___00Oracles_eulerProduct_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_eulerProduct_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_eulerProduct_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_LanglandsOracles_Oracles_eulerProduct___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_LanglandsOracles_Oracles_eulerProduct___closed__0;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_eulerProduct(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_eulerProduct___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_beq___at___00Oracles_functionFieldLCertified_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_beq___at___00Oracles_functionFieldLCertified_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_functionFieldLCertified(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_functionFieldLCertified___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__0(lean_object* v_n_1_, lean_object* v_acc_2_, lean_object* v_x_3_, lean_object* v_x_4_){
_start:
{
if (lean_obj_tag(v_x_4_) == 0)
{
return v_x_3_;
}
else
{
lean_object* v_head_5_; lean_object* v_tail_6_; lean_object* v_fst_7_; lean_object* v_snd_8_; lean_object* v___x_9_; uint8_t v___y_11_; lean_object* v___x_18_; uint8_t v___x_19_; 
v_head_5_ = lean_ctor_get(v_x_4_, 0);
v_tail_6_ = lean_ctor_get(v_x_4_, 1);
v_fst_7_ = lean_ctor_get(v_head_5_, 0);
v_snd_8_ = lean_ctor_get(v_head_5_, 1);
v___x_9_ = l_Int_instInhabited;
v___x_18_ = lean_unsigned_to_nat(1u);
v___x_19_ = lean_nat_dec_le(v___x_18_, v_fst_7_);
if (v___x_19_ == 0)
{
v___y_11_ = v___x_19_;
goto v___jp_10_;
}
else
{
uint8_t v___x_20_; 
v___x_20_ = lean_nat_dec_le(v_fst_7_, v_n_1_);
v___y_11_ = v___x_20_;
goto v___jp_10_;
}
v___jp_10_:
{
if (v___y_11_ == 0)
{
v_x_4_ = v_tail_6_;
goto _start;
}
else
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_13_ = lean_nat_sub(v_n_1_, v_fst_7_);
v___x_14_ = l_List_get_x21Internal___redArg(v___x_9_, v_acc_2_, v___x_13_);
v___x_15_ = lean_int_mul(v_snd_8_, v___x_14_);
lean_dec(v___x_14_);
v___x_16_ = lean_int_add(v_x_3_, v___x_15_);
lean_dec(v___x_15_);
lean_dec(v_x_3_);
v_x_3_ = v___x_16_;
v_x_4_ = v_tail_6_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__0___boxed(lean_object* v_n_21_, lean_object* v_acc_22_, lean_object* v_x_23_, lean_object* v_x_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__0(v_n_21_, v_acc_22_, v_x_23_, v_x_24_);
lean_dec(v_x_24_);
lean_dec(v_acc_22_);
lean_dec(v_n_21_);
return v_res_25_;
}
}
static lean_object* _init_lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__1___closed__0(void){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = lean_unsigned_to_nat(0u);
v___x_27_ = lean_nat_to_int(v___x_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__1(lean_object* v_f_28_, lean_object* v_s_29_, lean_object* v_x_30_, lean_object* v_x_31_){
_start:
{
if (lean_obj_tag(v_x_31_) == 0)
{
return v_x_30_;
}
else
{
lean_object* v_head_32_; lean_object* v_tail_33_; lean_object* v___x_35_; uint8_t v_isShared_36_; uint8_t v_isSharedCheck_48_; 
v_head_32_ = lean_ctor_get(v_x_31_, 0);
v_tail_33_ = lean_ctor_get(v_x_31_, 1);
v_isSharedCheck_48_ = !lean_is_exclusive(v_x_31_);
if (v_isSharedCheck_48_ == 0)
{
v___x_35_ = v_x_31_;
v_isShared_36_ = v_isSharedCheck_48_;
goto v_resetjp_34_;
}
else
{
lean_inc(v_tail_33_);
lean_inc(v_head_32_);
lean_dec(v_x_31_);
v___x_35_ = lean_box(0);
v_isShared_36_ = v_isSharedCheck_48_;
goto v_resetjp_34_;
}
v_resetjp_34_:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v_corr_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_44_; 
v___x_37_ = l_Int_instInhabited;
v___x_38_ = lean_obj_once(&lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__1___closed__0, &lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__1___closed__0_once, _init_lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__1___closed__0);
v_corr_39_ = lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__0(v_head_32_, v_x_30_, v___x_38_, v_f_28_);
v___x_40_ = l_List_get_x21Internal___redArg(v___x_37_, v_s_29_, v_head_32_);
v___x_41_ = lean_int_sub(v___x_40_, v_corr_39_);
lean_dec(v_corr_39_);
lean_dec(v___x_40_);
v___x_42_ = lean_box(0);
if (v_isShared_36_ == 0)
{
lean_ctor_set(v___x_35_, 1, v___x_42_);
lean_ctor_set(v___x_35_, 0, v___x_41_);
v___x_44_ = v___x_35_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v___x_41_);
lean_ctor_set(v_reuseFailAlloc_47_, 1, v___x_42_);
v___x_44_ = v_reuseFailAlloc_47_;
goto v_reusejp_43_;
}
v_reusejp_43_:
{
lean_object* v___x_45_; 
v___x_45_ = l_List_appendTR___redArg(v_x_30_, v___x_44_);
v_x_30_ = v___x_45_;
v_x_31_ = v_tail_33_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__1___boxed(lean_object* v_f_49_, lean_object* v_s_50_, lean_object* v_x_51_, lean_object* v_x_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__1(v_f_49_, v_s_50_, v_x_51_, v_x_52_);
lean_dec(v_s_50_);
lean_dec(v_f_49_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_divideByFactor(lean_object* v_s_54_, lean_object* v_f_55_){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_56_ = lean_box(0);
v___x_57_ = l_List_lengthTR___redArg(v_s_54_);
v___x_58_ = l_List_range(v___x_57_);
v___x_59_ = lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__1(v_f_55_, v_s_54_, v___x_56_, v___x_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_divideByFactor___boxed(lean_object* v_s_60_, lean_object* v_f_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = lp_LanglandsOracles_Oracles_divideByFactor(v_s_60_, v_f_61_);
lean_dec(v_f_61_);
lean_dec(v_s_60_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00List_foldl___at___00Oracles_eulerProduct_spec__0_spec__0(lean_object* v_q_63_, lean_object* v_x_64_, lean_object* v_x_65_){
_start:
{
if (lean_obj_tag(v_x_65_) == 0)
{
return v_x_64_;
}
else
{
lean_object* v_head_66_; lean_object* v_snd_67_; lean_object* v_tail_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_119_; 
v_head_66_ = lean_ctor_get(v_x_65_, 0);
lean_inc(v_head_66_);
v_snd_67_ = lean_ctor_get(v_head_66_, 1);
lean_inc(v_snd_67_);
v_tail_68_ = lean_ctor_get(v_x_65_, 1);
v_isSharedCheck_119_ = !lean_is_exclusive(v_x_65_);
if (v_isSharedCheck_119_ == 0)
{
lean_object* v_unused_120_; 
v_unused_120_ = lean_ctor_get(v_x_65_, 0);
lean_dec(v_unused_120_);
v___x_70_ = v_x_65_;
v_isShared_71_ = v_isSharedCheck_119_;
goto v_resetjp_69_;
}
else
{
lean_inc(v_tail_68_);
lean_dec(v_x_65_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_119_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
lean_object* v_fst_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_117_; 
v_fst_72_ = lean_ctor_get(v_head_66_, 0);
v_isSharedCheck_117_ = !lean_is_exclusive(v_head_66_);
if (v_isSharedCheck_117_ == 0)
{
lean_object* v_unused_118_; 
v_unused_118_ = lean_ctor_get(v_head_66_, 1);
lean_dec(v_unused_118_);
v___x_74_ = v_head_66_;
v_isShared_75_ = v_isSharedCheck_117_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_fst_72_);
lean_dec(v_head_66_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_117_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
lean_object* v_fst_76_; lean_object* v_snd_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_116_; 
v_fst_76_ = lean_ctor_get(v_snd_67_, 0);
v_snd_77_ = lean_ctor_get(v_snd_67_, 1);
v_isSharedCheck_116_ = !lean_is_exclusive(v_snd_67_);
if (v_isSharedCheck_116_ == 0)
{
v___x_79_ = v_snd_67_;
v_isShared_80_ = v_isSharedCheck_116_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_snd_77_);
lean_inc(v_fst_76_);
lean_dec(v_snd_67_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_116_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_81_; uint8_t v___x_82_; 
v___x_81_ = lean_unsigned_to_nat(0u);
v___x_82_ = lean_nat_dec_eq(v_fst_76_, v___x_81_);
if (v___x_82_ == 0)
{
lean_object* v___x_83_; uint8_t v___x_84_; 
lean_del_object(v___x_74_);
v___x_83_ = lean_unsigned_to_nat(1u);
v___x_84_ = lean_nat_dec_eq(v_fst_76_, v___x_83_);
lean_dec(v_fst_76_);
if (v___x_84_ == 0)
{
lean_object* v___x_85_; lean_object* v___x_86_; 
lean_del_object(v___x_79_);
lean_dec(v_snd_77_);
lean_dec(v_fst_72_);
lean_del_object(v___x_70_);
v___x_85_ = lean_box(0);
v___x_86_ = lp_LanglandsOracles_Oracles_divideByFactor(v_x_64_, v___x_85_);
lean_dec(v_x_64_);
v_x_64_ = v___x_86_;
v_x_65_ = v_tail_68_;
goto _start;
}
else
{
lean_object* v___x_88_; lean_object* v___x_90_; 
v___x_88_ = lean_int_neg(v_snd_77_);
lean_dec(v_snd_77_);
if (v_isShared_80_ == 0)
{
lean_ctor_set(v___x_79_, 1, v___x_88_);
lean_ctor_set(v___x_79_, 0, v_fst_72_);
v___x_90_ = v___x_79_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_97_; 
v_reuseFailAlloc_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_97_, 0, v_fst_72_);
lean_ctor_set(v_reuseFailAlloc_97_, 1, v___x_88_);
v___x_90_ = v_reuseFailAlloc_97_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
lean_object* v___x_91_; lean_object* v___x_93_; 
v___x_91_ = lean_box(0);
if (v_isShared_71_ == 0)
{
lean_ctor_set(v___x_70_, 1, v___x_91_);
lean_ctor_set(v___x_70_, 0, v___x_90_);
v___x_93_ = v___x_70_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v___x_90_);
lean_ctor_set(v_reuseFailAlloc_96_, 1, v___x_91_);
v___x_93_ = v_reuseFailAlloc_96_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
lean_object* v___x_94_; 
v___x_94_ = lp_LanglandsOracles_Oracles_divideByFactor(v_x_64_, v___x_93_);
lean_dec_ref(v___x_93_);
lean_dec(v_x_64_);
v_x_64_ = v___x_94_;
v_x_65_ = v_tail_68_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_98_; lean_object* v___x_100_; 
lean_dec(v_fst_76_);
v___x_98_ = lean_int_neg(v_snd_77_);
lean_dec(v_snd_77_);
lean_inc(v_fst_72_);
if (v_isShared_80_ == 0)
{
lean_ctor_set(v___x_79_, 1, v___x_98_);
lean_ctor_set(v___x_79_, 0, v_fst_72_);
v___x_100_ = v___x_79_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v_fst_72_);
lean_ctor_set(v_reuseFailAlloc_115_, 1, v___x_98_);
v___x_100_ = v_reuseFailAlloc_115_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_106_; 
v___x_101_ = lean_unsigned_to_nat(2u);
v___x_102_ = lean_nat_mul(v___x_101_, v_fst_72_);
v___x_103_ = lean_nat_pow(v_q_63_, v_fst_72_);
lean_dec(v_fst_72_);
v___x_104_ = lean_nat_to_int(v___x_103_);
if (v_isShared_75_ == 0)
{
lean_ctor_set(v___x_74_, 1, v___x_104_);
lean_ctor_set(v___x_74_, 0, v___x_102_);
v___x_106_ = v___x_74_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v___x_102_);
lean_ctor_set(v_reuseFailAlloc_114_, 1, v___x_104_);
v___x_106_ = v_reuseFailAlloc_114_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
lean_object* v___x_107_; lean_object* v___x_109_; 
v___x_107_ = lean_box(0);
if (v_isShared_71_ == 0)
{
lean_ctor_set(v___x_70_, 1, v___x_107_);
lean_ctor_set(v___x_70_, 0, v___x_106_);
v___x_109_ = v___x_70_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v___x_106_);
lean_ctor_set(v_reuseFailAlloc_113_, 1, v___x_107_);
v___x_109_ = v_reuseFailAlloc_113_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_100_);
lean_ctor_set(v___x_110_, 1, v___x_109_);
v___x_111_ = lp_LanglandsOracles_Oracles_divideByFactor(v_x_64_, v___x_110_);
lean_dec_ref_known(v___x_110_, 2);
lean_dec(v_x_64_);
v_x_64_ = v___x_111_;
v_x_65_ = v_tail_68_;
goto _start;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00List_foldl___at___00Oracles_eulerProduct_spec__0_spec__0___boxed(lean_object* v_q_121_, lean_object* v_x_122_, lean_object* v_x_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = lp_LanglandsOracles_List_foldl___at___00List_foldl___at___00Oracles_eulerProduct_spec__0_spec__0(v_q_121_, v_x_122_, v_x_123_);
lean_dec(v_q_121_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_eulerProduct_spec__0(lean_object* v_q_125_, lean_object* v_x_126_, lean_object* v_x_127_){
_start:
{
if (lean_obj_tag(v_x_127_) == 0)
{
lean_inc(v_x_126_);
return v_x_126_;
}
else
{
lean_object* v_head_128_; lean_object* v_snd_129_; lean_object* v_tail_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_181_; 
v_head_128_ = lean_ctor_get(v_x_127_, 0);
lean_inc(v_head_128_);
v_snd_129_ = lean_ctor_get(v_head_128_, 1);
lean_inc(v_snd_129_);
v_tail_130_ = lean_ctor_get(v_x_127_, 1);
v_isSharedCheck_181_ = !lean_is_exclusive(v_x_127_);
if (v_isSharedCheck_181_ == 0)
{
lean_object* v_unused_182_; 
v_unused_182_ = lean_ctor_get(v_x_127_, 0);
lean_dec(v_unused_182_);
v___x_132_ = v_x_127_;
v_isShared_133_ = v_isSharedCheck_181_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_tail_130_);
lean_dec(v_x_127_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_181_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v_fst_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_179_; 
v_fst_134_ = lean_ctor_get(v_head_128_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v_head_128_);
if (v_isSharedCheck_179_ == 0)
{
lean_object* v_unused_180_; 
v_unused_180_ = lean_ctor_get(v_head_128_, 1);
lean_dec(v_unused_180_);
v___x_136_ = v_head_128_;
v_isShared_137_ = v_isSharedCheck_179_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_fst_134_);
lean_dec(v_head_128_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_179_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v_fst_138_; lean_object* v_snd_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_178_; 
v_fst_138_ = lean_ctor_get(v_snd_129_, 0);
v_snd_139_ = lean_ctor_get(v_snd_129_, 1);
v_isSharedCheck_178_ = !lean_is_exclusive(v_snd_129_);
if (v_isSharedCheck_178_ == 0)
{
v___x_141_ = v_snd_129_;
v_isShared_142_ = v_isSharedCheck_178_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_snd_139_);
lean_inc(v_fst_138_);
lean_dec(v_snd_129_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_178_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_143_; uint8_t v___x_144_; 
v___x_143_ = lean_unsigned_to_nat(0u);
v___x_144_ = lean_nat_dec_eq(v_fst_138_, v___x_143_);
if (v___x_144_ == 0)
{
lean_object* v___x_145_; uint8_t v___x_146_; 
lean_del_object(v___x_136_);
v___x_145_ = lean_unsigned_to_nat(1u);
v___x_146_ = lean_nat_dec_eq(v_fst_138_, v___x_145_);
lean_dec(v_fst_138_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
lean_del_object(v___x_141_);
lean_dec(v_snd_139_);
lean_dec(v_fst_134_);
lean_del_object(v___x_132_);
v___x_147_ = lean_box(0);
v___x_148_ = lp_LanglandsOracles_Oracles_divideByFactor(v_x_126_, v___x_147_);
v___x_149_ = lp_LanglandsOracles_List_foldl___at___00List_foldl___at___00Oracles_eulerProduct_spec__0_spec__0(v_q_125_, v___x_148_, v_tail_130_);
return v___x_149_;
}
else
{
lean_object* v___x_150_; lean_object* v___x_152_; 
v___x_150_ = lean_int_neg(v_snd_139_);
lean_dec(v_snd_139_);
if (v_isShared_142_ == 0)
{
lean_ctor_set(v___x_141_, 1, v___x_150_);
lean_ctor_set(v___x_141_, 0, v_fst_134_);
v___x_152_ = v___x_141_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_fst_134_);
lean_ctor_set(v_reuseFailAlloc_159_, 1, v___x_150_);
v___x_152_ = v_reuseFailAlloc_159_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
lean_object* v___x_153_; lean_object* v___x_155_; 
v___x_153_ = lean_box(0);
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 1, v___x_153_);
lean_ctor_set(v___x_132_, 0, v___x_152_);
v___x_155_ = v___x_132_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v___x_152_);
lean_ctor_set(v_reuseFailAlloc_158_, 1, v___x_153_);
v___x_155_ = v_reuseFailAlloc_158_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = lp_LanglandsOracles_Oracles_divideByFactor(v_x_126_, v___x_155_);
lean_dec_ref(v___x_155_);
v___x_157_ = lp_LanglandsOracles_List_foldl___at___00List_foldl___at___00Oracles_eulerProduct_spec__0_spec__0(v_q_125_, v___x_156_, v_tail_130_);
return v___x_157_;
}
}
}
}
else
{
lean_object* v___x_160_; lean_object* v___x_162_; 
lean_dec(v_fst_138_);
v___x_160_ = lean_int_neg(v_snd_139_);
lean_dec(v_snd_139_);
lean_inc(v_fst_134_);
if (v_isShared_142_ == 0)
{
lean_ctor_set(v___x_141_, 1, v___x_160_);
lean_ctor_set(v___x_141_, 0, v_fst_134_);
v___x_162_ = v___x_141_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v_fst_134_);
lean_ctor_set(v_reuseFailAlloc_177_, 1, v___x_160_);
v___x_162_ = v_reuseFailAlloc_177_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_168_; 
v___x_163_ = lean_unsigned_to_nat(2u);
v___x_164_ = lean_nat_mul(v___x_163_, v_fst_134_);
v___x_165_ = lean_nat_pow(v_q_125_, v_fst_134_);
lean_dec(v_fst_134_);
v___x_166_ = lean_nat_to_int(v___x_165_);
if (v_isShared_137_ == 0)
{
lean_ctor_set(v___x_136_, 1, v___x_166_);
lean_ctor_set(v___x_136_, 0, v___x_164_);
v___x_168_ = v___x_136_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v___x_164_);
lean_ctor_set(v_reuseFailAlloc_176_, 1, v___x_166_);
v___x_168_ = v_reuseFailAlloc_176_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
lean_object* v___x_169_; lean_object* v___x_171_; 
v___x_169_ = lean_box(0);
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 1, v___x_169_);
lean_ctor_set(v___x_132_, 0, v___x_168_);
v___x_171_ = v___x_132_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v___x_168_);
lean_ctor_set(v_reuseFailAlloc_175_, 1, v___x_169_);
v___x_171_ = v_reuseFailAlloc_175_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_172_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_172_, 0, v___x_162_);
lean_ctor_set(v___x_172_, 1, v___x_171_);
v___x_173_ = lp_LanglandsOracles_Oracles_divideByFactor(v_x_126_, v___x_172_);
lean_dec_ref_known(v___x_172_, 2);
v___x_174_ = lp_LanglandsOracles_List_foldl___at___00List_foldl___at___00Oracles_eulerProduct_spec__0_spec__0(v_q_125_, v___x_173_, v_tail_130_);
return v___x_174_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_foldl___at___00Oracles_eulerProduct_spec__0___boxed(lean_object* v_q_183_, lean_object* v_x_184_, lean_object* v_x_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = lp_LanglandsOracles_List_foldl___at___00Oracles_eulerProduct_spec__0(v_q_183_, v_x_184_, v_x_185_);
lean_dec(v_x_184_);
lean_dec(v_q_183_);
return v_res_186_;
}
}
static lean_object* _init_lp_LanglandsOracles_Oracles_eulerProduct___closed__0(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_187_ = lean_unsigned_to_nat(1u);
v___x_188_ = lean_nat_to_int(v___x_187_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_eulerProduct(lean_object* v_q_189_, lean_object* v_order_190_, lean_object* v_places_191_){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_192_ = lean_obj_once(&lp_LanglandsOracles_Oracles_eulerProduct___closed__0, &lp_LanglandsOracles_Oracles_eulerProduct___closed__0_once, _init_lp_LanglandsOracles_Oracles_eulerProduct___closed__0);
v___x_193_ = lean_obj_once(&lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__1___closed__0, &lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__1___closed__0_once, _init_lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__1___closed__0);
v___x_194_ = l_List_replicateTR___redArg(v_order_190_, v___x_193_);
v___x_195_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_192_);
lean_ctor_set(v___x_195_, 1, v___x_194_);
v___x_196_ = lp_LanglandsOracles_List_foldl___at___00Oracles_eulerProduct_spec__0(v_q_189_, v___x_195_, v_places_191_);
lean_dec_ref_known(v___x_195_, 2);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_eulerProduct___boxed(lean_object* v_q_197_, lean_object* v_order_198_, lean_object* v_places_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = lp_LanglandsOracles_Oracles_eulerProduct(v_q_197_, v_order_198_, v_places_199_);
lean_dec(v_q_197_);
return v_res_200_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_List_beq___at___00Oracles_functionFieldLCertified_spec__0(lean_object* v_x_201_, lean_object* v_x_202_){
_start:
{
if (lean_obj_tag(v_x_201_) == 0)
{
if (lean_obj_tag(v_x_202_) == 0)
{
uint8_t v___x_203_; 
v___x_203_ = 1;
return v___x_203_;
}
else
{
uint8_t v___x_204_; 
v___x_204_ = 0;
return v___x_204_;
}
}
else
{
if (lean_obj_tag(v_x_202_) == 0)
{
uint8_t v___x_205_; 
v___x_205_ = 0;
return v___x_205_;
}
else
{
lean_object* v_head_206_; lean_object* v_tail_207_; lean_object* v_head_208_; lean_object* v_tail_209_; uint8_t v___x_210_; 
v_head_206_ = lean_ctor_get(v_x_201_, 0);
v_tail_207_ = lean_ctor_get(v_x_201_, 1);
v_head_208_ = lean_ctor_get(v_x_202_, 0);
v_tail_209_ = lean_ctor_get(v_x_202_, 1);
v___x_210_ = lean_int_dec_eq(v_head_206_, v_head_208_);
if (v___x_210_ == 0)
{
return v___x_210_;
}
else
{
v_x_201_ = v_tail_207_;
v_x_202_ = v_tail_209_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_List_beq___at___00Oracles_functionFieldLCertified_spec__0___boxed(lean_object* v_x_212_, lean_object* v_x_213_){
_start:
{
uint8_t v_res_214_; lean_object* v_r_215_; 
v_res_214_ = lp_LanglandsOracles_List_beq___at___00Oracles_functionFieldLCertified_spec__0(v_x_212_, v_x_213_);
lean_dec(v_x_213_);
lean_dec(v_x_212_);
v_r_215_ = lean_box(v_res_214_);
return v_r_215_;
}
}
LEAN_EXPORT uint8_t lp_LanglandsOracles_Oracles_functionFieldLCertified(lean_object* v_entry_216_, lean_object* v_expected_217_){
_start:
{
lean_object* v_snd_218_; lean_object* v_fst_219_; lean_object* v_fst_220_; lean_object* v_snd_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; uint8_t v___x_230_; 
v_snd_218_ = lean_ctor_get(v_entry_216_, 1);
lean_inc(v_snd_218_);
v_fst_219_ = lean_ctor_get(v_entry_216_, 0);
lean_inc(v_fst_219_);
lean_dec_ref(v_entry_216_);
v_fst_220_ = lean_ctor_get(v_snd_218_, 0);
lean_inc_n(v_fst_220_, 2);
v_snd_221_ = lean_ctor_get(v_snd_218_, 1);
lean_inc(v_snd_221_);
lean_dec(v_snd_218_);
v___x_222_ = lp_LanglandsOracles_Oracles_eulerProduct(v_fst_219_, v_fst_220_, v_snd_221_);
lean_dec(v_fst_219_);
v___x_223_ = lean_unsigned_to_nat(1u);
v___x_224_ = lean_nat_add(v_fst_220_, v___x_223_);
lean_dec(v_fst_220_);
v___x_225_ = l_List_lengthTR___redArg(v_expected_217_);
v___x_226_ = lean_nat_sub(v___x_224_, v___x_225_);
lean_dec(v___x_225_);
lean_dec(v___x_224_);
v___x_227_ = lean_obj_once(&lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__1___closed__0, &lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__1___closed__0_once, _init_lp_LanglandsOracles_List_foldl___at___00Oracles_divideByFactor_spec__1___closed__0);
v___x_228_ = l_List_replicateTR___redArg(v___x_226_, v___x_227_);
v___x_229_ = l_List_appendTR___redArg(v_expected_217_, v___x_228_);
v___x_230_ = lp_LanglandsOracles_List_beq___at___00Oracles_functionFieldLCertified_spec__0(v___x_222_, v___x_229_);
lean_dec(v___x_229_);
lean_dec(v___x_222_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_functionFieldLCertified___boxed(lean_object* v_entry_231_, lean_object* v_expected_232_){
_start:
{
uint8_t v_res_233_; lean_object* v_r_234_; 
v_res_233_ = lp_LanglandsOracles_Oracles_functionFieldLCertified(v_entry_231_, v_expected_232_);
v_r_234_ = lean_box(v_res_233_);
return v_r_234_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Data(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LanglandsOracles_LanglandsOracles_FunctionFieldCertificates(uint8_t builtin) {
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
