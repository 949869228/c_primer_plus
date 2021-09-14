#include <stdio.h>

int main(void)
{
    float water;
    printf("Enter volume of water:");
    scanf("%f", &water);
    printf("There are %e molecule in %f quarts water.\n", 950.0 * water * 3.0e-23, water);
    return 0;
}