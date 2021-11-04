#include <stdio.h>

#include <stdio.h>
void to_binary(unsigned long n);
void to_base_n(unsigned long n, int m);

int main(void)
{
    unsigned long number;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1)
    {
        printf("Binary equivalent: ");
        to_base_n(number, 3);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");
    return 0;
}

void to_base_n(unsigned long n, int m)
{
    int r;
    r = n % m;
    if (n >= m)
        to_binary(n / m);
    putchar(r == 0 ? '0' : '1');
}