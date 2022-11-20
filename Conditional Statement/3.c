#include <stdio.h>
int main()
{
    float num1;

    printf("given number is positive or negative?\n");
    scanf("%f", &num1);

    if (num1 > 0)
    {
        printf(" %f is a positive number\n", num1);
    }
    else
    {
        printf(" %f is a negativ number\n", num1);
    }
    return 0;
}