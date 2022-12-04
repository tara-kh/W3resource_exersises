#include <stdio.h>

int square(int Num1)
{
    int result = Num1 * Num1;
    return result;
}

int main()
{
    int Num1, Total;
    printf("Input any number for square : \n");
    scanf("%d", &Num1);

    Total = square(Num1);

    printf("The square of %d is :  %d\n", Num1, Total);
    return 0;
}