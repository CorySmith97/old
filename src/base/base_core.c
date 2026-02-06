
b32 
is_power_of_two(u64 x) 
{
    return (x & (x - 1)) == 0;
}

u64 
align(u64 x, u64 alignment) 
{
    u64 aligned_size = (x + alignment - 1) & ~(alignment - );
    return aligned_size;
}
