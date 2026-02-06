#ifndef BASE_CORE_H
#define BASE_CORE_H

#include <stdint.h>
#include <stdbool.h>

typedef int8_t   s8;
typedef int16_t  s16;
typedef int32_t  s32;
typedef int64_t  s64;
typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef float    f32;
typedef double   f64;
typedef int8_t   b8;
typedef int16_t  b16;
typedef int32_t  b32;
typedef int64_t  b64;

#define enum8  u8
#define enum16 u16
#define enum32 u32
#define enum64 u64

#define align_of(type) offsetof(struct{ char c; type member;}, member) 

#define KB(n)  (((u64)(n)) << 10)
#define MB(n)  (((u64)(n)) << 20)
#define GB(n)  (((u64)(n)) << 30)
#define TB(n)  (((u64)(n)) << 40)
#define Thousand(n)   ((n)*1000)
#define Million(n)    ((n)*1000000)
#define Billion(n)    ((n)*1000000000)

#define _ArrayHeader_ struct { u32 len; u32 capacity;}

typedef struct ArrayHeader ArrayHeader;
struct ArrayHeader {
    u32 len;
    u32 capacity;
};

b32 is_power_of_two(u64 x);
u64 align(u64 x, u64 alignment);

enum global_error_e {
    GE_SUCCESS,
    GE_MALLOC_FAILED,
    GE_COUNT,
};

enum log_level_e {
    LOG_LEVEL_INFO,
    LOG_LEVEL_ERROR,
};

typedef union Color Color;
union Color {
    struct {u8 r, g, b, a; };
    u32;
};

#endif /* BASE_CORE_H */
