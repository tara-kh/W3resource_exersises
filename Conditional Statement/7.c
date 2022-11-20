#include <stdio.h>
int main()
{
    int height;

    printf("Enter the height of a person in centimeter\n");
    scanf("%d", &height);

    if (height <= 150)
    {
        printf("Dwarf\n");
    }
    else if ((height > 150) && (height < 165))
    {
        printf("average height\n");
    }
    else if (height >= 165)
    {
        printf("tall\n");
    }
    return 0;
}