/*
 * This file is loading the irep
 * Ruby GEM code.
 *
 * IMPORTANT:
 *   This file was generated!
 *   All manual changes will get lost.
 */
#include <stdlib.h>
#include "mruby.h"
#include "mruby/irep.h"
#include "mruby/dump.h"
#include "mruby/string.h"
#include "mruby/proc.h"
#include "mruby/variable.h"
#include "mruby/array.h"
#include "mruby/hash.h"
#include <stdint.h>
const uint8_t gem_mrblib_irep_mruby_toplevel_ext[] = {
0x52,0x49,0x54,0x45,0x30,0x30,0x30,0x31,0xfb,0x11,0x00,0x00,0x01,0x59,0x4d,0x41,
0x54,0x5a,0x30,0x30,0x30,0x30,0x49,0x52,0x45,0x50,0x00,0x00,0x01,0x3b,0x30,0x30,
0x30,0x30,0x00,0x05,0x00,0x00,0x00,0x00,0x00,0x85,0x00,0x01,0x00,0x02,0x00,0x00,
0x00,0x12,0x00,0x80,0x00,0x06,0x00,0x80,0x40,0x47,0x01,0x00,0x02,0xc0,0x00,0x80,
0x00,0x46,0x00,0x80,0x00,0x06,0x00,0x80,0x40,0x47,0x01,0x00,0x04,0xc0,0x00,0x80,
0x40,0x46,0x00,0x80,0x00,0x06,0x00,0x80,0x40,0x47,0x01,0x00,0x06,0xc0,0x00,0x80,
0x80,0x46,0x00,0x80,0x00,0x06,0x00,0x80,0x40,0x47,0x01,0x00,0x08,0xc0,0x00,0x80,
0xc0,0x46,0x00,0x80,0x01,0x84,0x00,0x00,0x00,0x4a,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x04,0x00,0x07,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x00,0x00,0x07,0x70,0x72,
0x69,0x76,0x61,0x74,0x65,0x00,0x00,0x09,0x70,0x72,0x6f,0x74,0x65,0x63,0x74,0x65,
0x64,0x00,0x00,0x06,0x70,0x75,0x62,0x6c,0x69,0x63,0x00,0x00,0x00,0x00,0x46,0x00,
0x03,0x00,0x06,0x00,0x00,0x00,0x08,0x00,0x08,0x00,0x26,0x01,0x80,0x00,0x06,0x01,
0x80,0x00,0x20,0x02,0x01,0x00,0x37,0x02,0x80,0x40,0x01,0x02,0x01,0x40,0x38,0x01,
0x80,0x7f,0xa0,0x01,0x80,0x00,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,
0x05,0x63,0x6c,0x61,0x73,0x73,0x00,0x00,0x07,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,
0x00,0x00,0x00,0x00,0x20,0x00,0x03,0x00,0x04,0x00,0x00,0x00,0x03,0x00,0x08,0x00,
0x26,0x01,0x80,0x00,0x05,0x01,0x80,0x00,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x20,0x00,0x03,0x00,0x04,0x00,0x00,0x00,0x03,0x00,0x08,0x00,
0x26,0x01,0x80,0x00,0x05,0x01,0x80,0x00,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x20,0x00,0x03,0x00,0x04,0x00,0x00,0x00,0x03,0x00,0x08,0x00,
0x26,0x01,0x80,0x00,0x05,0x01,0x80,0x00,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x45,0x4e,0x44,0x00,0x00,0x00,0x00,0x08,
};
void mrb_mruby_toplevel_ext_gem_init(mrb_state *mrb);
void mrb_mruby_toplevel_ext_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_toplevel_ext_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  mrb_load_irep(mrb, gem_mrblib_irep_mruby_toplevel_ext);
  if (mrb->exc) {
    mrb_print_error(mrb);
    exit(EXIT_FAILURE);
  }
  mrb_gc_arena_restore(mrb, ai);
}

void GENERATED_TMP_mrb_mruby_toplevel_ext_gem_final(mrb_state *mrb) {
}
