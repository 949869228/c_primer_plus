#include <stdio.h>
double ptp(double *arr, int n);

int main(void)
{
    double arr[5] = {3.2,
                     4.5,
                     7.8,
                     9.10,
                     -2};
    double ptp_res;
    ptp_res = ptp(arr, sizeof(arr) / sizeof(double));
    printf("The ptp of arr is :%lf", ptp_res);
    return 0;
}

double ptp(double *arr, int n)
{
    double max, min;
    max = *arr;
    min = *arr;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) > max)
            max = *(arr + i);
        if (*(arr + i) < min)
            min = *(arr + i);
    }

    return max - min;
}
