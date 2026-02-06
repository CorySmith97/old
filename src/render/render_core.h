
/*
typedef void *gfx_context_t;
*/

typedef struct R_Context R_Context;
struct R_Context {
    Arena *arena;
    Arena *frame;
    union {
        SDL_Renderer *sdl_renderer;
    } ctx;
};

/* Public API */
void r_set_context(R_Context *g);
R_Context *r_init(Arena *arena, SDL_Window *window_handle);
