#include <stdio.h>

int main(void)
{
    int dx = 0;
    int xx = 0;
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
            xx++;
        else if (ch >= 'A' && ch <= 'Z')
            dx++;
    }
    printf("DX:%d; XX:%d\n", dx, xx);
    return 0;
}