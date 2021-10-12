#include <stdio.h>

int main(void)
{
    char alpha, tmp_alpha;
    printf("Enter an alpha:");
    scanf("%c", &alpha);
    for (int i = 0; i <= 4; i++)
    {
        tmp_alpha = alpha;
        for (int j = 0; j <= i; j++)
        {
            printf("%c", tmp_alpha);
            tmp_alpha += 1;
        }
        tmp_alpha -= 1;
        for (int j = 0; j <= i - 1; j++)
        {
            tmp_alpha -= 1;
            printf("%c", tmp_alpha);
        }
        printf("\n");
    }
    return 0;
}