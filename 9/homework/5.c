#include <stdio.h>
void larger(double *x, double *y);

int main(void)
{
    double x = 12.33;
    double y = 15.66;
    printf("before change , x = %lf, y = %lf\n", x, y);
    larger(&x, &y);
    printf("after change , x = %lf, y = %lf\n", x, y);
    return 0;
}
void larger(double *x, double *y)
{
    double max;
    max = (*x > *y) ? *x : *y;
    *x = max;
    *y = max;
}
