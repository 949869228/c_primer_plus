#include <stdio.h>

int main(void)
{
    float height;
    printf("How many feet are you tall:");
    scanf("%f", &height);
    printf("Your height is %f cm", 2.54 * height);
    return 0;
}