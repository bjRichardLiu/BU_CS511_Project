// Lean compiler output
// Module: GcodeLean.Step
// Imports: Init GcodeLean.AST GcodeLean.State
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
static lean_object* l_GcodeLean_step___closed__1;
static lean_object* l_GcodeLean_reprStepError___closed__6____x40_GcodeLean_Step___hyg_46_;
lean_object* l_Float_repr(double, lean_object*);
LEAN_EXPORT lean_object* l_GcodeLean_checkSpindleForLinearMove(lean_object*);
LEAN_EXPORT lean_object* l_GcodeLean_checkSpindleForRapidMove___boxed(lean_object*);
LEAN_EXPORT lean_object* l_GcodeLean_checkSpindleForRapidMove(lean_object*);
static lean_object* l_GcodeLean_reprStepError___closed__7____x40_GcodeLean_Step___hyg_46_;
static lean_object* l_GcodeLean_checkSpindleForRapidMove___closed__0;
lean_object* l_String_quote(lean_object*);
uint8_t lean_float_decLt(double, double);
static double l_GcodeLean_computeTarget___lam__0___closed__0;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GcodeLean_computeTarget(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GcodeLean_checkBounds___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GcodeLean_instBEqStepError;
double lean_float_add(double, double);
static lean_object* l_GcodeLean_reprStepError___closed__0____x40_GcodeLean_Step___hyg_46_;
lean_object* lean_nat_to_int(lean_object*);
static lean_object* l_GcodeLean_checkSpindleForLinearMove___closed__0;
LEAN_EXPORT lean_object* l_GcodeLean_step(lean_object*, lean_object*);
LEAN_EXPORT double l_GcodeLean_computeTarget___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_GcodeLean_runProgram(lean_object*, lean_object*);
static lean_object* l_GcodeLean_reprStepError___closed__4____x40_GcodeLean_Step___hyg_46_;
static lean_object* l_GcodeLean_reprStepError___closed__5____x40_GcodeLean_Step___hyg_46_;
LEAN_EXPORT lean_object* l_GcodeLean_instReprStepError;
static lean_object* l_GcodeLean_checkBounds___closed__0;
static lean_object* l_GcodeLean_checkBounds___closed__1;
static lean_object* l_GcodeLean_step___closed__0;
LEAN_EXPORT lean_object* l_GcodeLean_computeTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GcodeLean_beqStepError____x40_GcodeLean_Step___hyg_199____boxed(lean_object*, lean_object*);
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
static lean_object* l_GcodeLean_reprStepError___closed__2____x40_GcodeLean_Step___hyg_46_;
LEAN_EXPORT uint8_t l_GcodeLean_beqStepError____x40_GcodeLean_Step___hyg_199_(lean_object*, lean_object*);
static lean_object* l_GcodeLean_checkBounds___closed__2;
LEAN_EXPORT lean_object* l_GcodeLean_reprStepError____x40_GcodeLean_Step___hyg_46____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GcodeLean_checkBounds(lean_object*, double, double, double);
LEAN_EXPORT lean_object* l_GcodeLean_reprStepError____x40_GcodeLean_Step___hyg_46_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GcodeLean_applyMove___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_float_beq(double, double);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GcodeLean_checkSpindleForLinearMove___boxed(lean_object*);
LEAN_EXPORT lean_object* l_GcodeLean_applyMove(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_GcodeLean_instReprStepError___closed__0;
static lean_object* l_GcodeLean_reprStepError___closed__1____x40_GcodeLean_Step___hyg_46_;
LEAN_EXPORT lean_object* l_List_foldlM___at___GcodeLean_runProgram_spec__0(lean_object*, lean_object*);
static lean_object* l_GcodeLean_reprStepError___closed__3____x40_GcodeLean_Step___hyg_46_;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_GcodeLean_computeTarget___lam__0___boxed(lean_object*);
static lean_object* l_GcodeLean_instBEqStepError___closed__0;
static lean_object* l_GcodeLean_reprStepError___closed__8____x40_GcodeLean_Step___hyg_46_;
static lean_object* _init_l_GcodeLean_reprStepError___closed__0____x40_GcodeLean_Step___hyg_46_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("GcodeLean.StepError.SpindleOnWhenRapidMove", 42, 42);
return x_1;
}
}
static lean_object* _init_l_GcodeLean_reprStepError___closed__1____x40_GcodeLean_Step___hyg_46_() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_GcodeLean_reprStepError___closed__0____x40_GcodeLean_Step___hyg_46_;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_GcodeLean_reprStepError___closed__2____x40_GcodeLean_Step___hyg_46_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("GcodeLean.StepError.SpindleOffWhenLinearMove", 44, 44);
return x_1;
}
}
static lean_object* _init_l_GcodeLean_reprStepError___closed__3____x40_GcodeLean_Step___hyg_46_() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_GcodeLean_reprStepError___closed__2____x40_GcodeLean_Step___hyg_46_;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_GcodeLean_reprStepError___closed__4____x40_GcodeLean_Step___hyg_46_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("GcodeLean.StepError.OutOfBounds", 31, 31);
return x_1;
}
}
static lean_object* _init_l_GcodeLean_reprStepError___closed__5____x40_GcodeLean_Step___hyg_46_() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_GcodeLean_reprStepError___closed__4____x40_GcodeLean_Step___hyg_46_;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_GcodeLean_reprStepError___closed__6____x40_GcodeLean_Step___hyg_46_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(1);
x_2 = l_GcodeLean_reprStepError___closed__5____x40_GcodeLean_Step___hyg_46_;
x_3 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_GcodeLean_reprStepError___closed__7____x40_GcodeLean_Step___hyg_46_() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_GcodeLean_reprStepError___closed__8____x40_GcodeLean_Step___hyg_46_() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_GcodeLean_reprStepError____x40_GcodeLean_Step___hyg_46_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_10; 
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_17; double x_18; double x_19; double x_20; lean_object* x_21; lean_object* x_42; uint8_t x_43; 
x_17 = lean_ctor_get(x_1, 0);
x_18 = lean_ctor_get_float(x_1, sizeof(void*)*1);
x_19 = lean_ctor_get_float(x_1, sizeof(void*)*1 + 8);
x_20 = lean_ctor_get_float(x_1, sizeof(void*)*1 + 16);
x_42 = lean_unsigned_to_nat(1024u);
x_43 = lean_nat_dec_le(x_42, x_2);
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = l_GcodeLean_reprStepError___closed__7____x40_GcodeLean_Step___hyg_46_;
x_21 = x_44;
goto block_41;
}
else
{
lean_object* x_45; 
x_45 = l_GcodeLean_reprStepError___closed__8____x40_GcodeLean_Step___hyg_46_;
x_21 = x_45;
goto block_41;
}
block_41:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; 
x_22 = lean_box(1);
x_23 = l_GcodeLean_reprStepError___closed__6____x40_GcodeLean_Step___hyg_46_;
x_24 = l_String_quote(x_17);
x_25 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_22);
x_28 = lean_unsigned_to_nat(1024u);
x_29 = l_Float_repr(x_18, x_28);
x_30 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_22);
x_32 = l_Float_repr(x_19, x_28);
x_33 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_22);
x_35 = l_Float_repr(x_20, x_28);
x_36 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_37, 0, x_21);
lean_ctor_set(x_37, 1, x_36);
x_38 = 0;
x_39 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set_uint8(x_39, sizeof(void*)*1, x_38);
x_40 = l_Repr_addAppParen(x_39, x_2);
return x_40;
}
}
case 1:
{
lean_object* x_46; uint8_t x_47; 
x_46 = lean_unsigned_to_nat(1024u);
x_47 = lean_nat_dec_le(x_46, x_2);
if (x_47 == 0)
{
lean_object* x_48; 
x_48 = l_GcodeLean_reprStepError___closed__7____x40_GcodeLean_Step___hyg_46_;
x_3 = x_48;
goto block_9;
}
else
{
lean_object* x_49; 
x_49 = l_GcodeLean_reprStepError___closed__8____x40_GcodeLean_Step___hyg_46_;
x_3 = x_49;
goto block_9;
}
}
default: 
{
lean_object* x_50; uint8_t x_51; 
x_50 = lean_unsigned_to_nat(1024u);
x_51 = lean_nat_dec_le(x_50, x_2);
if (x_51 == 0)
{
lean_object* x_52; 
x_52 = l_GcodeLean_reprStepError___closed__7____x40_GcodeLean_Step___hyg_46_;
x_10 = x_52;
goto block_16;
}
else
{
lean_object* x_53; 
x_53 = l_GcodeLean_reprStepError___closed__8____x40_GcodeLean_Step___hyg_46_;
x_10 = x_53;
goto block_16;
}
}
}
block_9:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_GcodeLean_reprStepError___closed__1____x40_GcodeLean_Step___hyg_46_;
x_5 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
x_6 = 0;
x_7 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*1, x_6);
x_8 = l_Repr_addAppParen(x_7, x_2);
return x_8;
}
block_16:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_11 = l_GcodeLean_reprStepError___closed__3____x40_GcodeLean_Step___hyg_46_;
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = 0;
x_14 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set_uint8(x_14, sizeof(void*)*1, x_13);
x_15 = l_Repr_addAppParen(x_14, x_2);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_GcodeLean_reprStepError____x40_GcodeLean_Step___hyg_46____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_GcodeLean_reprStepError____x40_GcodeLean_Step___hyg_46_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_GcodeLean_instReprStepError___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_GcodeLean_reprStepError____x40_GcodeLean_Step___hyg_46____boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_GcodeLean_instReprStepError() {
_start:
{
lean_object* x_1; 
x_1 = l_GcodeLean_instReprStepError___closed__0;
return x_1;
}
}
LEAN_EXPORT uint8_t l_GcodeLean_beqStepError____x40_GcodeLean_Step___hyg_199_(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; double x_4; double x_5; double x_6; lean_object* x_7; double x_8; double x_9; double x_10; uint8_t x_11; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get_float(x_1, sizeof(void*)*1);
x_5 = lean_ctor_get_float(x_1, sizeof(void*)*1 + 8);
x_6 = lean_ctor_get_float(x_1, sizeof(void*)*1 + 16);
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get_float(x_2, sizeof(void*)*1);
x_9 = lean_ctor_get_float(x_2, sizeof(void*)*1 + 8);
x_10 = lean_ctor_get_float(x_2, sizeof(void*)*1 + 16);
x_11 = lean_string_dec_eq(x_3, x_7);
if (x_11 == 0)
{
return x_11;
}
else
{
uint8_t x_12; 
x_12 = lean_float_beq(x_4, x_8);
if (x_12 == 0)
{
return x_12;
}
else
{
uint8_t x_13; 
x_13 = lean_float_beq(x_5, x_9);
if (x_13 == 0)
{
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_float_beq(x_6, x_10);
return x_14;
}
}
}
}
else
{
uint8_t x_15; 
x_15 = 0;
return x_15;
}
}
case 1:
{
if (lean_obj_tag(x_2) == 1)
{
uint8_t x_16; 
x_16 = 1;
return x_16;
}
else
{
uint8_t x_17; 
x_17 = 0;
return x_17;
}
}
default: 
{
if (lean_obj_tag(x_2) == 2)
{
uint8_t x_18; 
x_18 = 1;
return x_18;
}
else
{
uint8_t x_19; 
x_19 = 0;
return x_19;
}
}
}
}
}
LEAN_EXPORT lean_object* l_GcodeLean_beqStepError____x40_GcodeLean_Step___hyg_199____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_GcodeLean_beqStepError____x40_GcodeLean_Step___hyg_199_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_GcodeLean_instBEqStepError___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_GcodeLean_beqStepError____x40_GcodeLean_Step___hyg_199____boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_GcodeLean_instBEqStepError() {
_start:
{
lean_object* x_1; 
x_1 = l_GcodeLean_instBEqStepError___closed__0;
return x_1;
}
}
static lean_object* _init_l_GcodeLean_checkBounds___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Z", 1, 1);
return x_1;
}
}
static lean_object* _init_l_GcodeLean_checkBounds___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Y", 1, 1);
return x_1;
}
}
static lean_object* _init_l_GcodeLean_checkBounds___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("X", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_GcodeLean_checkBounds(lean_object* x_1, double x_2, double x_3, double x_4) {
_start:
{
lean_object* x_5; double x_6; double x_7; double x_8; double x_9; double x_10; double x_11; uint8_t x_12; 
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get_float(x_5, 0);
x_7 = lean_ctor_get_float(x_5, 8);
x_8 = lean_ctor_get_float(x_5, 16);
x_9 = lean_ctor_get_float(x_5, 24);
x_10 = lean_ctor_get_float(x_5, 32);
x_11 = lean_ctor_get_float(x_5, 40);
x_12 = lean_float_decLt(x_2, x_6);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = lean_float_decLt(x_7, x_2);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = lean_float_decLt(x_3, x_8);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = lean_float_decLt(x_9, x_3);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = lean_float_decLt(x_4, x_10);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = lean_float_decLt(x_11, x_4);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_box(0);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = l_GcodeLean_checkBounds___closed__0;
x_20 = lean_alloc_ctor(0, 1, 24);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set_float(x_20, sizeof(void*)*1, x_4);
lean_ctor_set_float(x_20, sizeof(void*)*1 + 8, x_10);
lean_ctor_set_float(x_20, sizeof(void*)*1 + 16, x_11);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = l_GcodeLean_checkBounds___closed__0;
x_23 = lean_alloc_ctor(0, 1, 24);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set_float(x_23, sizeof(void*)*1, x_4);
lean_ctor_set_float(x_23, sizeof(void*)*1 + 8, x_10);
lean_ctor_set_float(x_23, sizeof(void*)*1 + 16, x_11);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = l_GcodeLean_checkBounds___closed__1;
x_26 = lean_alloc_ctor(0, 1, 24);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set_float(x_26, sizeof(void*)*1, x_3);
lean_ctor_set_float(x_26, sizeof(void*)*1 + 8, x_8);
lean_ctor_set_float(x_26, sizeof(void*)*1 + 16, x_9);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = l_GcodeLean_checkBounds___closed__1;
x_29 = lean_alloc_ctor(0, 1, 24);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set_float(x_29, sizeof(void*)*1, x_3);
lean_ctor_set_float(x_29, sizeof(void*)*1 + 8, x_8);
lean_ctor_set_float(x_29, sizeof(void*)*1 + 16, x_9);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_GcodeLean_checkBounds___closed__2;
x_32 = lean_alloc_ctor(0, 1, 24);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set_float(x_32, sizeof(void*)*1, x_2);
lean_ctor_set_float(x_32, sizeof(void*)*1 + 8, x_6);
lean_ctor_set_float(x_32, sizeof(void*)*1 + 16, x_7);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = l_GcodeLean_checkBounds___closed__2;
x_35 = lean_alloc_ctor(0, 1, 24);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set_float(x_35, sizeof(void*)*1, x_2);
lean_ctor_set_float(x_35, sizeof(void*)*1 + 8, x_6);
lean_ctor_set_float(x_35, sizeof(void*)*1 + 16, x_7);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_35);
return x_36;
}
}
}
LEAN_EXPORT lean_object* l_GcodeLean_checkBounds___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
double x_5; double x_6; double x_7; lean_object* x_8; 
x_5 = lean_unbox_float(x_2);
lean_dec_ref(x_2);
x_6 = lean_unbox_float(x_3);
lean_dec_ref(x_3);
x_7 = lean_unbox_float(x_4);
lean_dec_ref(x_4);
x_8 = l_GcodeLean_checkBounds(x_1, x_5, x_6, x_7);
lean_dec_ref(x_1);
return x_8;
}
}
static lean_object* _init_l_GcodeLean_checkSpindleForRapidMove___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(1);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_GcodeLean_checkSpindleForRapidMove(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 24);
if (x_2 == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = l_GcodeLean_checkSpindleForRapidMove___closed__0;
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_GcodeLean_checkSpindleForRapidMove___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_GcodeLean_checkSpindleForRapidMove(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
static lean_object* _init_l_GcodeLean_checkSpindleForLinearMove___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(2);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_GcodeLean_checkSpindleForLinearMove(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 24);
if (x_2 == 0)
{
lean_object* x_3; 
x_3 = l_GcodeLean_checkSpindleForLinearMove___closed__0;
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_GcodeLean_checkSpindleForLinearMove___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_GcodeLean_checkSpindleForLinearMove(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
static double _init_l_GcodeLean_computeTarget___lam__0___closed__0() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; double x_4; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = 1;
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Float_ofScientific(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT double l_GcodeLean_computeTarget___lam__0(lean_object* x_1) {
_start:
{
double x_2; 
x_2 = l_GcodeLean_computeTarget___lam__0___closed__0;
return x_2;
}
}
LEAN_EXPORT lean_object* l_GcodeLean_computeTarget(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
double x_5; double x_6; double x_7; double x_14; double x_15; double x_16; uint8_t x_17; double x_18; double x_19; double x_23; double x_27; double x_28; double x_29; 
x_14 = lean_ctor_get_float(x_1, sizeof(void*)*2);
x_15 = lean_ctor_get_float(x_1, sizeof(void*)*2 + 8);
x_16 = lean_ctor_get_float(x_1, sizeof(void*)*2 + 16);
x_17 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 25);
if (x_17 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
x_23 = x_14;
goto block_26;
}
else
{
lean_object* x_39; double x_40; 
x_39 = lean_ctor_get(x_2, 0);
x_40 = lean_unbox_float(x_39);
x_23 = x_40;
goto block_26;
}
}
else
{
double x_41; double x_42; double x_48; 
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_54; double x_55; 
x_54 = lean_box(0);
x_55 = l_GcodeLean_computeTarget___lam__0(x_54);
x_48 = x_55;
goto block_53;
}
else
{
lean_object* x_56; double x_57; 
x_56 = lean_ctor_get(x_2, 0);
x_57 = lean_unbox_float(x_56);
x_48 = x_57;
goto block_53;
}
block_47:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_43; double x_44; 
x_43 = lean_box(0);
x_44 = l_GcodeLean_computeTarget___lam__0(x_43);
x_27 = x_41;
x_28 = x_42;
x_29 = x_44;
goto block_38;
}
else
{
lean_object* x_45; double x_46; 
x_45 = lean_ctor_get(x_4, 0);
x_46 = lean_unbox_float(x_45);
x_27 = x_41;
x_28 = x_42;
x_29 = x_46;
goto block_38;
}
}
block_53:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_49; double x_50; 
x_49 = lean_box(0);
x_50 = l_GcodeLean_computeTarget___lam__0(x_49);
x_41 = x_48;
x_42 = x_50;
goto block_47;
}
else
{
lean_object* x_51; double x_52; 
x_51 = lean_ctor_get(x_3, 0);
x_52 = lean_unbox_float(x_51);
x_41 = x_48;
x_42 = x_52;
goto block_47;
}
}
}
block_13:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_box_float(x_5);
x_9 = lean_box_float(x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_box_float(x_6);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
block_22:
{
if (lean_obj_tag(x_4) == 0)
{
x_5 = x_19;
x_6 = x_18;
x_7 = x_16;
goto block_13;
}
else
{
lean_object* x_20; double x_21; 
x_20 = lean_ctor_get(x_4, 0);
x_21 = lean_unbox_float(x_20);
x_5 = x_19;
x_6 = x_18;
x_7 = x_21;
goto block_13;
}
}
block_26:
{
if (lean_obj_tag(x_3) == 0)
{
x_18 = x_23;
x_19 = x_15;
goto block_22;
}
else
{
lean_object* x_24; double x_25; 
x_24 = lean_ctor_get(x_3, 0);
x_25 = lean_unbox_float(x_24);
x_18 = x_23;
x_19 = x_25;
goto block_22;
}
}
block_38:
{
double x_30; double x_31; double x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_30 = lean_float_add(x_14, x_27);
x_31 = lean_float_add(x_15, x_28);
x_32 = lean_float_add(x_16, x_29);
x_33 = lean_box_float(x_31);
x_34 = lean_box_float(x_32);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_box_float(x_30);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
}
LEAN_EXPORT lean_object* l_GcodeLean_computeTarget___lam__0___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = l_GcodeLean_computeTarget___lam__0(x_1);
x_3 = lean_box_float(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_GcodeLean_computeTarget___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_GcodeLean_computeTarget(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_GcodeLean_applyMove(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc_ref(x_1);
x_7 = lean_apply_1(x_6, x_1);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; double x_13; double x_14; double x_15; lean_object* x_16; 
x_8 = l_GcodeLean_computeTarget(x_1, x_2, x_3, x_4);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec_ref(x_8);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_unbox_float(x_10);
x_14 = lean_unbox_float(x_11);
x_15 = lean_unbox_float(x_12);
x_16 = l_GcodeLean_checkBounds(x_1, x_13, x_14, x_15);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 24);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 25);
x_20 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_20);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_21 = x_1;
} else {
 lean_dec_ref(x_1);
 x_21 = lean_box(0);
}
if (lean_obj_tag(x_5) == 0)
{
x_22 = x_18;
goto block_28;
}
else
{
lean_object* x_29; 
lean_dec(x_18);
x_29 = lean_ctor_get(x_5, 0);
lean_inc(x_29);
lean_dec_ref(x_5);
x_22 = x_29;
goto block_28;
}
block_28:
{
lean_object* x_23; double x_24; double x_25; double x_26; lean_object* x_27; 
if (lean_is_scalar(x_21)) {
 x_23 = lean_alloc_ctor(0, 2, 26);
} else {
 x_23 = x_21;
}
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
x_24 = lean_unbox_float(x_10);
lean_dec(x_10);
lean_ctor_set_float(x_23, sizeof(void*)*2, x_24);
x_25 = lean_unbox_float(x_11);
lean_dec(x_11);
lean_ctor_set_float(x_23, sizeof(void*)*2 + 8, x_25);
x_26 = lean_unbox_float(x_12);
lean_dec(x_12);
lean_ctor_set_float(x_23, sizeof(void*)*2 + 16, x_26);
lean_ctor_set_uint8(x_23, sizeof(void*)*2 + 24, x_17);
lean_ctor_set_uint8(x_23, sizeof(void*)*2 + 25, x_19);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_23);
return x_27;
}
}
else
{
uint8_t x_30; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec_ref(x_1);
x_30 = !lean_is_exclusive(x_16);
if (x_30 == 0)
{
lean_ctor_set_tag(x_16, 0);
return x_16;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_16, 0);
lean_inc(x_31);
lean_dec(x_16);
x_32 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_32, 0, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_5);
lean_dec_ref(x_1);
x_33 = !lean_is_exclusive(x_7);
if (x_33 == 0)
{
lean_ctor_set_tag(x_7, 0);
return x_7;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_7, 0);
lean_inc(x_34);
lean_dec(x_7);
x_35 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_35, 0, x_34);
return x_35;
}
}
}
}
LEAN_EXPORT lean_object* l_GcodeLean_applyMove___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_GcodeLean_applyMove(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
static lean_object* _init_l_GcodeLean_step___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_GcodeLean_checkSpindleForRapidMove___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_GcodeLean_step___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_GcodeLean_checkSpindleForLinearMove___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_GcodeLean_step(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 3);
lean_inc(x_6);
lean_dec_ref(x_2);
x_7 = l_GcodeLean_step___closed__0;
x_8 = l_GcodeLean_applyMove(x_1, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
case 1:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 3);
lean_inc(x_12);
lean_dec_ref(x_2);
x_13 = l_GcodeLean_step___closed__1;
x_14 = l_GcodeLean_applyMove(x_1, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_14;
}
case 2:
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_1);
if (x_15 == 0)
{
uint8_t x_16; lean_object* x_17; 
x_16 = 0;
lean_ctor_set_uint8(x_1, sizeof(void*)*2 + 25, x_16);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_1);
return x_17;
}
else
{
double x_18; double x_19; double x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_18 = lean_ctor_get_float(x_1, sizeof(void*)*2);
x_19 = lean_ctor_get_float(x_1, sizeof(void*)*2 + 8);
x_20 = lean_ctor_get_float(x_1, sizeof(void*)*2 + 16);
x_21 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 24);
x_22 = lean_ctor_get(x_1, 0);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_1);
x_24 = 0;
x_25 = lean_alloc_ctor(0, 2, 26);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set_float(x_25, sizeof(void*)*2, x_18);
lean_ctor_set_float(x_25, sizeof(void*)*2 + 8, x_19);
lean_ctor_set_float(x_25, sizeof(void*)*2 + 16, x_20);
lean_ctor_set_uint8(x_25, sizeof(void*)*2 + 24, x_21);
lean_ctor_set_uint8(x_25, sizeof(void*)*2 + 25, x_24);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
return x_26;
}
}
case 3:
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_1);
if (x_27 == 0)
{
uint8_t x_28; lean_object* x_29; 
x_28 = 1;
lean_ctor_set_uint8(x_1, sizeof(void*)*2 + 25, x_28);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_1);
return x_29;
}
else
{
double x_30; double x_31; double x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; 
x_30 = lean_ctor_get_float(x_1, sizeof(void*)*2);
x_31 = lean_ctor_get_float(x_1, sizeof(void*)*2 + 8);
x_32 = lean_ctor_get_float(x_1, sizeof(void*)*2 + 16);
x_33 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 24);
x_34 = lean_ctor_get(x_1, 0);
x_35 = lean_ctor_get(x_1, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_1);
x_36 = 1;
x_37 = lean_alloc_ctor(0, 2, 26);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_35);
lean_ctor_set_float(x_37, sizeof(void*)*2, x_30);
lean_ctor_set_float(x_37, sizeof(void*)*2 + 8, x_31);
lean_ctor_set_float(x_37, sizeof(void*)*2 + 16, x_32);
lean_ctor_set_uint8(x_37, sizeof(void*)*2 + 24, x_33);
lean_ctor_set_uint8(x_37, sizeof(void*)*2 + 25, x_36);
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_37);
return x_38;
}
}
case 4:
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_1);
if (x_39 == 0)
{
uint8_t x_40; lean_object* x_41; 
x_40 = 1;
lean_ctor_set_uint8(x_1, sizeof(void*)*2 + 24, x_40);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_1);
return x_41;
}
else
{
double x_42; double x_43; double x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; 
x_42 = lean_ctor_get_float(x_1, sizeof(void*)*2);
x_43 = lean_ctor_get_float(x_1, sizeof(void*)*2 + 8);
x_44 = lean_ctor_get_float(x_1, sizeof(void*)*2 + 16);
x_45 = lean_ctor_get(x_1, 0);
x_46 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 25);
x_47 = lean_ctor_get(x_1, 1);
lean_inc(x_47);
lean_inc(x_45);
lean_dec(x_1);
x_48 = 1;
x_49 = lean_alloc_ctor(0, 2, 26);
lean_ctor_set(x_49, 0, x_45);
lean_ctor_set(x_49, 1, x_47);
lean_ctor_set_float(x_49, sizeof(void*)*2, x_42);
lean_ctor_set_float(x_49, sizeof(void*)*2 + 8, x_43);
lean_ctor_set_float(x_49, sizeof(void*)*2 + 16, x_44);
lean_ctor_set_uint8(x_49, sizeof(void*)*2 + 24, x_48);
lean_ctor_set_uint8(x_49, sizeof(void*)*2 + 25, x_46);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_49);
return x_50;
}
}
default: 
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_1);
if (x_51 == 0)
{
uint8_t x_52; lean_object* x_53; 
x_52 = 0;
lean_ctor_set_uint8(x_1, sizeof(void*)*2 + 24, x_52);
x_53 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_53, 0, x_1);
return x_53;
}
else
{
double x_54; double x_55; double x_56; lean_object* x_57; uint8_t x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; 
x_54 = lean_ctor_get_float(x_1, sizeof(void*)*2);
x_55 = lean_ctor_get_float(x_1, sizeof(void*)*2 + 8);
x_56 = lean_ctor_get_float(x_1, sizeof(void*)*2 + 16);
x_57 = lean_ctor_get(x_1, 0);
x_58 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 25);
x_59 = lean_ctor_get(x_1, 1);
lean_inc(x_59);
lean_inc(x_57);
lean_dec(x_1);
x_60 = 0;
x_61 = lean_alloc_ctor(0, 2, 26);
lean_ctor_set(x_61, 0, x_57);
lean_ctor_set(x_61, 1, x_59);
lean_ctor_set_float(x_61, sizeof(void*)*2, x_54);
lean_ctor_set_float(x_61, sizeof(void*)*2 + 8, x_55);
lean_ctor_set_float(x_61, sizeof(void*)*2 + 16, x_56);
lean_ctor_set_uint8(x_61, sizeof(void*)*2 + 24, x_60);
lean_ctor_set_uint8(x_61, sizeof(void*)*2 + 25, x_58);
x_62 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_62, 0, x_61);
return x_62;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___GcodeLean_runProgram_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec_ref(x_2);
x_6 = l_GcodeLean_step(x_1, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec_ref(x_6);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_GcodeLean_runProgram(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldlM___at___GcodeLean_runProgram_spec__0(x_1, x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_GcodeLean_AST(uint8_t builtin, lean_object*);
lean_object* initialize_GcodeLean_State(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_GcodeLean_Step(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_GcodeLean_AST(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_GcodeLean_State(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_GcodeLean_reprStepError___closed__0____x40_GcodeLean_Step___hyg_46_ = _init_l_GcodeLean_reprStepError___closed__0____x40_GcodeLean_Step___hyg_46_();
lean_mark_persistent(l_GcodeLean_reprStepError___closed__0____x40_GcodeLean_Step___hyg_46_);
l_GcodeLean_reprStepError___closed__1____x40_GcodeLean_Step___hyg_46_ = _init_l_GcodeLean_reprStepError___closed__1____x40_GcodeLean_Step___hyg_46_();
lean_mark_persistent(l_GcodeLean_reprStepError___closed__1____x40_GcodeLean_Step___hyg_46_);
l_GcodeLean_reprStepError___closed__2____x40_GcodeLean_Step___hyg_46_ = _init_l_GcodeLean_reprStepError___closed__2____x40_GcodeLean_Step___hyg_46_();
lean_mark_persistent(l_GcodeLean_reprStepError___closed__2____x40_GcodeLean_Step___hyg_46_);
l_GcodeLean_reprStepError___closed__3____x40_GcodeLean_Step___hyg_46_ = _init_l_GcodeLean_reprStepError___closed__3____x40_GcodeLean_Step___hyg_46_();
lean_mark_persistent(l_GcodeLean_reprStepError___closed__3____x40_GcodeLean_Step___hyg_46_);
l_GcodeLean_reprStepError___closed__4____x40_GcodeLean_Step___hyg_46_ = _init_l_GcodeLean_reprStepError___closed__4____x40_GcodeLean_Step___hyg_46_();
lean_mark_persistent(l_GcodeLean_reprStepError___closed__4____x40_GcodeLean_Step___hyg_46_);
l_GcodeLean_reprStepError___closed__5____x40_GcodeLean_Step___hyg_46_ = _init_l_GcodeLean_reprStepError___closed__5____x40_GcodeLean_Step___hyg_46_();
lean_mark_persistent(l_GcodeLean_reprStepError___closed__5____x40_GcodeLean_Step___hyg_46_);
l_GcodeLean_reprStepError___closed__6____x40_GcodeLean_Step___hyg_46_ = _init_l_GcodeLean_reprStepError___closed__6____x40_GcodeLean_Step___hyg_46_();
lean_mark_persistent(l_GcodeLean_reprStepError___closed__6____x40_GcodeLean_Step___hyg_46_);
l_GcodeLean_reprStepError___closed__7____x40_GcodeLean_Step___hyg_46_ = _init_l_GcodeLean_reprStepError___closed__7____x40_GcodeLean_Step___hyg_46_();
lean_mark_persistent(l_GcodeLean_reprStepError___closed__7____x40_GcodeLean_Step___hyg_46_);
l_GcodeLean_reprStepError___closed__8____x40_GcodeLean_Step___hyg_46_ = _init_l_GcodeLean_reprStepError___closed__8____x40_GcodeLean_Step___hyg_46_();
lean_mark_persistent(l_GcodeLean_reprStepError___closed__8____x40_GcodeLean_Step___hyg_46_);
l_GcodeLean_instReprStepError___closed__0 = _init_l_GcodeLean_instReprStepError___closed__0();
lean_mark_persistent(l_GcodeLean_instReprStepError___closed__0);
l_GcodeLean_instReprStepError = _init_l_GcodeLean_instReprStepError();
lean_mark_persistent(l_GcodeLean_instReprStepError);
l_GcodeLean_instBEqStepError___closed__0 = _init_l_GcodeLean_instBEqStepError___closed__0();
lean_mark_persistent(l_GcodeLean_instBEqStepError___closed__0);
l_GcodeLean_instBEqStepError = _init_l_GcodeLean_instBEqStepError();
lean_mark_persistent(l_GcodeLean_instBEqStepError);
l_GcodeLean_checkBounds___closed__0 = _init_l_GcodeLean_checkBounds___closed__0();
lean_mark_persistent(l_GcodeLean_checkBounds___closed__0);
l_GcodeLean_checkBounds___closed__1 = _init_l_GcodeLean_checkBounds___closed__1();
lean_mark_persistent(l_GcodeLean_checkBounds___closed__1);
l_GcodeLean_checkBounds___closed__2 = _init_l_GcodeLean_checkBounds___closed__2();
lean_mark_persistent(l_GcodeLean_checkBounds___closed__2);
l_GcodeLean_checkSpindleForRapidMove___closed__0 = _init_l_GcodeLean_checkSpindleForRapidMove___closed__0();
lean_mark_persistent(l_GcodeLean_checkSpindleForRapidMove___closed__0);
l_GcodeLean_checkSpindleForLinearMove___closed__0 = _init_l_GcodeLean_checkSpindleForLinearMove___closed__0();
lean_mark_persistent(l_GcodeLean_checkSpindleForLinearMove___closed__0);
l_GcodeLean_computeTarget___lam__0___closed__0 = _init_l_GcodeLean_computeTarget___lam__0___closed__0();
l_GcodeLean_step___closed__0 = _init_l_GcodeLean_step___closed__0();
lean_mark_persistent(l_GcodeLean_step___closed__0);
l_GcodeLean_step___closed__1 = _init_l_GcodeLean_step___closed__1();
lean_mark_persistent(l_GcodeLean_step___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
