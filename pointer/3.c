#include <stdio.h>

int main()
{
    printf("Demonstrate the use of & and * operator :\n");
    printf("------------------------------------------------------\n");

    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    printf(" Using & operator : \n");
    printf("------------------------------------------------------\n");
    printf("address of m: %p\n", &m);
    printf("address of fx: %p\n", &fx);
    printf("address of cht: %p\n", &cht);
    printf("------------------------------------------------------\n");

    printf(" Using & and * operator : \n");
    printf("------------------------------------------------------\n");
    printf("value at address of m: %d\n", *(&m));
    printf("value at address of fx: %f\n", *(&fx));
    printf("value at address of cht: %c\n", *(&cht));
    printf("------------------------------------------------------\n");

    printf(" Using only pointer variable : \n");
    printf("------------------------------------------------------\n");
    int *pm;
    pm = &m;
    float *pfx;
    pfx = &fx;
    char *pcht;
    pcht = &cht;
    printf("address of m: %p\n", pm);
    printf("address of fx: %p\n", pfx);
    printf("address of cht: %p\n", pcht);

    printf("------------------------------------------------------\n");
    printf("Using only pointer operator :   \n");
    printf("------------------------------------------------------\n");
    printf("value at address of m: %d\n", *pm);
    printf("value at address of fx: %f\n", *pfx);
    printf("value at address of cht: %c\n", *pcht);
    printf("------------------------------------------------------\n");

    return 0;
}