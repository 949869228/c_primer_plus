#include <stdio.h>

int main(void)
{
    int count, sum;
    count = 0;
    sum = 0;
    int day;
    printf("Enter a day:");
    scanf("%d", &day);
    while (++count <= day)
        sum = sum + count * count;
    printf("su = %d\n", sum);
    return 0;
}