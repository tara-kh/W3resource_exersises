#include <stdio.h>
int main()
{
    int i;
    int userInput;
    int sum = 0;
    printf("Input number of terms : ");
    scanf("%d", &userInput);

    for (i = 1; i <= userInput * 2; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d ", i);
            sum = sum + i;
        }
    }
    printf("The Sum of odd Natural Number upto %d terms : %d \n", userInput, sum);
    return 0;
}