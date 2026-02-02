#include "render.h"
#include "SDL_render.h"
#include "state.h"
#include "util.h"

/*
* @brief Render local graphics context 
*/
static gfx_context_t gfx;

/* Internal Types */

void render_init() {
    gfx.sdl_renderer = SDL_CreateRenderer(global_state->window, 0, SDL_RENDERER_SOFTWARE);
    null_check(gfx.sdl_renderer, str("Failed to create SDL_Renderer"));
}


struct texture_t load_texture(struct arena_t *a, struct str_t *file_path) {
}
