#include <stdio.h>

int main(void)
{
    float cups;
    printf("Enter cups:");
    scanf("%f", &cups);
    printf("%f cup equals %f pints\n", cups, cups / 2);
    printf("%f cup equals %f ounce\n", cups, cups / 8);
    printf("%f cup equals %f Spoon\n", cups, cups / 16);
    printf("%f cup equals %f Tea spoon\n", cups, cups / (16 * 3));
    return 0;
}
