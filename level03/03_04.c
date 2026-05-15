/*
 * File   : 03_04.c
 * Author : jlthu
 * Date   : 2026-05-06
 * Purpose: 更多printf()的特性
 */
#include <stdio.h>
int main(void)
{
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    #if 0
    printf("verybig = %lld and not %ld\n", verybig, verybig);
    #endif
    printf("verybig = %lld and %ld\n", verybig, verybig);

    return 0;
}