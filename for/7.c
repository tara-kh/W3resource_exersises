#include <stdio.h>
int main()
{

    int userInput;
    int i, j;
    int result;

    printf("Input upto the table number starting from 1 : \n");
    scanf("%d", &userInput);

    for (i = 1; i <= userInput; i++)
    {

        for (j = 1; j <= 10; j++)
        {
            result = j * i;
            printf("%d X %d = %d   ", j, i, result);
        }
        printf("\n");
    }
    return 0;
}