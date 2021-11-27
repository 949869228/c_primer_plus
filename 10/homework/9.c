#include <stdio.h>
void copy(int row, int col, double source[row][col], double target[row][col]);
void show_arr(int row, int col, double arr[row][col]);

int main(void)
{
    double source[3][5] = {{1, 2, 3, 4, 5},
                           {6, 7, 8, 9, 10},
                           {11, 12, 13, 14, 15}};
    double target[3][5];
    copy(3, 5, source, target);
    show_arr(3, 5, source);
    return 0;
}

void copy(int row, int col, double source[row][col], double target[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            target[i][j] = source[i][j];
    }
}

void show_arr(int row, int col, double arr[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%lf ", arr[i][j]);
        printf("\n");
    }
}