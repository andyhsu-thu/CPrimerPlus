/*
 * File   : exe03_07.c
 * Author : jlthu
 * Date   : 2026-05-16
 */
#include <stdio.h>
int main(void)
{
    const float CM_PER_INCH = 2.54;
    float height;

    printf("Enter your height (in inches): ");
    scanf("%f", &height);
    printf("You're %f centimeters tall.\n", height * CM_PER_INCH);

    return 0;
}