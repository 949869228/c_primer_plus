#include <stdio.h>
int argmax(double *arr, int n);

int main(void)
{
    double arr[5] = {99.1,
                     32.2,
                     123.3,
                     90.4,
                     2.5};
    int max_index;
    max_index = argmax(arr, sizeof(arr) / sizeof(double));
    printf("max element index in arr is %d", max_index);
    return 0;
}

int argmax(double *arr, int n)
{
    double max_elem = -999;
    int max_index;
    for (int i = 0; i < n; i++)
    {

        if (*(arr + i) > max_elem)
        {
            max_elem = *(arr + i);
            max_index = i;
        }
    }
    return max_index;
}