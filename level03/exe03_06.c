/*
 * File   : exe03_06.c
 * Author : jlthu
 * Date   : 2026-05-16
 */
#include <stdio.h>
int main(void)
{
    const float H2O_MASS = 3.0e-23;         // 1个水分子的重量
    const float GRAMS_H20_PER_QUART = 950;  // 1夸脱水的克数
    float quarts;
    float amount = 0.0f;

    printf("Enter an amount of water (in quarts): ");
    scanf("%f", &quarts);
    amount = quarts * GRAMS_H20_PER_QUART / H2O_MASS;
    printf("There are %f molecules in %f quarts of water.\n", amount, quarts);

    return 0;
}