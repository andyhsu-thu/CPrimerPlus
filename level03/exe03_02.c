/*
 * File   : exe03_02.c
 * Author : jlthu
 * Date   : 2026-05-13
 */
#include <stdio.h>
int main(void)
{
    int code;

    printf("Enter an ascii code: ");
    scanf("%d", &code);
    printf("character %c entered\n", code);

    return 0;
}