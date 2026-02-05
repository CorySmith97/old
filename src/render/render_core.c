
/*
* @brief Render local graphics context 
*/
static gfx_context_t gfx;

/* Internal Types */

void render_init(SDL_Window *window_handle) {
    gfx.sdl_renderer = SDL_CreateRenderer(window_handle, 0, SDL_RENDERER_SOFTWARE);
}
