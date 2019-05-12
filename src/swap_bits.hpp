inline swap_bits(long x, int i, int j)
{
    if (((x >> i) & 1) != ((x >> j) & 1))
    {
        unsigned long bit_mask = (1L << i) | (1L << j);
        x ^= bit_mask;
    }
    return x;
}
