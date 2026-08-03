/*
 * Dr. Mario semantic profile for NESRecomp's opt-in screen diorama.
 *
 * The bottle is structural geometry. Mario, viruses, and moving capsules
 * remain upright sprite cards; settled medicine is only shallowly raised.
 */
#include "game_voxel.h"

#include "nes_runtime.h"
#include "voxel_screen_profile.h"

static NesVoxelScreenState s_voxel;

static int drmario_scene_visible(const uint32_t *framebuffer,
                                 int stride, void *user) {
    int hits = 0;
    int source_x = g_widescreen_left;
    (void)user;

    /* Active play has a continuous cyan glass wall near x=91. Color-selecting
     * that wall avoids confusing the title's checkerboard/logo for a bottle. */
    for (int y = 80; y <= 215; y++) {
        uint32_t color = framebuffer[y * stride + source_x + 91];
        unsigned r = (color >> 16) & 0xFFu;
        unsigned g = (color >> 8) & 0xFFu;
        unsigned b = color & 0xFFu;
        if (g > r + 20u && b > r + 20u)
            hits++;
    }
    return hits >= 80;
}

static float drmario_tile_height(const NesVoxelScreenSample *sample,
                                 void *user) {
    int x = sample->tile_x;
    int y = sample->tile_y;
    (void)user;
    if (sample->non_background_pixels < 3) return 0.0f;

    /* Bottle sidewalls and base are the persistent collision structure. */
    if (y >= 10 && y <= 26 && (x == 11 || x == 20))
        return 10.0f;
    if (y == 26 && x >= 11 && x <= 20)
        return 10.0f;

    /* Neck and shoulders are thinner than the main glass body. */
    if (y >= 5 && y <= 9 && (x == 13 || x == 18))
        return 6.0f;
    if (y >= 8 && y <= 10 &&
        ((x >= 11 && x <= 13) || (x >= 18 && x <= 20)))
        return 6.0f;

    /* Settled medicine is tangible but should read as a token, not a wall.
     * OAM-backed falling capsules are masked here and reconstructed as cards
     * by the shared renderer. */
    if (x >= 14 && x <= 17 && y >= 10 && y <= 25 &&
        sample->non_background_pixels >= 6 &&
        (sample->bright_pixels + sample->warm_pixels +
         sample->green_pixels + sample->blue_pixels) >= 3)
        return 3.0f;
    return 0.0f;
}

static const NesVoxelScreenProfile s_profile = {
    "Dr. Mario bottle-table diorama",
    0, 240, 0, 0, 85,
    30, -15, 0, 95, 120,
    0xFF17105Au, 0xFF38208Eu,
    drmario_scene_visible,
    drmario_tile_height,
    0
};

void game_voxel_set_mod_enabled(int enabled) {
    nes_voxel_screen_set_enabled(&s_voxel, enabled);
}

void game_voxel_configure_mod(int pitch, int yaw, int roll,
                              int zoom_percent, int sprite_scale_percent) {
    nes_voxel_screen_configure(&s_voxel, pitch, yaw, roll,
                               zoom_percent, sprite_scale_percent);
}

void game_voxel_handle_event(const SDL_Event *event) {
    nes_voxel_screen_handle_event(&s_voxel, event);
}

void game_voxel_init(void) {
    nes_voxel_screen_init(&s_voxel, &s_profile);
}

void game_voxel_update(void) {
    nes_voxel_screen_update(&s_voxel, &s_profile);
}

void game_voxel_post_render(uint32_t *framebuffer) {
    nes_voxel_screen_post_render(&s_voxel, &s_profile, framebuffer);
}
