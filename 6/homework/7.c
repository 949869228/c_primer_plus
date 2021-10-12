#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[40];
    printf("Enter a string:");
    scanf("%s", name);
    int length = strlen(name);
    for (int i = length - 1; i >= 0; i--)
        printf("%c", name[i]);

    printf("\n");
    return 0;
}