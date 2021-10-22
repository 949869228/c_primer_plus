#include <stdio.h>

int main(void)
{
    char ch;
    int count = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            count++;
            printf("!");
        }

        else if (ch == '!')
        {
            printf("!!");
            count++;
        }

        else
            printf("%c", ch);
    }
    printf("\n%4d\n", count);
    return 0;
}