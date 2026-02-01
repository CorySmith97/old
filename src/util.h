/*
 * General utility macros. Overall trying to minimize macros overall. 
 * There are however several important small things that are too nice
 * to not use macros for. alignment.
 **/

#ifndef DEF_H
#define DEF_H

#include <stdint.h>
#include <stdbool.h>

#define align_of(type) offsetof(struct{ char c; type member;}, member) 

#define KB(n)  (((uint64_t)(n)) << 10)
#define MB(n)  (((uint64_t)(n)) << 20)
#define GB(n)  (((uint64_t)(n)) << 30)
#define TB(n)  (((uint64_t)(n)) << 40)
#define Thousand(n)   ((n)*1000)
#define Million(n)    ((n)*1000000)
#define Billion(n)    ((n)*1000000000)

enum log_level_e {
    LOG_LEVEL_INFO,
    LOG_LEVEL_ERROR,
};

#define _array_header struct { uint32_t len; uint32_t capacity;}

bool is_power_of_two(uint64_t x);

void logger(enum log_level_e level, const char *str, ...);

#endif /* DEF_H */
