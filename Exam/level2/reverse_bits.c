#include <stdio.h>

unsigned char   reverse_bits(unsigned char octet)
{
    int i;
    unsigned char res;

    i = 8;
    res = 0;
    while (i--)
    {
        res = (res << 1) + (octet % 2);
        octet = octet >> 1;
    }
return (res);
}

int main()
{
    unsigned char octet = 38;
    printf("%u", reverse_bits(octet));
}