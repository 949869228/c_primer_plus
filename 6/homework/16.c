#include <stdio.h>

int main(void)
{
    int year;
    float r1, r2;
    r1 = r2 = 100;
    while (r1 >= r2)
    {
        year++;
        r1 = r1 + 10;
        r2 = r2 * 1.05;
    }
    printf("in %d year; Daphnc have %f  and Deirdrc have %f\n", year, r1, r2);
    return 0;
}