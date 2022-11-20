#include <stdio.h>
int main()
{
    int num1, rem1;
    printf("Enter a Num:\n");
    scanf("%d", &num1);

    rem1 = num1 % 2;

    if (rem1 == 0)
    {

        printf("even\n");
    }
    else
    {
        printf("Odd\n");
    }

    return 0;
}