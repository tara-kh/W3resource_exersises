#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m = 29;
    printf("the address of m : %p\n", &m);
    printf("value of m : %d\n", m);

    printf("Now ab is assigned with the address of m.\n");
    int *ab = &m;
    printf("the address of ab : %p\n", ab);
    printf("value of ab : %d\n", *ab);

    printf(" The value of m assigned to 34 now.\n");
    m = 34;
    printf("the address of ab : %p\n", ab);
    printf("value of ab : %d\n", *ab);

    printf(" The pointer variable ab is assigned with the value 7 now.\n");
    *ab = 7;
    printf("the address of m : %p\n", &m);
    printf("value of m : %d\n", m);
    system("PAUSE");
}