#include<stdio.h>
#include<math.h>
main()
{
    int A, B, C, a, x;
    printf(" A = ");
    scanf_s("%d", &A);
    printf(" B = ");
    scanf_s("%d", &B);
    printf(" C = ");
    scanf_s("%d", &C);
    a = abs(A - B);
    x = abs(A - C);
    if (a < x)
    {
        printf("B blige k A - %i", a);
    }
    else
    {
        printf("C blige k A - %i", x);
    }
}
