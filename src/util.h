/*
 * General utility macros. Overall trying to minimize macros overall. 
 * There are however several important small things that are too nice
 * to not use macros for. alignment.
 **/

#ifndef DEF_H
#define DEF_H

#include <stdlib.h>
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

#define _array_header struct { uint32_t len; uint32_t capacity;}

bool is_power_of_two(uint64_t x);

enum global_error_e {
    GE_SUCCESS,
    GE_MALLOC_FAILED,
    GE_COUNT,
};

enum log_level_e {
    LOG_LEVEL_INFO,
    LOG_LEVEL_ERROR,
};

/*
 * Strings must have a len associated with them. /0 terminated strings 
 * will be avoided at all costs here
 */
struct str_t {
    const char *data;
    uint32_t len;
};

/* 
 * Useful string macros for statically declared strings.
 */
#define str(_S) (struct str_t){.data = _S, .len = sizeof(_S)}

void logger(enum log_level_e level, struct str_t str, ...);
void null_check(void *data, struct str_t message);


#endif /* DEF_H */
