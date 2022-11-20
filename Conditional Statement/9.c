#include <stdio.h>
int main()
{

    int x, y;
    printf("Enter X:\n");
    scanf("%d", &x);

    printf("Enter Y:\n");
    scanf("%d", &y);

    if (x > 0 && y > 0)
    {
        printf("The coordinate point (%d,%d) lies in the First quadrant.\n", x, y);
    }
    else if (x < 0 && y > 0)
    {
        printf("The coordinate point (%d,%d) lies in the second quadrant.\n", x, y);
    }
    else if (x < 0 && y < 0)
    {
        printf("The coordinate point (%d,%d) lies in the third quadrant.\n", x, y);
    }
    else if (x > 0 && y < 0)
    {
        printf("The coordinate point (%d,%d) lies in the forth quadrant.\n", x, y);
    }
    return 0;
}