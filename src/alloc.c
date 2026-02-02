#include "alloc.h"

#define DEFAULT_ARENA KB(10)

#define DEFAULT_ALIGMENT ((sizeof(void *))

void *arena_align_alloc(struct arena_t *arena, uint32_t size, uint32_t alignment) {
    if (arena->data == NULL) {
        arena->data = malloc(DEFAULT_ARENA);
        arena->capacity = DEFAULT_ARENA;
    }

    if (arena->capacity + size) {
    }
}

void  arena_reset(struct arena_t *arena) {
}

void  arena_free(struct arena_t *arena);
