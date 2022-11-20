#include <stdio.h>
int main()
{

    int num1;
    int num2;

    printf("enter num1\n");
    scanf("%d", &num1);

    printf("enter num2\n");
    scanf("%d", &num2);

    if (num1 == num2)
    {
        printf("num1 and num2 are equal\n");
    }

    else
    {
        printf("they are not equal\n");
    }

    return 0;
}