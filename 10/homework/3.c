#include <stdio.h>
int max(int *arr, int n);

int main(void)
{
    int arr[5] = {99,
                  32,
                  123,
                  90,
                  2};
    int max_res;
    max_res = max(arr, sizeof(arr) / sizeof(int));
    printf("max element in arr is %d", max_res);
    return 0;
}

int max(int *arr, int n)
{
    int max_elem = -1;
    for (int i = 0; i < n; i++)
    {

        if (*(arr + i) > max_elem)
            max_elem = *(arr + i);
    }
    return max_elem;
}
