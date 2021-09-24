#include <stdio.h>

int main(void)
{
    int x, target;
    printf("Enter an int:");
    scanf("%d", &x);
    target = x + 10;
    while (x <= target)
    {
        printf("%d\n", x);
        x++;
    }
    return 0;
}