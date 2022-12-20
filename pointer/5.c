#include <stdio.h>
long addTwoNumbers(long *n1, long *n2)
{
    long sum = *n1 + *n2;
    return sum;
}
int main(void)
{
    long num1, num2;
    printf("\n\n Pointer : Add two numbers using call by reference.:\n");
    printf("-------------------------------------------------------\n");

    printf("Input the first number : \n");
    scanf("%ld", &num1);
    printf("Input the second number : \n");
    scanf("%ld", &num2);

    long sum = addTwoNumbers(&num1, &num2);
    printf("The sum of %ld and %ld is %ld.\n", num1, num2, sum);

    return 0;
}
