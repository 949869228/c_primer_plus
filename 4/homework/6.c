#include <stdio.h>
#include <string.h>

int main(void)
{
    char fname[20];
    char lname[20];
    printf("Enter your first name:");
    scanf("%s", fname);
    printf("Enter your last name:");
    scanf("%s", lname);
    printf("%s %s\n", fname, lname);
    printf("%-*d %-*d\n", strlen(fname), strlen(fname), strlen(lname), strlen(lname));
    printf("%*d %*d\n", strlen(fname), strlen(fname), strlen(lname), strlen(lname));
    return 0;
}