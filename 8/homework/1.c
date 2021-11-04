#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    FILE *fp;
    char fname[50];
    int i;
    printf("Enter the name of the file:");
    scanf("%s", fname);

    fp = fopen(fname, "r");
    if (fp == NULL)
    {
        printf("Failed to open file.Bye\n");
        exit(1);
    }
    while ((ch = getc(fp)) != EOF)
    {
        i++;
    }
    fclose(fp);
    printf("File have %d .", i);
    printf("Done!\n");
    return 0;
}