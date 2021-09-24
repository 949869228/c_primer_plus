#include <stdio.h>

void print(float x);
int main(void)
{
    float x;
    printf("Enter a float:");
    scanf("%f", &x);
    print(x);
    return 0;
}

void print(float x)
{
    printf("cubic:%f", x * x * x);
}