#include <stdio.h>
int main()
{
    int num1;

    printf("HOw old are you\n");
    scanf("%d", &num1);

    if (num1 >= 18)
    {
        printf("  Congratulation!You are eligible for casting your vote.\n");
    }
    else
    {
        printf(" sorry! You are not eligible for casting your vote with %d.\n", num1);
    }
    return 0;
}