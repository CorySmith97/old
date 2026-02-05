
typedef union Vec2 Vec2;
union Vec2 {
    struct { f32 x; f32 y; };
    struct { f32 u; f32 v; };
    struct { f32 width; f32 height; };
    f32 elements[2];
};

typedef union Vec3 Vec3;
union Vec3 {
};
