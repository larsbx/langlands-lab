// Lean compiler output
// Module: LanglandsOracles.ExcursionGL1
// Imports: public import Init public meta import Init public import LanglandsOracles.Excursion
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
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_heckeSwap___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_heckeSwap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_heckeSwap___redArg(lean_object* v_g_1_, lean_object* v_00_u03c6_2_, lean_object* v_x_3_){
_start:
{
lean_object* v_mul_4_; lean_object* v_inv_5_; uint8_t v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v_mul_4_ = lean_ctor_get(v_g_1_, 0);
lean_inc(v_mul_4_);
v_inv_5_ = lean_ctor_get(v_g_1_, 2);
lean_inc(v_inv_5_);
lean_dec_ref(v_g_1_);
v___x_6_ = 0;
v___x_7_ = lean_box(v___x_6_);
lean_inc(v_x_3_);
v___x_8_ = lean_apply_1(v_x_3_, v___x_7_);
v___x_9_ = 1;
v___x_10_ = lean_box(v___x_9_);
v___x_11_ = lean_apply_1(v_x_3_, v___x_10_);
v___x_12_ = lean_apply_1(v_inv_5_, v___x_11_);
v___x_13_ = lean_apply_2(v_mul_4_, v___x_8_, v___x_12_);
v___x_14_ = lean_apply_1(v_00_u03c6_2_, v___x_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* lp_LanglandsOracles_Oracles_heckeSwap(lean_object* v_00_u011c_15_, lean_object* v_k_16_, lean_object* v_g_17_, lean_object* v_00_u03c6_18_, lean_object* v_x_19_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lp_LanglandsOracles_Oracles_heckeSwap___redArg(v_g_17_, v_00_u03c6_18_, v_x_19_);
return v___x_20_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_Excursion(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LanglandsOracles_LanglandsOracles_ExcursionGL1(uint8_t builtin) {
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
res = initialize_LanglandsOracles_LanglandsOracles_Excursion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
