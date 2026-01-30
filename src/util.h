/*
 * General utility macros. Overall trying to minimize macros overall. 
 * There are however several important small things that are too nice
 * to not use macros for. alignment.
 **/

#ifndef DEF_H
#define DEF_H

#define align_of(type) offsetof(struct{ char c; type member;}, member) 

enum log_level_e {
    LOG_LEVEL_INFO,
    LOG_LEVEL_ERROR,
};

void logger(enum log_level_e level, const char *str, ...);

#endif /* DEF_H */
