#include <stdio.h>

int main(void)
{
    double num1[8], num2[8];
    for (int i = 0; i < 8; i++)
        scanf("%lf", &num1[i]);
    num2[0] = num1[0];
    for (int i = 1; i < 8; i++)
        num2[i] = num2[i - 1] + num1[i];
    for (int i = 0; i < 8; i++)
        printf("%lf  ", num1[i]);
    printf("\n");
    for (int i = 0; i < 8; i++)
        printf("%lf  ", num2[i]);
    printf("\n");
    return 0;
}