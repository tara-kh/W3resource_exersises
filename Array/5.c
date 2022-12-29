#include <stdio.h>

int main()
{
    int n, i, j;
    int arr1[100], arr2[100], arr3[100];
    int counter = 1;
    int duplicate = 0;

    printf("Input the number of elements to be stored in the array :\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Element-%d: ", i);
        scanf("%d", &arr1[i]);
    }
    // ---------------------------copy in other array----------------------------------
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
        arr3[i] = 0;
    }
    printf("arr1: ");
    for (i = 0; i < n; i++)
    {
        printf("%2d", arr1[i]);
    }
    printf("\narr2: ");
    for (i = 0; i < n; i++)
    {
        printf("%2d", arr2[i]);
    }
    printf("\n");

    //------------------- mark the elements are duplicate ------------------------------------

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr3[j] = counter;
                counter++;
                printf("arr3[%d]: %d\n", j, arr3[j]);
            }
        }
        counter = 1;
    }
    for (i = 0; i < n; i++)
    {
        if (arr3[i] == 2)
        {
            duplicate++;
        }
    }
    printf("Total number of duplicate elements found in the array is : %d \n", duplicate);
    return 0;
}
