#include <stdio.h>

int main(void)
{
    float speed;
    float file_size;
    printf("Enter your download speed(Mb/s):");
    scanf("%f", &speed);
    printf("Enter your file size:");
    scanf("%f", &file_size);
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n", speed, file_size, file_size * 8 / speed);
    return 0;
}