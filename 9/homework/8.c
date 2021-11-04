#include <stdio.h>
double power(double x, int n);
double power_postive(double x, int n);

int main(void)
{
    for (int n = -2; n <= 2; n++)
    {
        printf("2.3^%d = %lf\n", n, power(2.3, n));
    }
    return 0;
}

double power(double x, int n)
{
    if (x == 0 && n == 0)
    {
        printf("0^0 is not defined.");
        return 1;
    }
    if (x == 0)
        return 0;
    if (n == 0)
    {
        return 1;
    }
    if (n > 0)
        return power_postive(x, n);
    else
        return 1. / power_postive(x, -n);
}

double power_postive(double x, int n)
{
    double res = 1;
    for (int i = 1; i <= n; i++)
        res *= x;
    return res;
}
