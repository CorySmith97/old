typedef enum16 ArenaFlags;
enum {
    ArenaFlags_FixedBuffer = 0x8000,
};

typedef struct ArenaParams ArenaParams;
struct ArenaParams {
    ArenaFlags flags;
    void *fixed_buffer;
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
    u8 *data;
};

typedef struct Temp Temp;
struct Temp {
    Arena arena;
    u64 prev;
};

static u64 default_arena_reserve = MB(64);
static u64 default_arena_commit = KB(64);
static ArenaFlags default_arena_flags = 0;

Arena *arena_alloc_(ArenaParams *params);
#define arena_alloc(...) 
void *arena_alloc_aligned(Arena *arena, u64 size, u64 alignment, b32 zero);
