#include <stdio.h>
#define BAISC 1000
#define N 1.5
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define COUNT1 RATE1 * 300
#define COUNT2 COUNT1 + 150 * RATE2

int main(void)
{
    int time;
    float earn, rate, net;
    printf("Enter income:");
    scanf("%d", &time);
    if (time <= 40)
        earn = BAISC * time;
    else
        earn = BAISC * (40 + (time - 40) * 1.5);
    if (earn <= 300)
        rate = earn * 0.15;
    else if (earn <= 450)
        rate = COUNT1 + (earn - 300) * RATE2;
    else
        rate = COUNT2 + (earn - 450) * RATE3;
    net = earn - rate;
    printf("%f %f %f\n", earn, rate, net);
    return 0;
}
