/*
 * File   : 03_02.c
 * Author : jlthu
 * Date   : 2026-05-06
 * Purpose: 演示printf()的一些特性
 */
#include <stdio.h>
int main(void)
{
    int ten = 10;
    int two = 2;

    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten - two);
    printf("Doing it wrong: ");
    printf("%d minus %d is %d\n", ten);

    return 0;
}