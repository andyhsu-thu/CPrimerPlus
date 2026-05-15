/*
 * File   : 03_08.c
 * Author : jlthu
 * Date   : 2026-05-07
 * Purpose: 打印类型大小
 */
#include <stdio.h>
int main(void)
{
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    #if 1
    printf("Type short has a size of %zd bytes.\n", sizeof(short));
    #endif
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
    #if 1
    printf("Type float has a size of %zd bytes.\n", sizeof(float));
    #endif
    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double));

    return 0;
}