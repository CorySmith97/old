#include "base/base_inc.h"
#include "thirdparty/thirdparty_inc.h"
#include "platform/platform_inc.h"
#include "render/render_inc.h"
#include "text/text_inc.h"
#include "ui/ui_inc.h"

#include "base/base_inc.c"
#include "thirdparty/thirdparty_inc.c"
#include "platform/platform_inc.c"
#include "render/render_inc.c"
#include "text/text_inc.c"
#include "ui/ui_inc.c"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

int main(void) {
    Arena *arena = arena_alloc();
    pl_init(&(PlatformParams){
        .window_width = SCREEN_WIDTH,
        .window_height = SCREEN_HEIGHT,
        .window_name = "Test",
    });

    while (!pl_window_should_close()) {
        pl_process_input();
    }

    pl_deinit();
}


