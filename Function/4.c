#include <stdio.h>

void evenOrOdd(int N1)
{
    if (N1 % 2 == 0)
    {
        printf("The entered number is even\n");
    }
    else
    {
        printf("The entered number is Odd\n");
    }
}

int main()
{
    int Num1;
    printf("Input any number : \n");
    scanf("%d", &Num1);

    evenOrOdd(Num1);

    return 0;
}