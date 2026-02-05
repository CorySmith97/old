
/*
typedef void *gfx_context_t;
*/

typedef union gfx_context_t {
    SDL_Renderer *sdl_renderer;
} gfx_context_t;

struct color_t {
    uint8_t r, g, b, a;
};

struct texture_t {
    struct color_t tint;
    int width, height;
    union {
        void *data;
    } data;
};

/* Public API */
void render_init(SDL_Window *window_handle);
void draw_quad(gfx_context_t *r, int x, int y, int width, int height, struct color_t color);
void draw_texture(gfx_context_t *r, struct texture_t *tex, int x, int y, float scale);
