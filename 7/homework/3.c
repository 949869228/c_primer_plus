#include <stdio.h>

int main(void)
{
    int odd_num, even_num, odd_sum, even_sum;
    int num;
    odd_sum = even_sum = odd_num = even_num = 0;
    scanf("%d", &num);
    while (num != 0)
    {
        if (num % 2 == 0)
        {
            even_num++;
            even_sum += num;
        }

        else
        {
            odd_num++;
            odd_sum += num;
        }

        scanf("%d", &num);
    }
    printf("odd num:%d even num:%d\n", odd_num, even_num);
    printf("odd mean:%f; even mean:%f\n", (float)odd_sum / odd_num, (float)even_sum / even_num);
    return 0;
}