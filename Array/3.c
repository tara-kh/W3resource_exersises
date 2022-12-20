#include <stdio.h>

int main(void)
{
    int i, n, sum;
    int arr[30];
    sum = 0;

    printf("Input the number of elements to store in the array : \n");
    scanf("%d", &n);
    printf("Input %d elements in the array :  \n", n);

    for (i = 0; i < n; i++)
    {
        printf("element-%d :\n", i);
        scanf("%d", &arr[i]);
    }
    printf("Elements in array are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nSum of all elements stored in the array is :  \n");
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d ", sum);
    return 0;
}
