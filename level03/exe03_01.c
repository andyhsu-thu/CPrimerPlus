/*
 * File   : exe03_01.c
 * Author : jlthu
 * Date   : 2026-05-13
 */
#include <stdio.h>
#include <float.h>
#include <limits.h>
int main(void)
{
    int int_max = INT_MAX;
    float float_max = FLT_MAX, float_min = FLT_MIN;

    printf("Int max = %d, Int max + 1 = %d\n", int_max, int_max + 1);
    printf("Float max = %f, Float max * 2 = %f\n", float_max, float_max * 2);
    printf("Float min = %f, Float min / 2 = %f\n", float_min, float_min / 2);

    return 0;
}