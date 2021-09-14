#include <stdio.h>

int main(void)
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    printf("You live %e second.\n", age * 3.156e7);
    return 0;
}