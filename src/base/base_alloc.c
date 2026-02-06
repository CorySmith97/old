
static u64 
align_forward(u64 ptr, u64 alignment) 
{
}

Arena *
arena_alloc_(ArenaParams *params) 
{
    Arena *base = malloc(sizeof(Arena));
    if (params != NULL)
        base->params = *params;
    base->prev = NULL;
    base->next = NULL;
    base->free_list = NULL;
    base->curr = 0;
    base->start = 0;
    base->commited = default_arena_commit;
    base->reserved = default_arena_reserve;
    base->data = malloc(default_arena_commit);

    return base;
}

void *
arena_alloc_aligned(Arena *arena, u64 size, u64 alignment, b32 zero) 
{
    if (arena->commited <  )
}


void
arena_pop(Arena *arena, u64 size) 
{
}

void 
arena_set_pos_back(Arena *arena, u64 pos) 
{
}

void
arena_clear(Arena *arena) 
{
}

ArenaTemp 
arena_temp_get(Arena *arena) 
{
}

void 
arena_temp_end(Arena *arena) 
{
}
