#include <stdio.h>

int main(void)
{
    char alpha = 'A';
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", alpha);
            alpha += 1;
        }
        printf("\n");
    }
    return 0;
}