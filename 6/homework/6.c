#include <stdio.h>

int main(void)
{
    int up, down;
    printf("Enter up and down limit:");
    scanf("%d%d", &up, &down);
    printf("n    n**2    n**3\n");
    for (int i = down; i <= up; i++)
        printf("%5d %5d %5d\n", i, i * i, i * i * i);
    return 0;
}