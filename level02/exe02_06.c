/*
 * 文件: exe02_06.c
 * 作者: jlthu
 */
#include <stdio.h>
void smile(void);
int main(void)
{
    smile();
    smile();
    smile();
    printf("\n");

    smile();
    smile();
    printf("\n");

    smile();
    printf("\n");

    return 0;
}

void smile(void)
{
    printf("Smile!");
}