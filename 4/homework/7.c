#include <stdio.h>
#include <float.h>

int main(void)
{
    double x = 1.0 / 3.0;
    float y = 1.0 / 3.0;
    printf("double: %.6f %.12f %.16f\n", x, x, x);
    printf("float: %.6f %.12f %.16f\n", y, y, y);
    printf("%d %d", FLT_DIG, DBL_DIG);
    return 0;
}