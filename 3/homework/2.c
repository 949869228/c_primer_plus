#include <stdio.h>

int main(void)
{
    int ch;
    printf("Enter an ASCII number: ");
    scanf("%d", &ch);
    printf("The number %d to char is %c\n", ch, ch);
    return 0;
}