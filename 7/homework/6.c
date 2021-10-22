#include <stdio.h>

int main(void)
{
    char curr_ch, pre_ch;
    int count = 0;
    pre_ch = ' ';
    while ((curr_ch = getchar()) != '#')
    {
        if (curr_ch == 'i' && pre_ch == 'e')
            count++;
        pre_ch = curr_ch;
    }
    printf("%d\n", count);
    return 0;
}