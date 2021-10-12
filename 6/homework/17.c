#include <stdio.h>

int main(void)
{
    int earn = 100;
    int year = 0;
    while (earn > 0)
    {
        year++;
        earn = earn * 1.08 - 10;
    }
    printf("%d year\n", year);
    return 0;
}