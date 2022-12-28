#include <stdio.h>

int main()
{
    int n, i, j;
    int arr1[100];
    int arr2[100];
    int sum = 0;
    printf("Input the number of elements to be stored  in the array :\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("element-%d :", i);
        scanf("%d", &arr1[i]);
    }
    printf(" The elements stored in the first array are :  ");
    for (j = 0; j < n; j++)
    {

        printf("% 3d ", arr1[j]);
        arr2[j] = arr1[j];
    }
    printf("\n");
    printf(" The elements stored in the second array are :  ");
    for (j = 0; j < n; j++)
    {

        printf("% 3d ", arr2[j]);
    }
    return 0;
}
