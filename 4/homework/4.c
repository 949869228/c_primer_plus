#include <stdio.h>

int main(void)
{
    float height;
    char name[40];
    printf("Enter your height and name:");
    scanf("%f", &height);
    scanf("%s", name);
    printf("%s, you are %f feet tall\n", name, height);
    return 0;
}