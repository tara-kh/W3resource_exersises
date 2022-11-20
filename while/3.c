#include <stdio.h>
int main()
{
    int i = 0;
    int sum = 0;
    int userInput;
    printf("Enter a Num:\n");
    scanf("%d", &userInput);

    while (i <= userInput)
    {
        sum = sum + i;
        i++;
    }
    printf("%d", sum);
    return 0;
}