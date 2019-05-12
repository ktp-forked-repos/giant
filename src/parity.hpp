inline short parity(unsigned long x)
{
    short result = 0;
    while (x)
    {
        result ^= 1;
        x &= x - 1;
    }
    return result;
}
