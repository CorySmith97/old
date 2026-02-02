#include "render.h"
#include "SDL_render.h"

/*
* @brief Render local graphics context 
*/
static gfx_context_t gfx;

/* Internal Types */

void render_init(SDL_Window *window_handle) {
    gfx.sdl_renderer = SDL_CreateRenderer(window_handle, 0, SDL_RENDERER_SOFTWARE);
    null_check(gfx.sdl_renderer, str("Failed to create SDL_Renderer"));
}


struct texture_t load_texture(struct arena_t *a, struct str_t *file_path) {
}
