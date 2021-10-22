#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const float ap = 2.05;
const float bp = 1.15;
const float cp = 1.09;

int main(void)
{
    char ch;
    float sum, discount, df;
    int an = 0, bn = 0, cn = 0, sn = 0, n;
    while ((ch = getchar()) != 'q')

    {
        switch (ch)
        {
        case 'a':
            printf("\ninput n:");
            scanf("%d", &n);
            an += n;
            sn += n;
            sum += ap * n;
            break;
        case 'b':
            printf("\ninput n:");
            scanf("%d", &n);
            bn += n;
            sn += n;
            sum += bp * n;
            break;
        case 'c':
            printf("\ninput n:");
            scanf("%d", &n);
            cn += n;
            sn += n;
            sum += cp * n;
            break;
        default:
            printf("input a or b or c or q:");
        }
        getchar();
    }
    if (sum > 100)
    {
        discount = 0.05 * sum;
    }
    else
    {
        discount = 0.0;
    }
    if (sn <= 5)
    {
        df = 6.5;
    }
    else if (sn < 20)
    {
        df = 14.0;
    }
    else
    {
        df = 14.0 + (sn - 20) * 0.5;
    }
    printf("ap = %.2f, bp = %.2f, cp = %.2f\n", ap, bp, cp);
    printf("an = %d, bn = %d, cn = %d\n", an, bn, cn);
    printf("a is %.2f, b is %.2f, c is %.2f\n", ap * an, bp * bn, cp * cn);
    printf("sum is %.2f, discount is %.2f, df is %.2f\n", sum, discount, df);
    return 0;
}
