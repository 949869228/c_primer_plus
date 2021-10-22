#include <stdio.h>

int main(void)
{
    char ch;
    int count = 0;
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '.':
            count++;
            printf("!");
            break;

        case '!':

            printf("!!");
            count++;
            break;
        default:
            printf("%c", ch);
            break;
        }
    }
    printf("\n%4d\n", count);
    return 0;
}