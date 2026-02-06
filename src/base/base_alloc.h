#ifndef BASE_ALLOC_H
#define BASE_ALLOC_H

typedef enum16 ArenaFlags;
enum {
    ArenaFlags_FixedBuffer = 0x8000,
};

typedef struct ArenaParams ArenaParams;
struct ArenaParams {
    ArenaFlags flags;
    void *fixed_buffer;
    u32   fixed_buffer_capacity;
    char *arena_init_site;
    u64 arena_init_line;
};

typedef struct Arena Arena;
struct Arena {
    ArenaParams params;
    Arena *prev;
    Arena *next;
    Arena *free_list;
    u64 curr;
    u64 start;
    u64 commited;
    u64 reserved;
    char *arena_init_site;
    u64 arena_init_line;
    u8 *data;
};

typedef struct ArenaTemp ArenaTemp;
struct ArenaTemp {
    Arena arena;
    u64 prev;
};

static u64 default_arena_reserve = MB(64);
static u64 default_arena_commit = KB(64);
static ArenaFlags default_arena_flags = 0;

Arena *arena_alloc_(ArenaParams *params);
#define arena_alloc(...) arena_alloc_(NULL)
void *arena_alloc_aligned(Arena *arena, u64 size, u64 alignment, b32 zero);

#define arena_push_struct_zero(_A, _T) (_T*)arena_alloc_aligned(_A, sizeof(_T), align_of(_T), true)
#define arena_push_struct(_A, _T) (_T*)arena_alloc_aligned(_A, sizeof(_T), align_of(_T), false)

#define arena_push_array_zero(_A, _T, _C) (_T*)arena_alloc_aligned(_A, sizeof(_T) * (_C), align_of(_T), true)
#define arena_push_array(_A, _T, _C) (_T*)arena_alloc_aligned(_A, sizeof(_T) * (_C), align_of(_T), false)

void arena_pop(Arena *arena, u64 size);
void arena_set_pos_back(Arena *arena, u64 pos);
void arena_clear(Arena *arena);

ArenaTemp arena_temp_get(Arena *arena);
void      arena_temp_end(Arena *arena);

#endif /* BASE_ALLOC_H */
