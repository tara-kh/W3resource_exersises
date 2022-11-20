#include <stdio.h>
int main()
{
    switch (a)
    {
    case 1:
        printf(" a ␣ ist ␣ eins \ n ");
        break;
    case 2:
        printf(" a ␣ ist ␣ zwei \ n ");
        break;
    case 3:
    case 4:
        printf(" a ␣ ist ␣ drei ␣ oder ␣ 4\ n ");
        break;
    default:
        printf(" a ␣ ist ␣ irgendwas ␣ anderes \ n ");
        break;
    }

    return 0;
}