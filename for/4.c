#include <stdio.h>
int main()
{
    int i, j;
    int sum = 0;
    int average;

    printf("Input 10 random Numbers:");
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &j);
        sum += j;
    }
    printf("Sum is %d\n", sum);
    printf("the eaverage is %d\n", sum / 10);
    return 0;
}