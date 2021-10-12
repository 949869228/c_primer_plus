#include <stdio.h>

int power_sum(int l, int h);

int main(void)
{
    int low, high;
    printf("Enter　lower　and　upper　integer　limits:");
    scanf("%d%d", &low, &high);
    while (low < high)
    {
        printf("The　sums　of　the　squares　from ");
        printf("%d　to　%d　is %d\n", low, high, power_sum(low, high));
        printf("Enter　next　set　of　limits:");
        scanf("%d%d", &low, &high);
    }
    printf("Done\n");
    return 0;
}
int power_sum(int l, int h)
{
    int sum = 0;
    for (int i = l; i <= h; i++)
        sum += i * i;
    return sum;
}