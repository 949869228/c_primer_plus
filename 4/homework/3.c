#include <stdio.h>

int main(void)
{
    float x;
    printf("Enter a float:");
    scanf("%f", &x);
    printf("%f\n", x);
    printf("%e\n", x);
    printf("%.3f\n", x);
    printf("%E", x);
    return 0;
}