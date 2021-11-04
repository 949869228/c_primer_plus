#include <stdio.h>

int main(void)
{
    char ch;
    int i = 0;
    while ((ch = getchar()) != EOF)
    {
        if (i % 10 == 0)
            printf("\n");
        if (ch == '\t')
        {
            putchar('\t');
            i++;
        }

        else if (ch == '\n')
        {
            putchar('\n');
            i = 0;
        }
        else
        {
            printf("%c:%d ", ch, ch);
            i++;
        }
    }
    return 0;
}