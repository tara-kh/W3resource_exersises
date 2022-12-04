#include <stdio.h>

int sum(int Num1, int Num2)
{
    int result = Num1 + Num2;
    return result;
}

int main()
{
    int Num1, Num2, Total;
    printf("Num1 : \n");
    scanf("%d", &Num1);
    printf("Num2 : \n");
    scanf("%d", &Num2);

    Total = sum(Num1, Num2);

    printf("The total is :  %d\n", Total);
    return 0;
}