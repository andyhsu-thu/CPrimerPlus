/*
 * 文件: 01_01.c
 * 作者: jlthu
 * 描述: 第一个C源代码
 */
#include <stdio.h>
int main(void)
{
    int dogs;

    printf("How many dogs do you have>\n");
    scanf("%d", &dogs);
    printf("So you have %d dog(s)!\n", dogs);

    return 0;
}
