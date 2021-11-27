#include <stdio.h>
void copy_arr(double target[], double source[], int n);
void copy_ptr(double *target, double *source, int n);
void copy_ptrs(double *target, double *source_start, double *source_end);
void show_arr(double (*arr)[5], int n);

int main(void)
{
    double source[2][5] = {{1.1, 2.2, 3.3, 4.4, 5.5},
                           {2.1, 3.2, 4.5, 6.7, 77.8}};

    double target1[2][5], target2[2][5], target3[2][5];
    for (int i = 0; i < 2; i++)
    {
        copy_arr(target1[i], source[i], 5);
        copy_ptr(*(target2 + i), *(source + i), 5);
        copy_ptrs(*(target3 + i), *(source + i), *(source + i) + 5);
    }
    printf("target1:\n");
    show_arr(target1, 2);
    printf("target2:\n");
    show_arr(target2, 2);
    printf("target3:\n");
    show_arr(target3, 2);
}

void show_arr(double (*arr)[5], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%lf ", *(*(arr + i) + j));
        printf("\n");
    }
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