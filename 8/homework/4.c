#include <stdio.h>

int main(void)
{
    int dc = 0;
    int zm = 0;
    char curr_ch;
    char pre_ch = '\t';
    while ((curr_ch = getchar()) != EOF)
    {
        if ((curr_ch == ' ' || curr_ch == '\n') && (pre_ch != ' ' || pre_ch != '\n'))
            dc++;
        else if ((curr_ch >= 'a' && curr_ch <= 'z') || (curr_ch >= 'A' && curr_ch <= 'Z'))
            zm++;
    }
    printf("average zm in dc:%f\n", (float)zm / (float)dc);
    return 0;
}