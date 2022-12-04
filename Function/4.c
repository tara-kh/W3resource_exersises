#include <stdio.h>

int evenOrOdd(int N1)
{
    return (N1 % 2 == 0);
}

int main()
{
    int Num1;
    printf("Input any number : \n");
    scanf("%d", &Num1);

    if (evenOrOdd(Num1))
    {
        printf("The entered number is even\n");
    }

    else
    {
        printf("The entered number is Odd\n");
    }
    return 0;
}