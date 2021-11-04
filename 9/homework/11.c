#include <stdio.h>

int Fibonacci(int n);

int main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d: %d\n", i, Fibonacci(i));
    }
    return 0;
}

int Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    int fn1 = 1;
    int fn2 = 1;
    int fn;
    for (int i = 3; i <= n; i++)
    {
        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;
        }
    return fn;
}