#include <stdio.h>

int Num1, Num2;

void swap(int N1, int N2)
{
    Num1 = N2;
    Num2 = N1;
}

int main()
{
    printf("Num1 : \n");
    scanf("%d", &Num1);
    printf("Num2 : \n");
    scanf("%d", &Num2);

    printf("Before swapping: n1 = %d, n2 = %d\n", Num1, Num2);
    swap(Num1, Num2);
    printf("After swapping: n1 = %d, n2 = %d\n", Num1, Num2);

    return 0;
}