#ifndef PLATFORM_H
#define PLATFORM_H
#include "util.h"
#include <stdbool.h>

typedef void *platform_ctx;

enum platform_backend_e {
    sdl2_software,
};

enum platform_key {
    KEY_A,
};

void platform_init(void);
void platform_input(void);
void platform_frame(void);
void platform_deinit(void);
bool platform_is_key_down(uint32_t key);

#endif /* PLATFORM_H */
