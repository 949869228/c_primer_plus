#include <stdio.h>

int main(void)
{
    int guess = 50;
    int left = 1;
    int right = 100;
    char response;
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess ir right and with");
    printf("\nan g if it is greater and l if it is less.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y')
    {
        if (response == 'g')
        {
            right = guess;
            guess = (right + left) / 2;
            printf("Well, then, it is %d?\n", guess);
        }

        else if (response == 'l')
        {
            left = guess;
            guess = (left + right) / 2;
            printf("Well, then, it is %d?\n", guess);
        }

        else
            printf("Sorry, I understand only y or n.\n");
        while (getchar() != '\n')
            continue;
    }
    printf("I knew I could do it!\n");
    return 0;
}