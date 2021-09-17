#include <stdio.h>

int main(void)
{
    char last_name[20];
    char first_name[20];
    printf("Enter your fisrt name:");
    scanf("%s", first_name);
    printf("Enter your last name:");
    scanf("%s", last_name);
    printf("%s, %s\n", first_name, last_name);
    return 0;
}