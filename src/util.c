#include "util.h"

void logger(enum log_level_e level, struct str_t str, ...) {
    struct str_t prefix;
    switch (level) {
        case LOG_LEVEL_ERROR: {
            prefix = str("[error]");
        } break;
        case LOG_LEVEL_INFO: {
            prefix = str("[info]");
        } break;
    }
}

bool is_power_of_two(uint64_t x) {
}

void null_check(void *data, struct str_t message) {
    if (data == NULL) {
        logger(LOG_LEVEL_ERROR, message);
    }
}
