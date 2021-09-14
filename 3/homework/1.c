#include <stdio.h>

int main(void)
{
    int i = 2147483647;
    float j = 2.34e38;
    float k = -2.34e38;
    printf("%d %d %d\n", i, i + 1, i + 2);
    printf("%f\n", j);
    printf("%f\n", k);
    return 0;
}