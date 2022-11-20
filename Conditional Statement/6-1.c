#include <stdio.h>
int main()
{
    int m, n;

    printf("Inter a Num:\n");
    scanf("%d", &m);

    if (m != 0)
    {
        if (m > 0)
        {
            n = 1;
        }
        else
        {
            n = -1;
        }
    }
    else
    {
        n = 0;
    }
    printf("%d\n", n);
    return 0;
}