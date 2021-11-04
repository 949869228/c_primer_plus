#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int checkch(char c);
void read(FILE *in);

int main(void)
{
    FILE *in = fopen("/Users/hexu/larryhe/CPP_learn/c_primer_plus/9/homework/1.c", "r");
    read(in);
    fclose(in);
    return 0;
}

int checkch(char c)
{
    if (!isalpha(c))
        return -1;
    if (isupper(c))
        return c - 'A' + 1;
    else
        return c - 'a' + 1;
}

void read(FILE *in)
{
    char ch;
    int x;
    while ((ch = getc(in)) != EOF)
    {
        x = checkch(ch);
        if (x == -1)
            printf("%c is not alpha.\n", ch);
        else
            printf("%c is alpha with index %d\n", ch, x);
    }
}