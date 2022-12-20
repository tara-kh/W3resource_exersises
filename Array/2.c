#include <stdio.h>

int main(void)
{
    int i, j, k, n;
    int arr[30];

    printf("Input the number of elements to store in the array : \n");
    scanf("%d", &n);
    printf("Input %d elements in the array :  \n", n);

    for (i = 0; i < n; i++)
    {
        printf("element-%d :\n", i);
        scanf("%d", &arr[i]);
    }
    printf("Elements in array are: \n");
    for (j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\nElements in array in reverse are: \n");
    for (k = n - 1; k >= 0; k--)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}
