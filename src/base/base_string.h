typedef struct String8 String8;
struct String8 {
    u8 *data;
    u64 length;
};

#define Str8(_S) (String8){.data = _S, .len = sizeof(_S)} 
