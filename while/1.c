#include <stdio.h>
int main()
{
    int i;
    int pass = 123;
    int Input;

    while (Input != pass)
    {
        printf("Enter the Pass\n");
        scanf("%d", &Input);
    }
    printf("Entered\n");

    return 0;
}