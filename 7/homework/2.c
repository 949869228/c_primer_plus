#include <stdio.h>

int main(void)
{
    char ch;
    int count = 0;
    while ((ch = getchar()) != '#')
    {
        printf("%4c%4d", ch, ch);
        count++;
        if (count % 8 == 0)
            printf("\n");
    }
    printf("\n");
    return 0;
}
