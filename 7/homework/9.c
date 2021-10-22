#include <stdio.h>
#include <stdbool.h>

bool ispn(int n);

int main(void)
{
    int num, i;
    printf("Enter a postive integer:");
    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        if (ispn(i))
            printf("%d\n", i);
    }
    return 0;
}

bool ispn(int n)
{
    if (n <= 1)
        return false;
    else if (n == 2)
        return true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}