/*
 * File   : 03_05.c
 * Author : jlthu
 * Date   : 2026-05-07
 * Purpose: 显示字符的代码编号
 */
#include <stdio.h>
int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    #if 0
    scanf("%c", &ch);
    #endif
    // 读写字符通常用getchar()、putchar()
    ch = getchar();
    printf("The code for %c is %d.\n", ch, ch);

    return 0;
}