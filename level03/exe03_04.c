/*
 * File   : exe03_04.c
 * Author : jlthu
 * Date   : 2026-05-13
 */
#include <stdio.h>
int main(void)
{
    float num;

    printf("Enter a floating-point value: ");
    scanf("%f", &num);
    printf("fixed-point notation: %f\n", num);
    printf("exponential notation: %e\n", num);
    printf("p notation: %a\n", num);

    return 0;
}