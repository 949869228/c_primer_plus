#include <stdio.h>

int sigal(int n);

int main(void)
{
    int limit;
    double result1 = 0;
    double result2 = 0;
    printf("Enter a limit:");
    scanf("%d", &limit);
    for (int i = 0; i < limit; i++)
    {
        result1 += 1. / (i + 1);
        result2 += 1. / (i + 1) * sigal(i);
    }
    printf("%lf %lf\n", result1, result2);
    return 0;
}

int sigal(int n)
{
    int res;
    res = n % 2;
    return (2 * res - 1) * -1;
}