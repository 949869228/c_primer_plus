#include <stdio.h>
#define MINUTES 60

int main(void)
{
    int minutes = 1;
    int h, m;
    printf("Enter minutes:");
    scanf("%d", &minutes);
    while (minutes > 0)
    {
        h = minutes / MINUTES;
        m = minutes % MINUTES;
        printf("%d hours %d minutes\n", h, m);
        printf("Enter minutes:");
        scanf("%d", &minutes);
    }
    return 0;
}
