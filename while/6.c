#include <stdio.h>
int main()
{
    int i = 1;
    int userInput;
    int mul;

    printf("Enter a Num:");
    scanf("%d", &userInput);

    while (i <= 10)
    {
        mul = userInput * i;
        printf("%d X %d = %d\n", userInput, i, mul);
        i++;
    }

    return 0;
}
