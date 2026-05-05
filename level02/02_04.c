/*
 * File   : 02_04.c
 * Author : jlthu
 * Date   : 2026-05-04
 * Purpose: debug程序：vs code的1.115.0版本已经做到了一键调试，非常简单了
 */
#include <stdio.h>
int main(void)
{
    int n, n2, n3;

    n = 5;
    n2 = n * n;
    n3 = n * n * n;
    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

    return 0;
}