#include <stdio.h>

int main(void)
{
    int num1, num2;
    int *pnum1, *pnum2;

    printf("\n\n  find the maximum number between two numbers using a pointer. :\n");
    printf("-------------------------------------------------------\n");

    printf("Input the first number : \n");
    scanf("%d", &num1);
    printf("Input the second number : \n");
    scanf("%d", &num2);

    pnum1 = &num1;
    pnum2 = &num2;

    if (*pnum1 > *pnum2)
    {
        printf(" %d is the maximum number.", *pnum1);
    }
    else
    {
        printf(" %d is the maximum number.", *pnum2);
    }

    return 0;
}
