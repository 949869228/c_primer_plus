#include <stdio.h>
void chline(char ch, int i, int j);

int main(void)
{
    char ch = 'x';
    int i = 2;
    int j = 3;
    chline(ch, i, j);
    return 0;
}
void chline(char ch, int i, int j)
{
    for (int m = 1; m <= j; m++)
    {
        for (int n = 1; n <= i; n++)
            putchar(ch);
        putchar('\n');
    }
}