#include <stdio.h>

int main(void)
{
    int num[8];
    for (int i = 0; i <= 7; i++)
        scanf("%d", &num[i]);
    for (int i = 7; i >= 0; i--)
        printf("%d\n", num[i]);
    return 0;
}