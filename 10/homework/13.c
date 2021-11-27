#include <stdio.h>

void input(int row, int col, double arr[row][col]);
double row_mean(double *arr, int n);
double mean(int row, int col, double arr[row][col]);
double max(int row, int col, double arr[row][col]);

int main(void)
{
    double arr[3][5];
    double mean1, mean2, max1;
    input(3, 5, arr);
    for (int i = 0; i < 3; i++)
    {
        mean1 = row_mean(*(arr + i), 5);
        printf("row %d mean %lf\n", i, mean1);
    }
    mean2 = mean(3, 5, arr);
    printf("mean:%lf\n", mean2);
    max1 = max(3, 5, arr);
    printf("max:%lf\n", max1);
    return 0;
}

void input(int row, int col, double arr[row][col])
{
    for (int i = 0; i < row; i++)
    {
        printf("input row %d number:\n", row);
        printf("enter %d number\n", col);
        for (int j = 0; j < col; j++)
        {
            scanf("%lf", *(arr + i) + j);
        }
    }
}
double row_mean(double *arr, int n)
{
    double sum_ = 0;
    for (int i = 0; i < n; i++)
    {
        sum_ += *(arr + i);
    }
    return sum_ / n;
}
double mean(int row, int col, double arr[row][col])
{
    double sum_ = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            sum_ += *(*(arr + i) + j);
    }
    return sum_ / (row * col);
}
double max(int row, int col, double arr[row][col])
{
    double max_ = **arr;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (*(*(arr + i) + j) > max_)
                max_ = *(*(arr + i) + j);
        }
    }
    return max_;
}