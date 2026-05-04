/*
 * File   : 01_01.c
 * Author : jlthu
 * Date   : 2026-05-02
 * Purpose: 第一个源代码demo 
 */
#include <stdio.h>
int main(void)
{
    int dogs;

    printf("How many dogs do you have?\n");
    scanf("%d", &dogs);
    printf("So, you have %d dog(s)!\n", dogs);

    return 0;
}