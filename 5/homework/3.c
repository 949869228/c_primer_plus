#include <stdio.h>

int main(void)
{
    int day, week, week_day;
    printf("Enter a day:");
    scanf("%d", &day);
    while (day > 0)
    {
        week = day / 7;
        week_day = day % 7;
        printf("%d days are %d weeks, %d days\n", day, week, week_day);
        printf("Enter a day:");
        scanf("%d", &day);
    }

    return 0;
}