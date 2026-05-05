/*
 * File   : 02_03.c
 * Author : jlthu
 * Date   : 2026-05-04
 * Purpose: 一个文件中包含两个函数
 */
#include <stdio.h>
void butler(void);      // ANSI/ISO C函数原型
int main(void)
{
    printf("I will summon the bulter function.\n");
    butler();
    printf("Yes, Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void)
{
    printf("You rang, sir?\n");
}