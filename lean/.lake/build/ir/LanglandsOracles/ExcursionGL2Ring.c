// Lean compiler output
// Module: LanglandsOracles.ExcursionGL2Ring
// Imports: public import Init public meta import Init public import LanglandsOracles.Pseudocharacter public import LanglandsOracles.ExcursionGL2
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
lean_object* lp_LanglandsOracles_Oracles_M2_trace___redArg(lean_object*, lean_object*);
lean_object* lp_LanglandsOracles_Oracles_M2_mul___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_grpGL2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_grpGL2___redArg___lam__1(lean_object*);
static const lean_closure_object lp_LanglandsOracles_Oracles_grpGL2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_LanglandsOracles_Oracles_grpGL2___redArg___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_LanglandsOracles_Oracles_grpGL2___redArg___closed__0 = (const lean_object*)&lp_LanglandsOracles_Oracles_grpGL2___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_grpGL2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_grpGL2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_traceGL2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_traceGL2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_traceGL2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_grpGL2___redArg___lam__0(lean_object* v_inst_1_, lean_object* v_inst_2_, lean_object* v_p_3_, lean_object* v_q_4_){
_start:
{
lean_object* v_fst_5_; lean_object* v_snd_6_; lean_object* v_fst_7_; lean_object* v_snd_8_; lean_object* v___x_10_; uint8_t v_isShared_11_; uint8_t v_isSharedCheck_17_; 
v_fst_5_ = lean_ctor_get(v_p_3_, 0);
lean_inc(v_fst_5_);
v_snd_6_ = lean_ctor_get(v_p_3_, 1);
lean_inc(v_snd_6_);
lean_dec_ref(v_p_3_);
v_fst_7_ = lean_ctor_get(v_q_4_, 0);
v_snd_8_ = lean_ctor_get(v_q_4_, 1);
v_isSharedCheck_17_ = !lean_is_exclusive(v_q_4_);
if (v_isSharedCheck_17_ == 0)
{
v___x_10_ = v_q_4_;
v_isShared_11_ = v_isSharedCheck_17_;
goto v_resetjp_9_;
}
else
{
lean_inc(v_snd_8_);
lean_inc(v_fst_7_);
lean_dec(v_q_4_);
v___x_10_ = lean_box(0);
v_isShared_11_ = v_isSharedCheck_17_;
goto v_resetjp_9_;
}
v_resetjp_9_:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_15_; 
lean_inc(v_inst_2_);
lean_inc(v_inst_1_);
v___x_12_ = lp_LanglandsOracles_Oracles_M2_mul___redArg(v_inst_1_, v_inst_2_, v_fst_5_, v_fst_7_);
v___x_13_ = lp_LanglandsOracles_Oracles_M2_mul___redArg(v_inst_1_, v_inst_2_, v_snd_8_, v_snd_6_);
if (v_isShared_11_ == 0)
{
lean_ctor_set(v___x_10_, 1, v___x_13_);
lean_ctor_set(v___x_10_, 0, v___x_12_);
v___x_15_ = v___x_10_;
goto v_reusejp_14_;
}
else
{
lean_object* v_reuseFailAlloc_16_; 
v_reuseFailAlloc_16_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_16_, 0, v___x_12_);
lean_ctor_set(v_reuseFailAlloc_16_, 1, v___x_13_);
v___x_15_ = v_reuseFailAlloc_16_;
goto v_reusejp_14_;
}
v_reusejp_14_:
{
return v___x_15_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_grpGL2___redArg___lam__1(lean_object* v_p_18_){
_start:
{
lean_object* v_fst_19_; lean_object* v_snd_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_27_; 
v_fst_19_ = lean_ctor_get(v_p_18_, 0);
v_snd_20_ = lean_ctor_get(v_p_18_, 1);
v_isSharedCheck_27_ = !lean_is_exclusive(v_p_18_);
if (v_isSharedCheck_27_ == 0)
{
v___x_22_ = v_p_18_;
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_snd_20_);
lean_inc(v_fst_19_);
lean_dec(v_p_18_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_25_; 
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 1, v_fst_19_);
lean_ctor_set(v___x_22_, 0, v_snd_20_);
v___x_25_ = v___x_22_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_snd_20_);
lean_ctor_set(v_reuseFailAlloc_26_, 1, v_fst_19_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_grpGL2___redArg(lean_object* v_inst_29_, lean_object* v_inst_30_, lean_object* v_inst_31_, lean_object* v_inst_32_){
_start:
{
lean_object* v___f_33_; lean_object* v___f_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___f_33_ = lean_alloc_closure((void*)(lp_LanglandsOracles_Oracles_grpGL2___redArg___lam__0), 4, 2);
lean_closure_set(v___f_33_, 0, v_inst_29_);
lean_closure_set(v___f_33_, 1, v_inst_30_);
v___f_34_ = ((lean_object*)(lp_LanglandsOracles_Oracles_grpGL2___redArg___closed__0));
lean_inc(v_inst_31_);
lean_inc(v_inst_32_);
v___x_35_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_35_, 0, v_inst_32_);
lean_ctor_set(v___x_35_, 1, v_inst_31_);
lean_ctor_set(v___x_35_, 2, v_inst_31_);
lean_ctor_set(v___x_35_, 3, v_inst_32_);
lean_inc_ref(v___x_35_);
v___x_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_36_, 0, v___x_35_);
lean_ctor_set(v___x_36_, 1, v___x_35_);
v___x_37_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_37_, 0, v___f_33_);
lean_ctor_set(v___x_37_, 1, v___x_36_);
lean_ctor_set(v___x_37_, 2, v___f_34_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_grpGL2(lean_object* v_R_38_, lean_object* v_inst_39_, lean_object* v_inst_40_, lean_object* v_inst_41_, lean_object* v_inst_42_, lean_object* v_h_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = lp_LanglandsOracles_Oracles_grpGL2___redArg(v_inst_39_, v_inst_40_, v_inst_41_, v_inst_42_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_traceGL2___redArg(lean_object* v_inst_45_, lean_object* v_p_46_){
_start:
{
lean_object* v_fst_47_; lean_object* v___x_48_; 
v_fst_47_ = lean_ctor_get(v_p_46_, 0);
lean_inc(v_fst_47_);
lean_dec_ref(v_p_46_);
v___x_48_ = lp_LanglandsOracles_Oracles_M2_trace___redArg(v_inst_45_, v_fst_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_traceGL2(lean_object* v_R_49_, lean_object* v_inst_50_, lean_object* v_inst_51_, lean_object* v_inst_52_, lean_object* v_inst_53_, lean_object* v_p_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lp_LanglandsOracles_Oracles_traceGL2___redArg(v_inst_50_, v_p_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_traceGL2___boxed(lean_object* v_R_56_, lean_object* v_inst_57_, lean_object* v_inst_58_, lean_object* v_inst_59_, lean_object* v_inst_60_, lean_object* v_p_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = lp_LanglandsOracles_Oracles_traceGL2(v_R_56_, v_inst_57_, v_inst_58_, v_inst_59_, v_inst_60_, v_p_61_);
lean_dec(v_inst_60_);
lean_dec(v_inst_59_);
lean_dec(v_inst_58_);
return v_res_62_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Pseudocharacter(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ExcursionGL2(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LanglandsOracles_LanglandsOracles_ExcursionGL2Ring(uint8_t builtin) {
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
res = initialize_LanglandsOracles_LanglandsOracles_Pseudocharacter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_ExcursionGL2(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
