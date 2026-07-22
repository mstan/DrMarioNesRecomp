/* dr-mario_full_bank00_part02.c — PRG bank 0 function bodies (sub-part 2).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella dr-mario_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "dr-mario_full_decls.h"

void func_8FFE_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8FFE_b0");
#endif
label_8FFE:;
    /* $8FFE: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_9000:;
    /* $9000: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9002:;
    /* $9002: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9024; }
label_9004:;
    /* $9004: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0xAD); FLAG_NZ(g_cpu.X);
label_9006:;
    /* $9006: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA228 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9009:;
    /* $9009: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_900A:;
    /* $900A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x8B); FLAG_NZ(g_cpu.A);
label_900C:;
    /* $900C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_900D:;
    /* $900D: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x072A); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9010:;
    /* $9010: 8D */ maybe_trigger_vblank(4); nes_write(0x072A, g_cpu.A);
label_9013:;
    /* $9013: EE */ maybe_trigger_vblank(6); { uint16_t a=0x072A; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9016:;
    /* $9016: 20 */ maybe_trigger_vblank(6); func_9025_b0();
label_9019:;
    /* $9019: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_901A:;
    /* $901A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_900A;
    }
label_901C:;
    /* $901C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x52); FLAG_NZ(g_cpu.A);
label_901E:;
    /* $901E: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x04; FLAG_NZ(g_cpu.A);
label_9020:;
    /* $9020: 85 */ maybe_trigger_vblank(3); nes_write(0x52, g_cpu.A);
label_9022:;
    /* $9022: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAD; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9024:;
    /* $9024: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

