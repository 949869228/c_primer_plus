#include <stdio.h>

int main(void)
{
    char alpha[26];
    for (int i = 0; i <= 25; i++)
        alpha[i] = 'a' + i;
    for (int i = 0; i <= 25; i++)
        printf("%c ", alpha[i]);
    return 0;
}