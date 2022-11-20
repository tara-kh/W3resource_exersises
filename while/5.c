#include <stdio.h>
int main()
{
    int i = 1;
    int cube = 1;
    int userInput;

    printf("Enter a Num:");
    scanf("%d", &userInput);
    while (i <= userInput)
    {

        cube = i * i * i;
        printf(" Number is : %d and cube of the %d is :%d \n", i, i, cube);

        i++;
    }

    return 0;
}