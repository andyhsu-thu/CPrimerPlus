/*
 * File   : exe03_05.c
 * Author : jlthu
 * Date   : 2026-05-13
 */
#include <stdio.h>
int main(void)
{
    const float secPerYear = 3.156e7;
    int year;

    printf("Enter your age in year: ");
    scanf("%d", &year);
    printf("that's %f seconds\n", year * secPerYear);

    return 0;
}