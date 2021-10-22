#include <stdio.h>
#define N 1.5
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define COUNT1 RATE1 * 300
#define COUNT2 COUNT1 + 150 * RATE2

int main(void)
{
    int time, number;
    float earn, rate, net, BAISC;
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr　　　　　　　　　　　　　 2) $9.33/hr\n");
    printf("3) $10.00/hr　　　　　　　　　　　　　4) $11.20/hr\n");
    printf("5) quit\n");
    printf("*****************************************************************\n");
    scanf("%d", &number);
    printf("Enter work time:");
    scanf("%d", &time);
    switch (number)
    {
    case 1:
        BAISC = 8.75;
        break;
    case 2:
        BAISC = 9.33;
        break;
    case 3:
        BAISC = 10.0;
        break;
    case 4:
        BAISC = 11.20;
        break;
    default:
        return 0;
        break;
    }

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
