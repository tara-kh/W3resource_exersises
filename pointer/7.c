#include <stdio.h>

int main(void)
{
    int i, n;
    int arr[30];

    printf("store n elements in an array and print the elements using pointer.\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("Input the number of elements to store in the array :\n");
    scanf("%d", &n);
    printf("Input %d elements in the array :  \n", n);

    for (i = 0; i < n; i++)
    {
        printf("element-%d :\n", i);
        scanf("%d", arr + i); //  entweder   &arr[i]    oder     arr + i
    }
    printf("The elements you entered are :  \n");
    for (i = 0; i < n; i++)
    {
        printf("element-%d : %d \n", i, *(arr + i)); //  entweder   arr[i]    oder    *(arr + i)
    }

    return 0;
}
