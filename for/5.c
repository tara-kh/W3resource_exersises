#include <stdio.h>
int main()
{

    int userInput;
    int i, j;
    int cube;

    printf("Input number of Terms:\n");
    scanf("%d", &userInput);

    for (i = 1; i <= userInput; i++)
    {
        cube = i * i * i;
        printf("the cube of %d is %d\n", i, cube);
    }

    return 0;
}