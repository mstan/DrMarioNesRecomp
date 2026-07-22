/* dr-mario_full_bank01_part16.c — PRG bank 1 function bodies (sub-part 16).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella dr-mario_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "dr-mario_full_decls.h"

void func_E8EC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E8EC");
#endif
label_E8EC:;
    /* $E8EC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB081 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E8EF:;
    /* $E8EF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xBD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E8F1:;
    /* $E8F1: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_E8F3:;
    /* $E8F3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xBD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E8F5:;
    /* $E8F5: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xFF + g_cpu.X) & 0xFF), g_cpu.A);
label_E8F7:;
    /* $E8F7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE8F7); return;
}

void func_E931(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E931");
#endif
label_E931:;
    /* $E931: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xE922 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E934:;
    /* $E934: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xA8ED); FLAG_NZ(g_cpu.A);
label_E937:;
    /* $E937: EA */ maybe_trigger_vblank(2); /* NOP */
label_E938:;
    /* $E938: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_E939:;
    /* $E939: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xED00); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E93C:;
    /* $E93C: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xEC + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E93E:;
    /* $E93E: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_E93F:;
    /* $E93F: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xED6C); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E942:;
    /* $E942: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E931;
    }
label_E944:;
    /* $E944: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x36FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E947:;
    /* $E947: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x9F; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E949:;
    /* $E949: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xB1B1; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E94C:;
    /* $E94C: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_E94D:;
    /* $E94D: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3C38 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E950:;
    /* $E950: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x383A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E953:;
    /* $E953: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x38 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E955:;
    /* $E955: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3838 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E958:;
    /* $E958: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x9F02 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E95B:;
    /* $E95B: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xB0); FLAG_NZ(g_cpu.A);
label_E95D:;
    /* $E95D: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_E95E:;
    /* $E95E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E95F:;
    /* $E95F: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_E960:;
    /* $E960: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_E961:;
    /* $E961: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBA26 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E964:;
    /* $E964: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x22); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E966:;
    /* $E966: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E967:;
    /* $E967: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9F02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E96A:;
    /* $E96A: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xB1B1; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E96D:;
    /* $E96D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_E96E:;
    /* $E96E: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3C3A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E971:;
    /* $E971: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x383A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E974:;
    /* $E974: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x089F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E977:;
    /* $E977: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xE93D); return; }
label_E979:;
    /* $E979: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xE9A5); return; }
label_E97B:;
    /* $E97B: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xB12A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_E97E:;
    /* $E97E: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_E97F:;
    /* $E97F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0E9F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E982:;
    /* $E982: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E984:;
    /* $E984: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_E985:;
    /* $E985: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3C38 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E988:;
    /* $E988: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x383A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E98B:;
    /* $E98B: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x38 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E98D:;
    /* $E98D: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3838 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E990:;
    /* $E990: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x0202 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E993:;
    /* $E993: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E994:;
    /* $E994: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_E995:;
    /* $E995: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3C38 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E998:;
    /* $E998: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3C3C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E99B:;
    /* $E99B: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x059F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E99E:;
    /* $E99E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xE95A); return; }
label_E9A0:;
    /* $E9A0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E9A1:;
    /* $E9A1: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E9A3:;
    /* $E9A3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBA68 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E9A6:;
    /* $E9A6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E9A7:;
    /* $E9A7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E9A8:;
    /* $E9A8: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_E9A9:;
    /* $E9A9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBA02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E9AC:;
    /* $E9AC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E9AD:;
    /* $E9AD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xBD02, -1); return;
label_E9B0:; return;
label_E9B3:; return;
label_E9B4:; return;
label_E9B5:; return;
label_E9B8:; return;
label_E9BA:; return;
label_E9BD:; return;
label_E9BE:; return;
label_E9BF:; return;
label_E9C0:; return;
label_E9C1:; return;
label_E9C4:; return;
label_E9C5:; return;
label_E9C8:; return;
label_E9CA:; return;
label_E9CB:; return;
label_E9CC:; return;
label_E9CD:; return;
label_E9D0:; return;
label_E9D3:; return;
label_E9D5:; return;
label_E9D6:; return;
label_E9D7:; return;
label_E9D8:; return;
label_E9DB:; return;
label_E9DE:; return;
label_E9E1:; return;
label_E9E2:; return;
label_E9E5:; return;
label_E9E6:; return;
label_E9E7:; return;
label_E9E8:; return;
label_E9EA:; return;
label_E9ED:; return;
label_E9EE:; return;
label_E9EF:; return;
label_E9F2:; return;
label_E9F4:; return;
label_E9F6:; return;
label_E9F7:; return;
label_E9F8:; return;
label_E9F9:; return;
label_E9FC:; return;
label_E9FF:; return;
label_EA01:; return;
label_EA02:; return;
label_EA05:; return;
label_EA06:; return;
label_EA08:; return;
label_EA0B:; return;
label_EA0E:; return;
label_EA11:; return;
label_EA14:; return;
label_EA17:; return;
label_EA1A:; return;
label_EA1C:; return;
label_EA1D:; return;
label_EA1E:; return;
label_EA1F:; return;
label_EA20:; return;
label_EA23:; return;
label_EA26:; return;
label_EA29:; return;
label_EA2A:; return;
label_EA2B:; return;
label_EA2C:; return;
label_EA2D:; return;
label_EA2E:; return;
label_EA2F:; return;
label_EA30:; return;
label_EA33:; return;
label_EA36:; return;
label_EA38:; return;
label_EA3A:; return;
label_EA3C:; return;
label_EA3F:; return;
label_EA41:; return;
label_EA44:; return;
label_EA45:; return;
label_EA48:; return;
label_EA49:; return;
label_EA4C:; return;
label_EA4D:; return;
label_EA50:; return;
label_EA51:; return;
label_EA52:; return;
label_EA55:; return;
label_EA57:; return;
label_EA58:; return;
label_EA59:; return;
label_EA5A:; return;
label_EA5D:; return;
label_EA5F:; return;
label_EA60:; return;
label_EA61:; return;
label_EA62:; return;
label_EA65:; return;
label_EA66:; return;
label_EA67:; return;
label_EA68:; return;
label_EA69:; return;
label_EA6A:; return;
label_EA6D:; return;
label_EA6F:; return;
label_EA70:; return;
label_EA71:; return;
label_EA73:; return;
label_EA76:; return;
label_EA77:; return;
label_EA79:; return;
label_EA7C:; return;
label_EA7F:; return;
label_EA82:; return;
label_EA84:; return;
label_EA85:; return;
label_EA88:; return;
label_EA89:; return;
label_EA8C:; return;
label_EA8E:; return;
label_EA8F:; return;
label_EA90:; return;
label_EA91:; return;
label_EA9D:; return;
label_EA9E:; return;
label_EA9F:; return;
label_EAA0:; return;
label_EAA1:; return;
label_EAA7:; return;
label_EAA8:; return;
label_EAAA:; return;
label_EAAC:; return;
label_EAAE:; return;
label_EAB0:; return;
label_EAB2:; return;
label_EAB3:; return;
label_EAB5:; return;
label_EAB7:; return;
label_EAB9:; return;
label_EABB:; return;
label_EABD:; return;
label_EABF:; return;
label_EAC0:; return;
label_EAC3:; return;
label_EAC4:; return;
label_EAC6:; return;
label_EAC8:; return;
label_EACA:; return;
label_EACC:; return;
label_EACE:; return;
label_EACF:; return;
label_EAD0:; return;
label_EAD2:; return;
label_EAD4:; return;
label_EAD7:; return;
label_EAD9:; return;
label_EADB:; return;
label_EADD:; return;
label_EADE:; return;
label_EAE1:; return;
label_EAE4:; return;
label_EAE5:; return;
label_EAE8:; return;
label_EAE9:; return;
label_EAEA:; return;
label_EAEB:; return;
label_EAEE:; return;
label_EAF1:; return;
label_EAF4:; return;
label_EAF5:; return;
label_EAF6:; return;
label_EAF7:; return;
label_EAF9:; return;
label_EAFA:; return;
label_EAFB:; return;
label_EAFD:; return;
label_EB00:; return;
label_EB01:; return;
label_EB02:; return;
label_EB03:; return;
label_EB06:; return;
label_EB09:; return;
label_EB0A:; return;
label_EB0B:; return;
label_EB0C:; return;
label_EB0D:; return;
label_EB10:; return;
label_EB13:; return;
label_EB14:; return;
label_EB17:; return;
label_EB19:; return;
label_EB1B:; return;
label_EB1C:; return;
label_EB1F:; return;
label_EB20:; return;
label_EB22:; return;
label_EB25:; return;
label_EB26:; return;
label_EB29:; return;
label_EB2B:; return;
label_EB2D:; return;
label_EB2E:; return;
label_EB31:; return;
label_EB32:; return;
label_EB33:; return;
label_EB36:; return;
label_EB38:; return;
label_EB3B:; return;
label_EB3C:; return;
label_EB3D:; return;
label_EB3E:; return;
label_EB40:; return;
label_EB42:; return;
label_EB44:; return;
label_EB46:; return;
label_EB48:; return;
label_EB4B:; return;
label_EB4E:; return;
label_EB51:; return;
label_EB53:; return;
label_EB55:; return;
label_EB57:; return;
label_EB5B:; return;
label_EB5D:; return;
label_EB62:; return;
label_EB63:; return;
label_EB65:; return;
label_EB67:; return;
label_EB6A:; return;
label_EB6B:; return;
label_EB6D:; return;
label_EB6F:; return;
label_EB70:; return;
label_EB71:; return;
label_EB72:; return;
label_EB75:; return;
label_EB77:; return;
label_EB79:; return;
label_EBBB:; return;
label_EBBE:; return;
label_EBC1:; return;
label_EBC4:; return;
label_EBC6:; return;
label_EBC7:; return;
label_EBCA:; return;
label_EBCD:; return;
label_EBCF:; return;
label_EBD2:; return;
label_EBD3:; return;
label_EBD5:; return;
label_EBD6:; return;
label_EBD9:; return;
label_EBDA:; return;
label_EBDB:; return;
label_EBDC:; return;
label_EBDF:; return;
label_EBE1:; return;
label_EBE4:; return;
label_EBE6:; return;
label_EBE9:; return;
label_EBEC:; return;
label_EBED:; return;
label_EBEF:; return;
label_EBF1:; return;
label_EBF3:; return;
label_EBF6:; return;
label_EBF8:; return;
label_EBFB:; return;
label_EBFE:; return;
label_EBFF:; return;
label_EC00:; return;
label_EC03:; return;
label_EC05:; return;
label_EC08:; return;
label_EC0B:; return;
label_EC0C:; return;
label_EC0D:; return;
label_EC0E:; return;
label_EC0F:; return;
label_EC11:; return;
label_EC12:; return;
label_EC15:; return;
label_EC16:; return;
label_EC19:; return;
label_EC1B:; return;
label_EC1C:; return;
label_EC1F:; return;
label_EC20:; return;
label_EC22:; return;
label_EC23:; return;
label_EC25:; return;
label_EC28:; return;
label_EC2A:; return;
label_EC2C:; return;
label_EC2F:; return;
label_EC31:; return;
label_EC34:; return;
label_EC36:; return;
label_EC37:; return;
label_EC3A:; return;
label_EC3C:; return;
label_EC3E:; return;
label_EC41:; return;
label_EC43:; return;
label_EC46:; return;
label_EC49:; return;
label_EC4B:; return;
label_EC4D:; return;
label_EC50:; return;
label_EC52:; return;
label_EC54:; return;
label_EC55:; return;
label_EC58:; return;
label_EC5A:; return;
label_EC5C:; return;
label_EC5F:; return;
label_EC61:; return;
label_EC64:; return;
label_EC65:; return;
label_EC66:; return;
label_EC69:; return;
label_EC6B:; return;
label_EC6E:; return;
label_EC71:; return;
label_EC73:; return;
label_EC75:; return;
label_EC77:; return;
label_EC79:; return;
label_EC7B:; return;
label_EC7C:; return;
label_EC7D:; return;
label_EC80:; return;
label_EC82:; return;
label_EC84:; return;
label_EC85:; return;
label_EC87:; return;
label_EC89:; return;
label_EC8A:; return;
label_EC8C:; return;
label_EC8E:; return;
label_EC8F:; return;
label_EC90:; return;
label_EC93:; return;
label_EC95:; return;
label_EC97:; return;
label_EC98:; return;
label_EC9A:; return;
label_EC9D:; return;
label_EC9F:; return;
label_ECA0:; return;
label_ECA3:; return;
label_ECA6:; return;
label_ECA7:; return;
label_ECA8:; return;
label_ECAA:; return;
label_ECAC:; return;
label_ECAE:; return;
label_ECB1:; return;
label_ECB4:; return;
label_ECB5:; return;
label_ECB6:; return;
label_ECB7:; return;
label_ECB9:; return;
label_ECBA:; return;
label_ECBD:; return;
label_ECBF:; return;
label_ECC1:; return;
label_ECC2:; return;
label_ECC4:; return;
label_ECC7:; return;
label_ECC8:; return;
label_ECC9:; return;
label_ECCA:; return;
label_ECCC:; return;
label_ECCF:; return;
label_ECD2:; return;
label_ECD4:; return;
label_ECD7:; return;
label_ECD8:; return;
label_ECD9:; return;
label_ECDA:; return;
label_ECDC:; return;
label_ECDF:; return;
label_ECE1:; return;
label_ECE4:; return;
label_ECE7:; return;
label_ECE9:; return;
label_ECEC:; return;
label_ECEF:; return;
label_ECF0:; return;
label_ECF1:; return;
label_ECF2:; return;
label_ECF4:; return;
label_ECF7:; return;
label_ECF8:; return;
label_ECF9:; return;
label_ECFA:; return;
label_ECFC:; return;
label_ECFF:; return;
label_ED00:; return;
label_ED02:; return;
label_ED04:; return;
label_ED06:; return;
label_ED08:; return;
label_ED0A:; return;
label_ED0B:; return;
label_ED0E:; return;
label_ED10:; return;
label_ED12:; return;
label_ED13:; return;
label_ED16:; return;
label_ED18:; return;
label_ED1A:; return;
label_ED1B:; return;
label_ED1E:; return;
label_ED20:; return;
label_ED23:; return;
label_ED26:; return;
label_ED27:; return;
label_ED29:; return;
label_ED2A:; return;
label_ED2D:; return;
label_ED2F:; return;
label_ED31:; return;
label_ED32:; return;
label_ED35:; return;
label_ED37:; return;
label_ED3A:; return;
label_ED3D:; return;
label_ED3E:; return;
label_ED40:; return;
label_ED41:; return;
label_ED44:; return;
label_ED46:; return;
label_ED49:; return;
label_ED4B:; return;
label_ED4D:; return;
label_ED4E:; return;
label_ED51:; return;
label_ED53:; return;
label_ED54:; return;
label_ED56:; return;
label_ED59:; return;
label_ED5B:; return;
label_ED5C:; return;
label_ED5E:; return;
label_ED60:; return;
label_ED62:; return;
label_ED63:; return;
label_ED65:; return;
label_ED68:; return;
label_ED6A:; return;
label_ED6D:; return;
label_ED6F:; return;
label_ED71:; return;
label_ED74:; return;
label_ED77:; return;
label_ED79:; return;
label_ED7C:; return;
label_ED7E:; return;
label_ED81:; return;
label_ED82:; return;
label_ED84:; return;
label_ED86:; return;
label_ED87:; return;
label_ED88:; return;
label_ED89:; return;
label_ED8C:; return;
label_ED8E:; return;
label_ED8F:; return;
label_ED92:; return;
label_ED94:; return;
label_ED95:; return;
label_ED96:; return;
label_ED97:; return;
label_ED98:; return;
label_ED9B:; return;
label_ED9D:; return;
label_ED9E:; return;
label_EDA1:; return;
label_EDA3:; return;
label_EDA4:; return;
label_EDA5:; return;
label_EDA7:; return;
label_EDA9:; return;
label_EDAB:; return;
label_EDAE:; return;
label_EDB0:; return;
label_EDB1:; return;
label_EDB3:; return;
label_EDB6:; return;
label_EDB8:; return;
label_EDBA:; return;
label_EDBB:; return;
label_EDBE:; return;
label_EDBF:; return;
label_EDC1:; return;
label_EDC2:; return;
label_EDC4:; return;
label_EDC5:; return;
label_EDC6:; return;
label_EDC8:; return;
label_EDCB:; return;
label_EDCC:; return;
label_EDCE:; return;
label_EDD1:; return;
label_EDD3:; return;
label_EDD4:; return;
label_EDD6:; return;
label_EDD9:; return;
label_EDDB:; return;
label_EDDC:; return;
label_EDDD:; return;
label_EDE0:; return;
label_EDE2:; return;
label_EE34:; return;
label_EE36:; return;
label_EE39:; return;
label_EE3C:; return;
label_EE3D:; return;
label_EE40:; return;
label_EE42:; return;
label_EE45:; return;
label_EE46:; return;
label_EE49:; return;
label_EE4B:; return;
label_EE4E:; return;
label_EE4F:; return;
label_EE51:; return;
label_EE52:; return;
label_EE54:; return;
label_EE57:; return;
label_EE58:; return;
label_EE5A:; return;
label_EE5B:; return;
label_EE5C:; return;
label_EE5D:; return;
label_EE5F:; return;
label_EE61:; return;
label_EE63:; return;
label_EE64:; return;
label_EEAD:; return;
label_EEAE:; return;
label_EEAF:; return;
label_EEB0:; return;
label_EEB3:; return;
label_EEB4:; return;
label_EEB5:; return;
label_EEB8:; return;
label_EEBB:; return;
label_EEBC:; return;
label_EEBD:; return;
label_EEC0:; return;
label_EEC3:; return;
label_EEC4:; return;
label_EEC5:; return;
label_EEC7:; return;
label_EEC8:; return;
label_EECB:; return;
label_EECD:; return;
label_EECF:; return;
label_EED1:; return;
label_EED3:; return;
label_EED4:; return;
label_EED7:; return;
label_EED8:; return;
label_EED9:; return;
label_EEDA:; return;
label_EEDB:; return;
label_EEDE:; return;
label_EEE1:; return;
label_EEE2:; return;
label_EEE3:; return;
label_EEE5:; return;
label_EEE6:; return;
label_EEE8:; return;
label_EEE9:; return;
label_EEEA:; return;
label_EEEB:; return;
label_EEED:; return;
label_EEF0:; return;
label_EEF3:; return;
label_EEF4:; return;
label_EEF5:; return;
label_EEF6:; return;
label_EEF9:; return;
label_EEFC:; return;
label_EEFF:; return;
label_EF02:; return;
label_EF03:; return;
label_EF06:; return;
label_EF09:; return;
label_EF0B:; return;
label_EF0E:; return;
label_EF11:; return;
label_EF12:; return;
label_EF13:; return;
label_EF16:; return;
label_EF19:; return;
label_EF1A:; return;
label_EF1B:; return;
label_EF1C:; return;
label_EF1D:; return;
label_EF20:; return;
label_EF23:; return;
label_EF24:; return;
label_EF27:; return;
label_EF29:; return;
label_EF2A:; return;
label_EF2C:; return;
label_EF2D:; return;
label_EF2E:; return;
label_EF31:; return;
label_EF34:; return;
label_EF37:; return;
label_EF38:; return;
label_EF39:; return;
label_EF3A:; return;
label_EF3B:; return;
label_EF3C:; return;
label_EF3F:; return;
label_EF40:; return;
label_EF41:; return;
label_EF42:; return;
label_EF43:; return;
label_EF46:; return;
label_EF49:; return;
label_EF4A:; return;
label_EF4B:; return;
label_EF4E:; return;
label_EF51:; return;
label_EF52:; return;
label_EF53:; return;
label_EF55:; return;
label_EF56:; return;
label_EF59:; return;
label_EF5B:; return;
label_EF5D:; return;
label_EF5F:; return;
label_EF61:; return;
label_EF62:; return;
label_EF65:; return;
label_EF66:; return;
label_EF67:; return;
label_EF68:; return;
label_EF69:; return;
label_EF6C:; return;
label_EF6F:; return;
label_EF70:; return;
label_EF71:; return;
label_EF73:; return;
label_EF74:; return;
label_EF77:; return;
label_EF78:; return;
label_EF7B:; return;
label_EF7D:; return;
label_EF7E:; return;
label_EF80:; return;
label_EF82:; return;
label_EF85:; return;
label_EF86:; return;
label_EF87:; return;
label_EF89:; return;
label_EF8B:; return;
label_EF8E:; return;
label_EF91:; return;
label_EF92:; return;
label_EF95:; return;
label_EF96:; return;
label_EF98:; return;
label_EF9A:; return;
label_EF9B:; return;
label_EF9E:; return;
label_EFA0:; return;
label_EFA1:; return;
label_EFA4:; return;
label_EFA6:; return;
label_EFA7:; return;
label_EFA9:; return;
label_EFAB:; return;
label_EFAC:; return;
label_EFAF:; return;
label_EFB1:; return;
label_EFB3:; return;
label_EFB4:; return;
label_EFB5:; return;
label_EFB8:; return;
label_EFBA:; return;
label_EFBC:; return;
label_EFBD:; return;
label_EFC0:; return;
label_EFC1:; return;
label_EFC3:; return;
label_EFC5:; return;
label_EFC8:; return;
label_EFC9:; return;
label_EFCB:; return;
label_EFCD:; return;
label_EFCE:; return;
label_EFCF:; return;
label_EFD2:; return;
label_EFD4:; return;
label_EFD5:; return;
label_EFD8:; return;
label_EFD9:; return;
label_EFDC:; return;
label_EFDE:; return;
label_EFE1:; return;
label_EFE2:; return;
label_EFE4:; return;
label_EFE6:; return;
label_EFE7:; return;
label_EFE8:; return;
label_EFEA:; return;
label_EFEC:; return;
label_EFEE:; return;
label_EFF1:; return;
label_EFF2:; return;
label_EFF4:; return;
label_EFF6:; return;
label_EFF8:; return;
label_EFFA:; return;
label_EFFC:; return;
label_EFFE:; return;
label_F001:; return;
label_F002:; return;
label_F004:; return;
label_F006:; return;
label_F007:; return;
label_F008:; return;
label_F00A:; return;
label_F00C:; return;
label_F00E:; return;
label_F011:; return;
label_F012:; return;
label_F013:; return;
label_F014:; return;
label_F015:; return;
label_F016:; return;
label_F017:; return;
label_F018:; return;
label_F019:; return;
label_F01A:; return;
label_F01B:; return;
label_F01D:; return;
label_F01F:; return;
label_F022:; return;
label_F024:; return;
label_F026:; return;
label_F028:; return;
label_F02B:; return;
label_F02C:; return;
label_F02E:; return;
label_F030:; return;
label_F032:; return;
label_F034:; return;
label_F036:; return;
label_F038:; return;
label_F03A:; return;
label_F03C:; return;
label_F03E:; return;
label_F041:; return;
label_F043:; return;
label_F045:; return;
label_F047:; return;
label_F048:; return;
label_F04A:; return;
label_F04B:; return;
label_F04D:; return;
label_F04F:; return;
label_F052:; return;
label_F053:; return;
label_F055:; return;
label_F056:; return;
label_F058:; return;
label_F05A:; return;
label_F05C:; return;
label_F05F:; return;
label_F062:; return;
label_F064:; return;
label_F066:; return;
label_F068:; return;
label_F06B:; return;
label_F06D:; return;
label_F06F:; return;
label_F071:; return;
label_F074:; return;
label_F077:; return;
label_F079:; return;
label_F07C:; return;
label_F07E:; return;
label_F080:; return;
label_F083:; return;
label_F086:; return;
label_F088:; return;
label_F089:; return;
label_F08A:; return;
label_F08B:; return;
label_F08C:; return;
label_F08D:; return;
label_F090:; return;
label_F092:; return;
label_F093:; return;
label_F094:; return;
label_F095:; return;
label_F096:; return;
label_F097:; return;
label_F09A:; return;
label_F09C:; return;
label_F09F:; return;
label_F0A0:; return;
label_F0A1:; return;
label_F0A3:; return;
label_F0A5:; return;
label_F0A7:; return;
label_F0A8:; return;
label_F0AB:; return;
label_F0AC:; return;
label_F0AE:; return;
label_F0AF:; return;
label_F0B2:; return;
label_F0B3:; return;
label_F0B4:; return;
label_F0B7:; return;
label_F0B9:; return;
label_F0BA:; return;
label_F0BB:; return;
label_F0BE:; return;
label_F0C0:; return;
label_F0C1:; return;
label_F0C4:; return;
label_F0C6:; return;
label_F0C7:; return;
label_F0CA:; return;
label_F0CD:; return;
label_F0D4:; return;
label_F0D7:; return;
label_F0D8:; return;
label_F0D9:; return;
label_F0DB:; return;
label_F0DE:; return;
label_F0DF:; return;
label_F0E0:; return;
label_F0E3:; return;
label_F0E4:; return;
label_F0E7:; return;
label_F0E9:; return;
label_F0EC:; return;
label_F0ED:; return;
label_F0F0:; return;
label_F0F3:; return;
label_F0F4:; return;
label_F0F5:; return;
label_F0F8:; return;
label_F0F9:; return;
label_F0FA:; return;
label_F0FD:; return;
label_F0FE:; return;
label_F0FF:; return;
label_F100:; return;
label_F103:; return;
label_F106:; return;
label_F108:; return;
label_F10B:; return;
label_F10D:; return;
label_F10E:; return;
label_F10F:; return;
label_F112:; return;
label_F114:; return;
label_F115:; return;
label_F118:; return;
label_F11A:; return;
label_F11C:; return;
label_F11D:; return;
label_F11F:; return;
label_F121:; return;
label_F123:; return;
label_F124:; return;
label_F127:; return;
label_F128:; return;
label_F129:; return;
label_F12A:; return;
label_F12B:; return;
label_F12E:; return;
label_F131:; return;
label_F132:; return;
label_F135:; return;
label_F136:; return;
label_F137:; return;
label_F13A:; return;
label_F13B:; return;
label_F13C:; return;
label_F13F:; return;
label_F140:; return;
label_F141:; return;
label_F144:; return;
label_F145:; return;
label_F146:; return;
label_F149:; return;
label_F14B:; return;
label_F14E:; return;
label_F14F:; return;
label_F150:; return;
label_F151:; return;
label_F152:; return;
label_F155:; return;
label_F158:; return;
label_F159:; return;
label_F15A:; return;
label_F15D:; return;
label_F15E:; return;
label_F15F:; return;
label_F162:; return;
label_F163:; return;
label_F164:; return;
label_F167:; return;
label_F168:; return;
label_F169:; return;
label_F16C:; return;
label_F16D:; return;
label_F16F:; return;
label_F170:; return;
label_F173:; return;
label_F176:; return;
label_F177:; return;
label_F178:; return;
label_F179:; return;
label_F17A:; return;
label_F17B:; return;
label_F17E:; return;
label_F180:; return;
label_F183:; return;
label_F185:; return;
label_F188:; return;
label_F18A:; return;
label_F18D:; return;
label_F18F:; return;
label_F192:; return;
label_F194:; return;
label_F197:; return;
label_F199:; return;
label_F19C:; return;
label_F19E:; return;
label_F1A1:; return;
label_F1A3:; return;
label_F1A6:; return;
label_F1A8:; return;
label_F1AB:; return;
label_F1AD:; return;
label_F1B0:; return;
label_F1B2:; return;
label_F1B5:; return;
label_F1B7:; return;
label_F1BA:; return;
label_F1BC:; return;
label_F1BF:; return;
label_F1C1:; return;
label_F1C4:; return;
label_F1C6:; return;
label_F1C9:; return;
label_F1CB:; return;
label_F1CC:; return;
label_F1CF:; return;
label_F1D1:; return;
label_F1D2:; return;
label_F1D5:; return;
label_F1D6:; return;
label_F1D9:; return;
label_F1DA:; return;
label_F1DC:; return;
label_F1DD:; return;
label_F1E0:; return;
label_F1E3:; return;
label_F1E4:; return;
label_F1E6:; return;
label_F1E7:; return;
label_F1E8:; return;
label_F1EB:; return;
label_F1EC:; return;
label_F1EF:; return;
label_F1F0:; return;
label_F1F2:; return;
label_F1F3:; return;
label_F1F5:; return;
label_F1F8:; return;
label_F1FA:; return;
label_F1FD:; return;
label_F1FF:; return;
label_F202:; return;
label_F204:; return;
label_F207:; return;
label_F209:; return;
label_F20C:; return;
label_F20E:; return;
label_F211:; return;
label_F213:; return;
label_F216:; return;
label_F218:; return;
label_F21B:; return;
label_F21D:; return;
label_F220:; return;
label_F222:; return;
label_F225:; return;
label_F227:; return;
label_F22A:; return;
label_F22C:; return;
label_F22F:; return;
label_F231:; return;
label_F234:; return;
label_F236:; return;
label_F239:; return;
label_F23B:; return;
label_F23E:; return;
label_F240:; return;
label_F243:; return;
label_F245:; return;
label_F246:; return;
label_F249:; return;
label_F24A:; return;
label_F24D:; return;
label_F24E:; return;
label_F250:; return;
label_F251:; return;
label_F252:; return;
label_F254:; return;
label_F255:; return;
label_F256:; return;
label_F257:; return;
label_F259:; return;
label_F25B:; return;
label_F25E:; return;
label_F260:; return;
label_F262:; return;
label_F265:; return;
label_F266:; return;
label_F269:; return;
label_F26B:; return;
label_F26E:; return;
label_F271:; return;
label_F274:; return;
label_F277:; return;
label_F278:; return;
label_F279:; return;
label_F27A:; return;
label_F27B:; return;
label_F27C:; return;
label_F27E:; return;
label_F280:; return;
label_F282:; return;
label_F284:; return;
label_F286:; return;
label_F288:; return;
label_F289:; return;
label_F28A:; return;
label_F28B:; return;
label_F28C:; return;
label_F28E:; return;
label_F28F:; return;
label_F291:; return;
label_F293:; return;
label_F295:; return;
label_F297:; return;
label_F299:; return;
label_F29B:; return;
label_F29C:; return;
label_F29D:; return;
label_F29E:; return;
label_F29F:; return;
label_F2A0:; return;
label_F2A1:; return;
label_F2A2:; return;
label_F2A4:; return;
label_F2A6:; return;
label_F2A8:; return;
label_F2AA:; return;
label_F2AC:; return;
label_F2AE:; return;
label_F2AF:; return;
label_F2B0:; return;
label_F2B1:; return;
label_F2B2:; return;
label_F2B4:; return;
label_F2B5:; return;
label_F2B7:; return;
label_F2B8:; return;
label_F2B9:; return;
label_F2BA:; return;
label_F2BC:; return;
label_F2BE:; return;
label_F2BF:; return;
label_F2C0:; return;
label_F2C1:; return;
label_F2C3:; return;
label_F2C5:; return;
label_F2C7:; return;
label_F2C9:; return;
label_F2CB:; return;
label_F2CD:; return;
label_F2CF:; return;
label_F2D1:; return;
label_F2D2:; return;
label_F2D3:; return;
label_F2D5:; return;
label_F2D7:; return;
label_F2D8:; return;
label_F2D9:; return;
label_F2DA:; return;
label_F2DC:; return;
label_F2DE:; return;
label_F2E0:; return;
label_F2E2:; return;
label_F2E4:; return;
label_F2E6:; return;
label_F2E8:; return;
label_F2EA:; return;
label_F2EB:; return;
label_F2EC:; return;
label_F2EE:; return;
label_F2F0:; return;
label_F2F1:; return;
label_F2F2:; return;
label_F2F3:; return;
label_F2F4:; return;
label_F2F6:; return;
label_F2F8:; return;
label_F2FA:; return;
label_F2FC:; return;
label_F2FE:; return;
label_F300:; return;
label_F302:; return;
label_F304:; return;
label_F306:; return;
label_F307:; return;
label_F309:; return;
label_F30A:; return;
label_F30C:; return;
label_F30E:; return;
label_F310:; return;
label_F312:; return;
label_F314:; return;
label_F316:; return;
label_F318:; return;
label_F31A:; return;
label_F31C:; return;
label_F31D:; return;
label_F31E:; return;
label_F320:; return;
label_F322:; return;
label_F323:; return;
label_F324:; return;
label_F325:; return;
label_F32F:; return;
label_F330:; return;
label_F332:; return;
label_F334:; return;
label_F335:; return;
label_F336:; return;
label_F337:; return;
label_F338:; return;
label_F33A:; return;
label_F33B:; return;
label_F33D:; return;
label_F33F:; return;
label_F341:; return;
label_F342:; return;
label_F343:; return;
label_F344:; return;
label_F34A:; return;
label_F34C:; return;
label_F34D:; return;
label_F34E:; return;
label_F34F:; return;
label_F350:; return;
label_F351:; return;
label_F352:; return;
label_F353:; return;
label_F356:; return;
label_F357:; return;
label_F358:; return;
label_F359:; return;
label_F35C:; return;
label_F35D:; return;
label_F35E:; return;
label_F35F:; return;
label_F360:; return;
label_F362:; return;
label_F364:; return;
label_F365:; return;
label_F366:; return;
label_F367:; return;
label_F369:; return;
label_F36B:; return;
label_F36D:; return;
label_F36F:; return;
label_F371:; return;
label_F373:; return;
label_F375:; return;
label_F377:; return;
label_F378:; return;
label_F379:; return;
label_F37B:; return;
label_F37D:; return;
label_F37F:; return;
label_F381:; return;
label_F383:; return;
label_F385:; return;
label_F387:; return;
label_F389:; return;
label_F38B:; return;
label_F38D:; return;
label_F38F:; return;
label_F390:; return;
label_F391:; return;
label_F392:; return;
label_F393:; return;
label_F394:; return;
label_F396:; return;
label_F398:; return;
label_F39A:; return;
label_F39C:; return;
label_F39E:; return;
label_F3A0:; return;
label_F3A2:; return;
label_F3A4:; return;
label_F3A6:; return;
label_F3A7:; return;
label_F3A8:; return;
label_F3AA:; return;
label_F3AB:; return;
label_F3AE:; return;
label_F3B0:; return;
label_F3B1:; return;
label_F3B4:; return;
label_F3B6:; return;
label_F3B8:; return;
label_F3BA:; return;
label_F3BC:; return;
label_F3BE:; return;
label_F3C0:; return;
label_F3C2:; return;
label_F3C3:; return;
label_F3C5:; return;
label_F3C6:; return;
label_F3C7:; return;
label_F3CA:; return;
label_F3CC:; return;
label_F3CE:; return;
label_F3D1:; return;
label_F3D2:; return;
label_F3D5:; return;
label_F3D8:; return;
label_F3D9:; return;
label_F3DA:; return;
label_F3DD:; return;
label_F3DF:; return;
label_F3E0:; return;
label_F3E1:; return;
label_F3E4:; return;
label_F3E6:; return;
label_F3E8:; return;
label_F3EB:; return;
label_F3EC:; return;
label_F3ED:; return;
label_F3EE:; return;
label_F3EF:; return;
label_F3F2:; return;
label_F3F4:; return;
label_F3F6:; return;
label_F3F9:; return;
label_F3FA:; return;
label_F3FB:; return;
label_F3FC:; return;
label_F3FD:; return;
label_F3FE:; return;
label_F400:; return;
label_F401:; return;
label_F402:; return;
label_F403:; return;
label_F405:; return;
label_F407:; return;
label_F408:; return;
label_F40B:; return;
label_F40D:; return;
label_F40E:; return;
label_F410:; return;
label_F412:; return;
label_F413:; return;
label_F414:; return;
label_F415:; return;
label_F416:; return;
label_F418:; return;
label_F41A:; return;
label_F41C:; return;
label_F41E:; return;
label_F420:; return;
label_F422:; return;
label_F424:; return;
label_F426:; return;
label_F428:; return;
label_F42A:; return;
label_F42C:; return;
label_F42E:; return;
label_F430:; return;
label_F431:; return;
label_F432:; return;
label_F433:; return;
label_F435:; return;
label_F437:; return;
label_F439:; return;
label_F43B:; return;
label_F43D:; return;
label_F43F:; return;
label_F441:; return;
label_F443:; return;
label_F445:; return;
label_F447:; return;
label_F449:; return;
label_F44B:; return;
label_F44D:; return;
label_F44F:; return;
label_F450:; return;
label_F453:; return;
label_F455:; return;
label_F457:; return;
label_F459:; return;
label_F45B:; return;
label_F45D:; return;
label_F45F:; return;
label_F461:; return;
label_F463:; return;
label_F465:; return;
label_F467:; return;
label_F469:; return;
label_F46B:; return;
label_F46D:; return;
label_F46E:; return;
label_F46F:; return;
label_F471:; return;
label_F474:; return;
label_F476:; return;
label_F477:; return;
label_F478:; return;
label_F47B:; return;
label_F47D:; return;
label_F47E:; return;
label_F47F:; return;
label_F482:; return;
label_F484:; return;
label_F486:; return;
label_F489:; return;
label_F48A:; return;
label_F48D:; return;
label_F490:; return;
label_F493:; return;
label_F495:; return;
label_F498:; return;
label_F499:; return;
label_F49C:; return;
label_F49E:; return;
label_F4A0:; return;
label_F4A2:; return;
label_F4A4:; return;
label_F4A6:; return;
label_F4A7:; return;
label_F4A9:; return;
label_F4AB:; return;
label_F4AC:; return;
label_F4AE:; return;
label_F4AF:; return;
label_F4B1:; return;
label_F4B4:; return;
label_F4B7:; return;
label_F4B9:; return;
label_F4BB:; return;
label_F4BD:; return;
label_F4C0:; return;
label_F4C3:; return;
label_F4C6:; return;
label_F4C9:; return;
label_F4CB:; return;
label_F4CC:; return;
label_F4CE:; return;
label_F4D0:; return;
label_F4D2:; return;
label_F4D4:; return;
label_F4D6:; return;
label_F4D8:; return;
label_F4DA:; return;
label_F4DC:; return;
label_F4DE:; return;
label_F4E0:; return;
label_F4E2:; return;
label_F4E4:; return;
label_F4E6:; return;
label_F4E8:; return;
label_F4EA:; return;
label_F4EB:; return;
label_F4ED:; return;
label_F4EF:; return;
label_F4F1:; return;
label_F4F3:; return;
label_F4F5:; return;
label_F4F7:; return;
label_F4F9:; return;
label_F4FB:; return;
label_F4FD:; return;
label_F4FF:; return;
label_F501:; return;
label_F503:; return;
label_F505:; return;
label_F508:; return;
label_F50A:; return;
label_F50C:; return;
label_F50E:; return;
label_F510:; return;
label_F512:; return;
label_F514:; return;
label_F516:; return;
label_F518:; return;
label_F519:; return;
label_F51A:; return;
label_F51B:; return;
label_F51C:; return;
label_F51F:; return;
label_F521:; return;
label_F523:; return;
label_F525:; return;
label_F526:; return;
label_F528:; return;
label_F52B:; return;
label_F52E:; return;
label_F52F:; return;
label_F531:; return;
label_F534:; return;
label_F537:; return;
label_F539:; return;
label_F53B:; return;
label_F53C:; return;
label_F53E:; return;
label_F53F:; return;
label_F541:; return;
label_F544:; return;
label_F545:; return;
label_F547:; return;
label_F548:; return;
label_F54A:; return;
label_F54B:; return;
label_F54D:; return;
label_F550:; return;
label_F553:; return;
label_F555:; return;
label_F557:; return;
label_F558:; return;
label_F55A:; return;
label_F55D:; return;
label_F560:; return;
label_F562:; return;
label_F565:; return;
label_F567:; return;
label_F56A:; return;
label_F56D:; return;
label_F56E:; return;
label_F571:; return;
label_F572:; return;
label_F574:; return;
label_F576:; return;
label_F579:; return;
label_F57B:; return;
label_F57D:; return;
label_F57F:; return;
label_F581:; return;
label_F582:; return;
label_F585:; return;
label_F587:; return;
label_F589:; return;
label_F58B:; return;
label_F58D:; return;
label_F58F:; return;
label_F591:; return;
label_F593:; return;
label_F595:; return;
label_F597:; return;
label_F59A:; return;
label_F59D:; return;
label_F59F:; return;
label_F5A1:; return;
label_F5A4:; return;
label_F5A7:; return;
label_F5AA:; return;
label_F5AC:; return;
label_F5AD:; return;
label_F5B0:; return;
label_F5B1:; return;
label_F5B4:; return;
label_F5B6:; return;
label_F5B7:; return;
label_F5B8:; return;
label_F5BB:; return;
label_F5BC:; return;
label_F5BF:; return;
label_F5C2:; return;
label_F5C5:; return;
label_F5C6:; return;
label_F5C8:; return;
label_F5C9:; return;
label_F5CC:; return;
label_F5CE:; return;
label_F5CF:; return;
label_F5D0:; return;
label_F5D1:; return;
label_F5D3:; return;
label_F5D4:; return;
label_F5D7:; return;
label_F5DA:; return;
label_F5DC:; return;
label_F5DD:; return;
label_F608:; return;
label_F609:; return;
label_F60C:; return;
label_F60D:; return;
label_F610:; return;
label_F613:; return;
label_F614:; return;
label_F615:; return;
label_F618:; return;
label_F619:; return;
label_F61C:; return;
label_F61D:; return;
label_F620:; return;
label_F621:; return;
label_F624:; return;
label_F626:; return;
label_F627:; return;
label_F62A:; return;
label_F62B:; return;
label_F62E:; return;
label_F630:; return;
label_F631:; return;
label_F632:; return;
label_F634:; return;
label_F635:; return;
label_F636:; return;
label_F638:; return;
label_F639:; return;
label_F63A:; return;
label_F63C:; return;
label_F63D:; return;
label_F63E:; return;
label_F640:; return;
label_F641:; return;
label_F642:; return;
label_F644:; return;
label_F645:; return;
label_F648:; return;
label_F649:; return;
label_F64A:; return;
label_F64B:; return;
label_F64C:; return;
label_F64F:; return;
label_F650:; return;
label_F651:; return;
label_F652:; return;
label_F653:; return;
label_F656:; return;
label_F658:; return;
label_F659:; return;
label_F65B:; return;
label_F65C:; return;
label_F65D:; return;
label_F660:; return;
label_F661:; return;
label_F664:; return;
label_F665:; return;
label_F668:; return;
label_F669:; return;
label_F66C:; return;
label_F66D:; return;
label_F670:; return;
label_F672:; return;
label_F673:; return;
label_F674:; return;
label_F677:; return;
label_F67A:; return;
label_F67B:; return;
label_F67C:; return;
label_F67E:; return;
label_F67F:; return;
label_F681:; return;
label_F682:; return;
label_F685:; return;
label_F687:; return;
label_F689:; return;
label_F68C:; return;
label_F68E:; return;
label_F691:; return;
label_F693:; return;
label_F696:; return;
label_F698:; return;
label_F69A:; return;
label_F69C:; return;
label_F69E:; return;
label_F6A1:; return;
label_F6A3:; return;
label_F6A6:; return;
label_F6A9:; return;
label_F6AC:; return;
label_F6AE:; return;
label_F6B1:; return;
label_F6B3:; return;
label_F6B6:; return;
label_F6B8:; return;
label_F6BB:; return;
label_F6BD:; return;
label_F6C0:; return;
label_F6C2:; return;
label_F6C5:; return;
label_F6C7:; return;
label_F6CA:; return;
label_F6CC:; return;
label_F6CD:; return;
label_F6D0:; return;
label_F6D2:; return;
label_F6D5:; return;
label_F6D7:; return;
label_F6DA:; return;
label_F6DC:; return;
label_F6DF:; return;
label_F6E1:; return;
label_F6E4:; return;
label_F6E6:; return;
label_F6E9:; return;
label_F6EB:; return;
label_F6EE:; return;
label_F6F0:; return;
label_F6F3:; return;
label_F6F5:; return;
label_F6F6:; return;
label_F6F9:; return;
label_F6FB:; return;
label_F6FE:; return;
label_F700:; return;
label_F703:; return;
label_F705:; return;
label_F708:; return;
label_F70A:; return;
label_F70C:; return;
label_F70E:; return;
label_F710:; return;
label_F713:; return;
label_F715:; return;
label_F718:; return;
label_F71A:; return;
label_F71C:; return;
label_F71D:; return;
label_F720:; return;
label_F722:; return;
label_F724:; return;
label_F726:; return;
label_F728:; return;
label_F72A:; return;
label_F72C:; return;
label_F72E:; return;
label_F731:; return;
label_F732:; return;
label_F735:; return;
label_F737:; return;
label_F739:; return;
label_F73C:; return;
label_F73F:; return;
label_F741:; return;
label_F743:; return;
label_F745:; return;
label_F747:; return;
label_F749:; return;
label_F74B:; return;
label_F74E:; return;
label_F74F:; return;
label_F750:; return;
label_F753:; return;
label_F755:; return;
label_F758:; return;
label_F759:; return;
label_F75C:; return;
label_F75E:; return;
label_F760:; return;
label_F763:; return;
label_F766:; return;
label_F769:; return;
label_F76B:; return;
label_F76D:; return;
label_F76F:; return;
label_F771:; return;
label_F773:; return;
label_F774:; return;
label_F777:; return;
label_F778:; return;
label_F779:; return;
label_F77B:; return;
label_F77D:; return;
label_F780:; return;
label_F783:; return;
label_F786:; return;
label_F788:; return;
label_F78B:; return;
label_F78C:; return;
label_F78E:; return;
label_F790:; return;
label_F792:; return;
label_F795:; return;
label_F797:; return;
label_F79A:; return;
label_F79C:; return;
label_F79D:; return;
label_F79E:; return;
label_F79F:; return;
label_F7A0:; return;
label_F7A2:; return;
label_F7A4:; return;
label_F7A5:; return;
label_F7A8:; return;
label_F7AB:; return;
label_F7AC:; return;
label_F7AF:; return;
label_F7B0:; return;
label_F7B3:; return;
label_F7B4:; return;
label_F7B6:; return;
label_F7B8:; return;
label_F7BA:; return;
label_F7BC:; return;
label_F7BE:; return;
label_F7BF:; return;
label_F7C0:; return;
label_F7C1:; return;
label_F7C4:; return;
label_F7C6:; return;
label_F7C9:; return;
label_F7CB:; return;
label_F7CC:; return;
label_F7CE:; return;
label_F7D0:; return;
label_F7D1:; return;
label_F7D2:; return;
label_F7D5:; return;
label_F7D7:; return;
label_F7D9:; return;
label_F7DA:; return;
label_F7DB:; return;
label_F7DC:; return;
label_F7DD:; return;
label_F7DF:; return;
label_F7E2:; return;
label_F7E5:; return;
label_F7E8:; return;
label_F7EB:; return;
label_F7EC:; return;
label_F7EF:; return;
label_F7F0:; return;
label_F7F3:; return;
label_F7F5:; return;
label_F7F8:; return;
label_F7FB:; return;
label_F7FE:; return;
label_F801:; return;
label_F802:; return;
label_F805:; return;
label_F806:; return;
label_F807:; return;
label_F808:; return;
label_F809:; return;
label_F80B:; return;
label_F80D:; return;
label_F80E:; return;
label_F811:; return;
label_F812:; return;
label_F814:; return;
label_F815:; return;
label_F817:; return;
label_F819:; return;
label_F81B:; return;
label_F81E:; return;
label_F820:; return;
label_F822:; return;
label_F825:; return;
label_F827:; return;
label_F829:; return;
label_F82C:; return;
label_F82F:; return;
label_F831:; return;
label_F833:; return;
label_F835:; return;
label_F837:; return;
label_F83A:; return;
label_F83C:; return;
label_F83E:; return;
label_F841:; return;
label_F843:; return;
label_F845:; return;
label_F848:; return;
label_F84A:; return;
label_F84C:; return;
label_F84E:; return;
label_F850:; return;
label_F852:; return;
label_F855:; return;
label_F857:; return;
label_F859:; return;
label_F85B:; return;
label_F85D:; return;
label_F85F:; return;
label_F862:; return;
label_F864:; return;
label_F867:; return;
label_F869:; return;
label_F86B:; return;
label_F86E:; return;
label_F870:; return;
label_F872:; return;
label_F874:; return;
label_F876:; return;
label_F877:; return;
label_F87A:; return;
label_F87C:; return;
label_F87F:; return;
label_F881:; return;
label_F883:; return;
label_F886:; return;
label_F888:; return;
label_F88A:; return;
label_F88C:; return;
label_F88E:; return;
label_F890:; return;
label_F893:; return;
label_F895:; return;
label_F897:; return;
label_F899:; return;
label_F89B:; return;
label_F89D:; return;
label_F8A0:; return;
label_F8A2:; return;
label_F8A5:; return;
label_F8A7:; return;
label_F8A9:; return;
label_F8AC:; return;
label_F8AE:; return;
label_F8B0:; return;
label_F8B2:; return;
label_F8B4:; return;
label_F8B5:; return;
label_F8B7:; return;
label_F8B8:; return;
label_F8B9:; return;
label_F8BA:; return;
label_F8BC:; return;
label_F8BE:; return;
label_F8C0:; return;
label_F8C3:; return;
label_F8C5:; return;
label_F8C6:; return;
label_F8C9:; return;
label_F8CB:; return;
label_F8CE:; return;
label_F8D0:; return;
label_F8D3:; return;
label_F8D5:; return;
label_F8DA:; return;
label_F8DD:; return;
label_F8E0:; return;
label_F8E2:; return;
label_F8E5:; return;
label_F8E7:; return;
label_F8F4:; return;
label_F8F6:; return;
label_F8F9:; return;
label_F8FB:; return;
label_F901:; return;
label_F903:; return;
label_F906:; return;
label_F908:; return;
label_F90B:; return;
label_F90D:; return;
label_F918:; return;
label_F91A:; return;
label_F91D:; return;
label_F91F:; return;
label_F921:; return;
label_F924:; return;
label_F925:; return;
label_F926:; return;
label_F927:; return;
label_F928:; return;
label_F929:; return;
label_F92B:; return;
label_F92E:; return;
label_F92F:; return;
label_F930:; return;
label_F931:; return;
label_F932:; return;
label_F933:; return;
label_F935:; return;
label_F936:; return;
label_F937:; return;
label_F938:; return;
label_F93B:; return;
label_F93D:; return;
label_F93E:; return;
label_F93F:; return;
label_F942:; return;
label_F943:; return;
label_F944:; return;
label_F947:; return;
label_F949:; return;
label_F94B:; return;
label_F94E:; return;
label_F94F:; return;
label_F950:; return;
label_F951:; return;
label_F952:; return;
label_F953:; return;
label_F955:; return;
label_F958:; return;
label_F959:; return;
label_F95A:; return;
label_F95B:; return;
label_F95C:; return;
label_F95D:; return;
label_F95F:; return;
label_F960:; return;
label_F961:; return;
label_F962:; return;
label_F965:; return;
label_F966:; return;
label_F967:; return;
label_F968:; return;
label_F96A:; return;
label_F96B:; return;
label_F96E:; return;
label_F970:; return;
label_F971:; return;
label_F972:; return;
label_F974:; return;
label_F976:; return;
label_F977:; return;
label_F978:; return;
label_F97B:; return;
label_F97C:; return;
label_F97E:; return;
label_F980:; return;
label_F981:; return;
label_F982:; return;
label_F985:; return;
label_F987:; return;
label_F988:; return;
label_F989:; return;
label_F98C:; return;
label_F98D:; return;
label_F98E:; return;
label_F98F:; return;
label_F990:; return;
label_F992:; return;
label_F993:; return;
label_F995:; return;
label_F997:; return;
label_F999:; return;
label_F99B:; return;
label_F99D:; return;
label_F99F:; return;
label_F9A1:; return;
label_F9A3:; return;
label_F9A5:; return;
label_F9A6:; return;
label_F9A8:; return;
label_F9AA:; return;
label_F9AC:; return;
label_F9AE:; return;
label_F9B1:; return;
label_F9B2:; return;
label_F9B3:; return;
label_F9B4:; return;
label_F9B6:; return;
label_F9B8:; return;
label_F9BA:; return;
label_F9BC:; return;
label_F9BD:; return;
label_F9BE:; return;
label_F9C0:; return;
label_F9C2:; return;
label_F9C4:; return;
label_F9C6:; return;
label_F9C8:; return;
}

void func_E5F1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E5F1");
#endif
label_E5F1:;
    /* $E5F1: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xBD); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E5F3:;
    /* $E5F3: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB1); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E5F5:;
    /* $E5F5: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x2A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E5F7:;
    /* $E5F7: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2E2E); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E5FA:;
    /* $E5FA: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x2E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E5FC:;
    /* $E5FC: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E5FE:;
    /* $E5FE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E5FF:;
    /* $E5FF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E600:;
    /* $E600: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E601:;
    /* $E601: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x2E34; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E604:;
    /* $E604: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E62A; }
label_E606:;
    /* $E606: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB124 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E609:;
    /* $E609: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x2A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E60B:;
    /* $E60B: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB0); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E60D:;
    /* $E60D: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x2EBD; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E610:;
    /* $E610: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x2E) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E612:;
    /* $E612: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x2E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E614:;
    /* $E614: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E616:;
    /* $E616: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E617:;
    /* $E617: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E618:;
    /* $E618: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9F00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E61B:;
    /* $E61B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_E61D:;
    /* $E61D: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x2E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_E61F:;
    /* $E61F: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x38 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E621:;
    /* $E621: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x3A + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_E623:;
    /* $E623: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E65F; }
label_E625:;
    /* $E625: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB102 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E628:;
    /* $E628: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E629:;
    /* $E629: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE629); return;
label_E62A:;
    /* $E62A: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_E62D:;
    /* $E62D: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB1); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E62F:;
    /* $E62F: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x342E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E632:;
    /* $E632: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x2E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E634:;
    /* $E634: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E635:;
    /* $E635: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E636:;
    /* $E636: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E637:;
    /* $E637: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E638:;
    /* $E638: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x3434; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E63B:;
    /* $E63B: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0202; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E63E:;
    /* $E63E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E63F:;
    /* $E63F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC700 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E642:;
    /* $E642: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x44) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E644:;
    /* $E644: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x84); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E646:;
    /* $E646: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E648:;
    /* $E648: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x84); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E64A:;
    /* $E64A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E64C:;
    /* $E64C: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E64E:;
    /* $E64E: 84 */ maybe_trigger_vblank(3); nes_write(0xB0, g_cpu.Y);
label_E650:;
    /* $E650: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E652:;
    /* $E652: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_E654:;
    /* $E654: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xBD + g_cpu.X) & 0xFF), g_cpu.A);
label_E656:;
    /* $E656: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_E658:;
    /* $E658: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xBD + g_cpu.X) & 0xFF), g_cpu.A);
label_E65A:;
    /* $E65A: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB1 + g_cpu.X) & 0xFF), g_cpu.A);
label_E65C:;
    /* $E65C: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x01 + g_cpu.X) & 0xFF), g_cpu.A);
label_E65E:;
    /* $E65E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE65E); return;
label_E65F:;
    /* $E65F: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xB1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_E661:;
    /* $E661: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E663:;
    /* $E663: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E665:;
    /* $E665: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E667:;
    /* $E667: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E669:;
    /* $E669: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0444 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E66C:;
    /* $E66C: 84 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.Y);
label_E66E:;
    /* $E66E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E5F1;
    }
label_E670:;
    /* $E670: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB181 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E673:;
    /* $E673: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x81); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E675:;
    /* $E675: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E677:;
    /* $E677: C2 */ maybe_trigger_vblank(2); /* NOP */
label_E679:;
    /* $E679: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67B:;
    /* $E67B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67D:;
    /* $E67D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67F:;
    /* $E67F: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E681:;
    /* $E681: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x44C4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E684:;
    /* $E684: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E686:;
    /* $E686: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x44) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E688:;
    /* $E688: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E68A:;
    /* $E68A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E6D0; }
label_E68C:;
    /* $E68C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC281 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E68F:;
    /* $E68F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E612;
    }
label_E691:;
    /* $E691: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xFF81 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E694:;
    /* $E694: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_E695:;
    /* $E695: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x00 + g_cpu.X) & 0xFF), g_cpu.A);
label_E697:;
    /* $E697: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB1); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E699:;
    /* $E699: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E69B:;
    /* $E69B: 84 */ maybe_trigger_vblank(3); nes_write(0x44, g_cpu.Y);
label_E69D:;
    /* $E69D: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E69F:;
    /* $E69F: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E6A1:;
    /* $E6A1: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6A3:;
    /* $E6A3: 84 */ maybe_trigger_vblank(3); nes_write(0x41, g_cpu.Y);
label_E6A5:;
    /* $E6A5: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6A7:;
    /* $E6A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E6A9:;
    /* $E6A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9F00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E6AC:;
    /* $E6AC: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x31; FLAG_NZ(g_cpu.A);
label_E6AE:;
    /* $E6AE: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB1 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_E6B0:;
    /* $E6B0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B1:;
    /* $E6B1: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6B3:;
    /* $E6B3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B4:;
    /* $E6B4: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6B6:;
    /* $E6B6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B7:;
    /* $E6B7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B8:;
    /* $E6B8: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6BA:;
    /* $E6BA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6BB:;
    /* $E6BB: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6BD:;
    /* $E6BD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6BE:;
    /* $E6BE: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_E6BF:;
    /* $E6BF: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0xB1FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E6C2:;
    /* $E6C2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C3:;
    /* $E6C3: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6C5:;
    /* $E6C5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C6:;
    /* $E6C6: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6C8:;
    /* $E6C8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C9:;
    /* $E6C9: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x0254 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E6CC:;
    /* $E6CC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6CD:;
    /* $E6CD: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6CF:;
    /* $E6CF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D0:;
    /* $E6D0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D1:;
    /* $E6D1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D2:;
    /* $E6D2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE6D2); return;
}

void func_E93D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E93D");
#endif
label_E93D:;
    /* $E93D: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xED58); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E940:;
    /* $E940: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0xD0ED); nes_trace_indirect_jump(0xE940, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_F5EE(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F5EE");
#endif
label_F5EE:;
    /* $F5EE: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F5F0:;
    /* $F5F0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F5F2:;
    /* $F5F2: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_F5F4:;
    /* $F5F4: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x07 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_F5F6:;
    /* $F5F6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xF5F6); return;
}

void func_F5F2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F5F2");
#endif
label_F5F2:;
    /* $F5F2: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_F5F4:;
    /* $F5F4: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x07 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_F5F6:;
    /* $F5F6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xF5F6); return;
}

void func_F5FA(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F5FA");
#endif
label_F5FA:;
    /* $F5FA: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xBB); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_F5FC:;
    /* $F5FC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_F5FD:;
    /* $F5FD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xB8C2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_F600:;
    /* $F600: 80 */ maybe_trigger_vblank(2); /* NOP */
label_F602:;
    /* $F602: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_F603:;
    /* $F603: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_F604:;
    /* $F604: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_F605:;
    /* $F605: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB872 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F608:;
    /* $F608: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F609:;
    /* $F609: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB872 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F60C:;
    /* $F60C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F60D:;
    /* $F60D: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB872 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F610:;
    /* $F610: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x72BE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F613:;
    /* $F613: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_F614:;
    /* $F614: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F615:;
    /* $F615: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB872 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F618:;
    /* $F618: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F619:;
    /* $F619: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB872 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F61C:;
    /* $F61C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F61D:;
    /* $F61D: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xFF72 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F620:;
    /* $F620: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xF620); return;
}

void func_F602(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F602");
#endif
label_F602:;
    /* $F602: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_F603:;
    /* $F603: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_F604:;
    /* $F604: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_F605:;
    /* $F605: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB872 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F608:;
    /* $F608: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F609:;
    /* $F609: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB872 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F60C:;
    /* $F60C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F60D:;
    /* $F60D: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB872 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F610:;
    /* $F610: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x72BE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F613:;
    /* $F613: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_F614:;
    /* $F614: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F615:;
    /* $F615: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB872 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F618:;
    /* $F618: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F619:;
    /* $F619: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB872 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F61C:;
    /* $F61C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F61D:;
    /* $F61D: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xFF72 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F620:;
    /* $F620: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xF620); return;
}

void func_FBA5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FBA5");
#endif
label_FBA5:;
    /* $FBA5: 1C */ maybe_trigger_vblank(4); (void)nes_read((0xB7B1 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_FBA8:;
    /* $FBA8: 7A */ maybe_trigger_vblank(2); /* NOP */
label_FBA9:;
    /* $FBA9: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_FBAA:;
    /* $FBAA: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_FBAD:;
    /* $FBAD: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB7 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_FBAF:;
    /* $FBAF: 7A */ maybe_trigger_vblank(2); /* NOP */
label_FBB0:;
    /* $FBB0: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_FBB1:;
    /* $FBB1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x02B3 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_FBB4:;
    /* $FBB4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xFBB4); return;
}

void func_FB84(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FB84");
#endif
label_FB84:;
    /* $FB84: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFB9E + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_FB87:;
    /* $FB87: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_FB84;
    }
label_FB89:;
    /* $FB89: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x87FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_FB8C:;
    /* $FB8C: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFBB5 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_FB8F:;
    /* $FB8F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0xFC + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_FB91:;
    /* $FB91: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x8FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_FB94:;
    /* $FB94: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x729F + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_FB97:;
    /* $FB97: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_FB99:;
    /* $FB99: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x7A + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_FB9B:;
    /* $FB9B: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_FB9C:;
    /* $FB9C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9F00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_FB9F:;
    /* $FB9F: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xB7B1 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FBA2:;
    /* $FBA2: 7A */ maybe_trigger_vblank(2); /* NOP */
label_FBA3:;
    /* $FBA3: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_FBA4:;
    /* $FBA4: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_FBA7:;
    /* $FBA7: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x7A + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_FBA9:;
    /* $FBA9: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_FBAA:;
    /* $FBAA: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_FBAD:;
    /* $FBAD: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB7 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_FBAF:;
    /* $FBAF: 7A */ maybe_trigger_vblank(2); /* NOP */
label_FBB0:;
    /* $FBB0: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_FBB1:;
    /* $FBB1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x02B3 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_FBB4:;
    /* $FBB4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xFBB4); return;
}

void func_EFED(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EFED");
#endif
label_EFED:;
    /* $EFED: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_EFEF:;
    /* $EFEF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_EFF0:;
    /* $EFF0: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_EFF2:;
    /* $EFF2: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x1C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_EFF4:;
    /* $EFF4: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x22) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EFF6:;
    /* $EFF6: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_EFF8:;
    /* $EFF8: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_EFFA:;
    /* $EFFA: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x26 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_EFFC:;
    /* $EFFC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x2C) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EFFE:;
    /* $EFFE: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x3402; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F001:;
    /* $F001: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_F002:;
    /* $F002: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x24 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_F004:;
    /* $F004: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x28) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F006:;
    /* $F006: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_F007:;
    /* $F007: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_F008:;
    /* $F008: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F00A:;
    /* $F00A: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x20 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_F00C:;
    /* $F00C: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x26) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F00E:;
    /* $F00E: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x3402; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F011:;
    /* $F011: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_F012:;
    /* $F012: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_F013:;
    /* $F013: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_F014:;
    /* $F014: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_F015:;
    /* $F015: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_F016:;
    /* $F016: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_F017:;
    /* $F017: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_F018:;
    /* $F018: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_F019:;
    /* $F019: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_F01A:;
    /* $F01A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xF01A); return;
}

void func_DA20(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA20");
#endif
label_DA20:;
    /* $DA20: FC */ maybe_trigger_vblank(4); (void)nes_read((0xE18D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_DA23:;
    /* $DA23: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x60; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DA25:;
    /* $DA25: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_DA27:;
    /* $DA27: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DA2B; }
label_DA29:;
    /* $DA29: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_DA2B:;
    /* $DA2B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x80; FLAG_NZ(g_cpu.Y);
label_DA2D:;
    /* $DA2D: 20 */ maybe_trigger_vblank(6); func_D485();
label_DA30:;
    /* $DA30: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xD382); FLAG_NZ(g_cpu.A);
label_DA33:;
    /* $DA33: 8D */ maybe_trigger_vblank(4); nes_write(0x06E6, g_cpu.A);
label_DA36:;
    /* $DA36: 8D */ maybe_trigger_vblank(4); nes_write(0x06E2, g_cpu.A);
label_DA39:;
    /* $DA39: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_DA3B:;
    /* $DA3B: 8D */ maybe_trigger_vblank(4); nes_write(0x06EA, g_cpu.A);
label_DA3E:;
    /* $DA3E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_DA40:;
    /* $DA40: 8D */ maybe_trigger_vblank(4); nes_write(0x06E1, g_cpu.A);
label_DA43:;
    /* $DA43: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F1A9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F1A9");
#endif
label_F1A9:;
    /* $F1A9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x01BE, -1);
label_F1AC:;
    /* $F1AC: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x04B9, -1);
label_F1AF:;
    /* $F1AF: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x0701 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F1B2:;
    /* $F1B2: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1B5:;
    /* $F1B5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1B7:;
    /* $F1B7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE20 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1BA:;
    /* $F1BA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1BC:;
    /* $F1BC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE20 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1BF:;
    /* $F1BF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1C1:;
    /* $F1C1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE20 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1C4:;
    /* $F1C4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1C6:;
    /* $F1C6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE41 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1C9:;
    /* $F1C9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1CB:;
    /* $F1CB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xF1CB); return;
}

void func_E603(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E603");
#endif
label_E603:;
    /* $E603: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x24B0; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E606:;
    /* $E606: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB124 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E609:;
    /* $E609: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x2A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E60B:;
    /* $E60B: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB0); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E60D:;
    /* $E60D: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x2EBD; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E610:;
    /* $E610: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x2E) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E612:;
    /* $E612: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x2E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E614:;
    /* $E614: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E616:;
    /* $E616: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E617:;
    /* $E617: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E618:;
    /* $E618: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9F00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E61B:;
    /* $E61B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_E61D:;
    /* $E61D: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x2E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_E61F:;
    /* $E61F: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x38 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E621:;
    /* $E621: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x3A + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_E623:;
    /* $E623: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E65F; }
label_E625:;
    /* $E625: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB102 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E628:;
    /* $E628: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E629:;
    /* $E629: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE629); return;
label_E62A:;
    /* $E62A: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_E62D:;
    /* $E62D: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB1); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E62F:;
    /* $E62F: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x342E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E632:;
    /* $E632: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x2E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E634:;
    /* $E634: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E635:;
    /* $E635: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E636:;
    /* $E636: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E637:;
    /* $E637: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E638:;
    /* $E638: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x3434; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E63B:;
    /* $E63B: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0202; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E63E:;
    /* $E63E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E63F:;
    /* $E63F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC700 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E642:;
    /* $E642: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x44) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E644:;
    /* $E644: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x84); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E646:;
    /* $E646: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E648:;
    /* $E648: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x84); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E64A:;
    /* $E64A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E64C:;
    /* $E64C: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E64E:;
    /* $E64E: 84 */ maybe_trigger_vblank(3); nes_write(0xB0, g_cpu.Y);
label_E650:;
    /* $E650: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E652:;
    /* $E652: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_E654:;
    /* $E654: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xBD + g_cpu.X) & 0xFF), g_cpu.A);
label_E656:;
    /* $E656: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_E658:;
    /* $E658: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xBD + g_cpu.X) & 0xFF), g_cpu.A);
label_E65A:;
    /* $E65A: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB1 + g_cpu.X) & 0xFF), g_cpu.A);
label_E65C:;
    /* $E65C: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x01 + g_cpu.X) & 0xFF), g_cpu.A);
label_E65E:;
    /* $E65E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE65E); return;
label_E65F:;
    /* $E65F: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xB1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_E661:;
    /* $E661: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E663:;
    /* $E663: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E665:;
    /* $E665: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E667:;
    /* $E667: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E669:;
    /* $E669: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0444 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E66C:;
    /* $E66C: 84 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.Y);
label_E66E:;
    /* $E66E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0xE5F1); return; }
label_E670:;
    /* $E670: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB181 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E673:;
    /* $E673: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x81); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E675:;
    /* $E675: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E677:;
    /* $E677: C2 */ maybe_trigger_vblank(2); /* NOP */
label_E679:;
    /* $E679: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67B:;
    /* $E67B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67D:;
    /* $E67D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67F:;
    /* $E67F: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E681:;
    /* $E681: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x44C4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E684:;
    /* $E684: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E686:;
    /* $E686: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x44) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E688:;
    /* $E688: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E68A:;
    /* $E68A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E6D0; }
label_E68C:;
    /* $E68C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC281 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E68F:;
    /* $E68F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E612;
    }
label_E691:;
    /* $E691: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xFF81 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E694:;
    /* $E694: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_E695:;
    /* $E695: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x00 + g_cpu.X) & 0xFF), g_cpu.A);
label_E697:;
    /* $E697: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB1); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E699:;
    /* $E699: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E69B:;
    /* $E69B: 84 */ maybe_trigger_vblank(3); nes_write(0x44, g_cpu.Y);
label_E69D:;
    /* $E69D: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E69F:;
    /* $E69F: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E6A1:;
    /* $E6A1: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6A3:;
    /* $E6A3: 84 */ maybe_trigger_vblank(3); nes_write(0x41, g_cpu.Y);
label_E6A5:;
    /* $E6A5: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6A7:;
    /* $E6A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E6A9:;
    /* $E6A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9F00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E6AC:;
    /* $E6AC: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x31; FLAG_NZ(g_cpu.A);
label_E6AE:;
    /* $E6AE: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB1 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_E6B0:;
    /* $E6B0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B1:;
    /* $E6B1: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6B3:;
    /* $E6B3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B4:;
    /* $E6B4: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6B6:;
    /* $E6B6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B7:;
    /* $E6B7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B8:;
    /* $E6B8: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6BA:;
    /* $E6BA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6BB:;
    /* $E6BB: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6BD:;
    /* $E6BD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6BE:;
    /* $E6BE: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_E6BF:;
    /* $E6BF: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0xB1FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E6C2:;
    /* $E6C2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C3:;
    /* $E6C3: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6C5:;
    /* $E6C5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C6:;
    /* $E6C6: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6C8:;
    /* $E6C8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C9:;
    /* $E6C9: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x0254 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E6CC:;
    /* $E6CC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6CD:;
    /* $E6CD: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6CF:;
    /* $E6CF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D0:;
    /* $E6D0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D1:;
    /* $E6D1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D2:;
    /* $E6D2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE6D2); return;
}

void func_CA47(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CA47");
#endif
label_CA47:;
    /* $CA47: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_CA48:;
    /* $CA48: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_CA49:;
    /* $CA49: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xCA49); return;
}

void func_D08A(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D08A");
#endif
label_D08A:;
    /* $D08A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x11); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_D08C:;
    /* $D08C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xD08C); return;
}

void func_D08B(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D08B");
#endif
label_D08B:;
    /* $D08B: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D08D:;
    /* $D08D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address(0xD090); return; }
label_D08F:;
    /* $D08F: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x1D00); FLAG_NZ(g_cpu.A);
label_D092:;
    /* $D092: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_D094:;
    /* $D094: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xD094); return;
label_D095:; return;
label_D098:; return;
label_D099:; return;
label_D09B:; return;
label_D09D:; return;
label_D09E:; return;
label_D09F:; return;
label_D0A1:; return;
label_D0A3:; return;
label_D0A5:; return;
label_D0A7:; return;
label_D0A8:; return;
label_D0A9:; return;
label_D0AC:; return;
label_D0AD:; return;
label_D0AF:; return;
label_D0B2:; return;
label_D0B3:; return;
label_D0B5:; return;
label_D0B7:; return;
label_D0B9:; return;
label_D0BA:; return;
label_D0BB:; return;
label_D0BD:; return;
label_D0C0:; return;
label_D0C1:; return;
label_D0C3:; return;
label_D0C5:; return;
label_D0C7:; return;
label_D0C9:; return;
label_D0CC:; return;
label_D0CD:; return;
label_D0CF:; return;
label_D0D1:; return;
label_D0D3:; return;
label_D0D5:; return;
label_D0D7:; return;
label_D0D8:; return;
label_D0D9:; return;
label_D0DB:; return;
label_D0DD:; return;
label_D0E0:; return;
label_D0E1:; return;
label_D0E3:; return;
label_D0E5:; return;
label_D0E7:; return;
label_D0E9:; return;
label_D0EB:; return;
label_D0ED:; return;
label_D0EE:; return;
label_D0F0:; return;
label_D0F1:; return;
label_D0F3:; return;
label_D0F5:; return;
label_D0F7:; return;
label_D0F8:; return;
label_D0FA:; return;
label_D0FB:; return;
label_D0FD:; return;
label_D0FF:; return;
label_D100:; return;
label_D101:; return;
label_D103:; return;
label_D105:; return;
label_D107:; return;
label_D109:; return;
label_D10A:; return;
label_D10B:; return;
label_D10D:; return;
label_D10F:; return;
label_D111:; return;
label_D113:; return;
label_D115:; return;
label_D117:; return;
label_D11A:; return;
label_D11B:; return;
label_D11C:; return;
label_D11D:; return;
label_D11E:; return;
label_D11F:; return;
label_D121:; return;
label_D123:; return;
label_D124:; return;
label_D125:; return;
label_D127:; return;
label_D129:; return;
label_D12B:; return;
label_D12E:; return;
label_D12F:; return;
label_D131:; return;
label_D133:; return;
label_D135:; return;
label_D136:; return;
label_D137:; return;
label_D139:; return;
label_D13C:; return;
label_D13E:; return;
label_D13F:; return;
label_D141:; return;
label_D143:; return;
label_D145:; return;
label_D147:; return;
label_D149:; return;
label_D14B:; return;
label_D14E:; return;
label_D14F:; return;
label_D151:; return;
label_D153:; return;
label_D156:; return;
label_D157:; return;
label_D159:; return;
label_D15B:; return;
label_D15D:; return;
label_D15F:; return;
label_D161:; return;
label_D164:; return;
label_D165:; return;
label_D168:; return;
label_D169:; return;
label_D16C:; return;
label_D16D:; return;
label_D16F:; return;
label_D171:; return;
label_D174:; return;
label_D175:; return;
label_D178:; return;
label_D179:; return;
label_D17B:; return;
label_D17D:; return;
label_D17E:; return;
label_D180:; return;
label_D181:; return;
label_D183:; return;
label_D185:; return;
label_D186:; return;
label_D187:; return;
label_D189:; return;
label_D18C:; return;
label_D18D:; return;
label_D18E:; return;
label_D18F:; return;
label_D191:; return;
label_D193:; return;
label_D194:; return;
label_D195:; return;
label_D198:; return;
label_D199:; return;
label_D19B:; return;
label_D19D:; return;
label_D19F:; return;
label_D1A1:; return;
label_D1A3:; return;
label_D1A5:; return;
label_D1A6:; return;
label_D1A7:; return;
label_D1A9:; return;
label_D1AB:; return;
label_D1AD:; return;
label_D1B0:; return;
label_D1B1:; return;
label_D1B3:; return;
label_D1B5:; return;
label_D1B7:; return;
label_D1BA:; return;
label_D1BB:; return;
label_D1BD:; return;
label_D1BF:; return;
label_D1C1:; return;
label_D1C3:; return;
label_D1C5:; return;
label_D1C7:; return;
label_D1CA:; return;
label_D1CB:; return;
label_D1CD:; return;
label_D1CF:; return;
label_D1D1:; return;
label_D1D2:; return;
label_D1D3:; return;
label_D1D5:; return;
label_D1D7:; return;
label_D1D9:; return;
label_D1DB:; return;
label_D1DE:; return;
label_D1DF:; return;
label_D1E2:; return;
label_D1E3:; return;
label_D1E4:; return;
label_D1E5:; return;
label_D1E7:; return;
label_D1E9:; return;
label_D1EB:; return;
label_D1EC:; return;
label_D1EE:; return;
label_D1EF:; return;
label_D1F1:; return;
label_D1F3:; return;
label_D1F5:; return;
label_D1F7:; return;
label_D1F9:; return;
label_D1FB:; return;
label_D1FD:; return;
label_D200:; return;
label_D202:; return;
label_D203:; return;
label_D205:; return;
label_D207:; return;
label_D209:; return;
label_D20B:; return;
label_D20D:; return;
label_D20F:; return;
label_D210:; return;
label_D211:; return;
label_D213:; return;
label_D215:; return;
label_D217:; return;
label_D219:; return;
label_D21B:; return;
label_D21D:; return;
label_D21E:; return;
label_D220:; return;
label_D222:; return;
label_D224:; return;
label_D226:; return;
label_D228:; return;
label_D22A:; return;
label_D22D:; return;
label_D22F:; return;
label_D231:; return;
label_D232:; return;
label_D233:; return;
label_D236:; return;
label_D238:; return;
label_D239:; return;
label_D23A:; return;
label_D23D:; return;
label_D23E:; return;
label_D240:; return;
label_D241:; return;
label_D244:; return;
label_D246:; return;
label_D247:; return;
label_D248:; return;
label_D24B:; return;
label_D24C:; return;
label_D24D:; return;
label_D24E:; return;
label_D250:; return;
label_D252:; return;
label_D254:; return;
label_D255:; return;
label_D258:; return;
label_D259:; return;
label_D25C:; return;
label_D25E:; return;
label_D260:; return;
label_D263:; return;
label_D265:; return;
label_D267:; return;
label_D269:; return;
label_D26B:; return;
label_D26E:; return;
label_D270:; return;
label_D273:; return;
label_D276:; return;
label_D279:; return;
label_D27B:; return;
label_D27D:; return;
label_D280:; return;
label_D281:; return;
label_D283:; return;
label_D286:; return;
label_D288:; return;
label_D28A:; return;
label_D28D:; return;
label_D28E:; return;
label_D290:; return;
label_D292:; return;
label_D294:; return;
label_D296:; return;
label_D298:; return;
label_D29A:; return;
label_D29C:; return;
label_D29E:; return;
label_D2A0:; return;
label_D2A2:; return;
label_D2A4:; return;
label_D2A6:; return;
label_D2A8:; return;
label_D2AA:; return;
label_D2AC:; return;
label_D2AE:; return;
label_D2AF:; return;
label_D2B0:; return;
label_D2B2:; return;
label_D2B4:; return;
label_D2B5:; return;
label_D2B7:; return;
label_D2B9:; return;
label_D2BC:; return;
label_D2BE:; return;
label_D2C0:; return;
label_D2C3:; return;
label_D2C4:; return;
label_D2C6:; return;
label_D2C7:; return;
label_D2C9:; return;
label_D2CB:; return;
label_D2CC:; return;
label_D2CF:; return;
label_D2D2:; return;
label_D2D5:; return;
label_D2D8:; return;
label_D2DB:; return;
label_D2DE:; return;
label_D2E1:; return;
label_D2E4:; return;
label_D2E7:; return;
label_D2EA:; return;
label_D2ED:; return;
label_D2F0:; return;
label_D2F3:; return;
label_D2F6:; return;
label_D2F9:; return;
label_D2FC:; return;
label_D2FF:; return;
label_D302:; return;
label_D305:; return;
label_D308:; return;
label_D30B:; return;
label_D30D:; return;
label_D310:; return;
label_D313:; return;
label_D315:; return;
label_D318:; return;
label_D31B:; return;
label_D31D:; return;
label_D320:; return;
label_D322:; return;
label_D325:; return;
label_D328:; return;
label_D32A:; return;
label_D32C:; return;
label_D32E:; return;
label_D330:; return;
label_D333:; return;
label_D334:; return;
label_D337:; return;
label_D338:; return;
label_D33A:; return;
label_D33C:; return;
label_D33D:; return;
label_D340:; return;
label_D342:; return;
label_D344:; return;
label_D347:; return;
label_D349:; return;
label_D34C:; return;
label_D34D:; return;
label_D350:; return;
label_D351:; return;
label_D354:; return;
label_D356:; return;
label_D357:; return;
label_D358:; return;
label_D35B:; return;
label_D35C:; return;
label_D35F:; return;
label_D361:; return;
label_D363:; return;
label_D364:; return;
label_D366:; return;
label_D369:; return;
label_D36C:; return;
label_D36E:; return;
label_D36F:; return;
label_D370:; return;
label_D372:; return;
label_D373:; return;
label_D374:; return;
label_D376:; return;
label_D379:; return;
label_D37C:; return;
label_D37E:; return;
label_D381:; return;
label_D384:; return;
label_D387:; return;
label_D388:; return;
label_D38A:; return;
label_D38D:; return;
label_D38F:; return;
label_D391:; return;
label_D394:; return;
label_D397:; return;
label_D39A:; return;
label_D39D:; return;
label_D3A0:; return;
label_D3A3:; return;
label_D3A6:; return;
label_D3A9:; return;
label_D3AC:; return;
label_D3AF:; return;
label_D3B2:; return;
label_D3B4:; return;
label_D3B7:; return;
label_D3BA:; return;
label_D3BB:; return;
label_D3BE:; return;
label_D3C0:; return;
label_D3C2:; return;
label_D3C4:; return;
label_D3C6:; return;
label_D3C8:; return;
label_D3C9:; return;
label_D3CA:; return;
label_D3CB:; return;
label_D3CC:; return;
label_D3CE:; return;
label_D3D0:; return;
label_D3D2:; return;
label_D3D4:; return;
label_D3D6:; return;
label_D3D8:; return;
label_D3DA:; return;
label_D3DC:; return;
label_D3DE:; return;
label_D3E0:; return;
label_D3E2:; return;
label_D3E4:; return;
label_D3E6:; return;
label_D3E8:; return;
label_D3EB:; return;
label_D3ED:; return;
label_D3EF:; return;
label_D3F1:; return;
label_D3F3:; return;
label_D3F5:; return;
label_D3F7:; return;
label_D3F9:; return;
label_D3FB:; return;
label_D3FD:; return;
label_D3FF:; return;
label_D402:; return;
label_D404:; return;
label_D406:; return;
label_D408:; return;
label_D40A:; return;
label_D40C:; return;
label_D40E:; return;
label_D40F:; return;
label_D412:; return;
label_D413:; return;
label_D415:; return;
label_D417:; return;
label_D419:; return;
label_D41B:; return;
label_D41D:; return;
label_D41E:; return;
label_D420:; return;
label_D421:; return;
label_D423:; return;
label_D425:; return;
label_D426:; return;
label_D428:; return;
label_D42A:; return;
label_D435:; return;
label_D438:; return;
label_D43A:; return;
label_D43C:; return;
label_D43E:; return;
label_D43F:; return;
label_D442:; return;
label_D445:; return;
label_D447:; return;
label_D44A:; return;
label_D44D:; return;
label_D44E:; return;
label_D450:; return;
label_D453:; return;
label_D456:; return;
label_D459:; return;
label_D45C:; return;
label_D45F:; return;
label_D462:; return;
label_D463:; return;
label_D465:; return;
label_D468:; return;
label_D469:; return;
label_D46A:; return;
label_D46C:; return;
label_D46E:; return;
label_D46F:; return;
label_D471:; return;
label_D474:; return;
label_D476:; return;
label_D479:; return;
label_D47C:; return;
label_D47F:; return;
label_D481:; return;
label_D484:; return;
label_D485:; return;
label_D487:; return;
label_D48A:; return;
label_D48B:; return;
label_D48E:; return;
label_D48F:; return;
label_D491:; return;
label_D492:; return;
label_D494:; return;
label_D496:; return;
label_D498:; return;
label_D49A:; return;
label_D49C:; return;
label_D49E:; return;
label_D4A0:; return;
label_D4A1:; return;
label_D4A4:; return;
label_D4A6:; return;
label_D4A9:; return;
label_D4AB:; return;
label_D4AE:; return;
label_D4B0:; return;
label_D4B3:; return;
label_D4B5:; return;
label_D4B8:; return;
label_D4BA:; return;
label_D4BD:; return;
label_D4C0:; return;
label_D4C3:; return;
label_D4C6:; return;
label_D4C9:; return;
label_D4CA:; return;
label_D4CC:; return;
label_D4CE:; return;
label_D4D1:; return;
label_D4D4:; return;
label_D4D6:; return;
label_D4D9:; return;
label_D4DB:; return;
label_D4DC:; return;
label_D4DF:; return;
label_D4E2:; return;
label_D4E5:; return;
label_D4E8:; return;
label_D4EB:; return;
label_D4EC:; return;
label_D4EE:; return;
label_D4F0:; return;
label_D4F2:; return;
label_D4F4:; return;
label_D4F6:; return;
label_D4F8:; return;
label_D4FA:; return;
label_D4FC:; return;
label_D4FE:; return;
label_D500:; return;
label_D502:; return;
label_D505:; return;
label_D506:; return;
label_D508:; return;
label_D50A:; return;
label_D50C:; return;
label_D50E:; return;
label_D510:; return;
label_D513:; return;
label_D514:; return;
label_D516:; return;
label_D519:; return;
label_D51B:; return;
label_D51D:; return;
label_D520:; return;
label_D522:; return;
label_D525:; return;
label_D527:; return;
label_D52A:; return;
label_D52B:; return;
label_D52E:; return;
label_D530:; return;
label_D533:; return;
label_D536:; return;
label_D538:; return;
label_D53A:; return;
label_D53D:; return;
label_D53F:; return;
label_D542:; return;
label_D544:; return;
label_D547:; return;
label_D548:; return;
label_D54B:; return;
label_D54D:; return;
label_D550:; return;
label_D553:; return;
label_D556:; return;
label_D559:; return;
label_D55C:; return;
label_D55F:; return;
label_D561:; return;
label_D563:; return;
label_D565:; return;
label_D567:; return;
label_D569:; return;
label_D56C:; return;
label_D56F:; return;
label_D572:; return;
label_D573:; return;
label_D575:; return;
label_D577:; return;
label_D57A:; return;
label_D57C:; return;
label_D57E:; return;
label_D581:; return;
label_D582:; return;
label_D585:; return;
label_D586:; return;
label_D589:; return;
label_D58C:; return;
label_D58E:; return;
label_D590:; return;
label_D593:; return;
label_D596:; return;
label_D598:; return;
label_D59B:; return;
label_D59D:; return;
label_D5A0:; return;
label_D5A2:; return;
label_D5A5:; return;
label_D5A7:; return;
label_D5A9:; return;
label_D5AB:; return;
label_D5AE:; return;
label_D5B1:; return;
label_D5B3:; return;
label_D5B5:; return;
label_D5B7:; return;
label_D5BA:; return;
label_D5BC:; return;
label_D5BF:; return;
label_D5C0:; return;
label_D5C3:; return;
label_D5C4:; return;
label_D5C7:; return;
label_D5C9:; return;
label_D5CB:; return;
label_D5CE:; return;
label_D5D0:; return;
label_D5D3:; return;
label_D5D4:; return;
label_D5D6:; return;
label_D5D8:; return;
label_D5DB:; return;
label_D5DE:; return;
label_D5E0:; return;
label_D5E3:; return;
label_D5E5:; return;
label_D5E8:; return;
label_D5EA:; return;
label_D601:; return;
label_D603:; return;
label_D606:; return;
label_D608:; return;
label_D60B:; return;
label_D60D:; return;
label_D610:; return;
label_D613:; return;
label_D614:; return;
label_D616:; return;
label_D618:; return;
label_D61A:; return;
label_D61D:; return;
label_D61E:; return;
label_D61F:; return;
label_D620:; return;
label_D622:; return;
label_D624:; return;
label_D625:; return;
label_D627:; return;
label_D629:; return;
label_D62B:; return;
label_D62D:; return;
label_D62E:; return;
label_D630:; return;
label_D631:; return;
label_D632:; return;
label_D633:; return;
label_D634:; return;
label_D635:; return;
label_D637:; return;
label_D63A:; return;
label_D63C:; return;
label_D63E:; return;
label_D641:; return;
label_D644:; return;
label_D647:; return;
label_D649:; return;
label_D64C:; return;
label_D64F:; return;
label_D652:; return;
label_D654:; return;
label_D657:; return;
label_D65A:; return;
label_D65D:; return;
label_D65F:; return;
label_D662:; return;
label_D665:; return;
label_D666:; return;
label_D669:; return;
label_D66C:; return;
label_D66E:; return;
label_D670:; return;
label_D672:; return;
label_D674:; return;
label_D677:; return;
label_D67A:; return;
label_D67C:; return;
label_D67E:; return;
label_D680:; return;
label_D682:; return;
label_D684:; return;
label_D687:; return;
label_D689:; return;
label_D68B:; return;
label_D68D:; return;
label_D68E:; return;
label_D691:; return;
label_D693:; return;
label_D696:; return;
label_D699:; return;
label_D69C:; return;
label_D69E:; return;
label_D6A1:; return;
label_D6A4:; return;
label_D6A7:; return;
label_D6A9:; return;
label_D6AC:; return;
label_D6AF:; return;
label_D6B0:; return;
label_D6E4:; return;
label_D6E7:; return;
label_D6EA:; return;
label_D6ED:; return;
label_D6EF:; return;
label_D6F2:; return;
label_D6F4:; return;
label_D6F6:; return;
label_D6F9:; return;
label_D6FC:; return;
label_D6FD:; return;
label_D6FF:; return;
label_D702:; return;
label_D704:; return;
label_D706:; return;
label_D709:; return;
label_D70C:; return;
label_D70F:; return;
label_D711:; return;
label_D713:; return;
label_D716:; return;
label_D719:; return;
label_D71B:; return;
label_D71D:; return;
label_D71F:; return;
label_D721:; return;
label_D723:; return;
label_D73A:; return;
label_D73C:; return;
label_D73F:; return;
label_D740:; return;
label_D742:; return;
label_D745:; return;
label_D748:; return;
label_D74B:; return;
label_D74D:; return;
label_D74E:; return;
label_D751:; return;
label_D752:; return;
label_D755:; return;
label_D758:; return;
label_D75B:; return;
label_D75C:; return;
label_D75F:; return;
label_D762:; return;
label_D763:; return;
label_D764:; return;
label_D765:; return;
label_D767:; return;
label_D769:; return;
label_D76A:; return;
label_D76B:; return;
label_D76C:; return;
label_D76F:; return;
label_D772:; return;
label_D773:; return;
label_D776:; return;
label_D778:; return;
label_D77A:; return;
label_D77C:; return;
label_D77E:; return;
label_D77F:; return;
label_D782:; return;
label_D784:; return;
label_D786:; return;
label_D787:; return;
label_D78A:; return;
label_D78C:; return;
label_D78E:; return;
label_D790:; return;
label_D792:; return;
label_D794:; return;
label_D796:; return;
label_D797:; return;
label_D79A:; return;
label_D79C:; return;
label_D79F:; return;
label_D7A2:; return;
label_D7A4:; return;
label_D7A6:; return;
label_D7A9:; return;
label_D7AC:; return;
label_D7AE:; return;
label_D7AF:; return;
label_D7B2:; return;
label_D7B5:; return;
label_D7B8:; return;
label_D7BB:; return;
label_D7BD:; return;
label_D7BF:; return;
label_D7C2:; return;
label_D7C4:; return;
label_D812:; return;
label_D813:; return;
label_D814:; return;
label_D817:; return;
label_D819:; return;
label_D81C:; return;
label_D81F:; return;
label_D821:; return;
label_D823:; return;
label_D826:; return;
label_D828:; return;
label_D82B:; return;
label_D82E:; return;
label_D830:; return;
label_D833:; return;
label_D835:; return;
label_D838:; return;
label_D83A:; return;
label_D83C:; return;
label_D83E:; return;
label_D840:; return;
label_D841:; return;
label_D844:; return;
label_D846:; return;
label_D849:; return;
label_D84B:; return;
label_D84E:; return;
label_D850:; return;
label_D852:; return;
label_D854:; return;
label_D857:; return;
label_D85A:; return;
label_D85C:; return;
label_D85F:; return;
label_D862:; return;
label_D864:; return;
label_D866:; return;
label_D868:; return;
label_D86A:; return;
label_D86C:; return;
label_D86E:; return;
label_D870:; return;
label_D873:; return;
label_D875:; return;
label_D878:; return;
label_D87A:; return;
label_D891:; return;
label_D894:; return;
label_D895:; return;
label_D898:; return;
label_D89A:; return;
label_D89D:; return;
label_D89F:; return;
label_D8A1:; return;
label_D8A3:; return;
label_D8A6:; return;
label_D8A8:; return;
label_D8AA:; return;
label_D8AD:; return;
label_D8AF:; return;
label_D8B1:; return;
label_D8B3:; return;
label_D8B6:; return;
label_D8B8:; return;
label_D8BB:; return;
label_D8BD:; return;
label_D8BF:; return;
label_D8C1:; return;
label_D8C4:; return;
label_D8C6:; return;
label_D8C9:; return;
label_D8CA:; return;
label_D8CD:; return;
label_D8CF:; return;
label_D8D1:; return;
label_D8D4:; return;
label_D8D5:; return;
label_D8D8:; return;
label_D8DB:; return;
label_D8DC:; return;
label_D8DF:; return;
label_D8E2:; return;
label_D8E5:; return;
label_D8E8:; return;
label_D8EB:; return;
label_D8ED:; return;
label_D8F0:; return;
label_D8F3:; return;
label_D8F4:; return;
label_D8F6:; return;
label_D8F8:; return;
label_D8FB:; return;
label_D8FE:; return;
label_D900:; return;
label_D903:; return;
label_D906:; return;
label_D908:; return;
label_D90A:; return;
label_D90D:; return;
label_D90F:; return;
label_D912:; return;
label_D914:; return;
label_D916:; return;
label_D919:; return;
label_D91C:; return;
label_D91E:; return;
label_D921:; return;
label_D924:; return;
label_D926:; return;
label_D928:; return;
label_D92B:; return;
label_D92D:; return;
label_D930:; return;
label_D931:; return;
label_D934:; return;
label_D937:; return;
label_D939:; return;
label_D93B:; return;
label_D93C:; return;
label_D93E:; return;
label_D940:; return;
label_D942:; return;
label_D944:; return;
label_D946:; return;
label_D948:; return;
label_D94A:; return;
label_D94B:; return;
label_D94D:; return;
label_D94F:; return;
label_D951:; return;
label_D953:; return;
label_D955:; return;
label_D957:; return;
label_D959:; return;
label_D95B:; return;
label_D95D:; return;
label_D95F:; return;
label_D961:; return;
label_D962:; return;
label_D965:; return;
label_D967:; return;
label_D96A:; return;
label_D96D:; return;
label_D970:; return;
label_D972:; return;
label_D975:; return;
label_D977:; return;
label_D97A:; return;
label_D97B:; return;
label_D9A0:; return;
label_D9A2:; return;
label_D9A4:; return;
label_D9A6:; return;
label_D9A8:; return;
label_D9AA:; return;
label_D9AC:; return;
label_D9AE:; return;
label_D9B0:; return;
label_D9B2:; return;
label_D9B5:; return;
label_D9B8:; return;
label_D9BB:; return;
label_D9BD:; return;
label_D9C0:; return;
label_D9C2:; return;
label_D9C5:; return;
label_D9C7:; return;
label_D9CA:; return;
label_D9CB:; return;
label_D9CD:; return;
label_D9CF:; return;
label_D9D2:; return;
label_D9D5:; return;
label_D9D7:; return;
label_D9D9:; return;
label_D9DC:; return;
label_D9DF:; return;
label_D9E2:; return;
label_D9E4:; return;
label_D9E7:; return;
label_D9E8:; return;
label_D9EB:; return;
label_D9ED:; return;
label_D9F0:; return;
label_D9F3:; return;
label_D9F6:; return;
label_D9F9:; return;
label_D9FC:; return;
label_D9FD:; return;
label_DA00:; return;
label_DA03:; return;
label_DA06:; return;
label_DA09:; return;
label_DA0A:; return;
label_DA0C:; return;
label_DA0E:; return;
label_DA11:; return;
label_DA14:; return;
label_DA17:; return;
label_DA1A:; return;
label_DA1C:; return;
label_DA1F:; return;
label_DA21:; return;
label_DA24:; return;
label_DA25:; return;
label_DA27:; return;
label_DA29:; return;
label_DA2B:; return;
label_DA2D:; return;
label_DA30:; return;
label_DA33:; return;
label_DA36:; return;
label_DA39:; return;
label_DA3B:; return;
label_DA3E:; return;
label_DA40:; return;
label_DA43:; return;
label_DA44:; return;
label_DA47:; return;
label_DA48:; return;
label_DA4B:; return;
label_DA4D:; return;
label_DA4F:; return;
label_DA50:; return;
label_DA51:; return;
label_DA52:; return;
label_DA55:; return;
label_DA58:; return;
label_DA59:; return;
label_DA5B:; return;
label_DA5D:; return;
label_DA5F:; return;
label_DA61:; return;
label_DA63:; return;
label_DA65:; return;
label_DA67:; return;
label_DA6A:; return;
label_DA6D:; return;
label_DA70:; return;
label_DA73:; return;
label_DA75:; return;
label_DA78:; return;
label_DA7B:; return;
label_DA7E:; return;
label_DA81:; return;
label_DA84:; return;
label_DA86:; return;
label_DA87:; return;
label_DA88:; return;
label_DA89:; return;
label_DA8A:; return;
label_DA8B:; return;
label_DA8C:; return;
label_DA8E:; return;
label_DA8F:; return;
label_DA90:; return;
label_DA91:; return;
label_DA92:; return;
label_DA93:; return;
label_DA94:; return;
label_DA95:; return;
label_DA97:; return;
label_DA98:; return;
label_DA99:; return;
label_DA9B:; return;
label_DA9C:; return;
label_DA9E:; return;
label_DA9F:; return;
label_DAA1:; return;
label_DAA2:; return;
label_DAA3:; return;
label_DAA4:; return;
label_DAA5:; return;
label_DAA7:; return;
label_DAA9:; return;
label_DAAA:; return;
label_DAAC:; return;
label_DAAD:; return;
label_DAAF:; return;
label_DAB0:; return;
label_DAB1:; return;
label_DAB4:; return;
label_DAB7:; return;
label_DAB9:; return;
label_DABA:; return;
label_DABC:; return;
label_DABE:; return;
label_DAC1:; return;
label_DAC3:; return;
label_DAC5:; return;
label_DAC7:; return;
label_DACA:; return;
label_DACC:; return;
label_DACE:; return;
label_DAD0:; return;
label_DAD3:; return;
label_DAD5:; return;
label_DAD8:; return;
label_DADB:; return;
label_DADC:; return;
label_DADE:; return;
label_DAE0:; return;
label_DAE2:; return;
label_DAE4:; return;
label_DAE5:; return;
label_DAE8:; return;
label_DAE9:; return;
label_DAEC:; return;
label_DAEE:; return;
label_DAF0:; return;
label_DAF1:; return;
label_DAF3:; return;
label_DAF5:; return;
label_DAF6:; return;
label_DB53:; return;
label_DB54:; return;
label_DB55:; return;
label_DB58:; return;
label_DB59:; return;
label_DB5A:; return;
label_DB5D:; return;
label_DB5F:; return;
label_DB60:; return;
label_DB61:; return;
label_DB63:; return;
label_DB65:; return;
label_DB68:; return;
label_DB69:; return;
label_DB6A:; return;
label_DB6B:; return;
label_DB6C:; return;
label_DB6D:; return;
label_DB6F:; return;
label_DB70:; return;
label_DB71:; return;
label_DB73:; return;
label_DB75:; return;
label_DB77:; return;
label_DB79:; return;
label_DB7B:; return;
label_DB7C:; return;
label_DB7D:; return;
label_DB7F:; return;
label_DB80:; return;
label_DB81:; return;
label_DB83:; return;
label_DB86:; return;
label_DB89:; return;
label_DB8C:; return;
label_DB8E:; return;
label_DB90:; return;
label_DB91:; return;
label_DB93:; return;
label_DB95:; return;
label_DB97:; return;
label_DB99:; return;
label_DB9B:; return;
label_DB9C:; return;
label_DB9D:; return;
label_DB9E:; return;
label_DB9F:; return;
label_DBA0:; return;
label_DBA1:; return;
label_DBA2:; return;
label_DBA3:; return;
label_DBA4:; return;
label_DBA5:; return;
label_DBA6:; return;
label_DBA7:; return;
label_DBA8:; return;
label_DBA9:; return;
label_DBAA:; return;
label_DBAC:; return;
label_DBAD:; return;
label_DBAE:; return;
label_DBAF:; return;
label_DBB2:; return;
label_DBB3:; return;
label_DBB4:; return;
label_DBB6:; return;
label_DBB7:; return;
label_DBB8:; return;
label_DBB9:; return;
label_DBBC:; return;
label_DBBD:; return;
label_DBBF:; return;
label_DBC0:; return;
label_DBC2:; return;
label_DBC5:; return;
label_DBC8:; return;
label_DBCB:; return;
label_DBCE:; return;
label_DBCF:; return;
label_DBD1:; return;
label_DBD3:; return;
label_DBD5:; return;
label_DBD7:; return;
label_DBDA:; return;
label_DBDC:; return;
label_DBDE:; return;
label_DBDF:; return;
label_DBE1:; return;
label_DBE4:; return;
label_DBE6:; return;
label_DBE9:; return;
label_DBEC:; return;
label_DBED:; return;
label_DBEF:; return;
label_DBF2:; return;
label_DBF5:; return;
label_DBF6:; return;
label_DBF7:; return;
label_DBF8:; return;
label_DBFA:; return;
label_DBFC:; return;
label_DBFE:; return;
label_DC01:; return;
label_DC04:; return;
label_DC07:; return;
label_DC0A:; return;
label_DC0C:; return;
label_DC0F:; return;
label_DC11:; return;
label_DC13:; return;
label_DC16:; return;
label_DC17:; return;
label_DC19:; return;
label_DC1A:; return;
label_DC1D:; return;
label_DC1F:; return;
label_DC22:; return;
label_DC24:; return;
label_DC26:; return;
label_DC28:; return;
label_DC2B:; return;
label_DC2D:; return;
label_DC30:; return;
label_DC31:; return;
label_DC33:; return;
label_DC36:; return;
label_DC37:; return;
label_DC38:; return;
label_DC39:; return;
label_DC3B:; return;
label_DC3D:; return;
label_DC3E:; return;
label_DC41:; return;
label_DC43:; return;
label_DC45:; return;
label_DC47:; return;
label_DC49:; return;
label_DC4C:; return;
label_DC4F:; return;
label_DC52:; return;
label_DC55:; return;
label_DC58:; return;
label_DC5A:; return;
label_DC5D:; return;
label_DC60:; return;
label_DC63:; return;
label_DC66:; return;
label_DC69:; return;
label_DC6B:; return;
label_DC6E:; return;
label_DC6F:; return;
label_DC70:; return;
label_DC72:; return;
label_DC74:; return;
label_DC77:; return;
label_DC79:; return;
label_DC7B:; return;
label_DC7D:; return;
label_DC80:; return;
label_DC82:; return;
label_DC84:; return;
label_DC86:; return;
label_DC88:; return;
label_DC8A:; return;
label_DC8B:; return;
label_DC8C:; return;
label_DC8E:; return;
label_DC91:; return;
label_DC93:; return;
label_DC96:; return;
label_DC98:; return;
label_DC9B:; return;
label_DC9C:; return;
label_DC9D:; return;
label_DC9F:; return;
label_DCA1:; return;
label_DCA3:; return;
label_DCA5:; return;
label_DCA7:; return;
label_DCA9:; return;
label_DCAC:; return;
label_DCAE:; return;
label_DCB0:; return;
label_DCB2:; return;
label_DCB4:; return;
label_DCB6:; return;
label_DCB8:; return;
label_DCBA:; return;
label_DCBC:; return;
label_DCBE:; return;
label_DCC1:; return;
label_DCC3:; return;
label_DCC5:; return;
label_DCC6:; return;
label_DCC9:; return;
label_DCCC:; return;
label_DCCE:; return;
label_DCCF:; return;
label_DCD1:; return;
label_DCD4:; return;
label_DCD5:; return;
label_DCD8:; return;
label_DCDA:; return;
label_DCDC:; return;
label_DCDE:; return;
label_DCE0:; return;
label_DCE2:; return;
label_DCE3:; return;
label_DCE5:; return;
label_DCE8:; return;
label_DCE9:; return;
label_DCEB:; return;
label_DCEE:; return;
label_DCF1:; return;
label_DCF3:; return;
label_DCF6:; return;
label_DCF8:; return;
label_DCF9:; return;
label_DCFA:; return;
label_DCFB:; return;
label_DCFD:; return;
label_DCFE:; return;
label_DD01:; return;
label_DD04:; return;
label_DD07:; return;
label_DD08:; return;
label_DD09:; return;
label_DD0A:; return;
label_DD0B:; return;
label_DD0E:; return;
label_DD10:; return;
label_DD13:; return;
label_DD15:; return;
label_DD16:; return;
label_DD17:; return;
label_DD18:; return;
label_DD1B:; return;
label_DD1E:; return;
label_DD21:; return;
label_DD22:; return;
label_DD23:; return;
label_DD24:; return;
label_DD26:; return;
label_DD29:; return;
label_DD2A:; return;
label_DD2C:; return;
label_DD2F:; return;
label_DD31:; return;
label_DD33:; return;
label_DD35:; return;
label_DD37:; return;
label_DD38:; return;
label_DD39:; return;
label_DD3A:; return;
label_DD3C:; return;
label_DD3F:; return;
label_DD41:; return;
label_DD44:; return;
label_DD46:; return;
label_DD66:; return;
label_DD67:; return;
label_DD68:; return;
label_DD69:; return;
label_DD6C:; return;
label_DD6E:; return;
label_DD71:; return;
label_DD73:; return;
label_DD76:; return;
label_DD78:; return;
label_DD7A:; return;
label_DD7B:; return;
label_DD7C:; return;
label_DD7D:; return;
label_DD80:; return;
label_DD82:; return;
label_DD84:; return;
label_DD87:; return;
label_DD8A:; return;
label_DD8D:; return;
label_DD8F:; return;
label_DD91:; return;
label_DD93:; return;
label_DD95:; return;
label_DD97:; return;
label_DD99:; return;
label_DD9B:; return;
label_DD9C:; return;
label_DD9E:; return;
label_DDA0:; return;
label_DDA2:; return;
label_DDA4:; return;
label_DDA6:; return;
label_DDA9:; return;
label_DDAC:; return;
label_DDAE:; return;
label_DDB1:; return;
label_DDB4:; return;
label_DDB7:; return;
label_DDB9:; return;
label_DDBA:; return;
label_DDBC:; return;
label_DDBF:; return;
label_DDC2:; return;
label_DDC5:; return;
label_DDC8:; return;
label_DDCB:; return;
label_DDCE:; return;
label_DDD1:; return;
label_DDDA:; return;
label_DDDD:; return;
label_DDE0:; return;
label_DDE3:; return;
label_DDE6:; return;
label_DDF2:; return;
label_DDF5:; return;
label_DDF8:; return;
label_DDFB:; return;
label_DDFE:; return;
label_DE01:; return;
label_DE04:; return;
label_DE05:; return;
label_DE07:; return;
label_DE09:; return;
label_DE0B:; return;
label_DE0C:; return;
label_DE0E:; return;
label_DE0F:; return;
label_DE12:; return;
label_DE13:; return;
label_DE16:; return;
label_DE19:; return;
label_DE1A:; return;
label_DE1B:; return;
label_DE1D:; return;
label_DE1F:; return;
label_DE22:; return;
label_DE23:; return;
label_DE24:; return;
label_DE27:; return;
label_DE28:; return;
label_DE2A:; return;
label_DE2C:; return;
label_DE2D:; return;
label_DE2F:; return;
label_DE32:; return;
label_DE34:; return;
label_DE37:; return;
label_DE39:; return;
label_DE3B:; return;
label_DE3D:; return;
label_DE3E:; return;
label_DE3F:; return;
label_DE41:; return;
label_DE44:; return;
label_DE45:; return;
label_DE46:; return;
label_DE49:; return;
label_DE4A:; return;
label_DE4D:; return;
label_DE50:; return;
label_DE53:; return;
label_DE55:; return;
label_DE58:; return;
label_DE59:; return;
label_DE5A:; return;
label_DE5B:; return;
label_DE5C:; return;
label_DE5E:; return;
label_DE60:; return;
label_DE62:; return;
label_DE63:; return;
label_DE65:; return;
label_DE67:; return;
label_DE69:; return;
label_DE6B:; return;
label_DE6D:; return;
label_DE70:; return;
label_DE72:; return;
label_DE73:; return;
label_DE76:; return;
label_DE79:; return;
label_DE7B:; return;
label_DE7E:; return;
label_DE80:; return;
label_DE81:; return;
label_DE83:; return;
label_DE85:; return;
label_DE88:; return;
label_DE8A:; return;
label_DE8C:; return;
label_DE8E:; return;
label_DE90:; return;
label_DE92:; return;
label_DE94:; return;
label_DE96:; return;
label_DE98:; return;
label_DE9A:; return;
label_DE9D:; return;
label_DEA0:; return;
label_DEA3:; return;
label_DEA6:; return;
label_DEA9:; return;
label_DEAC:; return;
label_DEAF:; return;
label_DEB2:; return;
label_DEB5:; return;
label_DEB8:; return;
label_DEBB:; return;
label_DEBE:; return;
label_DEC1:; return;
label_DEC3:; return;
label_DEC5:; return;
label_DEC8:; return;
label_DECA:; return;
label_DECC:; return;
label_DECD:; return;
label_DECF:; return;
label_DED1:; return;
label_DED3:; return;
label_DED5:; return;
label_DED7:; return;
label_DED8:; return;
label_DEDA:; return;
label_DEDB:; return;
label_DEDC:; return;
label_DEDE:; return;
label_DEE0:; return;
label_DEE2:; return;
label_DEE5:; return;
label_DEE8:; return;
label_DEE9:; return;
label_DEEA:; return;
label_DEED:; return;
label_DEEE:; return;
label_DEF0:; return;
label_DEF1:; return;
label_DEF4:; return;
label_DEF7:; return;
label_DEFA:; return;
label_DEFC:; return;
label_DEFF:; return;
label_DF02:; return;
label_DF05:; return;
label_DF08:; return;
label_DF0B:; return;
label_DF0E:; return;
label_DF0F:; return;
label_DF10:; return;
label_DF12:; return;
label_DF14:; return;
label_DF16:; return;
label_DF18:; return;
label_DF1A:; return;
label_DF1C:; return;
label_DF1E:; return;
label_DF20:; return;
label_DF22:; return;
label_DF23:; return;
label_DF25:; return;
label_DF27:; return;
label_DF29:; return;
label_DF2B:; return;
label_DF2D:; return;
label_DF2F:; return;
label_DF31:; return;
label_DF33:; return;
label_DF35:; return;
label_DF37:; return;
label_DF39:; return;
label_DF3B:; return;
label_DF3D:; return;
label_DF3F:; return;
label_DF41:; return;
label_DF43:; return;
label_DF45:; return;
label_DF47:; return;
label_DF49:; return;
label_DF4C:; return;
label_DF4F:; return;
label_DF52:; return;
label_DF54:; return;
label_DF56:; return;
label_DF59:; return;
label_DF5B:; return;
label_DF5E:; return;
label_DF60:; return;
label_DF63:; return;
label_DF65:; return;
label_DF68:; return;
label_DF69:; return;
label_DF6C:; return;
label_DF6F:; return;
label_DF71:; return;
label_DF72:; return;
label_DF74:; return;
label_DF77:; return;
label_DF79:; return;
label_DF7C:; return;
label_DF7D:; return;
label_DF80:; return;
label_DF82:; return;
label_DF84:; return;
label_DF87:; return;
label_DF89:; return;
label_DF8B:; return;
label_DF8D:; return;
label_DF8F:; return;
label_DF91:; return;
label_DF93:; return;
label_DF95:; return;
label_DF97:; return;
label_DF99:; return;
label_DF9B:; return;
label_DF9D:; return;
label_DF9F:; return;
label_DFA1:; return;
label_DFA3:; return;
label_DFA5:; return;
label_DFA7:; return;
label_DFA9:; return;
label_DFAB:; return;
label_DFAD:; return;
label_DFAF:; return;
label_DFB1:; return;
label_DFB4:; return;
label_DFB5:; return;
label_DFB7:; return;
label_DFB9:; return;
label_DFBB:; return;
label_DFBC:; return;
label_DFBE:; return;
label_DFBF:; return;
label_DFC0:; return;
label_DFC1:; return;
label_DFC3:; return;
label_DFC4:; return;
label_DFC5:; return;
label_DFC6:; return;
label_DFC7:; return;
label_DFC8:; return;
label_DFC9:; return;
label_DFCA:; return;
label_DFCB:; return;
label_DFCC:; return;
label_DFCD:; return;
label_DFCE:; return;
label_DFCF:; return;
label_DFD0:; return;
label_DFD2:; return;
label_DFD5:; return;
label_DFD6:; return;
label_DFD7:; return;
label_DFD9:; return;
label_DFDB:; return;
label_DFDD:; return;
label_DFDE:; return;
label_DFDF:; return;
label_DFE1:; return;
label_DFE3:; return;
label_DFE5:; return;
label_DFE7:; return;
label_DFE8:; return;
label_DFEA:; return;
label_DFEC:; return;
label_DFED:; return;
label_DFEF:; return;
label_DFF1:; return;
label_DFF3:; return;
label_DFF4:; return;
label_DFF5:; return;
label_DFF7:; return;
label_DFF9:; return;
label_DFFB:; return;
label_DFFD:; return;
label_DFFF:; return;
label_E001:; return;
label_E003:; return;
label_E005:; return;
label_E007:; return;
label_E008:; return;
label_E009:; return;
label_E00B:; return;
label_E00D:; return;
label_E00F:; return;
label_E011:; return;
label_E013:; return;
label_E015:; return;
label_E017:; return;
label_E019:; return;
label_E01B:; return;
label_E01D:; return;
label_E01F:; return;
label_E021:; return;
label_E023:; return;
label_E025:; return;
label_E026:; return;
label_E028:; return;
label_E029:; return;
label_E02B:; return;
label_E02D:; return;
label_E02F:; return;
label_E031:; return;
label_E033:; return;
label_E035:; return;
label_E037:; return;
label_E039:; return;
label_E03B:; return;
label_E03C:; return;
label_E03D:; return;
label_E03E:; return;
label_E040:; return;
label_E042:; return;
label_E044:; return;
label_E046:; return;
label_E048:; return;
label_E04A:; return;
label_E04C:; return;
label_E04E:; return;
label_E050:; return;
label_E053:; return;
label_E054:; return;
label_E056:; return;
label_E057:; return;
label_E059:; return;
label_E05A:; return;
label_E05B:; return;
label_E05C:; return;
label_E05D:; return;
label_E05F:; return;
label_E061:; return;
label_E063:; return;
label_E066:; return;
label_E068:; return;
label_E06B:; return;
label_E06D:; return;
label_E06F:; return;
label_E071:; return;
label_E073:; return;
label_E075:; return;
label_E077:; return;
label_E079:; return;
label_E07B:; return;
label_E07D:; return;
label_E07F:; return;
label_E081:; return;
label_E083:; return;
label_E084:; return;
label_E086:; return;
label_E088:; return;
label_E08A:; return;
label_E08C:; return;
label_E08E:; return;
label_E090:; return;
label_E092:; return;
label_E093:; return;
label_E094:; return;
label_E095:; return;
label_E098:; return;
label_E09A:; return;
label_E09C:; return;
label_E09E:; return;
label_E09F:; return;
label_E0A0:; return;
label_E0A2:; return;
label_E0A4:; return;
label_E0A5:; return;
label_E0A8:; return;
label_E0AA:; return;
label_E0AC:; return;
label_E0AE:; return;
label_E0AF:; return;
label_E0B1:; return;
label_E0B3:; return;
label_E0B4:; return;
label_E0B6:; return;
label_E0B8:; return;
label_E0BA:; return;
label_E0BC:; return;
label_E0BE:; return;
label_E0C0:; return;
label_E0C2:; return;
label_E0C4:; return;
label_E0C5:; return;
label_E0C7:; return;
label_E0C9:; return;
label_E0CB:; return;
label_E0CD:; return;
label_E0CF:; return;
label_E0D1:; return;
label_E0D3:; return;
label_E0D5:; return;
label_E0D7:; return;
label_E0D9:; return;
label_E0DB:; return;
label_E0DD:; return;
label_E0DF:; return;
label_E0E1:; return;
label_E0E2:; return;
label_E0E5:; return;
label_E0E6:; return;
label_E0E8:; return;
label_E0EA:; return;
label_E0ED:; return;
label_E0EE:; return;
label_E0EF:; return;
label_E0F1:; return;
label_E0F3:; return;
label_E0F5:; return;
label_E0F7:; return;
label_E0F9:; return;
label_E0FB:; return;
label_E0FD:; return;
label_E0FF:; return;
label_E101:; return;
label_E103:; return;
label_E105:; return;
label_E107:; return;
label_E108:; return;
label_E10B:; return;
label_E10C:; return;
label_E10E:; return;
label_E110:; return;
label_E111:; return;
label_E112:; return;
label_E115:; return;
label_E116:; return;
label_E117:; return;
label_E118:; return;
label_E11B:; return;
label_E11C:; return;
label_E11F:; return;
label_E120:; return;
label_E123:; return;
label_E124:; return;
label_E126:; return;
label_E128:; return;
label_E12A:; return;
label_E12D:; return;
label_E12E:; return;
label_E130:; return;
label_E133:; return;
label_E134:; return;
label_E136:; return;
label_E137:; return;
label_E138:; return;
label_E13B:; return;
label_E13C:; return;
label_E13E:; return;
label_E140:; return;
label_E142:; return;
label_E145:; return;
label_E146:; return;
label_E148:; return;
label_E14A:; return;
label_E14C:; return;
label_E14D:; return;
label_E14E:; return;
label_E151:; return;
label_E152:; return;
label_E155:; return;
label_E156:; return;
label_E157:; return;
label_E158:; return;
label_E15A:; return;
label_E15D:; return;
label_E160:; return;
label_E161:; return;
label_E163:; return;
label_E164:; return;
label_E166:; return;
label_E168:; return;
label_E169:; return;
label_E16B:; return;
label_E16C:; return;
label_E16D:; return;
label_E16F:; return;
label_E170:; return;
label_E172:; return;
label_E174:; return;
label_E176:; return;
label_E178:; return;
label_E17B:; return;
label_E17E:; return;
label_E180:; return;
label_E182:; return;
label_E184:; return;
label_E185:; return;
label_E187:; return;
label_E189:; return;
label_E18C:; return;
label_E18E:; return;
label_E190:; return;
label_E191:; return;
label_E193:; return;
label_E195:; return;
label_E197:; return;
label_E198:; return;
label_E19A:; return;
label_E19C:; return;
label_E19E:; return;
label_E1A0:; return;
label_E1A2:; return;
label_E1A5:; return;
label_E1A6:; return;
label_E1A8:; return;
label_E1AA:; return;
label_E1AB:; return;
label_E1AD:; return;
label_E1AF:; return;
label_E1B1:; return;
label_E1B2:; return;
label_E1B4:; return;
label_E1B7:; return;
label_E1B8:; return;
label_E1BA:; return;
label_E1BC:; return;
label_E1BD:; return;
label_E1BF:; return;
label_E1C0:; return;
label_E1C2:; return;
label_E1C3:; return;
label_E1C5:; return;
label_E1C8:; return;
label_E1C9:; return;
label_E1CB:; return;
label_E1CC:; return;
label_E1CE:; return;
label_E1CF:; return;
label_E1D0:; return;
label_E1D2:; return;
label_E1D4:; return;
label_E1D5:; return;
label_E1D7:; return;
label_E1D8:; return;
label_E1D9:; return;
label_E1DB:; return;
label_E1DD:; return;
label_E1DE:; return;
label_E1E0:; return;
label_E1E1:; return;
label_E1E3:; return;
label_E1E5:; return;
label_E1F4:; return;
label_E1F5:; return;
label_E1F7:; return;
label_E1F8:; return;
label_E1FA:; return;
label_E1FB:; return;
label_E1FD:; return;
label_E1FF:; return;
label_E201:; return;
label_E203:; return;
label_E204:; return;
label_E206:; return;
label_E209:; return;
label_E20B:; return;
label_E20D:; return;
label_E20E:; return;
label_E20F:; return;
label_E210:; return;
label_E213:; return;
label_E215:; return;
label_E217:; return;
label_E218:; return;
label_E219:; return;
label_E21B:; return;
label_E21D:; return;
label_E21F:; return;
label_E221:; return;
label_E223:; return;
label_E225:; return;
label_E228:; return;
label_E22B:; return;
label_E22C:; return;
label_E22E:; return;
label_E231:; return;
label_E233:; return;
label_E235:; return;
label_E236:; return;
label_E238:; return;
label_E23A:; return;
label_E23D:; return;
label_E23F:; return;
label_E240:; return;
label_E242:; return;
label_E245:; return;
label_E248:; return;
label_E249:; return;
label_E24A:; return;
label_E24C:; return;
label_E24F:; return;
label_E250:; return;
label_E252:; return;
label_E254:; return;
label_E257:; return;
label_E25A:; return;
label_E25D:; return;
label_E25E:; return;
label_E260:; return;
label_E262:; return;
label_E264:; return;
label_E266:; return;
}

void func_F18D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F18D");
#endif
label_F18D:;
    /* $F18D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F18F:;
    /* $F18F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE60 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F192:;
    /* $F192: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F194:;
    /* $F194: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE20 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F197:;
    /* $F197: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F199:;
    /* $F199: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F19C:;
    /* $F19C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F19E:;
    /* $F19E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1A1:;
    /* $F1A1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1A3:;
    /* $F1A3: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE60 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1A6:;
    /* $F1A6: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1A8:;
    /* $F1A8: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE20 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1AB:;
    /* $F1AB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1AD:;
    /* $F1AD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1B0:;
    /* $F1B0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1B2:;
    /* $F1B2: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1B5:;
    /* $F1B5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1B7:;
    /* $F1B7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE20 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1BA:;
    /* $F1BA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1BC:;
    /* $F1BC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE20 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1BF:;
    /* $F1BF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1C1:;
    /* $F1C1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE20 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1C4:;
    /* $F1C4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1C6:;
    /* $F1C6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE41 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1C9:;
    /* $F1C9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1CB:;
    /* $F1CB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xF1CB); return;
}

void func_CA96(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CA96");
#endif
label_CA96:;
    /* $CA96: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA99:;
    /* $CA99: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA9C:;
    /* $CA9C: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA9F:;
    /* $CA9F: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAA2:;
    /* $CAA2: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAA5:;
    /* $CAA5: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAA8:;
    /* $CAA8: FC */ maybe_trigger_vblank(4); (void)nes_read((0x4020 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAAB:;
    /* $CAAB: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CAAE:;
    /* $CAAE: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAB1:;
    /* $CAB1: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAB4:;
    /* $CAB4: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAB7:;
    /* $CAB7: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CABA:;
    /* $CABA: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CABD:;
    /* $CABD: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAC0:;
    /* $CAC0: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAC3:;
    /* $CAC3: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAC6:;
    /* $CAC6: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAC9:;
    /* $CAC9: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CACC:;
    /* $CACC: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x2060, -1);
label_CACF:;
    /* $CACF: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAD2:;
    /* $CAD2: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CAD4:;
    /* $CAD4: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAD6:;
    /* $CAD6: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAD8:;
    /* $CAD8: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CADA:;
    /* $CADA: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CADC:;
    /* $CADC: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CADE:;
    /* $CADE: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAE0:;
    /* $CAE0: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAE2:;
    /* $CAE2: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAE4:;
    /* $CAE4: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAE6:;
    /* $CAE6: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAE8:;
    /* $CAE8: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAEA:;
    /* $CAEA: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAEC:;
    /* $CAEC: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAEF:;
    /* $CAEF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x2080, -1);
label_CAF2:;
    /* $CAF2: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAF5:;
    /* $CAF5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A);
label_CAF7:;
    /* $CAF7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CAFA:;
    /* $CAFA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CAFD:;
    /* $CAFD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB00:;
    /* $CB00: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB03:;
    /* $CB03: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB06:;
    /* $CB06: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB09:;
    /* $CB09: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB0C:;
    /* $CB0C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB0F:;
    /* $CB0F: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB12:;
    /* $CB12: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x20A0, -1);
label_CB15:;
    /* $CB15: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB18:;
    /* $CB18: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A);
label_CB1A:;
    /* $CB1A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB1D:;
    /* $CB1D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB20:;
    /* $CB20: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB23:;
    /* $CB23: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB26:;
    /* $CB26: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB29:;
    /* $CB29: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB2C:;
    /* $CB2C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB2F:;
    /* $CB2F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB32:;
    /* $CB32: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB35:;
    /* $CB35: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x20C0, -1);
label_CB38:;
    /* $CB38: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB3B:;
    /* $CB3B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A);
label_CB3D:;
    /* $CB3D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB40:;
    /* $CB40: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB43:;
    /* $CB43: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB46:;
    /* $CB46: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB49:;
    /* $CB49: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB4C:;
    /* $CB4C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB4F:;
    /* $CB4F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB52:;
    /* $CB52: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB55:;
    /* $CB55: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB58:;
    /* $CB58: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x20E0, -1);
label_CB5B:;
    /* $CB5B: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB5E:;
    /* $CB5E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A);
label_CB60:;
    /* $CB60: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB63:;
    /* $CB63: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB66:;
    /* $CB66: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB69:;
    /* $CB69: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB6C:;
    /* $CB6C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB6F:;
    /* $CB6F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB72:;
    /* $CB72: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB75:;
    /* $CB75: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB78:;
    /* $CB78: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB7B:;
    /* $CB7B: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CB7D:;
    /* $CB7D: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CB80:;
    /* $CB80: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB83:;
    /* $CB83: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB86:;
    /* $CB86: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB89:;
    /* $CB89: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB8C:;
    /* $CB8C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB8F:;
    /* $CB8F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB92:;
    /* $CB92: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB95:;
    /* $CB95: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB98:;
    /* $CB98: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB9B:;
    /* $CB9B: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB9E:;
    /* $CB9E: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CBA0:;
    /* $CBA0: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CBA3:;
    /* $CBA3: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CBA6:;
    /* $CBA6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBA9:;
    /* $CBA9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBAC:;
    /* $CBAC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBAF:;
    /* $CBAF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBB2:;
    /* $CBB2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBB5:;
    /* $CBB5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBB8:;
    /* $CBB8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBBB:;
    /* $CBBB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBBE:;
    /* $CBBE: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CBC1:;
    /* $CBC1: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x40 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CBC3:;
    /* $CBC3: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CBC6:;
    /* $CBC6: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CBC9:;
    /* $CBC9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBCC:;
    /* $CBCC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBCF:;
    /* $CBCF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBD2:;
    /* $CBD2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBD5:;
    /* $CBD5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBD8:;
    /* $CBD8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBDB:;
    /* $CBDB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBDE:;
    /* $CBDE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBE1:;
    /* $CBE1: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CBE4:;
    /* $CBE4: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CBE6:;
    /* $CBE6: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CBE9:;
    /* $CBE9: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CBEC:;
    /* $CBEC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBEF:;
    /* $CBEF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBF2:;
    /* $CBF2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBF5:;
    /* $CBF5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBF8:;
    /* $CBF8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBFB:;
    /* $CBFB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBFE:;
    /* $CBFE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC01:;
    /* $CC01: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC04:;
    /* $CC04: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC07:;
    /* $CC07: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x80 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CC09:;
    /* $CC09: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CC0C:;
    /* $CC0C: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC0F:;
    /* $CC0F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC12:;
    /* $CC12: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC15:;
    /* $CC15: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC18:;
    /* $CC18: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC1B:;
    /* $CC1B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC1E:;
    /* $CC1E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC21:;
    /* $CC21: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC24:;
    /* $CC24: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC27:;
    /* $CC27: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC2A:;
    /* $CC2A: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xA0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CC2C:;
    /* $CC2C: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CC2F:;
    /* $CC2F: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC32:;
    /* $CC32: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC35:;
    /* $CC35: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC38:;
    /* $CC38: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC3B:;
    /* $CC3B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC3E:;
    /* $CC3E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC41:;
    /* $CC41: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC44:;
    /* $CC44: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC47:;
    /* $CC47: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC4A:;
    /* $CC4A: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC4D:;
    /* $CC4D: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xC0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CC4F:;
    /* $CC4F: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CC52:;
    /* $CC52: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC55:;
    /* $CC55: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC58:;
    /* $CC58: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC5B:;
    /* $CC5B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC5E:;
    /* $CC5E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC61:;
    /* $CC61: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC64:;
    /* $CC64: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC67:;
    /* $CC67: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC6A:;
    /* $CC6A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC6D:;
    /* $CC6D: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC70:;
    /* $CC70: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xE0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CC72:;
    /* $CC72: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CC75:;
    /* $CC75: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC78:;
    /* $CC78: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC7B:;
    /* $CC7B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC7E:;
    /* $CC7E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC81:;
    /* $CC81: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC84:;
    /* $CC84: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC87:;
    /* $CC87: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC8A:;
    /* $CC8A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC8D:;
    /* $CC8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC90:;
    /* $CC90: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC93:;
    /* $CC93: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_CC94:;
    /* $CC94: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xCC94); return;
}

void func_F042(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F042");
#endif
label_F042:;
    /* $F042: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F044:;
    /* $F044: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F046:;
    /* $F046: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x60); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F048:;
    /* $F048: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F04A:;
    /* $F04A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D2BD(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D2BD");
#endif
label_D2BD:;
    /* $D2BD: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0229); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_D2C0:;
    /* $D2C0: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x06FF); FLAG_NZ(g_cpu.A);
label_D2C3:;
    /* $D2C3: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_D2C4:;
    /* $D2C4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D2C7; }
label_D2C6:;
    /* $D2C6: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_D2C7:;
    /* $D2C7: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xEB; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D2C9:;
    /* $D2C9: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xEC; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D2CB:;
    /* $D2CB: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E602(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E602");
#endif
label_E602:;
    /* $E602: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x2E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E604:;
    /* $E604: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E62A; }
label_E606:;
    /* $E606: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB124 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E609:;
    /* $E609: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x2A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E60B:;
    /* $E60B: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB0); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E60D:;
    /* $E60D: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x2EBD; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E610:;
    /* $E610: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x2E) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E612:;
    /* $E612: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x2E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E614:;
    /* $E614: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E616:;
    /* $E616: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E617:;
    /* $E617: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E618:;
    /* $E618: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9F00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E61B:;
    /* $E61B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_E61D:;
    /* $E61D: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x2E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_E61F:;
    /* $E61F: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x38 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E621:;
    /* $E621: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x3A + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_E623:;
    /* $E623: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E65F; }
label_E625:;
    /* $E625: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB102 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E628:;
    /* $E628: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E629:;
    /* $E629: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE629); return;
label_E62A:;
    /* $E62A: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_E62D:;
    /* $E62D: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB1); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E62F:;
    /* $E62F: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x342E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E632:;
    /* $E632: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x2E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E634:;
    /* $E634: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E635:;
    /* $E635: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E636:;
    /* $E636: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E637:;
    /* $E637: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E638:;
    /* $E638: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x3434; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E63B:;
    /* $E63B: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0202; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E63E:;
    /* $E63E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E63F:;
    /* $E63F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC700 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E642:;
    /* $E642: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x44) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E644:;
    /* $E644: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x84); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E646:;
    /* $E646: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E648:;
    /* $E648: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x84); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E64A:;
    /* $E64A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E64C:;
    /* $E64C: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E64E:;
    /* $E64E: 84 */ maybe_trigger_vblank(3); nes_write(0xB0, g_cpu.Y);
label_E650:;
    /* $E650: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E652:;
    /* $E652: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_E654:;
    /* $E654: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xBD + g_cpu.X) & 0xFF), g_cpu.A);
label_E656:;
    /* $E656: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_E658:;
    /* $E658: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xBD + g_cpu.X) & 0xFF), g_cpu.A);
label_E65A:;
    /* $E65A: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB1 + g_cpu.X) & 0xFF), g_cpu.A);
label_E65C:;
    /* $E65C: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x01 + g_cpu.X) & 0xFF), g_cpu.A);
label_E65E:;
    /* $E65E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE65E); return;
label_E65F:;
    /* $E65F: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xB1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_E661:;
    /* $E661: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E663:;
    /* $E663: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E665:;
    /* $E665: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E667:;
    /* $E667: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E669:;
    /* $E669: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0444 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E66C:;
    /* $E66C: 84 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.Y);
label_E66E:;
    /* $E66E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0xE5F1); return; }
label_E670:;
    /* $E670: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB181 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E673:;
    /* $E673: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x81); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E675:;
    /* $E675: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E677:;
    /* $E677: C2 */ maybe_trigger_vblank(2); /* NOP */
label_E679:;
    /* $E679: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67B:;
    /* $E67B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67D:;
    /* $E67D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67F:;
    /* $E67F: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E681:;
    /* $E681: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x44C4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E684:;
    /* $E684: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E686:;
    /* $E686: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x44) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E688:;
    /* $E688: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E68A:;
    /* $E68A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E6D0; }
label_E68C:;
    /* $E68C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC281 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E68F:;
    /* $E68F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E612;
    }
label_E691:;
    /* $E691: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xFF81 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E694:;
    /* $E694: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_E695:;
    /* $E695: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x00 + g_cpu.X) & 0xFF), g_cpu.A);
label_E697:;
    /* $E697: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB1); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E699:;
    /* $E699: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E69B:;
    /* $E69B: 84 */ maybe_trigger_vblank(3); nes_write(0x44, g_cpu.Y);
label_E69D:;
    /* $E69D: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E69F:;
    /* $E69F: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E6A1:;
    /* $E6A1: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6A3:;
    /* $E6A3: 84 */ maybe_trigger_vblank(3); nes_write(0x41, g_cpu.Y);
label_E6A5:;
    /* $E6A5: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6A7:;
    /* $E6A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E6A9:;
    /* $E6A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9F00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E6AC:;
    /* $E6AC: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x31; FLAG_NZ(g_cpu.A);
label_E6AE:;
    /* $E6AE: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB1 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_E6B0:;
    /* $E6B0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B1:;
    /* $E6B1: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6B3:;
    /* $E6B3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B4:;
    /* $E6B4: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6B6:;
    /* $E6B6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B7:;
    /* $E6B7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B8:;
    /* $E6B8: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6BA:;
    /* $E6BA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6BB:;
    /* $E6BB: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6BD:;
    /* $E6BD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6BE:;
    /* $E6BE: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_E6BF:;
    /* $E6BF: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0xB1FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E6C2:;
    /* $E6C2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C3:;
    /* $E6C3: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6C5:;
    /* $E6C5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C6:;
    /* $E6C6: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6C8:;
    /* $E6C8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C9:;
    /* $E6C9: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x0254 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E6CC:;
    /* $E6CC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6CD:;
    /* $E6CD: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6CF:;
    /* $E6CF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D0:;
    /* $E6D0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D1:;
    /* $E6D1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D2:;
    /* $E6D2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE6D2); return;
}

void func_E605(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E605");
#endif
label_E605:;
    /* $E605: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xBD); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E607:;
    /* $E607: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB1); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E609:;
    /* $E609: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x2A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E60B:;
    /* $E60B: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB0); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E60D:;
    /* $E60D: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x2EBD; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E610:;
    /* $E610: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x2E) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E612:;
    /* $E612: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x2E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E614:;
    /* $E614: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E616:;
    /* $E616: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E617:;
    /* $E617: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E618:;
    /* $E618: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9F00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E61B:;
    /* $E61B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_E61D:;
    /* $E61D: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x2E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_E61F:;
    /* $E61F: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x38 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E621:;
    /* $E621: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x3A + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_E623:;
    /* $E623: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E65F; }
label_E625:;
    /* $E625: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB102 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E628:;
    /* $E628: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E629:;
    /* $E629: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE629); return;
label_E62A:;
    /* $E62A: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_E62D:;
    /* $E62D: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB1); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E62F:;
    /* $E62F: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x342E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E632:;
    /* $E632: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x2E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E634:;
    /* $E634: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E635:;
    /* $E635: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E636:;
    /* $E636: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E637:;
    /* $E637: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E638:;
    /* $E638: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x3434; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E63B:;
    /* $E63B: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0202; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E63E:;
    /* $E63E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E63F:;
    /* $E63F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC700 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E642:;
    /* $E642: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x44) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E644:;
    /* $E644: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x84); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E646:;
    /* $E646: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E648:;
    /* $E648: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x84); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E64A:;
    /* $E64A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E64C:;
    /* $E64C: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E64E:;
    /* $E64E: 84 */ maybe_trigger_vblank(3); nes_write(0xB0, g_cpu.Y);
label_E650:;
    /* $E650: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E652:;
    /* $E652: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_E654:;
    /* $E654: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xBD + g_cpu.X) & 0xFF), g_cpu.A);
label_E656:;
    /* $E656: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_E658:;
    /* $E658: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xBD + g_cpu.X) & 0xFF), g_cpu.A);
label_E65A:;
    /* $E65A: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB1 + g_cpu.X) & 0xFF), g_cpu.A);
label_E65C:;
    /* $E65C: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x01 + g_cpu.X) & 0xFF), g_cpu.A);
label_E65E:;
    /* $E65E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE65E); return;
label_E65F:;
    /* $E65F: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xB1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_E661:;
    /* $E661: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E663:;
    /* $E663: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E665:;
    /* $E665: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E667:;
    /* $E667: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E669:;
    /* $E669: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0444 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E66C:;
    /* $E66C: 84 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.Y);
label_E66E:;
    /* $E66E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0xE5F1); return; }
label_E670:;
    /* $E670: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB181 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E673:;
    /* $E673: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x81); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E675:;
    /* $E675: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E677:;
    /* $E677: C2 */ maybe_trigger_vblank(2); /* NOP */
label_E679:;
    /* $E679: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67B:;
    /* $E67B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67D:;
    /* $E67D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67F:;
    /* $E67F: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E681:;
    /* $E681: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x44C4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E684:;
    /* $E684: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E686:;
    /* $E686: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x44) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E688:;
    /* $E688: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E68A:;
    /* $E68A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E6D0; }
label_E68C:;
    /* $E68C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC281 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E68F:;
    /* $E68F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E612;
    }
label_E691:;
    /* $E691: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xFF81 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E694:;
    /* $E694: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_E695:;
    /* $E695: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x00 + g_cpu.X) & 0xFF), g_cpu.A);
label_E697:;
    /* $E697: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB1); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E699:;
    /* $E699: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E69B:;
    /* $E69B: 84 */ maybe_trigger_vblank(3); nes_write(0x44, g_cpu.Y);
label_E69D:;
    /* $E69D: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E69F:;
    /* $E69F: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E6A1:;
    /* $E6A1: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6A3:;
    /* $E6A3: 84 */ maybe_trigger_vblank(3); nes_write(0x41, g_cpu.Y);
label_E6A5:;
    /* $E6A5: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6A7:;
    /* $E6A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E6A9:;
    /* $E6A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9F00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E6AC:;
    /* $E6AC: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x31; FLAG_NZ(g_cpu.A);
label_E6AE:;
    /* $E6AE: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB1 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_E6B0:;
    /* $E6B0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B1:;
    /* $E6B1: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6B3:;
    /* $E6B3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B4:;
    /* $E6B4: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6B6:;
    /* $E6B6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B7:;
    /* $E6B7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B8:;
    /* $E6B8: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6BA:;
    /* $E6BA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6BB:;
    /* $E6BB: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6BD:;
    /* $E6BD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6BE:;
    /* $E6BE: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_E6BF:;
    /* $E6BF: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0xB1FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E6C2:;
    /* $E6C2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C3:;
    /* $E6C3: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6C5:;
    /* $E6C5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C6:;
    /* $E6C6: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6C8:;
    /* $E6C8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C9:;
    /* $E6C9: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x0254 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E6CC:;
    /* $E6CC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6CD:;
    /* $E6CD: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6CF:;
    /* $E6CF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D0:;
    /* $E6D0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D1:;
    /* $E6D1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D2:;
    /* $E6D2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE6D2); return;
}

void func_EC4C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EC4C");
#endif
label_EC4C:;
    /* $EC4C: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F031(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F031");
#endif
label_F031:;
    /* $F031: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F033:;
    /* $F033: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F035:;
    /* $F035: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E5BD(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E5BD");
#endif
label_E5BD:;
    /* $E5BD: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x3834; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E5C0:;
    /* $E5C0: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E5FC; }
label_E5C2:;
    /* $E5C2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB13A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E5C5:;
    /* $E5C5: 3A */ maybe_trigger_vblank(2); /* NOP */
label_E5C6:;
    /* $E5C6: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_E5C7:;
    /* $E5C7: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x2E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E5C9:;
    /* $E5C9: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0234; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E5CC:;
    /* $E5CC: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x342E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E5CF:;
    /* $E5CF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E5D0:;
    /* $E5D0: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_E600; }
label_E5D2:;
    /* $E5D2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB12E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E5D5:;
    /* $E5D5: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x3834; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E5D8:;
    /* $E5D8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_E614; }
label_E5DA:;
    /* $E5DA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB13A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E5DD:;
    /* $E5DD: 3A */ maybe_trigger_vblank(2); /* NOP */
label_E5DE:;
    /* $E5DE: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_E5DF:;
    /* $E5DF: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xB2 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E5E1:;
    /* $E5E1: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0202; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E5E4:;
    /* $E5E4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E5E5:;
    /* $E5E5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9F00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E5E8:;
    /* $E5E8: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E5EA:;
    /* $E5EA: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB1); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E5EC:;
    /* $E5EC: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x342E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E5EF:;
    /* $E5EF: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x24B0; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E5F2:;
    /* $E5F2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB124 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E5F5:;
    /* $E5F5: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x2A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E5F7:;
    /* $E5F7: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2E2E); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E5FA:;
    /* $E5FA: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x2E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E5FC:;
    /* $E5FC: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E5FE:;
    /* $E5FE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E5FF:;
    /* $E5FF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E600:;
    /* $E600: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E601:;
    /* $E601: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x2E34; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E604:;
    /* $E604: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E62A; }
label_E606:;
    /* $E606: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB124 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E609:;
    /* $E609: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x2A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E60B:;
    /* $E60B: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB0); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E60D:;
    /* $E60D: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x2EBD; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E610:;
    /* $E610: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x2E) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E612:;
    /* $E612: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x2E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E614:;
    /* $E614: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E616:;
    /* $E616: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E617:;
    /* $E617: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E618:;
    /* $E618: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9F00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E61B:;
    /* $E61B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_E61D:;
    /* $E61D: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x2E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_E61F:;
    /* $E61F: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x38 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E621:;
    /* $E621: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x3A + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_E623:;
    /* $E623: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E65F; }
label_E625:;
    /* $E625: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB102 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E628:;
    /* $E628: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E629:;
    /* $E629: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE629); return;
label_E62A:;
    /* $E62A: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_E62D:;
    /* $E62D: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB1); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E62F:;
    /* $E62F: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x342E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E632:;
    /* $E632: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x2E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E634:;
    /* $E634: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E635:;
    /* $E635: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E636:;
    /* $E636: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E637:;
    /* $E637: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E638:;
    /* $E638: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x3434; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E63B:;
    /* $E63B: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0202; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E63E:;
    /* $E63E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E63F:;
    /* $E63F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC700 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E642:;
    /* $E642: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x44) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E644:;
    /* $E644: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x84); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E646:;
    /* $E646: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E648:;
    /* $E648: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x84); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E64A:;
    /* $E64A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E64C:;
    /* $E64C: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E64E:;
    /* $E64E: 84 */ maybe_trigger_vblank(3); nes_write(0xB0, g_cpu.Y);
label_E650:;
    /* $E650: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E652:;
    /* $E652: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_E654:;
    /* $E654: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xBD + g_cpu.X) & 0xFF), g_cpu.A);
label_E656:;
    /* $E656: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_E658:;
    /* $E658: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xBD + g_cpu.X) & 0xFF), g_cpu.A);
label_E65A:;
    /* $E65A: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB1 + g_cpu.X) & 0xFF), g_cpu.A);
label_E65C:;
    /* $E65C: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x01 + g_cpu.X) & 0xFF), g_cpu.A);
label_E65E:;
    /* $E65E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE65E); return;
label_E65F:;
    /* $E65F: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xB1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_E661:;
    /* $E661: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E663:;
    /* $E663: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E665:;
    /* $E665: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E667:;
    /* $E667: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E669:;
    /* $E669: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0444 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E66C:;
    /* $E66C: 84 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.Y);
label_E66E:;
    /* $E66E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0xE5F1); return; }
label_E670:;
    /* $E670: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB181 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E673:;
    /* $E673: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x81); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E675:;
    /* $E675: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E677:;
    /* $E677: C2 */ maybe_trigger_vblank(2); /* NOP */
label_E679:;
    /* $E679: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67B:;
    /* $E67B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67D:;
    /* $E67D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67F:;
    /* $E67F: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E681:;
    /* $E681: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x44C4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E684:;
    /* $E684: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E686:;
    /* $E686: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x44) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E688:;
    /* $E688: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E68A:;
    /* $E68A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E6D0; }
label_E68C:;
    /* $E68C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC281 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E68F:;
    /* $E68F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E612;
    }
label_E691:;
    /* $E691: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xFF81 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E694:;
    /* $E694: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_E695:;
    /* $E695: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x00 + g_cpu.X) & 0xFF), g_cpu.A);
label_E697:;
    /* $E697: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB1); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E699:;
    /* $E699: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E69B:;
    /* $E69B: 84 */ maybe_trigger_vblank(3); nes_write(0x44, g_cpu.Y);
label_E69D:;
    /* $E69D: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E69F:;
    /* $E69F: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E6A1:;
    /* $E6A1: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6A3:;
    /* $E6A3: 84 */ maybe_trigger_vblank(3); nes_write(0x41, g_cpu.Y);
label_E6A5:;
    /* $E6A5: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6A7:;
    /* $E6A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E6A9:;
    /* $E6A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9F00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E6AC:;
    /* $E6AC: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x31; FLAG_NZ(g_cpu.A);
label_E6AE:;
    /* $E6AE: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB1 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_E6B0:;
    /* $E6B0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B1:;
    /* $E6B1: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6B3:;
    /* $E6B3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B4:;
    /* $E6B4: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6B6:;
    /* $E6B6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B7:;
    /* $E6B7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B8:;
    /* $E6B8: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6BA:;
    /* $E6BA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6BB:;
    /* $E6BB: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6BD:;
    /* $E6BD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6BE:;
    /* $E6BE: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_E6BF:;
    /* $E6BF: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0xB1FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E6C2:;
    /* $E6C2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C3:;
    /* $E6C3: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6C5:;
    /* $E6C5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C6:;
    /* $E6C6: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6C8:;
    /* $E6C8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C9:;
    /* $E6C9: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x0254 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E6CC:;
    /* $E6CC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6CD:;
    /* $E6CD: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6CF:;
    /* $E6CF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D0:;
    /* $E6D0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D1:;
    /* $E6D1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D2:;
    /* $E6D2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE6D2); return;
}

void func_CA90(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CA90");
#endif
label_CA90:;
    /* $CA90: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA93:;
    /* $CA93: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA96:;
    /* $CA96: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA99:;
    /* $CA99: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA9C:;
    /* $CA9C: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA9F:;
    /* $CA9F: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAA2:;
    /* $CAA2: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAA5:;
    /* $CAA5: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAA8:;
    /* $CAA8: FC */ maybe_trigger_vblank(4); (void)nes_read((0x4020 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAAB:;
    /* $CAAB: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CAAE:;
    /* $CAAE: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAB1:;
    /* $CAB1: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAB4:;
    /* $CAB4: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAB7:;
    /* $CAB7: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CABA:;
    /* $CABA: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CABD:;
    /* $CABD: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAC0:;
    /* $CAC0: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAC3:;
    /* $CAC3: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAC6:;
    /* $CAC6: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAC9:;
    /* $CAC9: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CACC:;
    /* $CACC: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x2060, -1);
label_CACF:;
    /* $CACF: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAD2:;
    /* $CAD2: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CAD4:;
    /* $CAD4: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAD6:;
    /* $CAD6: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAD8:;
    /* $CAD8: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CADA:;
    /* $CADA: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CADC:;
    /* $CADC: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CADE:;
    /* $CADE: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAE0:;
    /* $CAE0: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAE2:;
    /* $CAE2: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAE4:;
    /* $CAE4: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAE6:;
    /* $CAE6: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAE8:;
    /* $CAE8: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAEA:;
    /* $CAEA: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAEC:;
    /* $CAEC: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAEF:;
    /* $CAEF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x2080, -1);
label_CAF2:;
    /* $CAF2: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAF5:;
    /* $CAF5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A);
label_CAF7:;
    /* $CAF7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CAFA:;
    /* $CAFA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CAFD:;
    /* $CAFD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB00:;
    /* $CB00: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB03:;
    /* $CB03: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB06:;
    /* $CB06: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB09:;
    /* $CB09: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB0C:;
    /* $CB0C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB0F:;
    /* $CB0F: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB12:;
    /* $CB12: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x20A0, -1);
label_CB15:;
    /* $CB15: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB18:;
    /* $CB18: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A);
label_CB1A:;
    /* $CB1A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB1D:;
    /* $CB1D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB20:;
    /* $CB20: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB23:;
    /* $CB23: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB26:;
    /* $CB26: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB29:;
    /* $CB29: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB2C:;
    /* $CB2C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB2F:;
    /* $CB2F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB32:;
    /* $CB32: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB35:;
    /* $CB35: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x20C0, -1);
label_CB38:;
    /* $CB38: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB3B:;
    /* $CB3B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A);
label_CB3D:;
    /* $CB3D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB40:;
    /* $CB40: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB43:;
    /* $CB43: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB46:;
    /* $CB46: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB49:;
    /* $CB49: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB4C:;
    /* $CB4C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB4F:;
    /* $CB4F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB52:;
    /* $CB52: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB55:;
    /* $CB55: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB58:;
    /* $CB58: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x20E0, -1);
label_CB5B:;
    /* $CB5B: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB5E:;
    /* $CB5E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A);
label_CB60:;
    /* $CB60: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB63:;
    /* $CB63: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB66:;
    /* $CB66: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB69:;
    /* $CB69: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB6C:;
    /* $CB6C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB6F:;
    /* $CB6F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB72:;
    /* $CB72: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB75:;
    /* $CB75: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB78:;
    /* $CB78: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB7B:;
    /* $CB7B: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CB7D:;
    /* $CB7D: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CB80:;
    /* $CB80: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB83:;
    /* $CB83: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB86:;
    /* $CB86: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB89:;
    /* $CB89: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB8C:;
    /* $CB8C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB8F:;
    /* $CB8F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB92:;
    /* $CB92: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB95:;
    /* $CB95: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB98:;
    /* $CB98: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB9B:;
    /* $CB9B: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB9E:;
    /* $CB9E: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CBA0:;
    /* $CBA0: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CBA3:;
    /* $CBA3: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CBA6:;
    /* $CBA6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBA9:;
    /* $CBA9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBAC:;
    /* $CBAC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBAF:;
    /* $CBAF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBB2:;
    /* $CBB2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBB5:;
    /* $CBB5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBB8:;
    /* $CBB8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBBB:;
    /* $CBBB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBBE:;
    /* $CBBE: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CBC1:;
    /* $CBC1: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x40 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CBC3:;
    /* $CBC3: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CBC6:;
    /* $CBC6: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CBC9:;
    /* $CBC9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBCC:;
    /* $CBCC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBCF:;
    /* $CBCF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBD2:;
    /* $CBD2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBD5:;
    /* $CBD5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBD8:;
    /* $CBD8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBDB:;
    /* $CBDB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBDE:;
    /* $CBDE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBE1:;
    /* $CBE1: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CBE4:;
    /* $CBE4: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CBE6:;
    /* $CBE6: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CBE9:;
    /* $CBE9: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CBEC:;
    /* $CBEC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBEF:;
    /* $CBEF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBF2:;
    /* $CBF2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBF5:;
    /* $CBF5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBF8:;
    /* $CBF8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBFB:;
    /* $CBFB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBFE:;
    /* $CBFE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC01:;
    /* $CC01: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC04:;
    /* $CC04: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC07:;
    /* $CC07: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x80 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CC09:;
    /* $CC09: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CC0C:;
    /* $CC0C: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC0F:;
    /* $CC0F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC12:;
    /* $CC12: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC15:;
    /* $CC15: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC18:;
    /* $CC18: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC1B:;
    /* $CC1B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC1E:;
    /* $CC1E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC21:;
    /* $CC21: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC24:;
    /* $CC24: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC27:;
    /* $CC27: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC2A:;
    /* $CC2A: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xA0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CC2C:;
    /* $CC2C: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CC2F:;
    /* $CC2F: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC32:;
    /* $CC32: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC35:;
    /* $CC35: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC38:;
    /* $CC38: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC3B:;
    /* $CC3B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC3E:;
    /* $CC3E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC41:;
    /* $CC41: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC44:;
    /* $CC44: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC47:;
    /* $CC47: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC4A:;
    /* $CC4A: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC4D:;
    /* $CC4D: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xC0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CC4F:;
    /* $CC4F: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CC52:;
    /* $CC52: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC55:;
    /* $CC55: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC58:;
    /* $CC58: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC5B:;
    /* $CC5B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC5E:;
    /* $CC5E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC61:;
    /* $CC61: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC64:;
    /* $CC64: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC67:;
    /* $CC67: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC6A:;
    /* $CC6A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC6D:;
    /* $CC6D: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC70:;
    /* $CC70: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xE0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CC72:;
    /* $CC72: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CC75:;
    /* $CC75: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC78:;
    /* $CC78: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC7B:;
    /* $CC7B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC7E:;
    /* $CC7E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC81:;
    /* $CC81: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC84:;
    /* $CC84: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC87:;
    /* $CC87: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC8A:;
    /* $CC8A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC8D:;
    /* $CC8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC90:;
    /* $CC90: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC93:;
    /* $CC93: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_CC94:;
    /* $CC94: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xCC94); return;
}

void func_CE03(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CE03");
#endif
label_CE03:;
    /* $CE03: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_CE06:;
    /* $CE06: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_CE09:;
    /* $CE09: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_CE0C:;
    /* $CE0C: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2C2C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_CE0F:;
    /* $CE0F: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xFC2D); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_CE12:;
    /* $CE12: FC */ maybe_trigger_vblank(4); (void)nes_read((0x23FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE15:;
    /* $CE15: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E880(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E880");
#endif
label_E880:;
    /* $E880: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_E881:;
    /* $E881: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE881); return;
}

void func_CAA6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CAA6");
#endif
label_CAA6:;
    /* $CAA6: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAA9:;
    /* $CAA9: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x2040, -1);
label_CAAC:;
    /* $CAAC: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAAF:;
    /* $CAAF: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAB2:;
    /* $CAB2: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAB5:;
    /* $CAB5: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAB8:;
    /* $CAB8: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CABB:;
    /* $CABB: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CABE:;
    /* $CABE: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAC1:;
    /* $CAC1: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAC4:;
    /* $CAC4: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAC7:;
    /* $CAC7: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CACA:;
    /* $CACA: FC */ maybe_trigger_vblank(4); (void)nes_read((0x20FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CACD:;
    /* $CACD: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C5F7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C5F7");
#endif
label_C5F7:;
    /* $C5F7: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x11 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_C5F9:;
    /* $C5F9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xC5F9); return;
}

void func_E662(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E662");
#endif
label_E662:;
    /* $E662: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x84); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E664:;
    /* $E664: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E666:;
    /* $E666: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x84); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E668:;
    /* $E668: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E66A:;
    /* $E66A: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E66C:;
    /* $E66C: 84 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.Y);
label_E66E:;
    /* $E66E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0xE5F1); return; }
label_E670:;
    /* $E670: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB181 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E673:;
    /* $E673: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x81); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E675:;
    /* $E675: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E677:;
    /* $E677: C2 */ maybe_trigger_vblank(2); /* NOP */
label_E679:;
    /* $E679: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67B:;
    /* $E67B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67D:;
    /* $E67D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67F:;
    /* $E67F: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E681:;
    /* $E681: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x44C4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E684:;
    /* $E684: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E686:;
    /* $E686: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x44) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E688:;
    /* $E688: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E68A:;
    /* $E68A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E6D0; }
label_E68C:;
    /* $E68C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC281 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E68F:;
    /* $E68F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xE612); return; }
label_E691:;
    /* $E691: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xFF81 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E694:;
    /* $E694: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_E695:;
    /* $E695: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x00 + g_cpu.X) & 0xFF), g_cpu.A);
label_E697:;
    /* $E697: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB1); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E699:;
    /* $E699: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E69B:;
    /* $E69B: 84 */ maybe_trigger_vblank(3); nes_write(0x44, g_cpu.Y);
label_E69D:;
    /* $E69D: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E69F:;
    /* $E69F: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E6A1:;
    /* $E6A1: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6A3:;
    /* $E6A3: 84 */ maybe_trigger_vblank(3); nes_write(0x41, g_cpu.Y);
label_E6A5:;
    /* $E6A5: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6A7:;
    /* $E6A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E6A9:;
    /* $E6A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9F00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E6AC:;
    /* $E6AC: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x31; FLAG_NZ(g_cpu.A);
label_E6AE:;
    /* $E6AE: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB1 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_E6B0:;
    /* $E6B0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B1:;
    /* $E6B1: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6B3:;
    /* $E6B3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B4:;
    /* $E6B4: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6B6:;
    /* $E6B6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B7:;
    /* $E6B7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B8:;
    /* $E6B8: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6BA:;
    /* $E6BA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6BB:;
    /* $E6BB: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6BD:;
    /* $E6BD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6BE:;
    /* $E6BE: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_E6BF:;
    /* $E6BF: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0xB1FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E6C2:;
    /* $E6C2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C3:;
    /* $E6C3: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6C5:;
    /* $E6C5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C6:;
    /* $E6C6: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6C8:;
    /* $E6C8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C9:;
    /* $E6C9: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x0254 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E6CC:;
    /* $E6CC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6CD:;
    /* $E6CD: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6CF:;
    /* $E6CF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D0:;
    /* $E6D0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D1:;
    /* $E6D1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D2:;
    /* $E6D2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE6D2); return;
}

void func_C5D0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C5D0");
#endif
label_C5D0:;
    /* $C5D0: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0xA0) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C5D2:;
    /* $C5D2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x44; FLAG_NZ(g_cpu.Y);
label_C5D4:;
    /* $C5D4: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x11 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_C5D6:;
    /* $C5D6: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_C5D8:;
    /* $C5D8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_C5DA:;
    /* $C5DA: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_C5DB:;
    /* $C5DB: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x55); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C5DD:;
    /* $C5DD: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C5DF:;
    /* $C5DF: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x20; g_cpu.C=(g_cpu.X>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_C5E1:;
    /* $C5E1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x33FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C5E4:;
    /* $C5E4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_C5E5:;
    /* $C5E5: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_C5E6:;
    /* $C5E6: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x55); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C5E8:;
    /* $C5E8: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C5EA:;
    /* $C5EA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xAA33 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C5ED:;
    /* $C5ED: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_C5EE:;
    /* $C5EE: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x55); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C5F0:;
    /* $C5F0: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C5F2:;
    /* $C5F2: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0A03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_C5F5:;
    /* $C5F5: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C5F6:;
    /* $C5F6: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x55); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C5F8:;
    /* $C5F8: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C5FA:;
    /* $C5FA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xC5FA); return;
}

void func_F050(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F050");
#endif
label_F050:;
    /* $F050: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DED0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DED0");
#endif
label_DED0:;
    /* $DED0: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xF0; g_cpu.C=(g_cpu.Y>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_DED2:;
    /* $DED2: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFA9 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DED5:;
    /* $DED5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DEE2; }
label_DED7:;
    /* $DED7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DED8:;
    /* $DED8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xFF + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xFF); g_cpu.A=r&0xFF; }
label_DEDA:;
    /* $DEDA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DEDB:;
    /* $DEDB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_DEDC:;
    /* $DEDC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x3C; g_cpu.C=(g_cpu.A>=0x3C)?1:0; FLAG_NZ(r&0xFF); }
label_DEDE:;
    /* $DEDE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DEE2; }
label_DEE0:;
    /* $DEE0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_DEE2:;
    /* $DEE2: 8D */ maybe_trigger_vblank(4); nes_write(0x069F, g_cpu.A);
label_DEE5:;
    /* $DEE5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DE1F(); return;
}

void func_D051(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D051");
#endif
label_D051:;
    /* $D051: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_D053:;
    /* $D053: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_D055:;
    /* $D055: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0704); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_D058:;
    /* $D058: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xD058); return;
}

void func_D920(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D920");
#endif
label_D920:;
    /* $D920: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xAD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D922:;
    /* $D922: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x06; g_cpu.C=(g_cpu.X>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_D924:;
    /* $D924: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_D926:;
    /* $D926: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D92B; }
label_D928:;
    /* $D928: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_D802(); return;
label_D92B:;
    /* $D92B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x50; FLAG_NZ(g_cpu.Y);
label_D92D:;
    /* $D92D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_D28E(); return;
}

void func_E608(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E608");
#endif
label_E608:;
    /* $E608: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x24) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E60A:;
    /* $E60A: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_E60B:;
    /* $E60B: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB0); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_E60D:;
    /* $E60D: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x2EBD; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E610:;
    /* $E610: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x2E) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E612:;
    /* $E612: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x2E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E614:;
    /* $E614: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E616:;
    /* $E616: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E617:;
    /* $E617: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E618:;
    /* $E618: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9F00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E61B:;
    /* $E61B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_E61D:;
    /* $E61D: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x2E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_E61F:;
    /* $E61F: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x38 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E621:;
    /* $E621: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x3A + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_E623:;
    /* $E623: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E65F; }
label_E625:;
    /* $E625: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB102 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E628:;
    /* $E628: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E629:;
    /* $E629: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE629); return;
label_E62A:;
    /* $E62A: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_E62D:;
    /* $E62D: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB1); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E62F:;
    /* $E62F: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x342E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E632:;
    /* $E632: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x2E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E634:;
    /* $E634: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E635:;
    /* $E635: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E636:;
    /* $E636: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E637:;
    /* $E637: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E638:;
    /* $E638: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x3434; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E63B:;
    /* $E63B: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0202; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E63E:;
    /* $E63E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E63F:;
    /* $E63F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC700 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E642:;
    /* $E642: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x44) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E644:;
    /* $E644: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x84); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E646:;
    /* $E646: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E648:;
    /* $E648: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x84); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E64A:;
    /* $E64A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E64C:;
    /* $E64C: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E64E:;
    /* $E64E: 84 */ maybe_trigger_vblank(3); nes_write(0xB0, g_cpu.Y);
label_E650:;
    /* $E650: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E652:;
    /* $E652: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_E654:;
    /* $E654: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xBD + g_cpu.X) & 0xFF), g_cpu.A);
label_E656:;
    /* $E656: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB0 + g_cpu.X) & 0xFF), g_cpu.A);
label_E658:;
    /* $E658: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xBD + g_cpu.X) & 0xFF), g_cpu.A);
label_E65A:;
    /* $E65A: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB1 + g_cpu.X) & 0xFF), g_cpu.A);
label_E65C:;
    /* $E65C: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x01 + g_cpu.X) & 0xFF), g_cpu.A);
label_E65E:;
    /* $E65E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE65E); return;
label_E65F:;
    /* $E65F: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xB1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_E661:;
    /* $E661: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E663:;
    /* $E663: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E665:;
    /* $E665: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E667:;
    /* $E667: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E669:;
    /* $E669: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0444 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E66C:;
    /* $E66C: 84 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.Y);
label_E66E:;
    /* $E66E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0xE5F1); return; }
label_E670:;
    /* $E670: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB181 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E673:;
    /* $E673: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x81); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E675:;
    /* $E675: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E677:;
    /* $E677: C2 */ maybe_trigger_vblank(2); /* NOP */
label_E679:;
    /* $E679: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67B:;
    /* $E67B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67D:;
    /* $E67D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67F:;
    /* $E67F: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E681:;
    /* $E681: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x44C4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E684:;
    /* $E684: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E686:;
    /* $E686: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x44) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E688:;
    /* $E688: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E68A:;
    /* $E68A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E6D0; }
label_E68C:;
    /* $E68C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC281 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E68F:;
    /* $E68F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E612;
    }
label_E691:;
    /* $E691: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xFF81 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E694:;
    /* $E694: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_E695:;
    /* $E695: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x00 + g_cpu.X) & 0xFF), g_cpu.A);
label_E697:;
    /* $E697: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB1); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E699:;
    /* $E699: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E69B:;
    /* $E69B: 84 */ maybe_trigger_vblank(3); nes_write(0x44, g_cpu.Y);
label_E69D:;
    /* $E69D: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E69F:;
    /* $E69F: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E6A1:;
    /* $E6A1: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6A3:;
    /* $E6A3: 84 */ maybe_trigger_vblank(3); nes_write(0x41, g_cpu.Y);
label_E6A5:;
    /* $E6A5: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6A7:;
    /* $E6A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E6A9:;
    /* $E6A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9F00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E6AC:;
    /* $E6AC: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x31; FLAG_NZ(g_cpu.A);
label_E6AE:;
    /* $E6AE: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB1 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_E6B0:;
    /* $E6B0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B1:;
    /* $E6B1: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6B3:;
    /* $E6B3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B4:;
    /* $E6B4: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6B6:;
    /* $E6B6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B7:;
    /* $E6B7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B8:;
    /* $E6B8: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6BA:;
    /* $E6BA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6BB:;
    /* $E6BB: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6BD:;
    /* $E6BD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6BE:;
    /* $E6BE: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_E6BF:;
    /* $E6BF: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0xB1FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E6C2:;
    /* $E6C2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C3:;
    /* $E6C3: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6C5:;
    /* $E6C5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C6:;
    /* $E6C6: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6C8:;
    /* $E6C8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C9:;
    /* $E6C9: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x0254 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E6CC:;
    /* $E6CC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6CD:;
    /* $E6CD: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6CF:;
    /* $E6CF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D0:;
    /* $E6D0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D1:;
    /* $E6D1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D2:;
    /* $E6D2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE6D2); return;
}

void func_CE20(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CE20");
#endif
label_CE20:;
    /* $CE20: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE23:;
    /* $CE23: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE26:;
    /* $CE26: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE29:;
    /* $CE29: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE2C:;
    /* $CE2C: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE2F:;
    /* $CE2F: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE32:;
    /* $CE32: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE35:;
    /* $CE35: FC */ maybe_trigger_vblank(4); (void)nes_read((0x23FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE38:;
    /* $CE38: 80 */ maybe_trigger_vblank(2); /* NOP */
label_CE3A:;
    /* $CE3A: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE3D:;
    /* $CE3D: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE40:;
    /* $CE40: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE43:;
    /* $CE43: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE46:;
    /* $CE46: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE49:;
    /* $CE49: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE4C:;
    /* $CE4C: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE4F:;
    /* $CE4F: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE52:;
    /* $CE52: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE55:;
    /* $CE55: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE58:;
    /* $CE58: FC */ maybe_trigger_vblank(4); (void)nes_read((0x23FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE5B:;
    /* $CE5B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x20; FLAG_NZ(g_cpu.Y);
label_CE5D:;
    /* $CE5D: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE60:;
    /* $CE60: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE63:;
    /* $CE63: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE66:;
    /* $CE66: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE69:;
    /* $CE69: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE6C:;
    /* $CE6C: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE6F:;
    /* $CE6F: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE72:;
    /* $CE72: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE75:;
    /* $CE75: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE78:;
    /* $CE78: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE7B:;
    /* $CE7B: FC */ maybe_trigger_vblank(4); (void)nes_read((0x23FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE7E:;
    /* $CE7E: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x20; g_cpu.C=(g_cpu.Y>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_CE80:;
    /* $CE80: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CE83:;
    /* $CE83: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CE86:;
    /* $CE86: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CE89:;
    /* $CE89: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_CE8B:;
    /* $CE8B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_CE8D:;
    /* $CE8D: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_CE8F:;
    /* $CE8F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x55FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CE92:;
    /* $CE92: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_CE94:;
    /* $CE94: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_CE96:;
    /* $CE96: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_CE98:;
    /* $CE98: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5555 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CE9B:;
    /* $CE9B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_CE9D:;
    /* $CE9D: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_CE9F:;
    /* $CE9F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xE023 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CEA2:;
    /* $CEA2: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x00FF, -1);
label_CEA5:;
    /* $CEA5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xCEA5); return;
}

void func_E668(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E668");
#endif
label_E668:;
    /* $E668: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E66A:;
    /* $E66A: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E66C:;
    /* $E66C: 84 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.Y);
label_E66E:;
    /* $E66E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0xE5F1); return; }
label_E670:;
    /* $E670: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB181 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E673:;
    /* $E673: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x81); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E675:;
    /* $E675: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E677:;
    /* $E677: C2 */ maybe_trigger_vblank(2); /* NOP */
label_E679:;
    /* $E679: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67B:;
    /* $E67B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67D:;
    /* $E67D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67F:;
    /* $E67F: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E681:;
    /* $E681: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x44C4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E684:;
    /* $E684: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E686:;
    /* $E686: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x44) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E688:;
    /* $E688: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E68A:;
    /* $E68A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E6D0; }
label_E68C:;
    /* $E68C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC281 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E68F:;
    /* $E68F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xE612); return; }
label_E691:;
    /* $E691: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xFF81 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E694:;
    /* $E694: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_E695:;
    /* $E695: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x00 + g_cpu.X) & 0xFF), g_cpu.A);
label_E697:;
    /* $E697: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB1); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E699:;
    /* $E699: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E69B:;
    /* $E69B: 84 */ maybe_trigger_vblank(3); nes_write(0x44, g_cpu.Y);
label_E69D:;
    /* $E69D: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E69F:;
    /* $E69F: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E6A1:;
    /* $E6A1: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6A3:;
    /* $E6A3: 84 */ maybe_trigger_vblank(3); nes_write(0x41, g_cpu.Y);
label_E6A5:;
    /* $E6A5: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6A7:;
    /* $E6A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E6A9:;
    /* $E6A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9F00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E6AC:;
    /* $E6AC: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x31; FLAG_NZ(g_cpu.A);
label_E6AE:;
    /* $E6AE: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB1 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_E6B0:;
    /* $E6B0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B1:;
    /* $E6B1: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6B3:;
    /* $E6B3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B4:;
    /* $E6B4: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6B6:;
    /* $E6B6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B7:;
    /* $E6B7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B8:;
    /* $E6B8: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6BA:;
    /* $E6BA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6BB:;
    /* $E6BB: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6BD:;
    /* $E6BD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6BE:;
    /* $E6BE: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_E6BF:;
    /* $E6BF: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0xB1FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E6C2:;
    /* $E6C2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C3:;
    /* $E6C3: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6C5:;
    /* $E6C5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C6:;
    /* $E6C6: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6C8:;
    /* $E6C8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C9:;
    /* $E6C9: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x0254 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E6CC:;
    /* $E6CC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6CD:;
    /* $E6CD: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6CF:;
    /* $E6CF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D0:;
    /* $E6D0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D1:;
    /* $E6D1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D2:;
    /* $E6D2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE6D2); return;
}

void func_F220(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F220");
#endif
label_F220:;
    /* $F220: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F222:;
    /* $F222: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F225:;
    /* $F225: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F227:;
    /* $F227: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE60 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F22A:;
    /* $F22A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F22C:;
    /* $F22C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F22F:;
    /* $F22F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F231:;
    /* $F231: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE60 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F234:;
    /* $F234: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F236:;
    /* $F236: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F239:;
    /* $F239: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F23B:;
    /* $F23B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE60 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F23E:;
    /* $F23E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F240:;
    /* $F240: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE44 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F243:;
    /* $F243: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F245:;
    /* $F245: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xF245); return;
}

void func_EE90(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EE90");
#endif
label_EE90:;
    /* $EE90: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_EEE2; }
label_EE92:;
    /* $EE92: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x4C54, -1); return;
label_EEE2:;
    /* $EEE2: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_EEE3:;
    /* $EEE3: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_EEE5:;
    /* $EEE5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xEEE5); return;
}

void func_F04C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F04C");
#endif
label_F04C:;
    /* $F04C: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F04E:;
    /* $F04E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F050:;
    /* $F050: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CA63(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CA63");
#endif
label_CA63:;
    /* $CA63: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x2000, -1);
label_CA66:;
    /* $CA66: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA69:;
    /* $CA69: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA6C:;
    /* $CA6C: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA6F:;
    /* $CA6F: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA72:;
    /* $CA72: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA75:;
    /* $CA75: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA78:;
    /* $CA78: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA7B:;
    /* $CA7B: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA7E:;
    /* $CA7E: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA81:;
    /* $CA81: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA84:;
    /* $CA84: FC */ maybe_trigger_vblank(4); (void)nes_read((0x20FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA87:;
    /* $CA87: 20 */ maybe_trigger_vblank(6); func_FC20();
label_CA8A:;
    /* $CA8A: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA8D:;
    /* $CA8D: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA90:;
    /* $CA90: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA93:;
    /* $CA93: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA96:;
    /* $CA96: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA99:;
    /* $CA99: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA9C:;
    /* $CA9C: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA9F:;
    /* $CA9F: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAA2:;
    /* $CAA2: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAA5:;
    /* $CAA5: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAA8:;
    /* $CAA8: FC */ maybe_trigger_vblank(4); (void)nes_read((0x4020 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAAB:;
    /* $CAAB: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CAAE:;
    /* $CAAE: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAB1:;
    /* $CAB1: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAB4:;
    /* $CAB4: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAB7:;
    /* $CAB7: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CABA:;
    /* $CABA: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CABD:;
    /* $CABD: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAC0:;
    /* $CAC0: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAC3:;
    /* $CAC3: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAC6:;
    /* $CAC6: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAC9:;
    /* $CAC9: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CACC:;
    /* $CACC: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x2060, -1);
label_CACF:;
    /* $CACF: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAD2:;
    /* $CAD2: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CAD4:;
    /* $CAD4: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAD6:;
    /* $CAD6: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAD8:;
    /* $CAD8: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CADA:;
    /* $CADA: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CADC:;
    /* $CADC: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CADE:;
    /* $CADE: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAE0:;
    /* $CAE0: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAE2:;
    /* $CAE2: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAE4:;
    /* $CAE4: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAE6:;
    /* $CAE6: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAE8:;
    /* $CAE8: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAEA:;
    /* $CAEA: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CAEC:;
    /* $CAEC: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAEF:;
    /* $CAEF: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x2080, -1);
label_CAF2:;
    /* $CAF2: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAF5:;
    /* $CAF5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A);
label_CAF7:;
    /* $CAF7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CAFA:;
    /* $CAFA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CAFD:;
    /* $CAFD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB00:;
    /* $CB00: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB03:;
    /* $CB03: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB06:;
    /* $CB06: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB09:;
    /* $CB09: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB0C:;
    /* $CB0C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB0F:;
    /* $CB0F: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB12:;
    /* $CB12: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x20A0, -1);
label_CB15:;
    /* $CB15: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB18:;
    /* $CB18: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A);
label_CB1A:;
    /* $CB1A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB1D:;
    /* $CB1D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB20:;
    /* $CB20: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB23:;
    /* $CB23: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB26:;
    /* $CB26: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB29:;
    /* $CB29: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB2C:;
    /* $CB2C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB2F:;
    /* $CB2F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB32:;
    /* $CB32: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB35:;
    /* $CB35: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x20C0, -1);
label_CB38:;
    /* $CB38: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB3B:;
    /* $CB3B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A);
label_CB3D:;
    /* $CB3D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB40:;
    /* $CB40: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB43:;
    /* $CB43: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB46:;
    /* $CB46: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB49:;
    /* $CB49: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB4C:;
    /* $CB4C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB4F:;
    /* $CB4F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB52:;
    /* $CB52: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB55:;
    /* $CB55: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB58:;
    /* $CB58: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x20E0, -1);
label_CB5B:;
    /* $CB5B: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB5E:;
    /* $CB5E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFF; FLAG_NZ(g_cpu.A);
label_CB60:;
    /* $CB60: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB63:;
    /* $CB63: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB66:;
    /* $CB66: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB69:;
    /* $CB69: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB6C:;
    /* $CB6C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB6F:;
    /* $CB6F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB72:;
    /* $CB72: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB75:;
    /* $CB75: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB78:;
    /* $CB78: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB7B:;
    /* $CB7B: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CB7D:;
    /* $CB7D: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CB80:;
    /* $CB80: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB83:;
    /* $CB83: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB86:;
    /* $CB86: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB89:;
    /* $CB89: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB8C:;
    /* $CB8C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB8F:;
    /* $CB8F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB92:;
    /* $CB92: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB95:;
    /* $CB95: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB98:;
    /* $CB98: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CB9B:;
    /* $CB9B: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CB9E:;
    /* $CB9E: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CBA0:;
    /* $CBA0: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CBA3:;
    /* $CBA3: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CBA6:;
    /* $CBA6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBA9:;
    /* $CBA9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBAC:;
    /* $CBAC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBAF:;
    /* $CBAF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBB2:;
    /* $CBB2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBB5:;
    /* $CBB5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBB8:;
    /* $CBB8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBBB:;
    /* $CBBB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBBE:;
    /* $CBBE: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CBC1:;
    /* $CBC1: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x40 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CBC3:;
    /* $CBC3: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CBC6:;
    /* $CBC6: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CBC9:;
    /* $CBC9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBCC:;
    /* $CBCC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBCF:;
    /* $CBCF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBD2:;
    /* $CBD2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBD5:;
    /* $CBD5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBD8:;
    /* $CBD8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBDB:;
    /* $CBDB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBDE:;
    /* $CBDE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBE1:;
    /* $CBE1: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CBE4:;
    /* $CBE4: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CBE6:;
    /* $CBE6: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CBE9:;
    /* $CBE9: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CBEC:;
    /* $CBEC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBEF:;
    /* $CBEF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBF2:;
    /* $CBF2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBF5:;
    /* $CBF5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBF8:;
    /* $CBF8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBFB:;
    /* $CBFB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CBFE:;
    /* $CBFE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC01:;
    /* $CC01: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC04:;
    /* $CC04: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC07:;
    /* $CC07: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x80 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CC09:;
    /* $CC09: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CC0C:;
    /* $CC0C: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC0F:;
    /* $CC0F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC12:;
    /* $CC12: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC15:;
    /* $CC15: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC18:;
    /* $CC18: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC1B:;
    /* $CC1B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC1E:;
    /* $CC1E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC21:;
    /* $CC21: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC24:;
    /* $CC24: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC27:;
    /* $CC27: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC2A:;
    /* $CC2A: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xA0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CC2C:;
    /* $CC2C: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CC2F:;
    /* $CC2F: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC32:;
    /* $CC32: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC35:;
    /* $CC35: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC38:;
    /* $CC38: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC3B:;
    /* $CC3B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC3E:;
    /* $CC3E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC41:;
    /* $CC41: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC44:;
    /* $CC44: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC47:;
    /* $CC47: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC4A:;
    /* $CC4A: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC4D:;
    /* $CC4D: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xC0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CC4F:;
    /* $CC4F: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CC52:;
    /* $CC52: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC55:;
    /* $CC55: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC58:;
    /* $CC58: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC5B:;
    /* $CC5B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC5E:;
    /* $CC5E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC61:;
    /* $CC61: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC64:;
    /* $CC64: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC67:;
    /* $CC67: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC6A:;
    /* $CC6A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC6D:;
    /* $CC6D: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC70:;
    /* $CC70: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0xE0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_CC72:;
    /* $CC72: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CC75:;
    /* $CC75: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF29 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC78:;
    /* $CC78: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC7B:;
    /* $CC7B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC7E:;
    /* $CC7E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC81:;
    /* $CC81: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC84:;
    /* $CC84: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC87:;
    /* $CC87: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC8A:;
    /* $CC8A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC8D:;
    /* $CC8D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x2AFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CC90:;
    /* $CC90: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CC93:;
    /* $CC93: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_CC94:;
    /* $CC94: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xCC94); return;
}

void func_D64C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D64C");
#endif
label_D64C:;
    /* $D64C: EE */ maybe_trigger_vblank(6); { uint16_t a=0x06E0; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D64F:;
    /* $D64F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xD666 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D652:;
    /* $D652: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xD641); return; }
label_D654:;
    /* $D654: 8D */ maybe_trigger_vblank(4); nes_write(0x4002, g_cpu.A);
label_D657:;
    /* $D657: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xD674 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D65A:;
    /* $D65A: 8D */ maybe_trigger_vblank(4); nes_write(0x4006, g_cpu.A);
label_D65D:;
    /* $D65D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_D65F:;
    /* $D65F: 8D */ maybe_trigger_vblank(4); nes_write(0x4003, g_cpu.A);
label_D662:;
    /* $D662: 8D */ maybe_trigger_vblank(4); nes_write(0x4007, g_cpu.A);
label_D665:;
    /* $D665: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D4CC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D4CC");
#endif
label_D4CC:;
    /* $D4CC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_D4CE:;
    /* $D4CE: 20 */ maybe_trigger_vblank(6); func_D485();
label_D4D1:;
    /* $D4D1: 20 */ maybe_trigger_vblank(6); func_D26E();
label_D4D4:;
    /* $D4D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xD4C9); return; }
label_D4D6:;
    /* $D4D6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x06DF); FLAG_NZ(g_cpu.A);
label_D4D9:;
    /* $D4D9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_D4DB:;
    /* $D4DB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_D4DC:;
    /* $D4DC: EE */ maybe_trigger_vblank(6); { uint16_t a=0x06DF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D4DF:;
    /* $D4DF: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xD4EC + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D4E2:;
    /* $D4E2: 8D */ maybe_trigger_vblank(4); nes_write(0x400E, g_cpu.A);
label_D4E5:;
    /* $D4E5: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xD4FC + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D4E8:;
    /* $D4E8: 8D */ maybe_trigger_vblank(4); nes_write(0x400C, g_cpu.A);
label_D4EB:;
    /* $D4EB: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C040(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C040");
#endif
label_C040:;
    /* $C040: FC */ maybe_trigger_vblank(4); (void)nes_read((0x22FD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C043:;
    /* $C043: 80 */ maybe_trigger_vblank(2); /* NOP */
label_C045:;
    /* $C045: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C048:;
    /* $C048: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_C04A:;
    /* $C04A: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3D3D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C04D:;
    /* $C04D: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3D3D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C050:;
    /* $C050: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3D3D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C053:;
    /* $C053: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3E3D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C056:;
    /* $C056: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C059:;
    /* $C059: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C05C:;
    /* $C05C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C05F:;
    /* $C05F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x4BFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C062:;
    /* $C062: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C065:;
    /* $C065: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_C066:;
    /* $C066: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x20; FLAG_NZ(g_cpu.Y);
label_C068:;
    /* $C068: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C06B:;
    /* $C06B: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_C06D:;
    /* $C06D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x1E16, -1); return;
}

void func_F4F8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F4F8");
#endif
label_F4F8:;
    /* $F4F8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F4FA:;
    /* $F4FA: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D621(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D621");
#endif
label_D621:;
    /* $D621: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x85; g_cpu.C=(g_cpu.X>=0x85)?1:0; FLAG_NZ(r&0xFF); }
label_D623:;
    /* $D623: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x8A); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_D625:;
    /* $D625: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_D627:;
    /* $D627: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D62E; }
label_D629:;
    /* $D629: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE4); FLAG_NZ(g_cpu.A);
label_D62B:;
    /* $D62B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_D62D:;
    /* $D62D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_D62E:;
    /* $D62E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE4); FLAG_NZ(g_cpu.A);
label_D630:;
    /* $D630: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_D631:;
    /* $D631: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_D632:;
    /* $D632: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_D633:;
    /* $D633: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_D634:;
    /* $D634: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F502(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F502");
#endif
label_F502:;
    /* $F502: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xB0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F504:;
    /* $F504: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F506:;
    /* $F506: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xB7; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F508:;
    /* $F508: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xB0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F50A:;
    /* $F50A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xB7); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F50C:;
    /* $F50C: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xB0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F50E:;
    /* $F50E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xB7); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F510:;
    /* $F510: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xB0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F512:;
    /* $F512: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xB7; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_F514:;
    /* $F514: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xB0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F516:;
    /* $F516: 84 */ maybe_trigger_vblank(3); nes_write(0xFF, g_cpu.Y);
label_F518:;
    /* $F518: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_F519:;
    /* $F519: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CE21(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CE21");
#endif
label_CE21:;
    /* $CE21: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE24:;
    /* $CE24: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE27:;
    /* $CE27: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE2A:;
    /* $CE2A: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE2D:;
    /* $CE2D: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE30:;
    /* $CE30: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE33:;
    /* $CE33: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE36:;
    /* $CE36: FC */ maybe_trigger_vblank(4); (void)nes_read((0x8023 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE39:;
    /* $CE39: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CE3C:;
    /* $CE3C: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE3F:;
    /* $CE3F: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE42:;
    /* $CE42: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE45:;
    /* $CE45: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE48:;
    /* $CE48: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE4B:;
    /* $CE4B: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE4E:;
    /* $CE4E: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE51:;
    /* $CE51: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE54:;
    /* $CE54: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE57:;
    /* $CE57: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE5A:;
    /* $CE5A: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CE5C:;
    /* $CE5C: 20 */ maybe_trigger_vblank(6); func_FCFC();
label_CE5F:;
    /* $CE5F: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE62:;
    /* $CE62: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE65:;
    /* $CE65: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE68:;
    /* $CE68: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE6B:;
    /* $CE6B: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE6E:;
    /* $CE6E: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE71:;
    /* $CE71: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE74:;
    /* $CE74: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE77:;
    /* $CE77: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE7A:;
    /* $CE7A: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CE7D:;
    /* $CE7D: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_CE7F:;
    /* $CE7F: 20 */ maybe_trigger_vblank(6); func_FFFF();
label_CE82:;
    /* $CE82: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CE85:;
    /* $CE85: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CE88:;
    /* $CE88: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5555 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CE8B:;
    /* $CE8B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_CE8D:;
    /* $CE8D: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_CE8F:;
    /* $CE8F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x55FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CE92:;
    /* $CE92: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_CE94:;
    /* $CE94: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_CE96:;
    /* $CE96: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_CE98:;
    /* $CE98: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5555 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CE9B:;
    /* $CE9B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_CE9D:;
    /* $CE9D: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_CE9F:;
    /* $CE9F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xE023 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_CEA2:;
    /* $CEA2: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x00FF, -1);
label_CEA5:;
    /* $CEA5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xCEA5); return;
}

void func_F8F0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F8F0");
#endif
label_F8F0:;
    /* $F8F0: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_F960; }
label_F8F2:;
    /* $F8F2: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x646A); nes_trace_indirect_jump(0xF8F2, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
label_F960:;
    /* $F960: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_F961:;
    /* $F961: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_F962:;
    /* $F962: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_F965:;
    /* $F965: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_F966:;
    /* $F966: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_F967:;
    /* $F967: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_F968:;
    /* $F968: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x74 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_F96A:;
    /* $F96A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xF96A); return;
}

void func_FF63(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FF63");
#endif
label_FF63:;
    /* $FF63: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xAD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FF65:;
    /* $FF65: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x06 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FF67:;
    /* $FF67: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_FF69:;
    /* $FF69: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_FF82; }
label_FF6B:;
    /* $FF6B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_FF6D:;
    /* $FF6D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_FF72; }
label_FF6F:;
    /* $FF6F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_FF89(); return;
label_FF72:;
    /* $FF72: 20 */ maybe_trigger_vblank(6); func_D43F();
label_FF75:;
    /* $FF75: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_FF77:;
    /* $FF77: 8D */ maybe_trigger_vblank(4); nes_write(0x06F5, g_cpu.A);
label_FF7A:;
    /* $FF7A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_FF7C:;
    /* $FF7C: 8D */ maybe_trigger_vblank(4); nes_write(0x06F0, g_cpu.A);
label_FF7F:;
    /* $FF7F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_FF89(); return;
label_FF82:;
    /* $FF82: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_FF84:;
    /* $FF84: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_FF86; }
label_FF86:;
    /* $FF86: 8D */ maybe_trigger_vblank(4); nes_write(0x06F0, g_cpu.A);
label_FF89:;
    /* $FF89: 20 */ maybe_trigger_vblank(6); func_D3D0();
label_FF8C:;
    /* $FF8C: 20 */ maybe_trigger_vblank(6); func_D3F5();
label_FF8F:;
    /* $FF8F: 20 */ maybe_trigger_vblank(6); func_D3E0();
label_FF92:;
    /* $FF92: 20 */ maybe_trigger_vblank(6); func_D3D8();
label_FF95:;
    /* $FF95: 20 */ maybe_trigger_vblank(6); func_D3E8();
label_FF98:;
    /* $FF98: 20 */ maybe_trigger_vblank(6); func_DA55();
label_FF9B:;
    /* $FF9B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_FF9D:;
    /* $FF9D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x06; FLAG_NZ(g_cpu.X);
label_FF9F:;
    /* $FF9F: 9D */ maybe_trigger_vblank(5); nes_write((0x06EF + g_cpu.X) & 0xFFFF, g_cpu.A);
label_FFA2:;
    /* $FFA2: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_FFA3:;
    /* $FFA3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_FF9F;
    }
label_FFA5:;
    /* $FFA5: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F421(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F421");
#endif
label_F421:;
    /* $F421: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_F422:;
    /* $F422: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xF458); return; }
label_F424:;
    /* $F424: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x46 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_F426:;
    /* $F426: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xF45C); return; }
label_F428:;
    /* $F428: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x42 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_F42A:;
    /* $F42A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xF460); return; }
label_F42C:;
    /* $F42C: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x3C + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_F42E:;
    /* $F42E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xF464); return; }
label_F430:;
    /* $F430: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_F431:;
    /* $F431: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_F432:;
    /* $F432: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_F433:;
    /* $F433: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x38 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_F435:;
    /* $F435: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F461; }
label_F437:;
    /* $F437: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x3C + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_F439:;
    /* $F439: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F465; }
label_F43B:;
    /* $F43B: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x3E + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_F43D:;
    /* $F43D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F469; }
label_F43F:;
    /* $F43F: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x3C + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_F441:;
    /* $F441: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F46D; }
label_F443:;
    /* $F443: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x38 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_F445:;
    /* $F445: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F471; }
label_F447:;
    /* $F447: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x32 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_F449:;
    /* $F449: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xF475); return; }
label_F44B:;
    /* $F44B: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x34 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_F44D:;
    /* $F44D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xF483); return; }
label_F44F:;
    /* $F44F: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_F450:;
    /* $F450: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x42B7 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F453:;
    /* $F453: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F489; }
label_F455:;
    /* $F455: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x46 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_F457:;
    /* $F457: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F48D; }
label_F459:;
    /* $F459: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x48 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_F45B:;
    /* $F45B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xF491); return; }
label_F45D:;
    /* $F45D: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x46 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_F45F:;
    /* $F45F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F495; }
label_F461:;
    /* $F461: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x42 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_F463:;
    /* $F463: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F499; }
label_F465:;
    /* $F465: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x3C + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_F467:;
    /* $F467: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xF49D); return; }
label_F469:;
    /* $F469: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x38 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_F46B:;
    /* $F46B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xF4A5); return; }
label_F46D:;
    /* $F46D: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_F46E:;
    /* $F46E: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xF46E; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_F46F:;
    /* $F46F: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x40; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_F471:;
    /* $F471: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_F474:;
    /* $F474: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x48 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_F476:;
    /* $F476: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_F477:;
    /* $F477: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_F478:;
    /* $F478: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_F47B:;
    /* $F47B: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB2 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_F47D:;
    /* $F47D: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_F47E:;
    /* $F47E: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_F47F:;
    /* $F47F: 3C */ maybe_trigger_vblank(4); (void)nes_read((0xB742 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F482:;
    /* $F482: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xB0 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F484:;
    /* $F484: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xB2 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F486:;
    /* $F486: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x38B2 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F489:;
    /* $F489: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xF489; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_F48A:;
    /* $F48A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x3E3E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_F48D:;
    /* $F48D: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xC33E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F490:;
    /* $F490: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE34 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F493:;
    /* $F493: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F495:;
    /* $F495: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x34B2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_F498:;
    /* $F498: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xF498); return;
label_F499:;
    /* $F499: CF */ maybe_trigger_vblank(6); { uint16_t a=0x01B2; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_F49C:;
    /* $F49C: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_F49E:;
    /* $F49E: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x01 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_F4A0:;
    /* $F4A0: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xF4E3); return; }
label_F4A2:;
    /* $F4A2: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x84 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_F4A4:;
    /* $F4A4: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F4A7; }
label_F4A6:;
    /* $F4A6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xF4A6); return;
label_F4A7:;
    /* $F4A7: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xB2; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_F4A9:;
    /* $F4A9: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xB7); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F4AB:;
    /* $F4AB: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_F4AC:; return;
label_F4AE:; return;
label_F4AF:; return;
label_F4B1:; return;
label_F4B4:; return;
label_F4B7:; return;
label_F4B9:; return;
label_F4BB:; return;
label_F4BD:; return;
label_F4C0:; return;
label_F4C3:; return;
label_F4C6:; return;
label_F4C9:; return;
label_F4CB:; return;
label_F4CC:; return;
label_F4CE:; return;
label_F4D0:; return;
label_F4D2:; return;
label_F4D4:; return;
label_F4D6:; return;
label_F4D8:; return;
label_F4DA:; return;
label_F4DC:; return;
label_F4DE:; return;
label_F4E0:; return;
label_F4E2:; return;
label_F4E4:; return;
label_F4E6:; return;
label_F4E8:; return;
label_F4EA:; return;
label_F4EB:; return;
label_F4ED:; return;
label_F4EF:; return;
label_F4F1:; return;
label_F4F3:; return;
label_F4F5:; return;
label_F4F7:; return;
label_F4F9:; return;
label_F4FB:; return;
label_F4FD:; return;
label_F4FF:; return;
label_F501:; return;
label_F503:; return;
label_F505:; return;
label_F508:; return;
label_F50A:; return;
label_F50C:; return;
label_F50E:; return;
label_F510:; return;
label_F512:; return;
label_F514:; return;
label_F516:; return;
label_F518:; return;
label_F519:; return;
label_F51A:; return;
label_F51B:; return;
label_F51C:; return;
label_F51F:; return;
label_F521:; return;
label_F523:; return;
label_F525:; return;
label_F526:; return;
label_F528:; return;
label_F52B:; return;
label_F52E:; return;
label_F52F:; return;
label_F531:; return;
label_F534:; return;
label_F537:; return;
label_F539:; return;
label_F53B:; return;
label_F53C:; return;
label_F53E:; return;
label_F53F:; return;
label_F541:; return;
label_F544:; return;
label_F545:; return;
label_F547:; return;
label_F548:; return;
label_F54A:; return;
label_F54B:; return;
label_F54D:; return;
label_F550:; return;
label_F553:; return;
label_F555:; return;
label_F557:; return;
label_F558:; return;
label_F55A:; return;
label_F55D:; return;
label_F560:; return;
label_F562:; return;
label_F565:; return;
label_F567:; return;
label_F56A:; return;
label_F56D:; return;
label_F56E:; return;
label_F571:; return;
label_F572:; return;
label_F574:; return;
label_F576:; return;
label_F579:; return;
label_F57B:; return;
label_F57D:; return;
label_F57F:; return;
label_F581:; return;
label_F582:; return;
label_F585:; return;
label_F587:; return;
label_F589:; return;
label_F58B:; return;
label_F58D:; return;
label_F58F:; return;
label_F591:; return;
label_F593:; return;
label_F595:; return;
label_F597:; return;
label_F59A:; return;
label_F59D:; return;
label_F59F:; return;
label_F5A1:; return;
label_F5A4:; return;
label_F5A7:; return;
label_F5AA:; return;
label_F5AC:; return;
label_F5AD:; return;
label_F5B0:; return;
label_F5B1:; return;
label_F5B4:; return;
label_F5B6:; return;
label_F5B7:; return;
label_F5B8:; return;
label_F5BB:; return;
label_F5BC:; return;
label_F5BF:; return;
label_F5C2:; return;
label_F5C5:; return;
label_F5C6:; return;
label_F5C8:; return;
label_F5C9:; return;
label_F5CC:; return;
label_F5CE:; return;
label_F5CF:; return;
label_F5D0:; return;
label_F5D1:; return;
label_F5D3:; return;
label_F5D4:; return;
label_F5D7:; return;
label_F5DA:; return;
label_F5DC:; return;
label_F5DD:; return;
label_F608:; return;
label_F609:; return;
label_F60C:; return;
label_F60D:; return;
label_F610:; return;
label_F613:; return;
label_F614:; return;
label_F615:; return;
label_F618:; return;
label_F619:; return;
label_F61C:; return;
label_F61D:; return;
label_F620:; return;
label_F621:; return;
label_F624:; return;
label_F626:; return;
label_F627:; return;
label_F62A:; return;
label_F62B:; return;
label_F62E:; return;
label_F630:; return;
label_F631:; return;
label_F632:; return;
label_F634:; return;
label_F635:; return;
label_F636:; return;
label_F638:; return;
label_F639:; return;
label_F63A:; return;
label_F63C:; return;
label_F63D:; return;
label_F63E:; return;
label_F640:; return;
label_F641:; return;
label_F642:; return;
label_F644:; return;
label_F645:; return;
label_F648:; return;
label_F649:; return;
label_F64A:; return;
label_F64B:; return;
label_F64C:; return;
label_F64F:; return;
label_F650:; return;
label_F651:; return;
label_F652:; return;
label_F653:; return;
label_F656:; return;
label_F658:; return;
label_F659:; return;
label_F65B:; return;
label_F65C:; return;
label_F65D:; return;
label_F660:; return;
label_F661:; return;
label_F664:; return;
label_F665:; return;
label_F668:; return;
label_F669:; return;
label_F66C:; return;
label_F66D:; return;
label_F670:; return;
label_F672:; return;
label_F673:; return;
label_F674:; return;
label_F677:; return;
label_F67A:; return;
label_F67B:; return;
label_F67C:; return;
label_F67E:; return;
label_F67F:; return;
label_F681:; return;
label_F682:; return;
label_F685:; return;
label_F687:; return;
label_F689:; return;
label_F68C:; return;
label_F68E:; return;
label_F691:; return;
label_F693:; return;
label_F696:; return;
label_F698:; return;
label_F69A:; return;
label_F69C:; return;
label_F69E:; return;
label_F6A1:; return;
label_F6A3:; return;
label_F6A6:; return;
label_F6A9:; return;
label_F6AC:; return;
label_F6AE:; return;
label_F6B1:; return;
label_F6B3:; return;
label_F6B6:; return;
label_F6B8:; return;
label_F6BB:; return;
label_F6BD:; return;
label_F6C0:; return;
label_F6C2:; return;
label_F6C5:; return;
label_F6C7:; return;
label_F6CA:; return;
label_F6CC:; return;
label_F6CD:; return;
label_F6D0:; return;
label_F6D2:; return;
label_F6D5:; return;
label_F6D7:; return;
label_F6DA:; return;
label_F6DC:; return;
label_F6DF:; return;
label_F6E1:; return;
label_F6E4:; return;
label_F6E6:; return;
label_F6E9:; return;
label_F6EB:; return;
label_F6EE:; return;
label_F6F0:; return;
label_F6F3:; return;
label_F6F5:; return;
label_F6F6:; return;
label_F6F9:; return;
label_F6FB:; return;
label_F6FE:; return;
label_F700:; return;
label_F703:; return;
label_F705:; return;
label_F708:; return;
label_F70A:; return;
label_F70C:; return;
label_F70E:; return;
label_F710:; return;
label_F713:; return;
label_F715:; return;
label_F718:; return;
label_F71A:; return;
label_F71C:; return;
label_F71D:; return;
label_F720:; return;
label_F722:; return;
label_F724:; return;
label_F726:; return;
label_F728:; return;
label_F72A:; return;
label_F72C:; return;
label_F72E:; return;
label_F731:; return;
label_F732:; return;
label_F735:; return;
label_F737:; return;
label_F739:; return;
label_F73C:; return;
label_F73F:; return;
label_F741:; return;
label_F743:; return;
label_F745:; return;
label_F747:; return;
label_F749:; return;
label_F74B:; return;
label_F74E:; return;
label_F74F:; return;
label_F750:; return;
label_F753:; return;
label_F755:; return;
label_F758:; return;
label_F759:; return;
label_F75C:; return;
label_F75E:; return;
label_F760:; return;
label_F763:; return;
label_F766:; return;
label_F769:; return;
label_F76B:; return;
label_F76D:; return;
label_F76F:; return;
label_F771:; return;
label_F773:; return;
label_F774:; return;
label_F777:; return;
label_F778:; return;
label_F779:; return;
label_F77B:; return;
label_F77D:; return;
label_F780:; return;
label_F783:; return;
label_F786:; return;
label_F788:; return;
label_F78B:; return;
label_F78C:; return;
label_F78E:; return;
label_F790:; return;
label_F792:; return;
label_F795:; return;
label_F797:; return;
label_F79A:; return;
label_F79C:; return;
label_F79D:; return;
label_F79E:; return;
label_F79F:; return;
label_F7A0:; return;
label_F7A2:; return;
label_F7A4:; return;
label_F7A5:; return;
label_F7A8:; return;
label_F7AB:; return;
label_F7AC:; return;
label_F7AF:; return;
label_F7B0:; return;
label_F7B3:; return;
label_F7B4:; return;
label_F7B6:; return;
label_F7B8:; return;
label_F7BA:; return;
label_F7BC:; return;
label_F7BE:; return;
label_F7BF:; return;
label_F7C0:; return;
label_F7C1:; return;
label_F7C4:; return;
label_F7C6:; return;
label_F7C9:; return;
label_F7CB:; return;
label_F7CC:; return;
label_F7CE:; return;
label_F7D0:; return;
label_F7D1:; return;
label_F7D2:; return;
label_F7D5:; return;
label_F7D7:; return;
label_F7D9:; return;
label_F7DA:; return;
label_F7DB:; return;
label_F7DC:; return;
label_F7DD:; return;
label_F7DF:; return;
label_F7E2:; return;
label_F7E5:; return;
label_F7E8:; return;
label_F7EB:; return;
label_F7EC:; return;
label_F7EF:; return;
label_F7F0:; return;
label_F7F3:; return;
label_F7F5:; return;
label_F7F8:; return;
label_F7FB:; return;
label_F7FE:; return;
label_F801:; return;
label_F802:; return;
label_F805:; return;
label_F806:; return;
label_F807:; return;
label_F808:; return;
label_F809:; return;
label_F80B:; return;
label_F80D:; return;
label_F80E:; return;
label_F811:; return;
label_F812:; return;
label_F814:; return;
label_F815:; return;
label_F817:; return;
label_F819:; return;
label_F81B:; return;
label_F81E:; return;
label_F820:; return;
label_F822:; return;
label_F825:; return;
label_F827:; return;
label_F829:; return;
label_F82C:; return;
label_F82F:; return;
label_F831:; return;
label_F833:; return;
label_F835:; return;
label_F837:; return;
label_F83A:; return;
label_F83C:; return;
label_F83E:; return;
label_F841:; return;
label_F843:; return;
label_F845:; return;
label_F848:; return;
label_F84A:; return;
label_F84C:; return;
label_F84E:; return;
label_F850:; return;
label_F852:; return;
label_F855:; return;
label_F857:; return;
label_F859:; return;
label_F85B:; return;
label_F85D:; return;
label_F85F:; return;
label_F862:; return;
label_F864:; return;
label_F867:; return;
label_F869:; return;
label_F86B:; return;
label_F86E:; return;
label_F870:; return;
label_F872:; return;
label_F874:; return;
label_F876:; return;
label_F877:; return;
label_F87A:; return;
label_F87C:; return;
label_F87F:; return;
label_F881:; return;
label_F883:; return;
label_F886:; return;
label_F888:; return;
label_F88A:; return;
label_F88C:; return;
label_F88E:; return;
label_F890:; return;
label_F893:; return;
label_F895:; return;
label_F897:; return;
label_F899:; return;
label_F89B:; return;
label_F89D:; return;
label_F8A0:; return;
label_F8A2:; return;
label_F8A5:; return;
label_F8A7:; return;
label_F8A9:; return;
label_F8AC:; return;
label_F8AE:; return;
label_F8B0:; return;
label_F8B2:; return;
label_F8B4:; return;
label_F8B5:; return;
label_F8B7:; return;
label_F8B8:; return;
label_F8B9:; return;
label_F8BA:; return;
label_F8BC:; return;
label_F8BE:; return;
label_F8C0:; return;
label_F8C3:; return;
label_F8C5:; return;
label_F8C6:; return;
label_F8C9:; return;
label_F8CB:; return;
label_F8CE:; return;
label_F8D0:; return;
label_F8D3:; return;
label_F8D5:; return;
label_F8DA:; return;
label_F8DD:; return;
label_F8E0:; return;
label_F8E2:; return;
label_F8E5:; return;
label_F8E7:; return;
label_F8F4:; return;
label_F8F6:; return;
label_F8F9:; return;
label_F8FB:; return;
label_F901:; return;
label_F903:; return;
label_F906:; return;
label_F908:; return;
label_F90B:; return;
label_F90D:; return;
label_F918:; return;
label_F91A:; return;
label_F91D:; return;
label_F91F:; return;
label_F921:; return;
label_F924:; return;
label_F925:; return;
label_F926:; return;
label_F927:; return;
label_F928:; return;
label_F929:; return;
label_F92B:; return;
label_F92E:; return;
label_F92F:; return;
label_F930:; return;
label_F931:; return;
label_F932:; return;
label_F933:; return;
label_F935:; return;
label_F936:; return;
label_F937:; return;
label_F938:; return;
label_F93B:; return;
label_F93D:; return;
label_F93E:; return;
label_F93F:; return;
label_F942:; return;
label_F943:; return;
label_F944:; return;
label_F947:; return;
label_F949:; return;
label_F94B:; return;
label_F94E:; return;
label_F94F:; return;
label_F950:; return;
label_F951:; return;
label_F952:; return;
label_F953:; return;
label_F955:; return;
label_F958:; return;
label_F959:; return;
label_F95A:; return;
label_F95B:; return;
label_F95C:; return;
label_F95D:; return;
label_F95F:; return;
label_F960:; return;
label_F961:; return;
label_F962:; return;
label_F965:; return;
label_F966:; return;
label_F967:; return;
label_F968:; return;
label_F96A:; return;
label_F96B:; return;
label_F96E:; return;
label_F970:; return;
label_F971:; return;
label_F972:; return;
label_F974:; return;
label_F976:; return;
label_F977:; return;
label_F978:; return;
label_F97B:; return;
label_F97C:; return;
label_F97E:; return;
label_F980:; return;
label_F981:; return;
label_F982:; return;
label_F985:; return;
label_F987:; return;
label_F988:; return;
label_F989:; return;
label_F98C:; return;
label_F98D:; return;
label_F98E:; return;
label_F98F:; return;
label_F990:; return;
label_F992:; return;
label_F993:; return;
label_F995:; return;
label_F997:; return;
label_F999:; return;
label_F99B:; return;
label_F99D:; return;
label_F99F:; return;
label_F9A1:; return;
label_F9A3:; return;
label_F9A5:; return;
label_F9A6:; return;
label_F9A8:; return;
label_F9AA:; return;
label_F9AC:; return;
label_F9AE:; return;
label_F9B1:; return;
label_F9B2:; return;
label_F9B3:; return;
label_F9B4:; return;
label_F9B6:; return;
label_F9B8:; return;
label_F9BA:; return;
label_F9BC:; return;
label_F9BD:; return;
label_F9BE:; return;
label_F9C0:; return;
label_F9C2:; return;
label_F9C4:; return;
label_F9C6:; return;
label_F9C8:; return;
label_F9CA:; return;
label_F9CD:; return;
label_F9D0:; return;
label_F9D2:; return;
label_F9D4:; return;
label_F9D7:; return;
label_F9D8:; return;
label_F9DA:; return;
label_F9DC:; return;
label_F9DE:; return;
label_F9E1:; return;
label_F9E2:; return;
label_F9E4:; return;
label_F9E6:; return;
label_F9E9:; return;
label_F9EC:; return;
label_F9EE:; return;
label_F9EF:; return;
label_F9F0:; return;
label_F9F3:; return;
label_F9F6:; return;
label_F9F9:; return;
label_F9FC:; return;
label_F9FF:; return;
label_FA02:; return;
label_FA04:; return;
label_FA07:; return;
label_FA0A:; return;
label_FA0D:; return;
label_FA0E:; return;
label_FA11:; return;
label_FA14:; return;
label_FA17:; return;
label_FA18:; return;
label_FA1B:; return;
label_FA1E:; return;
label_FA21:; return;
label_FA22:; return;
label_FA24:; return;
label_FA27:; return;
label_FA2A:; return;
label_FA2D:; return;
label_FA2E:; return;
label_FA31:; return;
label_FA33:; return;
label_FA34:; return;
label_FA36:; return;
label_FA38:; return;
label_FA3A:; return;
label_FA3B:; return;
label_FA3E:; return;
label_FA40:; return;
label_FA42:; return;
label_FA44:; return;
label_FA47:; return;
label_FA48:; return;
label_FA4A:; return;
label_FA4C:; return;
label_FA4E:; return;
label_FA50:; return;
label_FA51:; return;
label_FA53:; return;
label_FA55:; return;
label_FA57:; return;
label_FA58:; return;
label_FA5A:; return;
label_FA5B:; return;
label_FA5E:; return;
label_FA5F:; return;
label_FA61:; return;
label_FA63:; return;
label_FA65:; return;
label_FA66:; return;
label_FA69:; return;
label_FA6C:; return;
label_FA6D:; return;
label_FA70:; return;
label_FA71:; return;
label_FA74:; return;
label_FA75:; return;
label_FA78:; return;
label_FA7A:; return;
label_FA7C:; return;
label_FA7E:; return;
label_FA80:; return;
label_FA81:; return;
label_FA82:; return;
label_FA84:; return;
label_FA86:; return;
label_FA88:; return;
label_FA89:; return;
label_FA8A:; return;
label_FA8C:; return;
label_FA8E:; return;
label_FA90:; return;
label_FA92:; return;
label_FA93:; return;
label_FA9E:; return;
label_FAA0:; return;
label_FAA1:; return;
label_FAA4:; return;
label_FAA6:; return;
label_FAA8:; return;
label_FAA9:; return;
label_FAAA:; return;
label_FAAB:; return;
label_FAAC:; return;
label_FAAE:; return;
label_FAB0:; return;
label_FAB1:; return;
label_FAB2:; return;
label_FAB3:; return;
label_FAB5:; return;
label_FAB6:; return;
label_FAB8:; return;
label_FAB9:; return;
label_FABC:; return;
label_FABE:; return;
label_FABF:; return;
label_FAD6:; return;
label_FAD7:; return;
label_FAD9:; return;
label_FADA:; return;
label_FADB:; return;
label_FADC:; return;
label_FADE:; return;
label_FADF:; return;
label_FAE0:; return;
label_FAE1:; return;
label_FAE3:; return;
label_FAE4:; return;
label_FAE5:; return;
label_FAE7:; return;
label_FAEA:; return;
label_FAED:; return;
label_FAEE:; return;
label_FAF1:; return;
label_FAF3:; return;
label_FAF5:; return;
label_FAF6:; return;
label_FAF7:; return;
label_FAF8:; return;
label_FAFA:; return;
label_FB06:; return;
label_FB08:; return;
label_FB0A:; return;
label_FB0B:; return;
label_FB0D:; return;
label_FB0F:; return;
label_FB12:; return;
label_FB14:; return;
label_FB15:; return;
label_FB17:; return;
label_FB1A:; return;
label_FB1B:; return;
label_FB1D:; return;
label_FB1E:; return;
label_FB21:; return;
label_FB22:; return;
label_FB25:; return;
label_FB27:; return;
label_FB28:; return;
label_FB29:; return;
label_FB2C:; return;
label_FB2D:; return;
label_FB2E:; return;
label_FB2F:; return;
label_FB31:; return;
label_FB33:; return;
label_FB35:; return;
label_FB38:; return;
label_FB3A:; return;
label_FB3B:; return;
label_FB3E:; return;
label_FB3F:; return;
label_FB41:; return;
label_FB43:; return;
label_FB45:; return;
label_FB48:; return;
label_FB4A:; return;
label_FB4B:; return;
label_FB4D:; return;
label_FB4E:; return;
label_FB4F:; return;
label_FB50:; return;
label_FB51:; return;
label_FB54:; return;
label_FB55:; return;
label_FB57:; return;
label_FB58:; return;
label_FB59:; return;
label_FB5B:; return;
label_FB5C:; return;
label_FB5D:; return;
label_FB5E:; return;
label_FB61:; return;
label_FB62:; return;
label_FB63:; return;
label_FB65:; return;
label_FB67:; return;
label_FB69:; return;
label_FB6B:; return;
label_FB6D:; return;
label_FB70:; return;
label_FB72:; return;
label_FB75:; return;
label_FB77:; return;
label_FB79:; return;
label_FB7B:; return;
label_FB7D:; return;
label_FB80:; return;
label_FB83:; return;
label_FB86:; return;
label_FB89:; return;
label_FB8C:; return;
label_FB8F:; return;
label_FB91:; return;
label_FB94:; return;
label_FB97:; return;
label_FB99:; return;
label_FB9B:; return;
label_FB9C:; return;
label_FB9F:; return;
label_FBA2:; return;
label_FBA3:; return;
label_FBA4:; return;
label_FBA7:; return;
label_FBA9:; return;
label_FBAA:; return;
label_FBAD:; return;
label_FBAF:; return;
label_FBB0:; return;
label_FBB1:; return;
label_FBB4:; return;
label_FBB5:; return;
label_FBB7:; return;
label_FBB8:; return;
label_FBB9:; return;
label_FBBC:; return;
label_FBBD:; return;
label_FBBF:; return;
label_FBC1:; return;
label_FBC4:; return;
label_FBC5:; return;
label_FBC8:; return;
label_FBCA:; return;
label_FBCC:; return;
label_FBCE:; return;
label_FBD0:; return;
label_FBD1:; return;
label_FBD2:; return;
label_FBD4:; return;
label_FBD6:; return;
label_FBD8:; return;
label_FBD9:; return;
label_FBDA:; return;
label_FBDC:; return;
label_FBDE:; return;
label_FBE0:; return;
label_FBE2:; return;
label_FBE3:; return;
label_FC26:; return;
label_FC27:; return;
label_FC28:; return;
label_FC29:; return;
label_FC2C:; return;
label_FC2F:; return;
label_FC32:; return;
label_FC35:; return;
label_FC38:; return;
label_FC3B:; return;
label_FC3E:; return;
label_FC41:; return;
label_FC44:; return;
label_FC47:; return;
label_FC4A:; return;
label_FC4D:; return;
label_FC50:; return;
label_FC53:; return;
label_FC56:; return;
label_FC59:; return;
label_FC5C:; return;
label_FC5F:; return;
label_FC62:; return;
label_FC65:; return;
label_FC68:; return;
label_FC6B:; return;
label_FC6E:; return;
label_FC71:; return;
label_FC74:; return;
label_FC77:; return;
label_FC7A:; return;
label_FC7D:; return;
label_FC80:; return;
label_FC81:; return;
label_FC82:; return;
label_FC84:; return;
label_FC87:; return;
label_FC8A:; return;
label_FC8D:; return;
label_FC8F:; return;
label_FC92:; return;
label_FC94:; return;
label_FC96:; return;
label_FC97:; return;
label_FC9A:; return;
label_FC9C:; return;
label_FC9F:; return;
label_FCA1:; return;
label_FCA4:; return;
label_FCA6:; return;
label_FCA9:; return;
label_FCAB:; return;
label_FCAE:; return;
label_FCB1:; return;
label_FCB4:; return;
label_FCB7:; return;
label_FCBA:; return;
label_FCBD:; return;
label_FCC0:; return;
label_FCC3:; return;
label_FCC6:; return;
label_FCC9:; return;
label_FCCC:; return;
label_FCCF:; return;
label_FCD2:; return;
label_FCD5:; return;
label_FCD8:; return;
label_FCDB:; return;
label_FCDE:; return;
label_FCE1:; return;
label_FCE4:; return;
label_FCE7:; return;
label_FCEA:; return;
label_FCED:; return;
label_FCF0:; return;
label_FCF3:; return;
label_FCF6:; return;
label_FCF9:; return;
label_FCFC:; return;
label_FCFF:; return;
label_FD02:; return;
label_FD05:; return;
label_FD07:; return;
label_FD09:; return;
label_FD0B:; return;
label_FD0E:; return;
label_FD11:; return;
label_FD13:; return;
label_FD16:; return;
label_FD17:; return;
label_FD18:; return;
label_FD1B:; return;
label_FD1C:; return;
label_FD1E:; return;
label_FD21:; return;
label_FD22:; return;
label_FD24:; return;
label_FD27:; return;
label_FD28:; return;
label_FD29:; return;
label_FD2C:; return;
label_FD2E:; return;
label_FD30:; return;
label_FD33:; return;
label_FD36:; return;
label_FD39:; return;
label_FD3A:; return;
label_FD3C:; return;
label_FD3F:; return;
label_FD40:; return;
label_FD43:; return;
label_FD44:; return;
label_FD45:; return;
label_FD47:; return;
label_FD4A:; return;
label_FD4B:; return;
label_FD4E:; return;
label_FD51:; return;
label_FD53:; return;
label_FD56:; return;
label_FD58:; return;
label_FD5B:; return;
label_FD5C:; return;
label_FD5E:; return;
label_FD61:; return;
label_FD62:; return;
label_FD64:; return;
label_FD67:; return;
label_FD68:; return;
label_FD6B:; return;
label_FD6C:; return;
label_FD6D:; return;
label_FD6E:; return;
label_FD71:; return;
label_FD73:; return;
label_FD75:; return;
label_FD78:; return;
label_FD79:; return;
label_FD7B:; return;
label_FD7E:; return;
label_FD80:; return;
label_FD83:; return;
label_FD84:; return;
label_FD86:; return;
label_FD89:; return;
label_FD8A:; return;
label_FD8C:; return;
label_FD8F:; return;
label_FD90:; return;
label_FD93:; return;
label_FD95:; return;
label_FD97:; return;
label_FD9A:; return;
label_FD9B:; return;
label_FD9D:; return;
label_FDA0:; return;
label_FDA1:; return;
label_FDA3:; return;
label_FDA6:; return;
label_FDA8:; return;
label_FDAA:; return;
label_FDAC:; return;
label_FDAD:; return;
label_FDAF:; return;
label_FDB2:; return;
label_FDB3:; return;
label_FDB5:; return;
label_FDB8:; return;
label_FDBA:; return;
label_FDBD:; return;
label_FDBF:; return;
label_FDC1:; return;
label_FDC2:; return;
label_FDC4:; return;
label_FDC5:; return;
label_FDC8:; return;
label_FDC9:; return;
label_FDCA:; return;
label_FDCC:; return;
label_FDCF:; return;
label_FDD0:; return;
label_FDD1:; return;
label_FDD4:; return;
label_FDD6:; return;
label_FDD8:; return;
label_FDDB:; return;
label_FDDC:; return;
label_FDDD:; return;
label_FDE0:; return;
label_FDE2:; return;
label_FDE3:; return;
label_FDE6:; return;
label_FDE7:; return;
label_FDE8:; return;
label_FDEB:; return;
label_FDEC:; return;
label_FDED:; return;
label_FDEF:; return;
label_FDF2:; return;
label_FDF3:; return;
label_FDF4:; return;
label_FDF7:; return;
label_FDF8:; return;
label_FDF9:; return;
label_FDFA:; return;
label_FDFD:; return;
label_FDFE:; return;
label_FDFF:; return;
label_FE01:; return;
label_FE04:; return;
label_FE05:; return;
label_FE08:; return;
label_FE0A:; return;
label_FE0C:; return;
label_FE0F:; return;
label_FE10:; return;
label_FE12:; return;
label_FE15:; return;
label_FE17:; return;
label_FE1A:; return;
label_FE1B:; return;
label_FE1C:; return;
label_FE1E:; return;
label_FE21:; return;
label_FE23:; return;
label_FE26:; return;
label_FE27:; return;
label_FE29:; return;
label_FE2C:; return;
label_FE2E:; return;
label_FE30:; return;
label_FE32:; return;
label_FE34:; return;
label_FE37:; return;
label_FE39:; return;
label_FE3C:; return;
label_FE3E:; return;
label_FE3F:; return;
label_FE41:; return;
label_FE42:; return;
label_FE44:; return;
label_FE46:; return;
label_FE49:; return;
label_FE4A:; return;
label_FE4C:; return;
label_FE4E:; return;
label_FE4F:; return;
label_FE51:; return;
label_FE54:; return;
label_FE56:; return;
label_FE58:; return;
label_FE59:; return;
label_FE5B:; return;
label_FE5D:; return;
label_FE5F:; return;
label_FE61:; return;
label_FE63:; return;
label_FE65:; return;
label_FE66:; return;
label_FE68:; return;
label_FE69:; return;
label_FE6A:; return;
label_FE6C:; return;
label_FE6E:; return;
label_FE6F:; return;
label_FE70:; return;
label_FE72:; return;
label_FE73:; return;
label_FE75:; return;
label_FE77:; return;
label_FE78:; return;
label_FE79:; return;
label_FE7B:; return;
label_FE7D:; return;
label_FE7F:; return;
label_FE81:; return;
label_FE84:; return;
label_FE86:; return;
label_FE87:; return;
label_FE8A:; return;
label_FE8B:; return;
label_FE8D:; return;
label_FE90:; return;
label_FE91:; return;
label_FE93:; return;
label_FE96:; return;
label_FE98:; return;
label_FE9B:; return;
label_FE9D:; return;
label_FE9F:; return;
label_FEA2:; return;
label_FEA3:; return;
label_FEA5:; return;
label_FEA8:; return;
label_FEA9:; return;
label_FEAB:; return;
label_FEAE:; return;
label_FEB0:; return;
label_FEB2:; return;
label_FEB4:; return;
label_FEB6:; return;
label_FEB8:; return;
label_FEBA:; return;
label_FEBB:; return;
label_FEBE:; return;
label_FEC0:; return;
label_FEEC:; return;
label_FEED:; return;
label_FEEF:; return;
label_FEF0:; return;
label_FEF3:; return;
label_FEF5:; return;
label_FEF7:; return;
label_FEF9:; return;
label_FEFA:; return;
label_FEFC:; return;
label_FEFD:; return;
label_FEFF:; return;
label_FF00:; return;
label_FF03:; return;
label_FF06:; return;
label_FF09:; return;
label_FF0A:; return;
label_FF0D:; return;
label_FF0F:; return;
label_FF12:; return;
label_FF14:; return;
label_FF16:; return;
label_FF18:; return;
label_FF1A:; return;
label_FF1C:; return;
label_FF1F:; return;
label_FF21:; return;
label_FF24:; return;
label_FF26:; return;
label_FF28:; return;
label_FF2A:; return;
label_FF2D:; return;
label_FF30:; return;
label_FF31:; return;
label_FF33:; return;
label_FF36:; return;
label_FF39:; return;
label_FF3C:; return;
label_FF3E:; return;
label_FF40:; return;
label_FF42:; return;
label_FF45:; return;
label_FF48:; return;
label_FF4B:; return;
label_FF4D:; return;
label_FF4F:; return;
label_FF52:; return;
label_FF55:; return;
label_FF57:; return;
label_FF5A:; return;
label_FF5C:; return;
label_FF5F:; return;
label_FF61:; return;
label_FF64:; return;
label_FF67:; return;
label_FF69:; return;
label_FF6B:; return;
label_FF6D:; return;
label_FF6F:; return;
label_FF72:; return;
label_FF75:; return;
label_FF77:; return;
label_FF7A:; return;
label_FF7C:; return;
label_FF7F:; return;
label_FF82:; return;
label_FF84:; return;
label_FF86:; return;
label_FF89:; return;
label_FF8C:; return;
label_FF8F:; return;
label_FF92:; return;
label_FF95:; return;
label_FF98:; return;
label_FF9B:; return;
label_FF9D:; return;
label_FF9F:; return;
label_FFA2:; return;
label_FFA3:; return;
label_FFA5:; return;
label_FFA6:; return;
label_FFA9:; return;
label_FFAC:; return;
label_FFAF:; return;
label_FFB2:; return;
label_FFB5:; return;
label_FFB8:; return;
label_FFBB:; return;
label_FFBE:; return;
label_FFC1:; return;
label_FFC4:; return;
label_FFC7:; return;
label_FFCA:; return;
label_FFCD:; return;
label_FFD0:; return;
label_FFD3:; return;
label_FFD6:; return;
label_FFD9:; return;
label_FFDC:; return;
label_FFDF:; return;
label_FFE2:; return;
label_FFE5:; return;
label_FFE8:; return;
label_FFEA:; return;
label_FFED:; return;
label_FFEE:; return;
label_FFF0:; return;
label_FFF2:; return;
label_FFF4:; return;
label_FFF5:; return;
label_FFF7:; return;
label_FFF9:; return;
label_FFFC:; return;
label_FFFE:; return;
}

void func_D422(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D422");
#endif
label_D422:;
    /* $D422: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x85; g_cpu.C=(g_cpu.X>=0x85)?1:0; FLAG_NZ(r&0xFF); }
label_D424:;
    /* $D424: E2 */ maybe_trigger_vblank(2); /* NOP */
label_D426:;
    /* $D426: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D428:;
    /* $D428: 85 */ maybe_trigger_vblank(3); nes_write(0xE3, g_cpu.A);
label_D42A:;
    /* $D42A: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); nes_trace_indirect_jump(0xD42A, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_F1AC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F1AC");
#endif
label_F1AC:;
    /* $F1AC: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x04B9, -1);
label_F1AF:;
    /* $F1AF: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x0701 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F1B2:;
    /* $F1B2: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1B5:;
    /* $F1B5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1B7:;
    /* $F1B7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE20 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1BA:;
    /* $F1BA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1BC:;
    /* $F1BC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE20 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1BF:;
    /* $F1BF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1C1:;
    /* $F1C1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE20 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1C4:;
    /* $F1C4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1C6:;
    /* $F1C6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE41 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1C9:;
    /* $F1C9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1CB:;
    /* $F1CB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xF1CB); return;
}

void func_D4B1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D4B1");
#endif
label_D4B1:;
    /* $D4B1: 96 */ maybe_trigger_vblank(4); nes_write((0xD2 + g_cpu.Y) & 0xFF, g_cpu.X);
label_D4B3:;
    /* $D4B3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xEF); FLAG_NZ(g_cpu.A);
label_D4B5:;
    /* $D4B5: 9D */ maybe_trigger_vblank(5); nes_write((0x06F8 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D4B8:;
    /* $D4B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D4BA:;
    /* $D4BA: 9D */ maybe_trigger_vblank(5); nes_write((0x06DA + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D4BD:;
    /* $D4BD: 9D */ maybe_trigger_vblank(5); nes_write((0x06DF + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D4C0:;
    /* $D4C0: 9D */ maybe_trigger_vblank(5); nes_write((0x06E3 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D4C3:;
    /* $D4C3: 9D */ maybe_trigger_vblank(5); nes_write((0x06E7 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_D4C6:;
    /* $D4C6: 8D */ maybe_trigger_vblank(4); nes_write(0x068A, g_cpu.A);
label_D4C9:;
    /* $D4C9: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C113(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C113");
#endif
label_C113:;
    /* $C113: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4023 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C116:;
    /* $C116: 20 */ maybe_trigger_vblank(6); func_FCFD();
label_C119:;
    /* $C119: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5A59 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C11C:;
    /* $C11C: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C11D:;
    /* $C11D: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C11E:;
    /* $C11E: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C11F:;
    /* $C11F: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C120:;
    /* $C120: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C121:;
    /* $C121: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C122:;
    /* $C122: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C123:;
    /* $C123: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C124:;
    /* $C124: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C125:;
    /* $C125: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C126:;
    /* $C126: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C127:;
    /* $C127: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C128:;
    /* $C128: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C129:;
    /* $C129: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C12A:;
    /* $C12A: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C12B:;
    /* $C12B: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C12C:;
    /* $C12C: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C12D:;
    /* $C12D: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C12E:;
    /* $C12E: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C12F:;
    /* $C12F: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C130:;
    /* $C130: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C131:;
    /* $C131: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C132:;
    /* $C132: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C133:;
    /* $C133: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFC + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_C136:;
    /* $C136: FC */ maybe_trigger_vblank(4); (void)nes_read((0x6023 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C139:;
    /* $C139: 20 */ maybe_trigger_vblank(6); func_FDFC();
label_C13C:;
    /* $C13C: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C13F:;
    /* $C13F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C142:;
    /* $C142: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C145:;
    /* $C145: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C148:;
    /* $C148: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C14B:;
    /* $C14B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C14E:;
    /* $C14E: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C151:;
    /* $C151: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C154:;
    /* $C154: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C157:;
    /* $C157: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C15A:;
    /* $C15A: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x80 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_C15C:;
    /* $C15C: 20 */ maybe_trigger_vblank(6); func_FCFD();
label_C15F:;
    /* $C15F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C162:;
    /* $C162: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C165:;
    /* $C165: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C168:;
    /* $C168: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C16B:;
    /* $C16B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C16E:;
    /* $C16E: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C171:;
    /* $C171: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C174:;
    /* $C174: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C177:;
    /* $C177: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C17A:;
    /* $C17A: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C17D:;
    /* $C17D: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_C17F:;
    /* $C17F: 20 */ maybe_trigger_vblank(6); func_FDFC();
label_C182:;
    /* $C182: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C185:;
    /* $C185: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C188:;
    /* $C188: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C18B:;
    /* $C18B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C18E:;
    /* $C18E: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C191:;
    /* $C191: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C194:;
    /* $C194: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C197:;
    /* $C197: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C19A:;
    /* $C19A: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C19D:;
    /* $C19D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C1A0:;
    /* $C1A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0020 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1A3:;
    /* $C1A3: 20 */ maybe_trigger_vblank(6); func_FFFC();
label_C1A6:;
    /* $C1A6: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1A9:;
    /* $C1A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1AC:;
    /* $C1AC: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1AF:;
    /* $C1AF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1B2:;
    /* $C1B2: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1B5:;
    /* $C1B5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1B8:;
    /* $C1B8: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1BB:;
    /* $C1BB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1BE:;
    /* $C1BE: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1C1:;
    /* $C1C1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1C4:;
    /* $C1C4: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x2020, -1);
label_C1C7:;
    /* $C1C7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1CA:;
    /* $C1CA: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1CD:;
    /* $C1CD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1D0:;
    /* $C1D0: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1D3:;
    /* $C1D3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1D6:;
    /* $C1D6: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1D9:;
    /* $C1D9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1DC:;
    /* $C1DC: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1DF:;
    /* $C1DF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1E2:;
    /* $C1E2: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1E5:;
    /* $C1E5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x20FC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1E8:;
    /* $C1E8: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xC1E8; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D410(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D410");
#endif
label_D410:;
    /* $D410: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0xA8D4); FLAG_NZ(g_cpu.A);
label_D413:;
    /* $D413: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xE2; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D415:;
    /* $D415: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE2); FLAG_NZ(g_cpu.A);
label_D417:;
    /* $D417: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF8; FLAG_NZ(g_cpu.A);
label_D419:;
    /* $D419: 85 */ maybe_trigger_vblank(3); nes_write(0xE2, g_cpu.A);
label_D41B:;
    /* $D41B: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xE2; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D41D:;
    /* $D41D: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_D41E:;
    /* $D41E: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xE2); FLAG_NZ(g_cpu.A);
label_D420:;
    /* $D420: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_D421:;
    /* $D421: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D423:;
    /* $D423: 85 */ maybe_trigger_vblank(3); nes_write(0xE2, g_cpu.A);
label_D425:;
    /* $D425: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_D426:;
    /* $D426: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D428:;
    /* $D428: 85 */ maybe_trigger_vblank(3); nes_write(0xE3, g_cpu.A);
label_D42A:;
    /* $D42A: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); nes_trace_indirect_jump(0xD42A, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_D510(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D510");
#endif
label_D510:;
    /* $D510: 20 */ maybe_trigger_vblank(6); func_D485();
label_D513:;
    /* $D513: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D610(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D610");
#endif
label_D610:;
    /* $D610: EE */ maybe_trigger_vblank(6); { uint16_t a=0x06DF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D613:;
    /* $D613: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D710(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D710");
#endif
label_D710:;
    /* $D710: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xA2 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_D712:;
    /* $D712: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xD712); return;
}

void func_DB10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DB10");
#endif
label_DB10:;
    /* $DB10: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_DB12:;
    /* $DB12: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x44D0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DB15:;
    /* $DB15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFE; FLAG_NZ(g_cpu.A);
label_DB17:;
    /* $DB17: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DB59; }
label_DB19:;
    /* $DB19: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06D1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB1C:;
    /* $DB1C: 85 */ maybe_trigger_vblank(3); nes_write(0xE2, g_cpu.A);
label_DB1E:;
    /* $DB1E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE0); FLAG_NZ(g_cpu.A);
label_DB20:;
    /* $DB20: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_DB22:;
    /* $DB22: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DB38; }
label_DB24:;
    /* $DB24: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xA0; g_cpu.C=(g_cpu.A>=0xA0)?1:0; FLAG_NZ(r&0xFF); }
label_DB26:;
    /* $DB26: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DB47; }
label_DB28:;
    /* $DB28: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_DB2A:;
    /* $DB2A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xDB0A); return; }
label_DB2C:;
    /* $DB2C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x40; g_cpu.C=(g_cpu.A>=0x40)?1:0; FLAG_NZ(r&0xFF); }
label_DB2E:;
    /* $DB2E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xDAF9); return; }
label_DB30:;
    /* $DB30: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_DB32:;
    /* $DB32: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xDADC); return; }
label_DB34:;
    /* $DB34: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_DB36:;
    /* $DB36: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xDADC); return; }
label_DB38:;
    /* $DB38: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE2); FLAG_NZ(g_cpu.A);
label_DB3A:;
    /* $DB3A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_DB3C:;
    /* $DB3C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DB40; }
label_DB3E:;
    /* $DB3E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DB40:;
    /* $DB40: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DB41:;
    /* $DB41: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDBBC + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB44:;
    /* $DB44: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_DB53(); return;
label_DB47:;
    /* $DB47: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE2); FLAG_NZ(g_cpu.A);
label_DB49:;
    /* $DB49: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x2B; g_cpu.C=(g_cpu.A>=0x2B)?1:0; FLAG_NZ(r&0xFF); }
label_DB4B:;
    /* $DB4B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DB4F; }
label_DB4D:;
    /* $DB4D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_DB4F:;
    /* $DB4F: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DB50:;
    /* $DB50: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDB9B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB53:;
    /* $DB53: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_DB54:;
    /* $DB54: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_DB55:;
    /* $DB55: 9D */ maybe_trigger_vblank(5); nes_write((0x06D1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DB58:;
    /* $DB58: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_DB59:;
    /* $DB59: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_DB5A:;
    /* $DB5A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06C8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB5D:;
    /* $DB5D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DB69; }
label_DB5F:;
    /* $DB5F: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_DB60:;
    /* $DB60: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DB61:;
    /* $DB61: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE1); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DB63:;
    /* $DB63: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xEE); FLAG_NZ(g_cpu.Y);
label_DB65:;
    /* $DB65: 99 */ maybe_trigger_vblank(5); nes_write((0x4002 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB68:;
    /* $DB68: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DB69:;
    /* $DB69: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_DB6A:;
    /* $DB6A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DC10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DC10");
#endif
label_DC10:;
    /* $DC10: EA */ maybe_trigger_vblank(2); /* NOP */
label_DC11:;
    /* $DC11: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_DC13:;
    /* $DC13: 99 */ maybe_trigger_vblank(5); nes_write((0x06A7 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DC16:;
    /* $DC16: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DC17:;
    /* $DC17: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DC13;
    }
label_DC19:;
    /* $DC19: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_DC1A:;
    /* $DC1A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0692 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DC1D:;
    /* $DC1D: 85 */ maybe_trigger_vblank(3); nes_write(0xE6, g_cpu.A);
label_DC1F:;
    /* $DC1F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0693 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DC22:;
    /* $DC22: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_DC24:;
    /* $DC24: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address(0xDBD6); return; }
label_DC26:;
    /* $DC26: 85 */ maybe_trigger_vblank(3); nes_write(0xE7, g_cpu.A);
label_DC28:;
    /* $DC28: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x06A8); FLAG_NZ(g_cpu.Y);
label_DC2B:;
    /* $DC2B: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DC2D:;
    /* $DC2D: 9D */ maybe_trigger_vblank(5); nes_write((0x06A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC30:;
    /* $DC30: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DC31:;
    /* $DC31: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DC33:;
    /* $DC33: 9D */ maybe_trigger_vblank(5); nes_write((0x06A1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_DC36:;
    /* $DC36: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC37:;
    /* $DC37: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_DC38:;
    /* $DC38: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_DC39:;
    /* $DC39: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_DC3B:;
    /* $DC3B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DC1A;
    }
label_DC3D:;
    /* $DC3D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D810(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D810");
#endif
label_D810:;
    /* $D810: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_D811:;
    /* $D811: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x60; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D813:;
    /* $D813: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DA10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA10");
#endif
label_DA10:;
    /* $DA10: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xAD + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_DA12:;
    /* $DA12: 86 */ maybe_trigger_vblank(3); nes_write(0xD3, g_cpu.X);
label_DA14:;
    /* $DA14: 8D */ maybe_trigger_vblank(4); nes_write(0x06E6, g_cpu.A);
label_DA17:;
    /* $DA17: 8D */ maybe_trigger_vblank(4); nes_write(0x06E2, g_cpu.A);
label_DA1A:;
    /* $DA1A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x84; FLAG_NZ(g_cpu.A);
label_DA1C:;
    /* $DA1C: 8D */ maybe_trigger_vblank(4); nes_write(0x06EA, g_cpu.A);
label_DA1F:;
    /* $DA1F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFC; FLAG_NZ(g_cpu.A);
label_DA21:;
    /* $DA21: 8D */ maybe_trigger_vblank(4); nes_write(0x06E1, g_cpu.A);
label_DA24:;
    /* $DA24: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C410(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C410");
#endif
label_C410:;
    /* $C410: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C413:;
    /* $C413: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C416:;
    /* $C416: FC */ maybe_trigger_vblank(4); (void)nes_read((0x4022 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C419:;
    /* $C419: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x94FC, -1);
label_C41C:;
    /* $C41C: 95 */ maybe_trigger_vblank(4); nes_write((0xFD + g_cpu.X) & 0xFF, g_cpu.A);
label_C41E:;
    /* $C41E: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C421:;
    /* $C421: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA5A4 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C424:;
    /* $C424: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF33 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C427:;
    /* $C427: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C42A:;
    /* $C42A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C42D:;
    /* $C42D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF34 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C430:;
    /* $C430: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x15) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_C432:;
    /* $C432: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0E1F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C435:;
    /* $C435: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xFE + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_C437:;
    /* $C437: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xFC + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C439:;
    /* $C439: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x6022 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C43C:;
    /* $C43C: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x96FF, -1);
label_C43F:;
    /* $C43F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C442:;
    /* $C442: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C445:;
    /* $C445: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFA6 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C448:;
    /* $C448: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_C44A:;
    /* $C44A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C44D:;
    /* $C44D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C450:;
    /* $C450: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFC34 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C453:;
    /* $C453: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_C455:;
    /* $C455: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C458:;
    /* $C458: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xD4FE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C45B:;
    /* $C45B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x22FC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C45E:;
    /* $C45E: 80 */ maybe_trigger_vblank(2); /* NOP */
label_C460:;
    /* $C460: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFD63 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C463:;
    /* $C463: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C466:;
    /* $C466: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C469:;
    /* $C469: 64 */ maybe_trigger_vblank(3); (void)nes_read(0xFC); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C46B:;
    /* $C46B: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_C46D:;
    /* $C46D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C470:;
    /* $C470: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C473:;
    /* $C473: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF34 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C476:;
    /* $C476: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_C478:;
    /* $C478: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C47B:;
    /* $C47B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xD4FE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C47E:;
    /* $C47E: FC */ maybe_trigger_vblank(4); (void)nes_read((0x22FF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C481:;
    /* $C481: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x20; FLAG_NZ(g_cpu.Y);
label_C483:;
    /* $C483: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFD83 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C486:;
    /* $C486: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C489:;
    /* $C489: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C48C:;
    /* $C48C: 84 */ maybe_trigger_vblank(3); nes_write(0xFF, g_cpu.Y);
label_C48E:;
    /* $C48E: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_C490:;
    /* $C490: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C493:;
    /* $C493: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C496:;
    /* $C496: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFC34 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C499:;
    /* $C499: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x1C) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_C49B:;
    /* $C49B: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0E0E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C49E:;
    /* $C49E: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0xD4FE); FLAG_NZ(g_cpu.A);
label_C4A1:;
    /* $C4A1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x22FC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C4A4:;
    /* $C4A4: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x20; g_cpu.C=(g_cpu.Y>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_C4A6:;
    /* $C4A6: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFDC0 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C4A9:;
    /* $C4A9: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C4AC:;
    /* $C4AC: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C4AF:;
    /* $C4AF: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xC4AD); return; }
label_C4B1:;
    /* $C4B1: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_C4B3:;
    /* $C4B3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C4B6:;
    /* $C4B6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C4B9:;
    /* $C4B9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF34 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C4BC:;
    /* $C4BC: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_C4BE:;
    /* $C4BE: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C4C1:;
    /* $C4C1: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xD4FE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C4C4:;
    /* $C4C4: FC */ maybe_trigger_vblank(4); (void)nes_read((0x22FF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C4C7:;
    /* $C4C7: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x20; g_cpu.C=(g_cpu.X>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_C4C9:;
    /* $C4C9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC2C1 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C4CC:;
    /* $C4CC: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C4CF:;
    /* $C4CF: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB1FD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C4D2:;
    /* $C4D2: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_C4D3:;
    /* $C4D3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF33 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C4D6:;
    /* $C4D6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C4D9:;
    /* $C4D9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C4DC:;
    /* $C4DC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFC34 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C4DF:;
    /* $C4DF: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_C4E1:;
    /* $C4E1: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C4E4:;
    /* $C4E4: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xD4FE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C4E7:;
    /* $C4E7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x23FC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C4EA:;
    /* $C4EA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xC4EA); return;
}

void func_D418(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D418");
#endif
label_D418:;
    /* $D418: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_D419:;
    /* $D419: 85 */ maybe_trigger_vblank(3); nes_write(0xE2, g_cpu.A);
label_D41B:;
    /* $D41B: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xE2; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D41D:;
    /* $D41D: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_D41E:;
    /* $D41E: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xE2); FLAG_NZ(g_cpu.A);
label_D420:;
    /* $D420: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_D421:;
    /* $D421: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D423:;
    /* $D423: 85 */ maybe_trigger_vblank(3); nes_write(0xE2, g_cpu.A);
label_D425:;
    /* $D425: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_D426:;
    /* $D426: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D428:;
    /* $D428: 85 */ maybe_trigger_vblank(3); nes_write(0xE3, g_cpu.A);
label_D42A:;
    /* $D42A: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); nes_trace_indirect_jump(0xD42A, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_EE03(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EE03");
#endif
label_EE03:;
    /* $EE03: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_EE04:;
    /* $EE04: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_EE06:;
    /* $EE06: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_EE08:;
    /* $EE08: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_EE0A:;
    /* $EE0A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xEE0A); return;
}

void func_D026(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D026");
#endif
label_D026:;
    /* $D026: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_D028:;
    /* $D028: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_D02A:;
    /* $D02A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_D02C:;
    /* $D02C: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_D02E:;
    /* $D02E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_D030:;
    /* $D030: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xD030); return;
}

void func_E0C8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E0C8");
#endif
label_E0C8:;
    /* $E0C8: 4E */ maybe_trigger_vblank(6); { uint16_t a=0xF305; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E0CB:;
    /* $E0CB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x9E); FLAG_NZ(g_cpu.A);
label_E0CD:;
    /* $E0CD: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x4D); FLAG_NZ(g_cpu.A);
label_E0CF:;
    /* $E0CF: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_E0D1:;
    /* $E0D1: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xB9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E0D3:;
    /* $E0D3: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x75); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E0D5:;
    /* $E0D5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x35); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E0D7:;
    /* $E0D7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_E0D9:;
    /* $E0D9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xBF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_E0DB:;
    /* $E0DB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x89 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_E0DD:;
    /* $E0DD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x57 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_E0DF:;
    /* $E0DF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x27 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_E0E1:;
    /* $E0E1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E0E2:;
    /* $E0E2: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xCF02 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E0E5:;
    /* $E0E5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E0E6:;
    /* $E0E6: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x02); FLAG_NZ(g_cpu.X);
label_E0E8:;
    /* $E0E8: 80 */ maybe_trigger_vblank(2); /* NOP */
label_E0EA:;
    /* $E0EA: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x3A02 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E0ED:;
    /* $E0ED: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E0EE:;
    /* $E0EE: 1A */ maybe_trigger_vblank(2); /* NOP */
label_E0EF:;
    /* $E0EF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E0F1:;
    /* $E0F1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E0F3:;
    /* $E0F3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E0F5:;
    /* $E0F5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E0F7:;
    /* $E0F7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x93 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E0F9:;
    /* $E0F9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x7C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E0FB:;
    /* $E0FB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x67 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E0FD:;
    /* $E0FD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x52 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E0FF:;
    /* $E0FF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x3F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E101:;
    /* $E101: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E103:;
    /* $E103: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E105:;
    /* $E105: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E107:;
    /* $E107: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE107); return;
}

void func_D830(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D830");
#endif
label_D830:;
    /* $D830: 20 */ maybe_trigger_vblank(6); func_D787();
label_D833:;
    /* $D833: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D840; }
label_D835:;
    /* $D835: 20 */ maybe_trigger_vblank(6); func_D77F();
label_D838:;
    /* $D838: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D840; }
label_D83A:;
    /* $D83A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_D83C:;
    /* $D83C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x48; FLAG_NZ(g_cpu.Y);
label_D83E:;
    /* $D83E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D891; }
label_D840:;
    /* $D840: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_D841:;
    /* $D841: 20 */ maybe_trigger_vblank(6); func_D773();
label_D844:;
    /* $D844: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_D840;
    }
label_D846:;
    /* $D846: 20 */ maybe_trigger_vblank(6); func_D787();
label_D849:;
    /* $D849: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_D840;
    }
label_D84B:;
    /* $D84B: 20 */ maybe_trigger_vblank(6); func_D77F();
label_D84E:;
    /* $D84E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_D840;
    }
label_D850:;
    /* $D850: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_D852:;
    /* $D852: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x38; FLAG_NZ(g_cpu.Y);
label_D854:;
    /* $D854: 20 */ maybe_trigger_vblank(6); func_D891();
label_D857:;
    /* $D857: 20 */ maybe_trigger_vblank(6); func_D26E();
label_D85A:;
    /* $D85A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_D840;
    }
label_D85C:;
    /* $D85C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x06E0); FLAG_NZ(g_cpu.A);
label_D85F:;
    /* $D85F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x06E0; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D862:;
    /* $D862: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D878; }
label_D864:;
    /* $D864: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_D866:;
    /* $D866: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D873; }
label_D868:;
    /* $D868: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_D86A:;
    /* $D86A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D878; }
label_D86C:;
    /* $D86C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_D86E:;
    /* $D86E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_D840;
    }
label_D870:;
    /* $D870: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_D802(); return;
label_D873:;
    /* $D873: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x38; FLAG_NZ(g_cpu.Y);
label_D875:;
    /* $D875: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_D28E(); return;
label_D878:;
    /* $D878: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x3C; FLAG_NZ(g_cpu.Y);
label_D87A:;
    /* $D87A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_D28E(); return;
label_D891:;
    /* $D891: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_D485(); return;
}

void func_D850(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D850");
#endif
label_D850:;
    /* $D850: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_D852:;
    /* $D852: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x38; FLAG_NZ(g_cpu.Y);
label_D854:;
    /* $D854: 20 */ maybe_trigger_vblank(6); func_D891();
label_D857:;
    /* $D857: 20 */ maybe_trigger_vblank(6); func_D26E();
label_D85A:;
    /* $D85A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xD840); return; }
label_D85C:;
    /* $D85C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x06E0); FLAG_NZ(g_cpu.A);
label_D85F:;
    /* $D85F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x06E0; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D862:;
    /* $D862: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D878; }
label_D864:;
    /* $D864: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_D866:;
    /* $D866: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D873; }
label_D868:;
    /* $D868: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_D86A:;
    /* $D86A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D878; }
label_D86C:;
    /* $D86C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_D86E:;
    /* $D86E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xD840); return; }
label_D870:;
    /* $D870: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_D802(); return;
label_D873:;
    /* $D873: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x38; FLAG_NZ(g_cpu.Y);
label_D875:;
    /* $D875: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_D28E(); return;
label_D878:;
    /* $D878: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x3C; FLAG_NZ(g_cpu.Y);
label_D87A:;
    /* $D87A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_D28E(); return;
}

void func_D860(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D860");
#endif
label_D860:;
    /* $D860: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x06; g_cpu.C=(g_cpu.X>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_D862:;
    /* $D862: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D878; }
label_D864:;
    /* $D864: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_D866:;
    /* $D866: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D873; }
label_D868:;
    /* $D868: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_D86A:;
    /* $D86A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D878; }
label_D86C:;
    /* $D86C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_D86E:;
    /* $D86E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xD840); return; }
label_D870:;
    /* $D870: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_D802(); return;
label_D873:;
    /* $D873: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x38; FLAG_NZ(g_cpu.Y);
label_D875:;
    /* $D875: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_D28E(); return;
label_D878:;
    /* $D878: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x3C; FLAG_NZ(g_cpu.Y);
label_D87A:;
    /* $D87A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_D28E(); return;
}

void func_CAB5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CAB5");
#endif
label_CAB5:;
    /* $CAB5: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAB8:;
    /* $CAB8: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CABB:;
    /* $CABB: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CABE:;
    /* $CABE: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAC1:;
    /* $CAC1: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAC4:;
    /* $CAC4: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CAC7:;
    /* $CAC7: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CACA:;
    /* $CACA: FC */ maybe_trigger_vblank(4); (void)nes_read((0x20FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CACD:;
    /* $CACD: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E666(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E666");
#endif
label_E666:;
    /* $E666: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x84); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E668:;
    /* $E668: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E66A:;
    /* $E66A: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E66C:;
    /* $E66C: 84 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.Y);
label_E66E:;
    /* $E66E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address(0xE5F1); return; }
label_E670:;
    /* $E670: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB181 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E673:;
    /* $E673: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x81); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E675:;
    /* $E675: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E677:;
    /* $E677: C2 */ maybe_trigger_vblank(2); /* NOP */
label_E679:;
    /* $E679: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67B:;
    /* $E67B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67D:;
    /* $E67D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E67F:;
    /* $E67F: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E681:;
    /* $E681: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x44C4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E684:;
    /* $E684: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E686:;
    /* $E686: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x44) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E688:;
    /* $E688: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E68A:;
    /* $E68A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E6D0; }
label_E68C:;
    /* $E68C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC281 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E68F:;
    /* $E68F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xE612); return; }
label_E691:;
    /* $E691: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xFF81 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E694:;
    /* $E694: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_E695:;
    /* $E695: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x00 + g_cpu.X) & 0xFF), g_cpu.A);
label_E697:;
    /* $E697: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB1); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E699:;
    /* $E699: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E69B:;
    /* $E69B: 84 */ maybe_trigger_vblank(3); nes_write(0x44, g_cpu.Y);
label_E69D:;
    /* $E69D: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E69F:;
    /* $E69F: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_E6A1:;
    /* $E6A1: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6A3:;
    /* $E6A3: 84 */ maybe_trigger_vblank(3); nes_write(0x41, g_cpu.Y);
label_E6A5:;
    /* $E6A5: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6A7:;
    /* $E6A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E6A9:;
    /* $E6A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9F00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_E6AC:;
    /* $E6AC: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x31; FLAG_NZ(g_cpu.A);
label_E6AE:;
    /* $E6AE: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB1 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_E6B0:;
    /* $E6B0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B1:;
    /* $E6B1: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6B3:;
    /* $E6B3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B4:;
    /* $E6B4: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6B6:;
    /* $E6B6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B7:;
    /* $E6B7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6B8:;
    /* $E6B8: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6BA:;
    /* $E6BA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6BB:;
    /* $E6BB: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6BD:;
    /* $E6BD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6BE:;
    /* $E6BE: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_E6BF:;
    /* $E6BF: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0xB1FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E6C2:;
    /* $E6C2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C3:;
    /* $E6C3: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6C5:;
    /* $E6C5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C6:;
    /* $E6C6: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6C8:;
    /* $E6C8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6C9:;
    /* $E6C9: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x0254 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_E6CC:;
    /* $E6CC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6CD:;
    /* $E6CD: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_E6CF:;
    /* $E6CF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D0:;
    /* $E6D0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D1:;
    /* $E6D1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_E6D2:;
    /* $E6D2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE6D2); return;
}

void func_F033(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F033");
#endif
label_F033:;
    /* $F033: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F035:;
    /* $F035: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F605(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F605");
#endif
label_F605:;
    /* $F605: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB872 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F608:;
    /* $F608: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F609:;
    /* $F609: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB872 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F60C:;
    /* $F60C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F60D:;
    /* $F60D: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB872 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F610:;
    /* $F610: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x72BE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F613:;
    /* $F613: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_F614:;
    /* $F614: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F615:;
    /* $F615: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB872 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F618:;
    /* $F618: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F619:;
    /* $F619: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB872 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F61C:;
    /* $F61C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F61D:;
    /* $F61D: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xFF72 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F620:;
    /* $F620: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xF620); return;
}

void func_F210(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F210");
#endif
label_F210:;
    /* $F210: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x2001 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_F213:;
    /* $F213: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE44 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F216:;
    /* $F216: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F218:;
    /* $F218: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F21B:;
    /* $F21B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F21D:;
    /* $F21D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE41 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F220:;
    /* $F220: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F222:;
    /* $F222: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F225:;
    /* $F225: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F227:;
    /* $F227: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE60 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F22A:;
    /* $F22A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F22C:;
    /* $F22C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F22F:;
    /* $F22F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F231:;
    /* $F231: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE60 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F234:;
    /* $F234: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F236:;
    /* $F236: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F239:;
    /* $F239: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F23B:;
    /* $F23B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE60 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F23E:;
    /* $F23E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F240:;
    /* $F240: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE44 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F243:;
    /* $F243: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F245:;
    /* $F245: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xF245); return;
}

void func_F5C4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F5C4");
#endif
label_F5C4:;
    /* $F5C4: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D9F0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9F0");
#endif
label_D9F0:;
    /* $D9F0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x06E6); FLAG_NZ(g_cpu.A);
label_D9F3:;
    /* $D9F3: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x06E1); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_D9F6:;
    /* $D9F6: 8D */ maybe_trigger_vblank(4); nes_write(0x06E6, g_cpu.A);
label_D9F9:;
    /* $D9F9: 8D */ maybe_trigger_vblank(4); nes_write(0x400A, g_cpu.A);
label_D9FC:;
    /* $D9FC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F194(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F194");
#endif
label_F194:;
    /* $F194: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE20 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F197:;
    /* $F197: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F199:;
    /* $F199: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F19C:;
    /* $F19C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F19E:;
    /* $F19E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1A1:;
    /* $F1A1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1A3:;
    /* $F1A3: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE60 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1A6:;
    /* $F1A6: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1A8:;
    /* $F1A8: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE20 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1AB:;
    /* $F1AB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1AD:;
    /* $F1AD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1B0:;
    /* $F1B0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1B2:;
    /* $F1B2: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1B5:;
    /* $F1B5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1B7:;
    /* $F1B7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE20 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1BA:;
    /* $F1BA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1BC:;
    /* $F1BC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE20 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1BF:;
    /* $F1BF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1C1:;
    /* $F1C1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE20 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1C4:;
    /* $F1C4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1C6:;
    /* $F1C6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE41 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1C9:;
    /* $F1C9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F1CB:;
    /* $F1CB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xF1CB); return;
}

void func_EE78(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EE78");
#endif
label_EE78:;
    /* $EE78: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x9F02 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_EE7B:;
    /* $EE7B: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0xF1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EE7D:;
    /* $EE7D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x5E4C, -1); return;
}

void func_E3E2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E3E2");
#endif
label_E3E2:;
    /* $E3E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x5A54, -1); return;
}

void func_EDAF(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EDAF");
#endif
label_EDAF:;
    /* $EDAF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D7BF(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D7BF");
#endif
label_D7BF:;
    /* $D7BF: EE */ maybe_trigger_vblank(6); { uint16_t a=0x06E4; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D7C2:;
    /* $D7C2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x68; FLAG_NZ(g_cpu.Y);
label_D7C4:;
    /* $D7C4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_D28E(); return;
}

void func_A989_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A989_b1");
#endif
label_A989:;
    /* $A989: 3A */ maybe_trigger_vblank(2); /* NOP */
label_A98A:;
    /* $A98A: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A98B:;
    /* $A98B: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x38 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A98D:;
    /* $A98D: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3838 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A990:;
    /* $A990: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x0202 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A993:;
    /* $A993: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A994:;
    /* $A994: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A995:;
    /* $A995: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3C38 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A998:;
    /* $A998: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3C3C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A99B:;
    /* $A99B: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x059F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A99E:;
    /* $A99E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xA95A); return; }
label_A9A0:;
    /* $A9A0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9A1:;
    /* $A9A1: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9A3:;
    /* $A9A3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBA68 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9A6:;
    /* $A9A6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9A7:;
    /* $A9A7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9A8:;
    /* $A9A8: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_A9A9:;
    /* $A9A9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBA02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9AC:;
    /* $A9AC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9AD:;
    /* $A9AD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xBD02, -1); return;
}

void func_85C7_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85C7_b1");
#endif
label_85C7:;
    /* $85C7: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x11 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_85C9:;
    /* $85C9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85C9); return;
}

void func_8889_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8889_b1");
#endif
label_8889:;
    /* $8889: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_888C:;
    /* $888C: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x33FE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_888F:;
    /* $888F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8892:;
    /* $8892: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8895:;
    /* $8895: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x34FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8898:;
    /* $8898: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_889B:;
    /* $889B: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_889C:;
    /* $889C: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BE67_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE67_b1");
#endif
label_BE67:;
    /* $BE67: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xAA); FLAG_NZ(g_cpu.Y);
label_BE69:;
    /* $BE69: 5A */ maybe_trigger_vblank(2); /* NOP */
label_BE6A:;
    /* $BE6A: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x4D; FLAG_NZ(g_cpu.A);
label_BE6C:;
    /* $BE6C: 95 */ maybe_trigger_vblank(4); nes_write((0x54 + g_cpu.X) & 0xFF, g_cpu.A);
label_BE6E:;
    /* $BE6E: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_BE6F:;
    /* $BE6F: DA */ maybe_trigger_vblank(2); /* NOP */
label_BE70:;
    /* $BE70: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xA9 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_BE72:;
    /* $BE72: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_BE73:;
    /* $BE73: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x54 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE75:;
    /* $BE75: EB */ maybe_trigger_vblank(2); { uint8_t m=0xDA; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BE77:;
    /* $BE77: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BE78:;
    /* $BE78: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_BE79:;
    /* $BE79: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x4A); FLAG_NZ(g_cpu.Y);
label_BE7B:;
    /* $BE7B: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0xB7; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_BE7D:;
    /* $BE7D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x92 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x92); g_cpu.A=r&0xFF; }
label_BE7F:;
    /* $BE7F: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x52); FLAG_NZ(g_cpu.Y);
label_BE81:;
    /* $BE81: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xA9B5; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BE84:;
    /* $BE84: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA4); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BE86:;
    /* $BE86: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_BE87:;
    /* $BE87: DB */ maybe_trigger_vblank(7); { uint16_t a=(0x95B6 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BE8A:;
    /* $BE8A: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_BE8B:;
    /* $BE8B: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x6A) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE8D:;
    /* $BE8D: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x1556 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BE90:;
    /* $BE90: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_BE91:;
    /* $BE91: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xB5; FLAG_NZ(g_cpu.A);
label_BE93:;
    /* $BE93: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x92D6 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BE96:;
    /* $BE96: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_BEEC; }
label_BE98:;
    /* $BE98: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x557B); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BE9B:;
    /* $BE9B: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x90) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BE9D:;
    /* $BE9D: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x77); FLAG_NZ(g_cpu.Y);
label_BE9F:;
    /* $BE9F: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x02A6 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BEA2:;
    /* $BEA2: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_BEA3:;
    /* $BEA3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF7; FLAG_NZ(g_cpu.A);
label_BEA5:;
    /* $BEA5: DB */ maybe_trigger_vblank(7); { uint16_t a=(0x114A + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BEA8:;
    /* $BEA8: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_BEA9:;
    /* $BEA9: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xED + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_BEAB:;
    /* $BEAB: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x8255 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BEAE:;
    /* $BEAE: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xB6); FLAG_NZ(g_cpu.Y);
label_BEB0:;
    /* $BEB0: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x2B + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_BEB2:;
    /* $BEB2: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x90; FLAG_NZ(g_cpu.A);
label_BEB4:;
    /* $BEB4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xF6); FLAG_NZ(g_cpu.Y);
label_BEB6:;
    /* $BEB6: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0x5B + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BEB8:;
    /* $BEB8: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x40; FLAG_NZ(g_cpu.A);
label_BEBA:;
    /* $BEBA: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_BEBB:;
    /* $BEBB: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_BEBE:;
    /* $BEBE: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xA1; FLAG_NZ(g_cpu.A);
label_BEC0:;
    /* $BEC0: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x6DBB); nes_trace_indirect_jump(0xBEC0, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
label_BEEC:;
    /* $BEEC: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_BEED:;
    /* $BEED: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xD5); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BEEF:;
    /* $BEEF: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_BEF0:;
    /* $BEF0: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0x4444); FLAG_NZ(g_cpu.A);
label_BEF3:;
    /* $BEF3: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x44 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BEF5:;
    /* $BEF5: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x44); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BEF7:;
    /* $BEF7: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x33); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BEF9:;
    /* $BEF9: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_BEFA:;
    /* $BEFA: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BEFC:;
    /* $BEFC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBEFC); return;
}

void func_A95A_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A95A_b1");
#endif
label_A95A:;
    /* $A95A: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_A95D:;
    /* $A95D: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_A95E:;
    /* $A95E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A95F:;
    /* $A95F: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A960:;
    /* $A960: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A961:;
    /* $A961: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBA26 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A964:;
    /* $A964: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x22); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A966:;
    /* $A966: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A967:;
    /* $A967: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9F02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A96A:;
    /* $A96A: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xB1B1; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A96D:;
    /* $A96D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A96E:;
    /* $A96E: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3C3A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A971:;
    /* $A971: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x383A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A974:;
    /* $A974: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x089F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A977:;
    /* $A977: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address(0xA93D); return; }
label_A979:;
    /* $A979: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address(0xA9A5); return; }
label_A97B:;
    /* $A97B: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xB12A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A97E:;
    /* $A97E: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A97F:;
    /* $A97F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0E9F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A982:;
    /* $A982: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A984:;
    /* $A984: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A985:;
    /* $A985: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3C38 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A988:;
    /* $A988: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x383A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A98B:;
    /* $A98B: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x38 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A98D:;
    /* $A98D: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3838 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A990:;
    /* $A990: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x0202 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A993:;
    /* $A993: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A994:;
    /* $A994: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A995:;
    /* $A995: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3C38 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A998:;
    /* $A998: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3C3C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A99B:;
    /* $A99B: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x059F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A99E:;
    /* $A99E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A95A;
    }
label_A9A0:;
    /* $A9A0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9A1:;
    /* $A9A1: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9A3:;
    /* $A9A3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBA68 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9A6:;
    /* $A9A6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9A7:;
    /* $A9A7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9A8:;
    /* $A9A8: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_A9A9:;
    /* $A9A9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBA02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9AC:;
    /* $A9AC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9AD:;
    /* $A9AD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xBD02, -1); return;
label_A9B0:; return;
label_A9B3:; return;
label_A9B4:; return;
label_A9B5:; return;
label_A9B8:; return;
label_A9BA:; return;
label_A9BD:; return;
label_A9BE:; return;
label_A9BF:; return;
label_A9C0:; return;
label_A9C1:; return;
label_A9C4:; return;
label_A9C5:; return;
label_A9C8:; return;
label_A9CA:; return;
label_A9CB:; return;
label_A9CC:; return;
label_A9CD:; return;
label_A9D0:; return;
label_A9D3:; return;
label_A9D5:; return;
label_A9D6:; return;
label_A9D7:; return;
label_A9D8:; return;
label_A9DB:; return;
label_A9DE:; return;
label_A9E1:; return;
label_A9E2:; return;
label_A9E5:; return;
label_A9E6:; return;
label_A9E7:; return;
label_A9E8:; return;
label_A9EA:; return;
label_A9ED:; return;
label_A9EE:; return;
label_A9EF:; return;
label_A9F2:; return;
label_A9F4:; return;
label_A9F6:; return;
label_A9F7:; return;
label_A9F8:; return;
label_A9F9:; return;
label_A9FC:; return;
label_A9FF:; return;
label_AA01:; return;
label_AA02:; return;
label_AA05:; return;
label_AA06:; return;
label_AA08:; return;
label_AA0B:; return;
label_AA0E:; return;
label_AA11:; return;
label_AA14:; return;
label_AA17:; return;
label_AA1A:; return;
label_AA1C:; return;
label_AA1D:; return;
label_AA1E:; return;
label_AA1F:; return;
label_AA20:; return;
label_AA23:; return;
label_AA26:; return;
label_AA29:; return;
label_AA2A:; return;
label_AA2B:; return;
label_AA2C:; return;
label_AA2D:; return;
label_AA2E:; return;
label_AA2F:; return;
label_AA30:; return;
label_AA33:; return;
label_AA36:; return;
label_AA38:; return;
label_AA3A:; return;
label_AA3C:; return;
label_AA3F:; return;
label_AA41:; return;
label_AA44:; return;
label_AA45:; return;
label_AA48:; return;
label_AA49:; return;
label_AA4C:; return;
label_AA4D:; return;
label_AA50:; return;
label_AA51:; return;
label_AA52:; return;
label_AA55:; return;
label_AA57:; return;
label_AA58:; return;
label_AA59:; return;
label_AA5A:; return;
label_AA5D:; return;
label_AA5F:; return;
label_AA60:; return;
label_AA61:; return;
label_AA62:; return;
label_AA65:; return;
label_AA66:; return;
label_AA67:; return;
label_AA68:; return;
label_AA69:; return;
label_AA6A:; return;
label_AA6D:; return;
label_AA6F:; return;
label_AA70:; return;
label_AA71:; return;
label_AA73:; return;
label_AA76:; return;
label_AA77:; return;
label_AA79:; return;
label_AA7C:; return;
label_AA7F:; return;
label_AA82:; return;
label_AA84:; return;
label_AA85:; return;
label_AA88:; return;
label_AA89:; return;
label_AA8C:; return;
label_AA8E:; return;
label_AA8F:; return;
label_AA90:; return;
label_AA91:; return;
label_AA9D:; return;
label_AA9E:; return;
label_AA9F:; return;
label_AAA0:; return;
label_AAA1:; return;
label_AAA7:; return;
label_AAA8:; return;
label_AAAA:; return;
label_AAAC:; return;
label_AAAE:; return;
label_AAB0:; return;
label_AAB2:; return;
label_AAB3:; return;
label_AAB5:; return;
label_AAB7:; return;
label_AAB9:; return;
label_AABB:; return;
label_AABD:; return;
label_AABF:; return;
label_AAC0:; return;
label_AAC3:; return;
label_AAC4:; return;
label_AAC6:; return;
label_AAC8:; return;
label_AACA:; return;
label_AACC:; return;
label_AACE:; return;
label_AACF:; return;
label_AAD0:; return;
label_AAD2:; return;
label_AAD4:; return;
label_AAD7:; return;
label_AAD9:; return;
label_AADB:; return;
label_AADD:; return;
label_AADE:; return;
label_AAE1:; return;
label_AAE4:; return;
label_AAE5:; return;
label_AAE8:; return;
label_AAE9:; return;
label_AAEA:; return;
label_AAEB:; return;
label_AAEE:; return;
label_AAF1:; return;
label_AAF4:; return;
label_AAF5:; return;
label_AAF6:; return;
label_AAF7:; return;
label_AAF9:; return;
label_AAFA:; return;
label_AAFB:; return;
label_AAFD:; return;
label_AB00:; return;
label_AB01:; return;
label_AB02:; return;
label_AB03:; return;
label_AB06:; return;
label_AB09:; return;
label_AB0A:; return;
label_AB0B:; return;
label_AB0C:; return;
label_AB0D:; return;
label_AB10:; return;
label_AB13:; return;
label_AB14:; return;
label_AB17:; return;
label_AB19:; return;
label_AB1B:; return;
label_AB1C:; return;
label_AB1F:; return;
label_AB20:; return;
label_AB22:; return;
label_AB25:; return;
label_AB26:; return;
label_AB29:; return;
label_AB2B:; return;
label_AB2D:; return;
label_AB2E:; return;
label_AB31:; return;
label_AB32:; return;
label_AB33:; return;
label_AB36:; return;
label_AB38:; return;
label_AB3B:; return;
label_AB3C:; return;
label_AB3D:; return;
label_AB3E:; return;
label_AB40:; return;
label_AB42:; return;
label_AB44:; return;
label_AB46:; return;
label_AB48:; return;
label_AB4B:; return;
label_AB4E:; return;
label_AB51:; return;
label_AB53:; return;
label_AB55:; return;
label_AB57:; return;
label_AB5B:; return;
label_AB5D:; return;
label_AB62:; return;
label_AB63:; return;
label_AB65:; return;
label_AB67:; return;
label_AB6A:; return;
label_AB6B:; return;
label_AB6D:; return;
label_AB6F:; return;
label_AB70:; return;
label_AB71:; return;
label_AB72:; return;
label_AB75:; return;
label_AB77:; return;
label_AB79:; return;
label_ABBB:; return;
label_ABBE:; return;
label_ABC1:; return;
label_ABC4:; return;
label_ABC6:; return;
label_ABC7:; return;
label_ABCA:; return;
label_ABCD:; return;
label_ABCF:; return;
label_ABD2:; return;
label_ABD3:; return;
label_ABD5:; return;
label_ABD6:; return;
label_ABD9:; return;
label_ABDA:; return;
label_ABDB:; return;
label_ABDC:; return;
label_ABDF:; return;
label_ABE1:; return;
label_ABE4:; return;
label_ABE6:; return;
label_ABE9:; return;
label_ABEC:; return;
label_ABED:; return;
label_ABEF:; return;
label_ABF1:; return;
label_ABF3:; return;
label_ABF6:; return;
label_ABF8:; return;
label_ABFB:; return;
label_ABFE:; return;
label_ABFF:; return;
label_AC00:; return;
label_AC03:; return;
label_AC05:; return;
label_AC08:; return;
label_AC0B:; return;
label_AC0C:; return;
label_AC0D:; return;
label_AC0E:; return;
label_AC0F:; return;
label_AC11:; return;
label_AC12:; return;
label_AC15:; return;
label_AC16:; return;
label_AC19:; return;
label_AC1B:; return;
label_AC1C:; return;
label_AC1F:; return;
label_AC20:; return;
label_AC22:; return;
label_AC23:; return;
label_AC25:; return;
label_AC28:; return;
label_AC2A:; return;
label_AC2C:; return;
label_AC2F:; return;
label_AC31:; return;
label_AC34:; return;
label_AC36:; return;
label_AC37:; return;
label_AC3A:; return;
label_AC3C:; return;
label_AC3E:; return;
label_AC41:; return;
label_AC43:; return;
label_AC46:; return;
label_AC49:; return;
label_AC4B:; return;
label_AC4D:; return;
label_AC50:; return;
label_AC52:; return;
label_AC54:; return;
label_AC55:; return;
label_AC58:; return;
label_AC5A:; return;
label_AC5C:; return;
label_AC5F:; return;
label_AC61:; return;
label_AC64:; return;
label_AC65:; return;
label_AC66:; return;
label_AC69:; return;
label_AC6B:; return;
label_AC6E:; return;
label_AC71:; return;
label_AC73:; return;
label_AC75:; return;
label_AC77:; return;
label_AC79:; return;
label_AC7B:; return;
label_AC7C:; return;
label_AC7D:; return;
label_AC80:; return;
label_AC82:; return;
label_AC84:; return;
label_AC85:; return;
label_AC87:; return;
label_AC89:; return;
label_AC8A:; return;
label_AC8C:; return;
label_AC8E:; return;
label_AC8F:; return;
label_AC90:; return;
label_AC93:; return;
label_AC95:; return;
label_AC97:; return;
label_AC98:; return;
label_AC9A:; return;
label_AC9D:; return;
label_AC9F:; return;
label_ACA0:; return;
label_ACA3:; return;
label_ACA6:; return;
label_ACA7:; return;
label_ACA8:; return;
label_ACAA:; return;
label_ACAC:; return;
label_ACAE:; return;
label_ACB1:; return;
label_ACB4:; return;
label_ACB5:; return;
label_ACB6:; return;
label_ACB7:; return;
label_ACB9:; return;
label_ACBA:; return;
label_ACBD:; return;
label_ACBF:; return;
label_ACC1:; return;
label_ACC2:; return;
label_ACC4:; return;
label_ACC7:; return;
label_ACC8:; return;
label_ACC9:; return;
label_ACCA:; return;
label_ACCC:; return;
label_ACCF:; return;
label_ACD2:; return;
label_ACD4:; return;
label_ACD7:; return;
label_ACD8:; return;
label_ACD9:; return;
label_ACDA:; return;
label_ACDC:; return;
label_ACDF:; return;
label_ACE1:; return;
label_ACE4:; return;
label_ACE7:; return;
label_ACE9:; return;
label_ACEC:; return;
label_ACEF:; return;
label_ACF0:; return;
label_ACF1:; return;
label_ACF2:; return;
label_ACF4:; return;
label_ACF7:; return;
label_ACF8:; return;
label_ACF9:; return;
label_ACFA:; return;
label_ACFC:; return;
label_ACFF:; return;
label_AD00:; return;
label_AD02:; return;
label_AD04:; return;
label_AD06:; return;
label_AD08:; return;
label_AD0A:; return;
label_AD0B:; return;
label_AD0E:; return;
label_AD10:; return;
label_AD12:; return;
label_AD13:; return;
label_AD16:; return;
label_AD18:; return;
label_AD1A:; return;
label_AD1B:; return;
label_AD1E:; return;
label_AD20:; return;
label_AD23:; return;
label_AD26:; return;
label_AD27:; return;
label_AD29:; return;
label_AD2A:; return;
label_AD2D:; return;
label_AD2F:; return;
label_AD31:; return;
label_AD32:; return;
label_AD35:; return;
label_AD37:; return;
label_AD3A:; return;
label_AD3D:; return;
label_AD3E:; return;
label_AD40:; return;
label_AD41:; return;
label_AD44:; return;
label_AD46:; return;
label_AD49:; return;
label_AD4B:; return;
label_AD4D:; return;
label_AD4E:; return;
label_AD51:; return;
label_AD53:; return;
label_AD54:; return;
label_AD56:; return;
label_AD59:; return;
label_AD5B:; return;
label_AD5C:; return;
label_AD5E:; return;
label_AD60:; return;
label_AD62:; return;
label_AD63:; return;
label_AD65:; return;
label_AD68:; return;
label_AD6A:; return;
label_AD6D:; return;
label_AD6F:; return;
label_AD71:; return;
label_AD74:; return;
label_AD77:; return;
label_AD79:; return;
label_AD7C:; return;
label_AD7E:; return;
label_AD81:; return;
label_AD82:; return;
label_AD84:; return;
label_AD86:; return;
label_AD87:; return;
label_AD88:; return;
label_AD89:; return;
label_AD8C:; return;
label_AD8E:; return;
label_AD8F:; return;
label_AD92:; return;
label_AD94:; return;
label_AD95:; return;
label_AD96:; return;
label_AD97:; return;
label_AD98:; return;
label_AD9B:; return;
label_AD9D:; return;
label_AD9E:; return;
label_ADA1:; return;
label_ADA3:; return;
label_ADA4:; return;
label_ADA5:; return;
label_ADA7:; return;
label_ADA9:; return;
label_ADAB:; return;
label_ADAE:; return;
label_ADB0:; return;
label_ADB1:; return;
label_ADB3:; return;
label_ADB6:; return;
label_ADB8:; return;
label_ADBA:; return;
label_ADBB:; return;
label_ADBE:; return;
label_ADBF:; return;
label_ADC1:; return;
label_ADC2:; return;
label_ADC4:; return;
label_ADC5:; return;
label_ADC6:; return;
label_ADC8:; return;
label_ADCB:; return;
label_ADCC:; return;
label_ADCE:; return;
label_ADD1:; return;
label_ADD3:; return;
label_ADD4:; return;
label_ADD6:; return;
label_ADD9:; return;
label_ADDB:; return;
label_ADDC:; return;
label_ADDD:; return;
label_ADE0:; return;
label_ADE2:; return;
label_AE34:; return;
label_AE36:; return;
label_AE39:; return;
label_AE3C:; return;
label_AE3D:; return;
label_AE40:; return;
label_AE42:; return;
label_AE45:; return;
label_AE46:; return;
label_AE49:; return;
label_AE4B:; return;
label_AE4E:; return;
label_AE4F:; return;
label_AE51:; return;
label_AE52:; return;
label_AE54:; return;
label_AE57:; return;
label_AE58:; return;
label_AE5A:; return;
label_AE5B:; return;
label_AE5C:; return;
label_AE5D:; return;
label_AE5F:; return;
label_AE61:; return;
label_AE63:; return;
label_AE64:; return;
label_AEAD:; return;
label_AEAE:; return;
label_AEAF:; return;
label_AEB0:; return;
label_AEB3:; return;
label_AEB4:; return;
label_AEB5:; return;
label_AEB8:; return;
label_AEBB:; return;
label_AEBC:; return;
label_AEBD:; return;
label_AEC0:; return;
label_AEC3:; return;
label_AEC4:; return;
label_AEC5:; return;
label_AEC7:; return;
label_AEC8:; return;
label_AECB:; return;
label_AECD:; return;
label_AECF:; return;
label_AED1:; return;
label_AED3:; return;
label_AED4:; return;
label_AED7:; return;
label_AED8:; return;
label_AED9:; return;
label_AEDA:; return;
label_AEDB:; return;
label_AEDE:; return;
label_AEE1:; return;
label_AEE2:; return;
label_AEE3:; return;
label_AEE5:; return;
label_AEE6:; return;
label_AEE8:; return;
label_AEE9:; return;
label_AEEA:; return;
label_AEEB:; return;
label_AEED:; return;
label_AEF0:; return;
label_AEF3:; return;
label_AEF4:; return;
label_AEF5:; return;
label_AEF6:; return;
label_AEF9:; return;
label_AEFC:; return;
label_AEFF:; return;
label_AF02:; return;
label_AF03:; return;
label_AF06:; return;
label_AF09:; return;
label_AF0B:; return;
label_AF0E:; return;
label_AF11:; return;
label_AF12:; return;
label_AF13:; return;
label_AF16:; return;
label_AF19:; return;
label_AF1A:; return;
label_AF1B:; return;
label_AF1C:; return;
label_AF1D:; return;
label_AF20:; return;
label_AF23:; return;
label_AF24:; return;
label_AF27:; return;
label_AF29:; return;
label_AF2A:; return;
label_AF2C:; return;
label_AF2D:; return;
label_AF2E:; return;
label_AF31:; return;
label_AF34:; return;
label_AF37:; return;
label_AF38:; return;
label_AF39:; return;
label_AF3A:; return;
label_AF3B:; return;
label_AF3C:; return;
label_AF3F:; return;
label_AF40:; return;
label_AF41:; return;
label_AF42:; return;
label_AF43:; return;
label_AF46:; return;
label_AF49:; return;
label_AF4A:; return;
label_AF4B:; return;
label_AF4E:; return;
label_AF51:; return;
label_AF52:; return;
label_AF53:; return;
label_AF55:; return;
label_AF56:; return;
label_AF59:; return;
label_AF5B:; return;
label_AF5D:; return;
label_AF5F:; return;
label_AF61:; return;
label_AF62:; return;
label_AF65:; return;
label_AF66:; return;
label_AF67:; return;
label_AF68:; return;
label_AF69:; return;
label_AF6C:; return;
label_AF6F:; return;
label_AF70:; return;
label_AF71:; return;
label_AF73:; return;
label_AF74:; return;
label_AF77:; return;
label_AF78:; return;
label_AF7B:; return;
label_AF7D:; return;
label_AF7E:; return;
label_AF80:; return;
label_AF82:; return;
label_AF85:; return;
label_AF86:; return;
label_AF87:; return;
label_AF89:; return;
label_AF8B:; return;
label_AF8E:; return;
label_AF91:; return;
label_AF92:; return;
label_AF95:; return;
label_AF96:; return;
label_AF98:; return;
label_AF9A:; return;
label_AF9B:; return;
label_AF9E:; return;
label_AFA0:; return;
label_AFA1:; return;
label_AFA4:; return;
label_AFA6:; return;
label_AFA7:; return;
label_AFA9:; return;
label_AFAB:; return;
label_AFAC:; return;
label_AFAF:; return;
label_AFB1:; return;
label_AFB3:; return;
label_AFB4:; return;
label_AFB5:; return;
label_AFB8:; return;
label_AFBA:; return;
label_AFBC:; return;
label_AFBD:; return;
label_AFC0:; return;
label_AFC1:; return;
label_AFC3:; return;
label_AFC5:; return;
label_AFC8:; return;
label_AFC9:; return;
label_AFCB:; return;
label_AFCD:; return;
label_AFCE:; return;
label_AFCF:; return;
label_AFD2:; return;
label_AFD4:; return;
label_AFD5:; return;
label_AFD8:; return;
label_AFD9:; return;
label_AFDC:; return;
label_AFDE:; return;
label_AFE1:; return;
label_AFE2:; return;
label_AFE4:; return;
label_AFE6:; return;
label_AFE7:; return;
label_AFE8:; return;
label_AFEA:; return;
label_AFEC:; return;
label_AFEE:; return;
label_AFF1:; return;
label_AFF2:; return;
label_AFF4:; return;
label_AFF6:; return;
label_AFF8:; return;
label_AFFA:; return;
label_AFFC:; return;
label_AFFE:; return;
label_B001:; return;
label_B002:; return;
label_B004:; return;
label_B006:; return;
label_B007:; return;
label_B008:; return;
label_B00A:; return;
label_B00C:; return;
label_B00E:; return;
label_B011:; return;
label_B012:; return;
label_B013:; return;
label_B014:; return;
label_B015:; return;
label_B016:; return;
label_B017:; return;
label_B018:; return;
label_B019:; return;
label_B01A:; return;
label_B01B:; return;
label_B01D:; return;
label_B01F:; return;
label_B022:; return;
label_B024:; return;
label_B026:; return;
label_B028:; return;
label_B02B:; return;
label_B02C:; return;
label_B02E:; return;
label_B030:; return;
label_B032:; return;
label_B034:; return;
label_B036:; return;
label_B038:; return;
label_B03A:; return;
label_B03C:; return;
label_B03E:; return;
label_B041:; return;
label_B043:; return;
label_B045:; return;
label_B047:; return;
label_B048:; return;
label_B04A:; return;
label_B04B:; return;
label_B04D:; return;
label_B04F:; return;
label_B052:; return;
label_B053:; return;
label_B055:; return;
label_B056:; return;
label_B058:; return;
label_B05A:; return;
label_B05C:; return;
label_B05F:; return;
label_B062:; return;
label_B064:; return;
label_B066:; return;
label_B068:; return;
label_B06B:; return;
label_B06D:; return;
label_B06F:; return;
label_B071:; return;
label_B074:; return;
label_B077:; return;
label_B079:; return;
label_B07C:; return;
label_B07E:; return;
label_B080:; return;
label_B083:; return;
label_B086:; return;
label_B088:; return;
label_B089:; return;
label_B08A:; return;
label_B08B:; return;
label_B08C:; return;
label_B08D:; return;
label_B090:; return;
label_B092:; return;
label_B093:; return;
label_B094:; return;
label_B095:; return;
label_B096:; return;
label_B097:; return;
label_B09A:; return;
label_B09C:; return;
label_B09F:; return;
label_B0A0:; return;
label_B0A1:; return;
label_B0A3:; return;
label_B0A5:; return;
label_B0A7:; return;
label_B0A8:; return;
label_B0AB:; return;
label_B0AC:; return;
label_B0AE:; return;
label_B0AF:; return;
label_B0B2:; return;
label_B0B3:; return;
label_B0B4:; return;
label_B0B7:; return;
label_B0B9:; return;
label_B0BA:; return;
label_B0BB:; return;
label_B0BE:; return;
label_B0C0:; return;
label_B0C1:; return;
label_B0C4:; return;
label_B0C6:; return;
label_B0C7:; return;
label_B0CA:; return;
label_B0CD:; return;
label_B0D4:; return;
label_B0D7:; return;
label_B0D8:; return;
label_B0D9:; return;
label_B0DB:; return;
label_B0DE:; return;
label_B0DF:; return;
label_B0E0:; return;
label_B0E3:; return;
label_B0E4:; return;
label_B0E7:; return;
label_B0E9:; return;
label_B0EC:; return;
label_B0ED:; return;
label_B0F0:; return;
label_B0F3:; return;
label_B0F4:; return;
label_B0F5:; return;
label_B0F8:; return;
label_B0F9:; return;
label_B0FA:; return;
label_B0FD:; return;
label_B0FE:; return;
label_B0FF:; return;
label_B100:; return;
label_B103:; return;
label_B106:; return;
label_B108:; return;
label_B10B:; return;
label_B10D:; return;
label_B10E:; return;
label_B10F:; return;
label_B112:; return;
label_B114:; return;
label_B115:; return;
label_B118:; return;
label_B11A:; return;
label_B11C:; return;
label_B11D:; return;
label_B11F:; return;
label_B121:; return;
label_B123:; return;
label_B124:; return;
label_B127:; return;
label_B128:; return;
label_B129:; return;
label_B12A:; return;
label_B12B:; return;
label_B12E:; return;
label_B131:; return;
label_B132:; return;
label_B135:; return;
label_B136:; return;
label_B137:; return;
label_B13A:; return;
label_B13B:; return;
label_B13C:; return;
label_B13F:; return;
label_B140:; return;
label_B141:; return;
label_B144:; return;
label_B145:; return;
label_B146:; return;
label_B149:; return;
label_B14B:; return;
label_B14E:; return;
label_B14F:; return;
label_B150:; return;
label_B151:; return;
label_B152:; return;
label_B155:; return;
label_B158:; return;
label_B159:; return;
label_B15A:; return;
label_B15D:; return;
label_B15E:; return;
label_B15F:; return;
label_B162:; return;
label_B163:; return;
label_B164:; return;
label_B167:; return;
label_B168:; return;
label_B169:; return;
label_B16C:; return;
label_B16D:; return;
label_B16F:; return;
label_B170:; return;
label_B173:; return;
label_B176:; return;
label_B177:; return;
label_B178:; return;
label_B179:; return;
label_B17A:; return;
label_B17B:; return;
label_B17E:; return;
label_B180:; return;
label_B183:; return;
label_B185:; return;
label_B188:; return;
label_B18A:; return;
label_B18D:; return;
label_B18F:; return;
label_B192:; return;
label_B194:; return;
label_B197:; return;
label_B199:; return;
label_B19C:; return;
label_B19E:; return;
label_B1A1:; return;
label_B1A3:; return;
label_B1A6:; return;
label_B1A8:; return;
label_B1AB:; return;
label_B1AD:; return;
label_B1B0:; return;
label_B1B2:; return;
label_B1B5:; return;
label_B1B7:; return;
label_B1BA:; return;
label_B1BC:; return;
label_B1BF:; return;
label_B1C1:; return;
label_B1C4:; return;
label_B1C6:; return;
label_B1C9:; return;
label_B1CB:; return;
label_B1CC:; return;
label_B1CF:; return;
label_B1D1:; return;
label_B1D2:; return;
label_B1D5:; return;
label_B1D6:; return;
label_B1D9:; return;
label_B1DA:; return;
label_B1DC:; return;
label_B1DD:; return;
label_B1E0:; return;
label_B1E3:; return;
label_B1E4:; return;
label_B1E6:; return;
label_B1E7:; return;
label_B1E8:; return;
label_B1EB:; return;
label_B1EC:; return;
label_B1EF:; return;
label_B1F0:; return;
label_B1F2:; return;
label_B1F3:; return;
label_B1F5:; return;
label_B1F8:; return;
label_B1FA:; return;
label_B1FD:; return;
label_B1FF:; return;
label_B202:; return;
label_B204:; return;
label_B207:; return;
label_B209:; return;
label_B20C:; return;
label_B20E:; return;
label_B211:; return;
label_B213:; return;
label_B216:; return;
label_B218:; return;
label_B21B:; return;
label_B21D:; return;
label_B220:; return;
label_B222:; return;
label_B225:; return;
label_B227:; return;
label_B22A:; return;
label_B22C:; return;
label_B22F:; return;
label_B231:; return;
label_B234:; return;
label_B236:; return;
label_B239:; return;
label_B23B:; return;
label_B23E:; return;
label_B240:; return;
label_B243:; return;
label_B245:; return;
label_B246:; return;
label_B249:; return;
label_B24A:; return;
label_B24D:; return;
label_B24E:; return;
label_B250:; return;
label_B251:; return;
label_B252:; return;
label_B254:; return;
label_B255:; return;
label_B256:; return;
label_B257:; return;
label_B259:; return;
label_B25B:; return;
label_B25E:; return;
label_B260:; return;
label_B262:; return;
label_B265:; return;
label_B266:; return;
label_B269:; return;
label_B26B:; return;
label_B26E:; return;
label_B271:; return;
label_B274:; return;
label_B277:; return;
label_B278:; return;
label_B279:; return;
label_B27A:; return;
label_B27B:; return;
label_B27C:; return;
label_B27E:; return;
label_B280:; return;
label_B282:; return;
label_B284:; return;
label_B286:; return;
label_B288:; return;
label_B289:; return;
label_B28A:; return;
label_B28B:; return;
label_B28C:; return;
label_B28E:; return;
label_B28F:; return;
label_B291:; return;
label_B293:; return;
label_B295:; return;
label_B297:; return;
label_B299:; return;
label_B29B:; return;
label_B29C:; return;
label_B29D:; return;
label_B29E:; return;
label_B29F:; return;
label_B2A0:; return;
label_B2A1:; return;
label_B2A2:; return;
label_B2A4:; return;
label_B2A6:; return;
label_B2A8:; return;
label_B2AA:; return;
label_B2AC:; return;
label_B2AE:; return;
label_B2AF:; return;
label_B2B0:; return;
label_B2B1:; return;
label_B2B2:; return;
label_B2B4:; return;
label_B2B5:; return;
label_B2B7:; return;
label_B2B8:; return;
label_B2B9:; return;
label_B2BA:; return;
label_B2BC:; return;
label_B2BE:; return;
label_B2BF:; return;
label_B2C0:; return;
label_B2C1:; return;
label_B2C3:; return;
label_B2C5:; return;
label_B2C7:; return;
label_B2C9:; return;
label_B2CB:; return;
label_B2CD:; return;
label_B2CF:; return;
label_B2D1:; return;
label_B2D2:; return;
label_B2D3:; return;
label_B2D5:; return;
label_B2D7:; return;
label_B2D8:; return;
label_B2D9:; return;
label_B2DA:; return;
label_B2DC:; return;
label_B2DE:; return;
label_B2E0:; return;
label_B2E2:; return;
label_B2E4:; return;
label_B2E6:; return;
label_B2E8:; return;
label_B2EA:; return;
label_B2EB:; return;
label_B2EC:; return;
label_B2EE:; return;
label_B2F0:; return;
label_B2F1:; return;
label_B2F2:; return;
label_B2F3:; return;
label_B2F4:; return;
label_B2F6:; return;
label_B2F8:; return;
label_B2FA:; return;
label_B2FC:; return;
label_B2FE:; return;
label_B300:; return;
label_B302:; return;
label_B304:; return;
label_B306:; return;
label_B307:; return;
label_B309:; return;
label_B30A:; return;
label_B30C:; return;
label_B30E:; return;
label_B310:; return;
label_B312:; return;
label_B314:; return;
label_B316:; return;
label_B318:; return;
label_B31A:; return;
label_B31C:; return;
label_B31D:; return;
label_B31E:; return;
label_B320:; return;
label_B322:; return;
label_B323:; return;
label_B324:; return;
label_B325:; return;
label_B32F:; return;
label_B330:; return;
label_B332:; return;
label_B334:; return;
label_B335:; return;
label_B336:; return;
label_B337:; return;
label_B338:; return;
label_B33A:; return;
label_B33B:; return;
label_B33D:; return;
label_B33F:; return;
label_B341:; return;
label_B342:; return;
label_B343:; return;
label_B344:; return;
label_B34A:; return;
label_B34C:; return;
label_B34D:; return;
label_B34E:; return;
label_B34F:; return;
label_B350:; return;
label_B351:; return;
label_B352:; return;
label_B353:; return;
label_B356:; return;
label_B357:; return;
label_B358:; return;
label_B359:; return;
label_B35C:; return;
label_B35D:; return;
label_B35E:; return;
label_B35F:; return;
label_B360:; return;
label_B362:; return;
label_B364:; return;
label_B365:; return;
label_B366:; return;
label_B367:; return;
label_B369:; return;
label_B36B:; return;
label_B36D:; return;
label_B36F:; return;
label_B371:; return;
label_B373:; return;
label_B375:; return;
label_B377:; return;
label_B378:; return;
label_B379:; return;
label_B37B:; return;
label_B37D:; return;
label_B37F:; return;
label_B381:; return;
label_B383:; return;
label_B385:; return;
label_B387:; return;
label_B389:; return;
label_B38B:; return;
label_B38D:; return;
label_B38F:; return;
label_B390:; return;
label_B391:; return;
label_B392:; return;
label_B393:; return;
label_B394:; return;
label_B396:; return;
label_B398:; return;
label_B39A:; return;
label_B39C:; return;
label_B39E:; return;
label_B3A0:; return;
label_B3A2:; return;
label_B3A4:; return;
label_B3A6:; return;
label_B3A7:; return;
label_B3A8:; return;
label_B3AA:; return;
label_B3AB:; return;
label_B3AE:; return;
label_B3B0:; return;
label_B3B1:; return;
label_B3B4:; return;
label_B3B6:; return;
label_B3B8:; return;
label_B3BA:; return;
label_B3BC:; return;
label_B3BE:; return;
label_B3C0:; return;
label_B3C2:; return;
label_B3C3:; return;
label_B3C5:; return;
label_B3C6:; return;
label_B3C7:; return;
label_B3CA:; return;
label_B3CC:; return;
label_B3CE:; return;
label_B3D1:; return;
label_B3D2:; return;
label_B3D5:; return;
label_B3D8:; return;
label_B3D9:; return;
label_B3DA:; return;
label_B3DD:; return;
label_B3DF:; return;
label_B3E0:; return;
label_B3E1:; return;
label_B3E4:; return;
label_B3E6:; return;
label_B3E8:; return;
label_B3EB:; return;
label_B3EC:; return;
label_B3ED:; return;
label_B3EE:; return;
label_B3EF:; return;
label_B3F2:; return;
label_B3F4:; return;
label_B3F6:; return;
label_B3F9:; return;
label_B3FA:; return;
label_B3FB:; return;
label_B3FC:; return;
label_B3FD:; return;
label_B3FE:; return;
label_B400:; return;
label_B401:; return;
label_B402:; return;
label_B403:; return;
label_B405:; return;
label_B407:; return;
label_B408:; return;
label_B40B:; return;
label_B40D:; return;
label_B40E:; return;
label_B410:; return;
label_B412:; return;
label_B413:; return;
label_B414:; return;
label_B415:; return;
label_B416:; return;
label_B418:; return;
label_B41A:; return;
label_B41C:; return;
label_B41E:; return;
label_B420:; return;
label_B422:; return;
label_B424:; return;
label_B426:; return;
label_B428:; return;
label_B42A:; return;
label_B42C:; return;
label_B42E:; return;
label_B430:; return;
label_B431:; return;
label_B432:; return;
label_B433:; return;
label_B435:; return;
label_B437:; return;
label_B439:; return;
label_B43B:; return;
label_B43D:; return;
label_B43F:; return;
label_B441:; return;
label_B443:; return;
label_B445:; return;
label_B447:; return;
label_B449:; return;
label_B44B:; return;
label_B44D:; return;
label_B44F:; return;
label_B450:; return;
label_B453:; return;
label_B455:; return;
label_B457:; return;
label_B459:; return;
label_B45B:; return;
label_B45D:; return;
label_B45F:; return;
label_B461:; return;
label_B463:; return;
label_B465:; return;
label_B467:; return;
label_B469:; return;
label_B46B:; return;
label_B46D:; return;
label_B46E:; return;
label_B46F:; return;
label_B471:; return;
label_B474:; return;
label_B476:; return;
label_B477:; return;
label_B478:; return;
label_B47B:; return;
label_B47D:; return;
label_B47E:; return;
label_B47F:; return;
label_B482:; return;
label_B484:; return;
label_B486:; return;
label_B489:; return;
label_B48A:; return;
label_B48D:; return;
label_B490:; return;
label_B493:; return;
label_B495:; return;
label_B498:; return;
label_B499:; return;
label_B49C:; return;
label_B49E:; return;
label_B4A0:; return;
label_B4A2:; return;
label_B4A4:; return;
label_B4A6:; return;
label_B4A7:; return;
label_B4A9:; return;
label_B4AB:; return;
label_B4AC:; return;
label_B4AE:; return;
label_B4AF:; return;
label_B4B1:; return;
label_B4B4:; return;
label_B4B7:; return;
label_B4B9:; return;
label_B4BB:; return;
label_B4BD:; return;
label_B4C0:; return;
label_B4C3:; return;
label_B4C6:; return;
label_B4C9:; return;
label_B4CB:; return;
label_B4CC:; return;
label_B4CE:; return;
label_B4D0:; return;
label_B4D2:; return;
label_B4D4:; return;
label_B4D6:; return;
label_B4D8:; return;
label_B4DA:; return;
label_B4DC:; return;
label_B4DE:; return;
label_B4E0:; return;
label_B4E2:; return;
label_B4E4:; return;
label_B4E6:; return;
label_B4E8:; return;
label_B4EA:; return;
label_B4EB:; return;
label_B4ED:; return;
label_B4EF:; return;
label_B4F1:; return;
label_B4F3:; return;
label_B4F5:; return;
label_B4F7:; return;
label_B4F9:; return;
label_B4FB:; return;
label_B4FD:; return;
label_B4FF:; return;
label_B501:; return;
label_B503:; return;
label_B505:; return;
label_B508:; return;
label_B50A:; return;
label_B50C:; return;
label_B50E:; return;
label_B510:; return;
label_B512:; return;
label_B514:; return;
label_B516:; return;
label_B518:; return;
label_B519:; return;
label_B51A:; return;
label_B51B:; return;
label_B51C:; return;
label_B51F:; return;
label_B521:; return;
label_B523:; return;
label_B525:; return;
label_B526:; return;
label_B528:; return;
label_B52B:; return;
label_B52E:; return;
label_B52F:; return;
label_B531:; return;
label_B534:; return;
label_B537:; return;
label_B539:; return;
label_B53B:; return;
label_B53C:; return;
label_B53E:; return;
label_B53F:; return;
label_B541:; return;
label_B544:; return;
label_B545:; return;
label_B547:; return;
label_B548:; return;
label_B54A:; return;
label_B54B:; return;
label_B54D:; return;
label_B550:; return;
label_B553:; return;
label_B555:; return;
label_B557:; return;
label_B558:; return;
label_B55A:; return;
label_B55D:; return;
label_B560:; return;
label_B562:; return;
label_B565:; return;
label_B567:; return;
label_B56A:; return;
label_B56D:; return;
label_B56E:; return;
label_B571:; return;
label_B572:; return;
label_B574:; return;
label_B576:; return;
label_B579:; return;
label_B57B:; return;
label_B57D:; return;
label_B57F:; return;
label_B581:; return;
label_B582:; return;
label_B585:; return;
label_B587:; return;
label_B589:; return;
label_B58B:; return;
label_B58D:; return;
label_B58F:; return;
label_B591:; return;
label_B593:; return;
label_B595:; return;
label_B597:; return;
label_B59A:; return;
label_B59D:; return;
label_B59F:; return;
label_B5A1:; return;
label_B5A4:; return;
label_B5A7:; return;
label_B5AA:; return;
label_B5AC:; return;
label_B5AD:; return;
label_B5B0:; return;
label_B5B1:; return;
label_B5B4:; return;
label_B5B6:; return;
label_B5B7:; return;
label_B5B8:; return;
label_B5BB:; return;
label_B5BC:; return;
label_B5BF:; return;
label_B5C2:; return;
label_B5C5:; return;
label_B5C6:; return;
label_B5C8:; return;
label_B5C9:; return;
label_B5CC:; return;
label_B5CE:; return;
label_B5CF:; return;
label_B5D0:; return;
label_B5D1:; return;
label_B5D3:; return;
label_B5D4:; return;
label_B5D7:; return;
label_B5DA:; return;
label_B5DC:; return;
label_B5DD:; return;
label_B608:; return;
label_B609:; return;
label_B60C:; return;
label_B60D:; return;
label_B610:; return;
label_B613:; return;
label_B614:; return;
label_B615:; return;
label_B618:; return;
label_B619:; return;
label_B61C:; return;
label_B61D:; return;
label_B620:; return;
label_B621:; return;
label_B624:; return;
label_B626:; return;
label_B627:; return;
label_B62A:; return;
label_B62B:; return;
label_B62E:; return;
label_B630:; return;
label_B631:; return;
label_B632:; return;
label_B634:; return;
label_B635:; return;
label_B636:; return;
label_B638:; return;
label_B639:; return;
label_B63A:; return;
label_B63C:; return;
label_B63D:; return;
label_B63E:; return;
label_B640:; return;
label_B641:; return;
label_B642:; return;
label_B644:; return;
label_B645:; return;
label_B648:; return;
label_B649:; return;
label_B64A:; return;
label_B64B:; return;
label_B64C:; return;
label_B64F:; return;
label_B650:; return;
label_B651:; return;
label_B652:; return;
label_B653:; return;
label_B656:; return;
label_B658:; return;
label_B659:; return;
label_B65B:; return;
label_B65C:; return;
label_B65D:; return;
label_B660:; return;
label_B661:; return;
label_B664:; return;
label_B665:; return;
label_B668:; return;
label_B669:; return;
label_B66C:; return;
label_B66D:; return;
label_B670:; return;
label_B672:; return;
label_B673:; return;
label_B674:; return;
label_B677:; return;
label_B67A:; return;
label_B67B:; return;
label_B67C:; return;
label_B67E:; return;
label_B67F:; return;
label_B681:; return;
label_B682:; return;
label_B685:; return;
label_B687:; return;
label_B689:; return;
label_B68C:; return;
label_B68E:; return;
label_B691:; return;
label_B693:; return;
label_B696:; return;
label_B698:; return;
label_B69A:; return;
label_B69C:; return;
label_B69E:; return;
label_B6A1:; return;
label_B6A3:; return;
label_B6A6:; return;
label_B6A9:; return;
label_B6AC:; return;
label_B6AE:; return;
label_B6B1:; return;
label_B6B3:; return;
label_B6B6:; return;
label_B6B8:; return;
label_B6BB:; return;
label_B6BD:; return;
label_B6C0:; return;
label_B6C2:; return;
label_B6C5:; return;
label_B6C7:; return;
label_B6CA:; return;
label_B6CC:; return;
label_B6CD:; return;
label_B6D0:; return;
label_B6D2:; return;
label_B6D5:; return;
label_B6D7:; return;
label_B6DA:; return;
label_B6DC:; return;
label_B6DF:; return;
label_B6E1:; return;
label_B6E4:; return;
label_B6E6:; return;
label_B6E9:; return;
label_B6EB:; return;
label_B6EE:; return;
label_B6F0:; return;
label_B6F3:; return;
label_B6F5:; return;
label_B6F6:; return;
label_B6F9:; return;
label_B6FB:; return;
label_B6FE:; return;
label_B700:; return;
label_B703:; return;
label_B705:; return;
label_B708:; return;
label_B70A:; return;
label_B70C:; return;
label_B70E:; return;
label_B710:; return;
label_B713:; return;
label_B715:; return;
label_B718:; return;
label_B71A:; return;
label_B71C:; return;
label_B71D:; return;
label_B720:; return;
label_B722:; return;
label_B724:; return;
label_B726:; return;
label_B728:; return;
label_B72A:; return;
label_B72C:; return;
label_B72E:; return;
label_B731:; return;
label_B732:; return;
label_B735:; return;
label_B737:; return;
label_B739:; return;
label_B73C:; return;
label_B73F:; return;
label_B741:; return;
label_B743:; return;
label_B745:; return;
label_B747:; return;
label_B749:; return;
label_B74B:; return;
label_B74E:; return;
label_B74F:; return;
label_B750:; return;
label_B753:; return;
label_B755:; return;
label_B758:; return;
label_B759:; return;
label_B75C:; return;
label_B75E:; return;
label_B760:; return;
label_B763:; return;
label_B766:; return;
label_B769:; return;
label_B76B:; return;
label_B76D:; return;
label_B76F:; return;
label_B771:; return;
label_B773:; return;
label_B774:; return;
label_B777:; return;
label_B778:; return;
label_B779:; return;
label_B77B:; return;
label_B77D:; return;
label_B780:; return;
label_B783:; return;
label_B786:; return;
label_B788:; return;
label_B78B:; return;
label_B78C:; return;
label_B78E:; return;
label_B790:; return;
label_B792:; return;
label_B795:; return;
label_B797:; return;
label_B79A:; return;
label_B79C:; return;
label_B79D:; return;
label_B79E:; return;
label_B79F:; return;
label_B7A0:; return;
label_B7A2:; return;
label_B7A4:; return;
label_B7A5:; return;
label_B7A8:; return;
label_B7AB:; return;
label_B7AC:; return;
label_B7AF:; return;
label_B7B0:; return;
label_B7B3:; return;
label_B7B4:; return;
label_B7B6:; return;
label_B7B8:; return;
label_B7BA:; return;
label_B7BC:; return;
label_B7BE:; return;
label_B7BF:; return;
label_B7C0:; return;
label_B7C1:; return;
label_B7C4:; return;
label_B7C6:; return;
label_B7C9:; return;
label_B7CB:; return;
label_B7CC:; return;
label_B7CE:; return;
label_B7D0:; return;
label_B7D1:; return;
label_B7D2:; return;
label_B7D5:; return;
label_B7D7:; return;
label_B7D9:; return;
label_B7DA:; return;
label_B7DB:; return;
label_B7DC:; return;
label_B7DD:; return;
label_B7DF:; return;
label_B7E2:; return;
label_B7E5:; return;
label_B7E8:; return;
label_B7EB:; return;
label_B7EC:; return;
label_B7EF:; return;
label_B7F0:; return;
label_B7F3:; return;
label_B7F5:; return;
label_B7F8:; return;
label_B7FB:; return;
label_B7FE:; return;
label_B801:; return;
label_B802:; return;
label_B805:; return;
label_B806:; return;
label_B807:; return;
label_B808:; return;
label_B809:; return;
label_B80B:; return;
label_B80D:; return;
label_B80E:; return;
label_B811:; return;
label_B812:; return;
label_B814:; return;
label_B815:; return;
label_B817:; return;
label_B819:; return;
label_B81B:; return;
label_B81E:; return;
label_B820:; return;
label_B822:; return;
label_B825:; return;
label_B827:; return;
label_B829:; return;
label_B82C:; return;
label_B82F:; return;
label_B831:; return;
label_B833:; return;
label_B835:; return;
label_B837:; return;
label_B83A:; return;
label_B83C:; return;
label_B83E:; return;
label_B841:; return;
label_B843:; return;
label_B845:; return;
label_B848:; return;
label_B84A:; return;
label_B84C:; return;
label_B84E:; return;
label_B850:; return;
label_B852:; return;
label_B855:; return;
label_B857:; return;
label_B859:; return;
label_B85B:; return;
label_B85D:; return;
label_B85F:; return;
label_B862:; return;
label_B864:; return;
label_B867:; return;
label_B869:; return;
label_B86B:; return;
label_B86E:; return;
label_B870:; return;
label_B872:; return;
label_B874:; return;
label_B876:; return;
label_B877:; return;
label_B87A:; return;
label_B87C:; return;
label_B87F:; return;
label_B881:; return;
label_B883:; return;
label_B886:; return;
label_B888:; return;
label_B88A:; return;
label_B88C:; return;
label_B88E:; return;
label_B890:; return;
label_B893:; return;
label_B895:; return;
label_B897:; return;
label_B899:; return;
label_B89B:; return;
label_B89D:; return;
label_B8A0:; return;
label_B8A2:; return;
label_B8A5:; return;
label_B8A7:; return;
label_B8A9:; return;
label_B8AC:; return;
label_B8AE:; return;
label_B8B0:; return;
label_B8B2:; return;
label_B8B4:; return;
label_B8B5:; return;
label_B8B7:; return;
label_B8B8:; return;
label_B8B9:; return;
label_B8BA:; return;
label_B8BC:; return;
label_B8BE:; return;
label_B8C0:; return;
label_B8C3:; return;
label_B8C5:; return;
label_B8C6:; return;
label_B8C9:; return;
label_B8CB:; return;
label_B8CE:; return;
label_B8D0:; return;
label_B8D3:; return;
label_B8D5:; return;
label_B8DA:; return;
label_B8DD:; return;
label_B8E0:; return;
label_B8E2:; return;
label_B8E5:; return;
label_B8E7:; return;
label_B8F4:; return;
label_B8F6:; return;
label_B8F9:; return;
label_B8FB:; return;
label_B901:; return;
label_B903:; return;
label_B906:; return;
label_B908:; return;
label_B90B:; return;
label_B90D:; return;
label_B918:; return;
label_B91A:; return;
label_B91D:; return;
label_B91F:; return;
label_B921:; return;
label_B924:; return;
label_B925:; return;
label_B926:; return;
label_B927:; return;
label_B928:; return;
label_B929:; return;
label_B92B:; return;
label_B92E:; return;
label_B92F:; return;
label_B930:; return;
label_B931:; return;
label_B932:; return;
label_B933:; return;
label_B935:; return;
label_B936:; return;
label_B937:; return;
label_B938:; return;
label_B93B:; return;
label_B93D:; return;
label_B93E:; return;
label_B93F:; return;
label_B942:; return;
label_B943:; return;
label_B944:; return;
label_B947:; return;
label_B949:; return;
label_B94B:; return;
label_B94E:; return;
label_B94F:; return;
label_B950:; return;
label_B951:; return;
label_B952:; return;
label_B953:; return;
label_B955:; return;
label_B958:; return;
label_B959:; return;
label_B95A:; return;
label_B95B:; return;
label_B95C:; return;
label_B95D:; return;
label_B95F:; return;
label_B960:; return;
label_B961:; return;
label_B962:; return;
label_B965:; return;
label_B966:; return;
label_B967:; return;
label_B968:; return;
label_B96A:; return;
label_B96B:; return;
label_B96E:; return;
label_B970:; return;
label_B971:; return;
label_B972:; return;
label_B974:; return;
label_B976:; return;
label_B977:; return;
label_B978:; return;
label_B97B:; return;
label_B97C:; return;
label_B97E:; return;
label_B980:; return;
label_B981:; return;
label_B982:; return;
label_B985:; return;
label_B987:; return;
label_B988:; return;
label_B989:; return;
label_B98C:; return;
label_B98D:; return;
label_B98E:; return;
label_B98F:; return;
label_B990:; return;
label_B992:; return;
label_B993:; return;
label_B995:; return;
label_B997:; return;
label_B999:; return;
label_B99B:; return;
label_B99D:; return;
label_B99F:; return;
label_B9A1:; return;
label_B9A3:; return;
label_B9A5:; return;
label_B9A6:; return;
label_B9A8:; return;
label_B9AA:; return;
label_B9AC:; return;
label_B9AE:; return;
label_B9B1:; return;
label_B9B2:; return;
label_B9B3:; return;
label_B9B4:; return;
label_B9B6:; return;
label_B9B8:; return;
label_B9BA:; return;
label_B9BC:; return;
label_B9BD:; return;
label_B9BE:; return;
label_B9C0:; return;
label_B9C2:; return;
label_B9C4:; return;
label_B9C6:; return;
label_B9C8:; return;
label_B9CA:; return;
label_B9CD:; return;
label_B9D0:; return;
label_B9D2:; return;
label_B9D4:; return;
label_B9D7:; return;
label_B9D8:; return;
label_B9DA:; return;
label_B9DC:; return;
label_B9DE:; return;
label_B9E1:; return;
label_B9E2:; return;
label_B9E4:; return;
label_B9E6:; return;
label_B9E9:; return;
label_B9EC:; return;
label_B9EE:; return;
label_B9EF:; return;
}

void func_D404(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D404");
#endif
label_D404:;
    /* $D404: 85 */ maybe_trigger_vblank(3); nes_write(0xEF, g_cpu.A);
label_D406:;
    /* $D406: 85 */ maybe_trigger_vblank(3); nes_write(0xE2, g_cpu.A);
label_D408:;
    /* $D408: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xD2; FLAG_NZ(g_cpu.Y);
label_D40A:;
    /* $D40A: 84 */ maybe_trigger_vblank(3); nes_write(0xE1, g_cpu.Y);
label_D40C:;
    /* $D40C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_D40E:;
    /* $D40E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_D40F:;
    /* $D40F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xD42D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D412:;
    /* $D412: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_D413:;
    /* $D413: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xE2; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D415:;
    /* $D415: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE2); FLAG_NZ(g_cpu.A);
label_D417:;
    /* $D417: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF8; FLAG_NZ(g_cpu.A);
label_D419:;
    /* $D419: 85 */ maybe_trigger_vblank(3); nes_write(0xE2, g_cpu.A);
label_D41B:;
    /* $D41B: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xE2; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D41D:;
    /* $D41D: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_D41E:;
    /* $D41E: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xE2); FLAG_NZ(g_cpu.A);
label_D420:;
    /* $D420: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_D421:;
    /* $D421: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D423:;
    /* $D423: 85 */ maybe_trigger_vblank(3); nes_write(0xE2, g_cpu.A);
label_D425:;
    /* $D425: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_D426:;
    /* $D426: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xE0) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D428:;
    /* $D428: 85 */ maybe_trigger_vblank(3); nes_write(0xE3, g_cpu.A);
label_D42A:;
    /* $D42A: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xE2); nes_trace_indirect_jump(0xD42A, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_C0A0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_C0D0;
        case 2: goto label_C18E;
        case 3: goto label_C0A9;
        case 4: goto label_C120;
    }
label_C0A0:;
    /* $C0A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C0A3:;
    /* $C0A3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C0A6:;
    /* $C0A6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFC4B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C0A9:;
    /* $C0A9: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x22FC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C0AC:;
    /* $C0AC: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x20; g_cpu.C=(g_cpu.X>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_C0AE:;
    /* $C0AE: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C0B1:;
    /* $C0B1: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_C0B3:;
    /* $C0B3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C0B6:;
    /* $C0B6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C0B9:;
    /* $C0B9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C0BC:;
    /* $C0BC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C0BF:;
    /* $C0BF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C0C2:;
    /* $C0C2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C0C5:;
    /* $C0C5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C0C8:;
    /* $C0C8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x4BFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C0CB:;
    /* $C0CB: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C0CE:;
    /* $C0CE: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_C0D0:;
    /* $C0D0: 20 */ maybe_trigger_vblank(6); func_FCFD();
label_C0D3:;
    /* $C0D3: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF49 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C0D6:;
    /* $C0D6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C0D9:;
    /* $C0D9: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1F0E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_C0DC:;
    /* $C0DC: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xFF1B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C0DF:;
    /* $C0DF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x110C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C0E2:;
    /* $C0E2: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_C0E3:;
    /* $C0E3: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x15 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_C0E5:;
    /* $C0E5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x18FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C0E8:;
    /* $C0E8: 0F */ maybe_trigger_vblank(6); { uint16_t a=0xFF0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_C0EB:;
    /* $C0EB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x4BFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C0EE:;
    /* $C0EE: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C0F1:;
    /* $C0F1: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x20 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_C0F3:;
    /* $C0F3: 20 */ maybe_trigger_vblank(6); func_FDFC();
label_C0F6:;
    /* $C0F6: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFF49 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C0F9:;
    /* $C0F9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C0FC:;
    /* $C0FC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C0FF:;
    /* $C0FF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C102:;
    /* $C102: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C105:;
    /* $C105: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C108:;
    /* $C108: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C10B:;
    /* $C10B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C10E:;
    /* $C10E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x4BFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C111:;
    /* $C111: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C114:;
    /* $C114: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x40 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_C116:;
    /* $C116: 20 */ maybe_trigger_vblank(6); func_FCFD();
label_C119:;
    /* $C119: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5A59 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C11C:;
    /* $C11C: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C11D:;
    /* $C11D: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C11E:;
    /* $C11E: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C11F:;
    /* $C11F: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C120:;
    /* $C120: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C121:;
    /* $C121: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C122:;
    /* $C122: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C123:;
    /* $C123: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C124:;
    /* $C124: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C125:;
    /* $C125: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C126:;
    /* $C126: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C127:;
    /* $C127: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C128:;
    /* $C128: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C129:;
    /* $C129: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C12A:;
    /* $C12A: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C12B:;
    /* $C12B: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C12C:;
    /* $C12C: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C12D:;
    /* $C12D: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C12E:;
    /* $C12E: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C12F:;
    /* $C12F: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C130:;
    /* $C130: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C131:;
    /* $C131: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C132:;
    /* $C132: 5A */ maybe_trigger_vblank(2); /* NOP */
label_C133:;
    /* $C133: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFC + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_C136:;
    /* $C136: FC */ maybe_trigger_vblank(4); (void)nes_read((0x6023 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C139:;
    /* $C139: 20 */ maybe_trigger_vblank(6); func_FDFC();
label_C13C:;
    /* $C13C: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C13F:;
    /* $C13F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C142:;
    /* $C142: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C145:;
    /* $C145: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C148:;
    /* $C148: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C14B:;
    /* $C14B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C14E:;
    /* $C14E: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C151:;
    /* $C151: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C154:;
    /* $C154: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C157:;
    /* $C157: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C15A:;
    /* $C15A: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x80 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_C15C:;
    /* $C15C: 20 */ maybe_trigger_vblank(6); func_FCFD();
label_C15F:;
    /* $C15F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C162:;
    /* $C162: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C165:;
    /* $C165: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C168:;
    /* $C168: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C16B:;
    /* $C16B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C16E:;
    /* $C16E: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C171:;
    /* $C171: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C174:;
    /* $C174: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C177:;
    /* $C177: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C17A:;
    /* $C17A: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C17D:;
    /* $C17D: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_C17F:;
    /* $C17F: 20 */ maybe_trigger_vblank(6); func_FDFC();
label_C182:;
    /* $C182: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C185:;
    /* $C185: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C188:;
    /* $C188: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C18B:;
    /* $C18B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C18E:;
    /* $C18E: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C191:;
    /* $C191: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C194:;
    /* $C194: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C197:;
    /* $C197: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C19A:;
    /* $C19A: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C19D:;
    /* $C19D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C1A0:;
    /* $C1A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0020 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1A3:;
    /* $C1A3: 20 */ maybe_trigger_vblank(6); func_FFFC();
label_C1A6:;
    /* $C1A6: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1A9:;
    /* $C1A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1AC:;
    /* $C1AC: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1AF:;
    /* $C1AF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1B2:;
    /* $C1B2: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1B5:;
    /* $C1B5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1B8:;
    /* $C1B8: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1BB:;
    /* $C1BB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1BE:;
    /* $C1BE: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1C1:;
    /* $C1C1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1C4:;
    /* $C1C4: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x2020, -1);
label_C1C7:;
    /* $C1C7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1CA:;
    /* $C1CA: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1CD:;
    /* $C1CD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1D0:;
    /* $C1D0: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1D3:;
    /* $C1D3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1D6:;
    /* $C1D6: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1D9:;
    /* $C1D9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1DC:;
    /* $C1DC: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1DF:;
    /* $C1DF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1E2:;
    /* $C1E2: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_C1E5:;
    /* $C1E5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x20FC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_C1E8:;
    /* $C1E8: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xC1E8; g_rti_bank = 1; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C0A0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C0A0");
#endif
    func_C0A0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C0D0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C0D0");
#endif
    func_C0A0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C18E(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C18E");
#endif
    func_C0A0_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C0A9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C0A9");
#endif
    func_C0A0_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C120(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C120");
#endif
    func_C0A0_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A93D_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A93D_b1");
#endif
label_A93D:;
    /* $A93D: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xED58); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A940:;
    /* $A940: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0xD0ED); nes_trace_indirect_jump(0xA940, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

