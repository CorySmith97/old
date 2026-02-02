#include <stdio.h>
#include <stdbool.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdint.h>
#include <stddef.h>

#include "alloc.h"
#include "util.h"
#include "state.h"
#include "render.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

static SDL_Window *window;
static SDL_Renderer *renderer;

struct arr_float {
    _array_header;
    float *data;
};

int main(void) {
    struct arr_float arr = {0};
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        panic("Ahh");
    }

    window = SDL_CreateWindow("Hello World", 
                              SDL_WINDOWPOS_CENTERED, 
                              SDL_WINDOWPOS_CENTERED,
                              SCREEN_WIDTH,
                              SCREEN_HEIGHT,
                              0);

    renderer = SDL_CreateRenderer(window, 0, SDL_RENDERER_SOFTWARE);

    bool quit = false;
    while (!quit) {
        SDL_Event event = {0};
        SDL_PollEvent(&event);
        switch (event.type) {
            case SDL_QUIT: quit = true; break;
            default: break;
        }

    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
}


