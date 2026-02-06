#define MAX_KEYCOUNT 512

typedef enum16 PL_Backend;
enum {
    PL_BackendSDL = 0x8001,
    PL_BackendSokol = 0x8002,
};

typedef enum16 PL_MouseButton;
enum {
    PL_MouseButtonLeft   = 0,
    PL_MouseButtonRight  = 1,
    PL_MouseButtonMiddle = 2,
    PL_MouseButtonCount  = 3,
};

typedef enum16 PL_KeyboardKey;
enum {
    PL_KeyboardKeyA = 0,
    PL_KeyboardKeyB = 1,
    PL_KeyboardKeyC = 2,
    PL_KeyboardKeyD = 3,
    PL_KeyboardKeyE = 4,
    PL_KeyboardKeyF = 5,
    PL_KeyboardKeyG = 6,
    PL_KeyboardKeyH = 7,
    PL_KeyboardKeyI = 8,
    PL_KeyboardKeyJ = 9,
    PL_KeyboardKeyK = 10,
    PL_KeyboardKeyL = 11,
    PL_KeyboardKeyM = 12,
    PL_KeyboardKeyN = 13,
    PL_KeyboardKeyO = 14,
    PL_KeyboardKeyP = 15,
    PL_KeyboardKeyQ = 16,
    PL_KeyboardKeyR = 17,
    PL_KeyboardKeyS = 18,
    PL_KeyboardKeyT = 19,
    PL_KeyboardKeyU = 20,
    PL_KeyboardKeyV = 21,
    PL_KeyboardKeyW = 22,
    PL_KeyboardKeyX = 23,
    PL_KeyboardKeyY = 24,
    PL_KeyboardKeyZ = 25,
};

typedef struct PlatformParams PlatformParams;
struct PlatformParams {
    u32 window_width;
    u32 window_height;
    const char *window_name;
};

typedef struct Platform Platform;
struct Platform {
    u32         window_width;
    u32         window_height;
    SDL_Window *window_handle;
    b32         pressed_keys[MAX_KEYCOUNT];
    b32         previously_pressed_keys[MAX_KEYCOUNT];
    b32         mouse_button_pressed[PL_MouseButtonCount];
    b32         mouse_button_previously_pressed[PL_MouseButtonCount];
    b32         quit;
};

void pl_init(PlatformParams *params);
void pl_process_input(void);
b32  pl_window_should_close(void);
void pl_deinit(void);
b32  is_key_down(PL_KeyboardKey key);
b32  is_key_pressed(PL_KeyboardKey key);
