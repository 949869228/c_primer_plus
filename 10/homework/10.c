#include <stdio.h>
void sum(int *arr1, int *arr2, int *res, int n);
void show_arr(double *arr, int n);

int main(void)
{
    int arr1[4] = {2, 4, 5, 8};
    int arr2[4] = {1, 0, 4, 6};
    int res[4];
    sum(arr1, arr2, res, 4);
    show_arr(res, 4);
    return 0;
}

void show_arr(double *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%lf ", *(arr + i));
    printf("\n");
}