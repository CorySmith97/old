#ifndef ALLOC_H
#define ALLOC_H

#include <stdint.h>
#include <stdlib.h>
#include "util.h"

struct arena_t {
    uint32_t capacity;
    uint32_t size;
    uint32_t alignment;
    void *data;
};

void *arena_align_push(struct arena_t *arena, uint32_t size, uint32_t alignment);
void  arena_reset(struct arena_t *arena);
void  arena_free(struct arena_t *arena);

#define arena_push_array(_a, _t, _c) arena_align_push(_a, (sizeof((_t)) * (_c)), align_of(_t))
#define arena_push_struct(_a, _t)    arena_align_push(_a, sizeof((_t)), align_of(_t))

#endif /* ALLOC_H */
