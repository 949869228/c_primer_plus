#include <stdio.h>

int pow1(int m, int n);
int main(void)
{
    int num[8];
    for (int i = 0; i <= 7; i++)
    {
        num[i] = pow1(2, i);
    }

    int index = 0;
    do
    {
        printf("%d ", num[index]);
        index++;
    } while (index < 8);
    return 0;
}

int pow1(int m, int n)
{
    int pow_sum = 1;
    for (int i = 1; i <= n; i++)
        pow_sum *= m;
    return pow_sum;
}