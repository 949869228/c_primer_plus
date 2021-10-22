#include <stdio.h>
#define RATE1 0.15
#define RATE2 0.28
#define BASIC1 17850
#define BASIC2 23900
#define BASIC3 29750
#define BASIC4 14875

int main(void)
{
    int cate, income, basic;
    float rate;
    printf("Please enter your type(-1 to quit):\n");
    printf("1.单身  2.户主  3.已婚，共有  4.已婚，离异\n");
    scanf("%d", &cate);
    while (cate >= 1)
    {
        printf("enter your income:");
        scanf("%d", &income);
        switch (cate)
        {
        case 1:
            basic = BASIC1;
            break;
        case 2:
            basic = BASIC2;
            break;
        case 3:
            basic = BASIC3;
            break;
        case 4:
            basic = BASIC4;
            break;
        default:
            return 0;
            break;
        }
        if (income <= basic)
            rate = income * RATE1;
        else
            rate = RATE1 * basic + RATE2 * (income - basic);
        printf("rate:\n", rate);
        printf("Please enter your type(-1 to quit):\n");
        printf("1.单身  2.户主  3.已婚，共有  4.已婚，离异\n");
        scanf("%d", &cate);
    }
    return 0;
}