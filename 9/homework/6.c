#include <stdio.h>

void sort(double *x, double *y, double *z);

int main(void)
{
    double x = 1.2;
    double y = 9.8;
    double z = 3.4;
    printf("before sort, x = %lf, y = %lf, z = %lf\n", x, y, z);
    sort(&x, &y, &z);
    printf("after sort, x = %lf, y = %lf, z = %lf\n", x, y, z);
    return 0;
}

void sort(double *x, double *y, double *z)
{
    double min, max, sum;
    sum = *x + *y + *z;
    min = (*x > *y) ? *y : *x;
    min = (min > *z) ? *z : min;
    max = (*x > *y) ? *x : *y;
    max = (max > *z) ? max : *z;
    *x = min;
    *y = sum - min - max;
    *z = max;
}