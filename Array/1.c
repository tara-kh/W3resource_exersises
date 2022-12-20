#include <stdio.h>

int main(void)
{
    int i, j;
    int arr[10];

    printf("store elements in an array and print it. \n");
    printf("Input 10 elements in the array :  \n");

    for (i = 0; i < 10; i++)
    {
        printf("element-%d :\n", i);
        scanf("%d", &arr[i]);
    }
    printf("Elements in array are: \n");
    for (j = 0; j < 10; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}
