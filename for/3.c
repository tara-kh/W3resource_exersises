#include <stdio.h>
int main()
{
    int userInput;
    int i;
    int sum = 0;

    printf("Input value of Terms:\n");
    scanf("%d", &userInput);

    for (i = 1; i <= userInput; i++)
    {
        sum = sum + i; // sum+=i;
    }
    printf("%d\n", sum);
    return 0;
}