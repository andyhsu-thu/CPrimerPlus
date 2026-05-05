/*
 * File   : 02_01.c
 * Author : jlthu
 * Date   : 2026-05-04
 * Purpose: 演示C语言编程的一些基本特性
 */
#include <stdio.h>
int main(void)
{
    int num;                    // 定义一个名为num的变量

    num = 1;                    // 为num赋一个值
    printf("I am a simple ");   // 使用printf()函数
    printf("computer.\n");
    printf("My favourite number is %d because it is first.\n", num);

    return 0;
}