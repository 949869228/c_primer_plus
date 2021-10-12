#include <stdio.h>
#define DN 150

int main(void)
{
    int friend = 5;
    int year = 0;
    while (friend < DN)
    {
        year++;
        friend = 2 * (friend - 1);
    }
    printf("%d year have %d friend\n", year, friend);
}