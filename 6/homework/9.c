#include <stdio.h>

float cal_result(float a, float b);

int main(void)
{
    float left, right;
    printf("Enter two float(q to quit):");
    while (scanf("%f%f", &left, &right) == 2)
    {
        printf("result:%f\n", cal_result(left, right));
        printf("Enter two float(q to quit):");
    }

    return 0;
}
float cal_result(float a, float b)
{
    return (a - b) / (a * b);
}