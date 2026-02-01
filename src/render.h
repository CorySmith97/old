#ifndef RENDER_H
#define RENDER_H
#include <stdint.h>
#include <SDL.h>

union gfx_context {
    SDL_Renderer *sdl_renderer;
};

struct color_t {
    uint8_t r, g, b, a;
};

struct texture_t {
    struct color_t tint;
    int width, height;
    void *data;
};

void draw_quad(SDL_Renderer *r, int x, int y, int width, int height, struct color_t color);
void draw_texture(SDL_Renderer *r, struct texture_t *tex, int x, int y, float scale);

#endif /* RENDER_H */
