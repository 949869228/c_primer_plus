#include <stdio.h>
void sort(double *arr, int n);
void show_arr(double *arr, int n);
void exchange(double *arr, int i, int j);

int main(void)
{
    double arr[5] = {3.2,
                     4.5,
                     7.8,
                     9.10,
                     -2};

    sort(arr, sizeof(arr) / sizeof(double));
    show_arr(arr, sizeof(arr) / sizeof(double));
    return 0;
}

void show_arr(double *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%lf ", *(arr + i));
    printf("\n");
}

void exchange(double *arr, int i, int j)
{
    double tmp;
    tmp = *(arr + i);
    *(arr + i) = *(arr + j);
    *(arr + j) = tmp;
}

void sort(double *arr, int n)
{
    double tmp;
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 1; j < n - i; j++)
        {
            if (*(arr + j - 1) < *(arr + j))
            {
                exchange(arr, j - 1, j);
            }
        }
    }
}