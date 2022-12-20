#include <stdio.h>
int main(void)
{
    printf("\n\n Pointer : Add two numbers using pointer:\n");
    printf("-------------------------------------------------------\n");

    int a, b;
    int *pa, *pb;
    pa = &a;
    pb = &b;
    printf("Input the first number : \n");
    scanf("%d", &a);
    printf("Input the second number : \n");
    scanf("%d", &b);

    printf("The sum of %d and %d is %d.\n", a, b, *pa + *pb);

    return 0;
}