#include <stdio.h>
void copy_ptrs(double *target, double *source_start, double *source_end);
void show_arr(double *arr, int n);

int main(void)
{
    double source[7] = {0, 1, 2, 3, 4, 5, 6};
    double target[3];
    copy_ptrs(target, source + 2, source + 5);
    show_arr(target, 3);
    return 0;
}

void show_arr(double *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%lf ", *(arr + i));
    printf("\n");
}

void copy_ptrs(double *target, double *source_start, double *source_end)
{
    while (source_start < source_end)
    {
        *target = *source_start;
        target++;
        source_start++;
    }
}