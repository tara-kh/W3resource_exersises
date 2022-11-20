#include <stdio.h>
int main()
{

    int userInput;
    int i;
    int result;

    printf("Input the number (Table to be calculated) \n");
    scanf("%d", &userInput);

    for (i = 1; i <= 10; i++)
    {

        result = userInput * i;
        printf("%d X %d  = %d\n", userInput, i, result);
    }
    return 0;
}