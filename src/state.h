/*
* Global State.
*/
#ifndef STATE_H
#define STATE_H
#include <SDL.h>

struct state_t {
    SDL_Window *window;
};

static struct state_t *global_state = &(struct state_t){0};

#endif /* STATE_H */
