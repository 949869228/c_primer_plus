#include <stdio.h>
double t_mean(double x, double y);

int main(void)
{
    double x = 12.0;
    double y = 8.0;
    printf("tmean is %lf", t_mean(x, y));
    return 0;
}
double t_mean(double x, double y)
{
    double res;
    res = 0.5 * (1. / x + 1. / y);
    return 1. / res;
}
