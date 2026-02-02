#ifndef MATH_H
#define MATH_H

typedef union v2_t {
    struct { float x; float y;};
    struct { float width; float height;};
} v2_t;

typedef union v3_t {
    struct { float x; float y; float z;};
    float elements[3];
} v3_t;

typedef union v4_t {
    struct { float x; float y; float z; float w;};
    float elements[4];
} v4_t;

#ifdef MATH_INCLUDE_UTIL
#else
#endif

#endif /* MATH_H */
