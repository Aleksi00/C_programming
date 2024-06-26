/*
Implement below function **sixBits** which returns only least significant six bits
of the input value **v**. Rest of the two highest significant bits must be reset.
(i.e) If the input value **v** is **11110000**, then **sixBits** function must return
**110000**. One way to accomplish this is to use a bit mask.
*/

// define sixBits function here
unsigned char sixBits(unsigned char v)
{
    #define BIT_MASK ((1<<0) | (1<<1) | (1<<2) | (1<<3) | (1<<4) | (1<<5)) //00111111
    int b = (BIT_MASK & v);
    return b;
}