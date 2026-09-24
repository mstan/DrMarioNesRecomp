/*
 * extras.c — Dr. Mario game-specific runner hooks
 * Implements game_extras.h (minimal stub).
 */
#include "game_extras.h"
#include "nes_runtime.h"
#include "debug_server.h"
#include "crc32.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Globals expected by the runner framework */
const char *g_rom_path_for_extras = NULL;
int         g_watchdog_triggered  = 0;
uint32_t    g_watchdog_frame      = 0;
const char *g_watchdog_stack_dump = "";

uint32_t game_get_expected_crc32(void) { return DRMARIO_EXPECTED_CRC; }

const char *game_get_name(void) { return "Dr. Mario (" DRMARIO_REGION_NAME ")"; }

void game_on_init(void) {
    /* The common launcher warns but continues for positional ROM arguments.
     * Stop that path before mismatched generated code can execute. */
    FILE *rom = g_rom_path_for_extras ? fopen(g_rom_path_for_extras, "rb") : NULL;
    if (!rom || fseek(rom, 0, SEEK_END) != 0) {
        fprintf(stderr, "[DrMario] Cannot verify ROM\n");
        if (rom) fclose(rom);
        exit(1);
    }
    long size = ftell(rom);
    if (size <= 16 || fseek(rom, 16, SEEK_SET) != 0) {
        fprintf(stderr, "[DrMario] Invalid ROM file\n");
        fclose(rom);
        exit(1);
    }
    size_t data_size = (size_t)size - 16;
    uint8_t *data = (uint8_t *)malloc(data_size);
    if (!data || fread(data, 1, data_size, rom) != data_size) {
        fprintf(stderr, "[DrMario] Cannot read ROM\n");
        free(data);
        fclose(rom);
        exit(1);
    }
    fclose(rom);
    uint32_t actual = crc32_compute(data, data_size);
    free(data);
    if (actual != game_get_expected_crc32()) {
        fprintf(stderr, "[DrMario] Wrong ROM for %s: expected %08X, got %08X\n",
                game_get_name(), game_get_expected_crc32(), actual);
        exit(1);
    }
    debug_server_init(4370);
}

void game_on_frame(uint64_t frame_count) { (void)frame_count; }

void game_post_nmi(uint64_t frame_count) { (void)frame_count; }

int game_handle_arg(const char *key, const char *val) {
    (void)key; (void)val;
    return 0;
}

const char *game_arg_usage(void) { return NULL; }

void game_run_nmi(void) { func_NMI(); }

void game_run_main(void) { func_RESET(); }

int game_dispatch_override(uint16_t addr) { (void)addr; return 0; }

uint8_t game_ram_read_hook(uint16_t pc, uint16_t addr, uint8_t val) {
    (void)pc; (void)addr;
    return val;
}

void game_fill_frame_record(void *record) { (void)record; }

int game_handle_debug_cmd(const char *cmd, int id, const char *json) {
    (void)cmd; (void)id; (void)json;
    return 0;
}

void game_post_render(uint32_t *framebuf) { (void)framebuf; }
