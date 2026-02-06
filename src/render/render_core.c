
/*
* @brief Render local graphics context 
*/
static R_Context *local_context = NULL;

/* Internal Types */

R_Context *r_init(Arena *arena, SDL_Window *window_handle) {
    R_Context *gfx = arena_push_struct(arena, R_Context);

    return gfx;
}
