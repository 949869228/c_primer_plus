#include <stdio.h>
void copy_arr(double target[], double source[], int n);
void copy_ptr(double *target, double *source, int n);
void copy_ptrs(double *target, double *source_start, double *source_end);
void show_arr(double *arr, int n);

int main(void)
{
    double source[5] = {1.1,
                        2.2,
                        3.3,
                        4.4,
                        5.5};
    double target1[5], target2[5], target3[5];
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);
    printf("target1\n");
    show_arr(target1, 5);
    printf("target2\n");
    show_arr(target2, 5);
    printf("target3\n");
    show_arr(target3, 5);
}

void show_arr(double *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%lf ", *(arr + i));
    printf("\n");
}

void copy_arr(double target[], double source[], int n)
{
    for (int i = 0; i < n; i++)
    {
        target[i] = source[i];
    }
}

void copy_ptr(double *target, double *source, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(target + i) = *(source + i);
    }
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