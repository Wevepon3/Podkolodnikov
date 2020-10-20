#include<stdio.h>
#include<math.h>
main()
{
    float x, y;
    printf("x - ");
    scanf_s("%f", &x);
    printf("\n y - ");
    scanf_s("%f", &y);
    if ((x > 0) && (y > 0))
    {
        printf("Chetverty 1");
    }
    if ((x < 0) && (y > 0))
    {
        printf("Chetvert 2");
    }
    if ((x < 0) && (y < 0))
    {
        printf("Chetverty 3");
    }
    if ((x > 0) && (y < 0))
    {
        printf("ÒChetverty 4");
    }
}