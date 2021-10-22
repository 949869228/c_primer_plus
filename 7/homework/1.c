#include <stdio.h>

int main(void)
{
    char ch;
    int b_ct, n_ct, o_ct; //blank, \n_cnt, other_cnt
    b_ct = n_ct = o_ct = 0;
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case ' ':
            b_ct++;
            break;
        case '\n':
            n_ct++;
            break;
        default:
            o_ct++;
            break;
        }
    }
    printf("%4d%4d%4d\n", b_ct, n_ct, o_ct);
    return 0;
}