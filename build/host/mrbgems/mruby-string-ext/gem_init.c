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
const uint8_t gem_mrblib_irep_mruby_string_ext[] = {
0x52,0x49,0x54,0x45,0x30,0x30,0x30,0x31,0x79,0x20,0x00,0x00,0x05,0x16,0x4d,0x41,
0x54,0x5a,0x30,0x30,0x30,0x30,0x49,0x52,0x45,0x50,0x00,0x00,0x04,0xf8,0x30,0x30,
0x30,0x30,0x00,0x09,0x00,0x00,0x00,0x00,0x00,0x31,0x00,0x01,0x00,0x03,0x00,0x00,
0x00,0x05,0x00,0x80,0x00,0x05,0x01,0x00,0x00,0x05,0x00,0x80,0x00,0x43,0x00,0x80,
0x00,0xc5,0x00,0x00,0x00,0x4a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x06,
0x53,0x74,0x72,0x69,0x6e,0x67,0x00,0x00,0x00,0x00,0xb1,0x00,0x01,0x00,0x02,0x00,
0x00,0x00,0x17,0x00,0x80,0x00,0x48,0x01,0x00,0x02,0xc0,0x00,0x80,0x00,0x46,0x00,
0x80,0x00,0x48,0x01,0x00,0x04,0xc0,0x00,0x80,0x40,0x46,0x00,0x80,0x00,0x48,0x01,
0x00,0x06,0xc0,0x00,0x80,0x80,0x46,0x00,0x80,0x00,0x48,0x01,0x00,0x08,0xc0,0x00,
0x80,0xc0,0x46,0x00,0x80,0x00,0x48,0x01,0x00,0x0a,0xc0,0x00,0x81,0x00,0x46,0x00,
0x80,0x00,0x48,0x01,0x00,0x0c,0xc0,0x00,0x81,0x40,0x46,0x00,0x80,0x00,0x48,0x01,
0x00,0x0e,0xc0,0x00,0x81,0x80,0x46,0x00,0x80,0x03,0x04,0x00,0x00,0x00,0x29,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x06,0x6c,0x73,0x74,0x72,0x69,0x70,0x00,
0x00,0x06,0x72,0x73,0x74,0x72,0x69,0x70,0x00,0x00,0x05,0x73,0x74,0x72,0x69,0x70,
0x00,0x00,0x07,0x6c,0x73,0x74,0x72,0x69,0x70,0x21,0x00,0x00,0x07,0x72,0x73,0x74,
0x72,0x69,0x70,0x21,0x00,0x00,0x06,0x73,0x74,0x72,0x69,0x70,0x21,0x00,0x00,0x07,
0x63,0x61,0x73,0x65,0x63,0x6d,0x70,0x00,0x00,0x00,0x00,0xc9,0x00,0x04,0x00,0x07,
0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x26,0x01,0x3f,0xff,0x83,0x02,0x00,0x00,0x06,
0x02,0x00,0x00,0x20,0x02,0x00,0x40,0xaf,0x01,0x81,0x00,0x01,0x00,0x40,0x01,0x97,
0x02,0x00,0x80,0x01,0x02,0x00,0x80,0xad,0x01,0x01,0x00,0x01,0x02,0x00,0x00,0x3d,
0x02,0x80,0x00,0x06,0x03,0x00,0x80,0x01,0x02,0x81,0x00,0xa0,0x02,0x00,0xc0,0xa0,
0x02,0x40,0x01,0x99,0x02,0x00,0x80,0x01,0x02,0x80,0xc0,0x01,0x02,0x01,0x40,0xb4,
0x02,0x3f,0xf9,0x98,0x02,0x00,0xc0,0x01,0x02,0xbf,0xff,0x83,0x02,0x01,0x80,0xb6,
0x02,0x40,0x03,0x19,0x02,0x00,0x00,0x06,0x02,0x80,0x80,0x01,0x03,0x00,0xc0,0x01,
0x02,0x81,0x40,0x41,0x02,0x01,0x00,0xa0,0x00,0x40,0x00,0x97,0x02,0x00,0x00,0xbd,
0x02,0x00,0x00,0x29,0x00,0x00,0x00,0x02,0x10,0x00,0x06,0x20,0x0c,0x0a,0x0d,0x09,
0x0b,0x10,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x04,0x73,0x69,0x7a,0x65,0x00,0x00,
0x01,0x2d,0x00,0x00,0x01,0x2b,0x00,0x00,0x08,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,
0x3f,0x00,0x00,0x02,0x5b,0x5d,0x00,0x00,0x02,0x3c,0x3d,0x00,0x00,0x02,0x3e,0x3d,
0x00,0x00,0x00,0x00,0xc6,0x00,0x04,0x00,0x07,0x00,0x00,0x00,0x20,0x00,0x00,0x00,
0x26,0x01,0x3f,0xff,0x83,0x02,0x00,0x00,0x06,0x02,0x00,0x00,0x20,0x02,0x00,0x40,
0xaf,0x01,0x81,0x00,0x01,0x00,0x40,0x01,0x97,0x02,0x00,0xc0,0x01,0x02,0x00,0x40,
0xaf,0x01,0x81,0x00,0x01,0x02,0x00,0x00,0x3d,0x02,0x80,0x00,0x06,0x03,0x00,0xc0,
0x01,0x02,0x80,0xc0,0xa0,0x02,0x00,0x80,0xa0,0x02,0x40,0x01,0x99,0x02,0x00,0x80,
0x01,0x02,0x80,0xc0,0x01,0x02,0x01,0x00,0xb4,0x02,0x3f,0xf9,0x98,0x02,0x00,0xc0,
0x01,0x02,0xbf,0xff,0x83,0x02,0x01,0x40,0xb6,0x02,0x40,0x03,0x19,0x02,0x00,0x00,
0x06,0x02,0x80,0x80,0x01,0x03,0x00,0xc0,0x01,0x02,0x81,0x40,0x41,0x02,0x00,0xc0,
0xa0,0x00,0x40,0x00,0x97,0x02,0x00,0x00,0xbd,0x02,0x00,0x00,0x29,0x00,0x00,0x00,
0x02,0x10,0x00,0x07,0x20,0x0c,0x0a,0x0d,0x09,0x0b,0x00,0x10,0x00,0x00,0x00,0x00,
0x00,0x06,0x00,0x04,0x73,0x69,0x7a,0x65,0x00,0x00,0x01,0x2d,0x00,0x00,0x08,0x69,
0x6e,0x63,0x6c,0x75,0x64,0x65,0x3f,0x00,0x00,0x02,0x5b,0x5d,0x00,0x00,0x02,0x3c,
0x3d,0x00,0x00,0x02,0x3e,0x3d,0x00,0x00,0x00,0x01,0x0b,0x00,0x04,0x00,0x07,0x00,
0x00,0x00,0x2e,0x00,0x00,0x00,0x26,0x01,0x3f,0xff,0x83,0x02,0x00,0x00,0x06,0x02,
0x00,0x00,0x20,0x02,0x00,0x40,0xaf,0x01,0x81,0x00,0x01,0x00,0x40,0x01,0x97,0x02,
0x00,0x80,0x01,0x02,0x00,0x80,0xad,0x01,0x01,0x00,0x01,0x02,0x00,0x00,0x3d,0x02,
0x80,0x00,0x06,0x03,0x00,0x80,0x01,0x02,0x81,0x00,0xa0,0x02,0x00,0xc0,0xa0,0x02,
0x40,0x01,0x99,0x02,0x00,0x80,0x01,0x02,0x80,0xc0,0x01,0x02,0x01,0x40,0xb4,0x02,
0x3f,0xf9,0x98,0x00,0x40,0x01,0x97,0x02,0x00,0xc0,0x01,0x02,0x00,0x40,0xaf,0x01,
0x81,0x00,0x01,0x02,0x00,0x00,0xbd,0x02,0x80,0x00,0x06,0x03,0x00,0xc0,0x01,0x02,
0x81,0x00,0xa0,0x02,0x00,0xc0,0xa0,0x02,0x40,0x01,0x99,0x02,0x00,0x80,0x01,0x02,
0x80,0xc0,0x01,0x02,0x01,0x40,0xb4,0x02,0x3f,0xf9,0x98,0x02,0x00,0xc0,0x01,0x02,
0xbf,0xff,0x83,0x02,0x01,0x80,0xb6,0x02,0x40,0x03,0x19,0x02,0x00,0x00,0x06,0x02,
0x80,0x80,0x01,0x03,0x00,0xc0,0x01,0x02,0x81,0x40,0x41,0x02,0x01,0x00,0xa0,0x00,
0x40,0x00,0x97,0x02,0x00,0x01,0x3d,0x02,0x00,0x00,0x29,0x00,0x00,0x00,0x03,0x10,
0x00,0x06,0x20,0x0c,0x0a,0x0d,0x09,0x0b,0x10,0x00,0x07,0x20,0x0c,0x0a,0x0d,0x09,
0x0b,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x04,0x73,0x69,0x7a,0x65,0x00,
0x00,0x01,0x2d,0x00,0x00,0x01,0x2b,0x00,0x00,0x08,0x69,0x6e,0x63,0x6c,0x75,0x64,
0x65,0x3f,0x00,0x00,0x02,0x5b,0x5d,0x00,0x00,0x02,0x3c,0x3d,0x00,0x00,0x02,0x3e,
0x3d,0x00,0x00,0x00,0x00,0x64,0x00,0x03,0x00,0x05,0x00,0x00,0x00,0x0e,0x00,0x00,
0x00,0x26,0x01,0x80,0x00,0x06,0x01,0x80,0x00,0x20,0x01,0x00,0xc0,0x01,0x01,0x80,
0x80,0x01,0x02,0x00,0x00,0x06,0x01,0x80,0x40,0xb2,0x01,0xc0,0x01,0x19,0x01,0x80,
0x00,0x05,0x00,0x40,0x01,0x97,0x01,0x80,0x00,0x06,0x02,0x00,0x80,0x01,0x01,0x80,
0x80,0xa0,0x01,0x80,0x00,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x06,
0x6c,0x73,0x74,0x72,0x69,0x70,0x00,0x00,0x02,0x3d,0x3d,0x00,0x00,0x07,0x72,0x65,
0x70,0x6c,0x61,0x63,0x65,0x00,0x00,0x00,0x00,0x64,0x00,0x03,0x00,0x05,0x00,0x00,
0x00,0x0e,0x00,0x00,0x00,0x26,0x01,0x80,0x00,0x06,0x01,0x80,0x00,0x20,0x01,0x00,
0xc0,0x01,0x01,0x80,0x80,0x01,0x02,0x00,0x00,0x06,0x01,0x80,0x40,0xb2,0x01,0xc0,
0x01,0x19,0x01,0x80,0x00,0x05,0x00,0x40,0x01,0x97,0x01,0x80,0x00,0x06,0x02,0x00,
0x80,0x01,0x01,0x80,0x80,0xa0,0x01,0x80,0x00,0x29,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x03,0x00,0x06,0x72,0x73,0x74,0x72,0x69,0x70,0x00,0x00,0x02,0x3d,0x3d,0x00,
0x00,0x07,0x72,0x65,0x70,0x6c,0x61,0x63,0x65,0x00,0x00,0x00,0x00,0x63,0x00,0x03,
0x00,0x05,0x00,0x00,0x00,0x0e,0x00,0x00,0x00,0x26,0x01,0x80,0x00,0x06,0x01,0x80,
0x00,0x20,0x01,0x00,0xc0,0x01,0x01,0x80,0x80,0x01,0x02,0x00,0x00,0x06,0x01,0x80,
0x40,0xb2,0x01,0xc0,0x01,0x19,0x01,0x80,0x00,0x05,0x00,0x40,0x01,0x97,0x01,0x80,
0x00,0x06,0x02,0x00,0x80,0x01,0x01,0x80,0x80,0xa0,0x01,0x80,0x00,0x29,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x05,0x73,0x74,0x72,0x69,0x70,0x00,0x00,0x02,
0x3d,0x3d,0x00,0x00,0x07,0x72,0x65,0x70,0x6c,0x61,0x63,0x65,0x00,0x00,0x00,0x00,
0x41,0x00,0x03,0x00,0x05,0x00,0x00,0x00,0x07,0x02,0x00,0x00,0x26,0x01,0x80,0x00,
0x06,0x01,0x80,0x00,0x20,0x02,0x00,0x40,0x01,0x02,0x00,0x00,0x20,0x01,0x80,0x40,
0xa0,0x01,0x80,0x00,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x08,0x64,
0x6f,0x77,0x6e,0x63,0x61,0x73,0x65,0x00,0x00,0x03,0x3c,0x3d,0x3e,0x00,0x45,0x4e,
0x44,0x00,0x00,0x00,0x00,0x08,
};
void mrb_mruby_string_ext_gem_init(mrb_state *mrb);
void mrb_mruby_string_ext_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_string_ext_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  mrb_mruby_string_ext_gem_init(mrb);
  mrb_load_irep(mrb, gem_mrblib_irep_mruby_string_ext);
  if (mrb->exc) {
    mrb_print_error(mrb);
    exit(EXIT_FAILURE);
  }
  mrb_gc_arena_restore(mrb, ai);
}

void GENERATED_TMP_mrb_mruby_string_ext_gem_final(mrb_state *mrb) {
  mrb_mruby_string_ext_gem_final(mrb);
}
