#include <stdio.h>

#include <stdio.h>
void doubled(int (*arr)[5], int n);
void show_arr(int (*arr)[5], int n);

int main(void)
{
    int arr[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}};
    show_arr(arr, 3);
    doubled(arr, 3);
    show_arr(arr, 3);
    return 0;
}

void show_arr(int (*arr)[5], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%d ", *(*(arr + i) + j));
        printf("\n");
    }
}

void doubled(int (*arr)[5], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            *(*(arr + i) + j) *= 2;
    }
}