#include <stdio.h>

double min(double x, double y);

int main(void)
{
    double x = 12.33;
    double y = 23.321;
    printf("min number between %lf and %lf is %lf.\n", x, y, min(x, y));
    return 0;
}

double min(double x, double y)
{
    return (x > y) ? y : x;
}
