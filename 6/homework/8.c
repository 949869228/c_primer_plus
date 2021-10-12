#include <stdio.h>

int main(void)
{
    float left, right;
    printf("Enter two float(q to quit):");
    while (scanf("%f%f", &left, &right) == 2)
    {
        printf("result:%f\n", (left - right) / (left * right));
        printf("Enter two float(q to quit):");
    }

    return 0;
}