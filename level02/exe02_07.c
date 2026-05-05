/*
 * File   : exe02_07.c
 * Author : jlthu
 * Date   : 2026-05-05
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