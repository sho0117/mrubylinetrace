/*
 * This file contains a list of all
 * initializing methods which are
 * necessary to bootstrap all gems.
 *
 * IMPORTANT:
 *   This file was generated!
 *   All manual changes will get lost.
 */

#include "mruby.h"

void GENERATED_TMP_mrb_mruby_print_gem_init(mrb_state* mrb);
void GENERATED_TMP_mrb_mruby_math_gem_init(mrb_state* mrb);
void GENERATED_TMP_mrb_mruby_enum_ext_gem_init(mrb_state* mrb);
void GENERATED_TMP_mrb_mruby_hs_regexp_gem_init(mrb_state* mrb);

void GENERATED_TMP_mrb_mruby_print_gem_final(mrb_state* mrb);
void GENERATED_TMP_mrb_mruby_math_gem_final(mrb_state* mrb);
void GENERATED_TMP_mrb_mruby_enum_ext_gem_final(mrb_state* mrb);
void GENERATED_TMP_mrb_mruby_hs_regexp_gem_final(mrb_state* mrb);

void
mrb_init_mrbgems(mrb_state *mrb) {
GENERATED_TMP_mrb_mruby_print_gem_init(mrb);
GENERATED_TMP_mrb_mruby_math_gem_init(mrb);
GENERATED_TMP_mrb_mruby_enum_ext_gem_init(mrb);
GENERATED_TMP_mrb_mruby_hs_regexp_gem_init(mrb);
}

void
mrb_final_mrbgems(mrb_state *mrb) {
GENERATED_TMP_mrb_mruby_print_gem_final(mrb);
GENERATED_TMP_mrb_mruby_math_gem_final(mrb);
GENERATED_TMP_mrb_mruby_enum_ext_gem_final(mrb);
GENERATED_TMP_mrb_mruby_hs_regexp_gem_final(mrb);
}
