#include <stdio.h>

int main(void)
{
    char alpha = 'F';
    for (int i = 0; i <= 6; i++)
    {
        char tmp = alpha;
        for (int j = 0; j < i; j++)
            printf("%c", tmp - j);
        printf("\n");
    }
    return 0;
}