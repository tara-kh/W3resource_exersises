#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Pointer : Show the basic declaration of pointer : \n");
    int m = 10;
    int n, o;
    int *z;

    z = &m;
    printf(" z stores the address of m  = 0x%x\n", z);
    printf("z stores the address of m  = %p\n", z);

    printf(" *z stores the value of m = 10\n", *z);

    printf(" &m is the address of m = 0x%x\n", &m);
    printf(" &m is the address of m = %p\n", &m);

    printf(" &n is the address of n = 0x%x\n", &n);
    printf(" &n is the address of n = %p\n", &n);

    printf(" &o is the address of o = 0x%x\n", &o);
    printf(" &o is the address of o = %p\n", &o);

    printf(" &z is the address of z = 0x%x\n", &z);
    printf(" &z is the address of z = %p\n", &z);

    system("PAUSE");
}