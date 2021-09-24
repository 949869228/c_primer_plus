#include <stdio.h>

void Temperatures(double t);

int main(void)
{
    double t;
    printf("Enter a temperature in F:");
    while (scanf("%lf", &t) == 1)
        Temperatures(t);
    return 0;
}

void Temperatures(double t)
{
    double st, kt;
    const int diff = 32;
    const float diff2 = 273.16;
    st = 5.0 / 9.0 * (t - diff);
    kt = st + diff2;
    printf("ht:%.2f, st:%.2f, kt:%.2f\n", t, st, kt);
}