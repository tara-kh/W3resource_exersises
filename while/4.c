#include <stdio.h>
int main()
{
    int i = 1;
    int sum = 0;
    int userInput;

    while (i <= 10)
    {
        printf("%d)", i);
        scanf("%d", &userInput);
        sum = sum + userInput;
        i++;
    }
    printf("%d\n", sum);
    printf("%d", sum / 10);
    return 0;
}