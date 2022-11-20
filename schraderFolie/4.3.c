#include <stdio.h>
#include <ctype.h> // isalpha () und isdigit () werden deklariert

int main()
{
    char val1 = 's';
    char val2 = '8';

    // Anwendung von isalpha ()
    if (isalpha(val1))
        printf(" The ␣ character ␣ % c ␣ is ␣ an ␣ alphabet \ n ", val1);
    else
        printf(" The ␣ character ␣ % c ␣ is ␣ not ␣ an ␣ alphabet \ n ", val1);
    if (isalpha(val2))
        printf(" The ␣ character ␣ % c ␣ is ␣ an ␣ alphabet \ n ", val2);
    else
        printf(" The ␣ character ␣ % c ␣ is ␣ not ␣ an ␣ alphabet ", val2);
    // Anwendung von isdigit ()
    if (isdigit(val1))
        printf(" The ␣ character ␣ % c ␣ is ␣ a ␣ digit \n , ␣ val1 ");
    else
        printf(" The ␣ character ␣ % c ␣ is ␣ not ␣ a ␣ digit \ n ", val1);
    if (isdigit(val2))
        printf(" The ␣ character ␣ % c ␣ is ␣ a ␣ digit \ n ", val2);
    else
        printf(" The ␣ character ␣ % c ␣ is ␣ not ␣ a ␣ digit ", val2);

    return 0;
}