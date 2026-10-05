// Lean compiler output
// Module: LanglandsOracles.ModLImages
// Imports: public import Init public meta import Init public import LanglandsOracles.ModL5 public import LanglandsOracles.ModL7 public import LanglandsOracles.ModL11 public import LanglandsOracles.ModL13 public import LanglandsOracles.ModL17 public import LanglandsOracles.ModL19 public import LanglandsOracles.ModL23
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
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ModL5(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ModL7(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ModL11(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ModL13(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ModL17(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ModL19(uint8_t builtin);
lean_object* initialize_LanglandsOracles_LanglandsOracles_ModL23(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LanglandsOracles_LanglandsOracles_ModLImages(uint8_t builtin) {
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
res = initialize_LanglandsOracles_LanglandsOracles_ModL5(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_ModL7(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_ModL11(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_ModL13(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_ModL17(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_ModL19(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_LanglandsOracles_LanglandsOracles_ModL23(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
