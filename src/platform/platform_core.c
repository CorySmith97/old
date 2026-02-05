static Platform *platform_ctx = NULL;

void pl_init(PlatformParams *params) {
    platform_ctx = malloc(sizeof(Platform));

    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        printf("failed to initialize");
        exit(1);
    }

    platform_ctx->window_handle = SDL_CreateWindow(
        params->window_name,
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        params->window_width,
        params->window_height,
        0);
}

void pl_process_input(void) {
    SDL_Event e = {0};
    while (SDL_PollEvent(&e) != 0) {
        if (e.type == SDL_Quit) {
            platform_ctx->quit = true;
        }
    }
}

b32 pl_window_should_close(void) {
    if (platform_ctx->quit)
        return true;
    return false;
}

void pl_deinit(void) {
}

b32 is_key_down(PL_KeyboardKey key);
b32 is_key_pressed(PL_KeyboardKey key);
