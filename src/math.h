#ifndef MATH_H
#define MATH_H

typedef union v2_t {
    struct { float x; float y;};
    struct { float width; float height;};
} v2_t;

typedef union v3_t {
    struct { float x; float y; float z;};
    float elements[2];
} v3_t;

#endif /* MATH_H */
