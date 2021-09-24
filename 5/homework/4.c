#include <stdio.h>
#define FEETCM 30.48
#define INCHCM 2.54

int main(void)
{
    float height, inches;
    int feet;
    printf("Enter a height in centimeters:");
    scanf("%f", &height);
    while (height > 0)
    {
        feet = height / FEETCM;
        inches = (height - feet * FEETCM) / INCHCM;
        printf("%.1f cm = %d feet, %.1f inches\n", height, feet, inches);
        printf("Enter a height in centimeters(<=0 to quit):");
        scanf("%f", &height);
    }
    return 0;
}