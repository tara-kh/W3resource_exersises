#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Pointer : Show the basic declaration of pointer : \n");
    int m = 10;
    int n, o;
    int *z = &m;

    printf("z stores the address of m  = %p\n", z);
    printf(" *z stores the value of m = %i \n", *z);
    printf(" &m is the address of m = %p\n", &m);
    printf(" &n stores the address of n = %p\n", &n);
    printf(" &o  stores the address of o = %p\n", &o);
    printf(" &z stores the address of z = %p\n", &z);
    system("PAUSE");
}