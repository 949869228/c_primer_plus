#include <stdio.h>

int main(void)
{
    int mod_2, mod_1;
    printf("This　program　computes　moduli.\n");
    printf("Enter　an　integer　to　serve　as　the　second　operand:");
    scanf("%d", &mod_2);
    printf("Now　enter　the　first　operand:");
    scanf("%d", &mod_1);
    while (mod_1 > 0)
    {
        printf("%d %% %d is %d\n", mod_1, mod_2, mod_1 % mod_2);
        printf("Enter　next　number　for　first　operand　(<=　0　to　quit):");
        scanf("%d", &mod_1);
    }
    printf("Done\n");
    return 0;
}