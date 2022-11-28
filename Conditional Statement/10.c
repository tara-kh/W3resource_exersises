#include <stdio.h>
int main()
{

    int Math, Phy, Chem;
    int sum1, sum2;

    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &Math);

    printf("Input the marks obtained in Physics: ");
    scanf("%d", &Phy);

    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &Chem);

    sum1 = Math + Phy + Chem;
    sum2 = Math + Phy;

    if ((Math >= 65 && Phy >= 55 && Chem >= 50) && (sum1 >= 190 || sum2 >= 140))
    {
        printf("The candidate is eligible for admission.\n");
    }

    else
    {
        printf("The candidate is not eligible for admission.\n");
    }

    return 0;
}