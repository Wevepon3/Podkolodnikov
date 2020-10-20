
#include<stdio.h>
#include<math.h>
main()
{
    int A, B, C, s;
    printf(" A = ");
    scanf_s("%d", &A);
    printf(" B = ");
    scanf_s("%d", &B);
    printf(" C = ");
    scanf_s("%d", &C);
    if (A > B > C)
    {
        s = A + B;
        printf("x = %d\n", s);
    }
    if ((A > B) && (B < C))
    {
        s = A + C;
        printf("x = %d\n", s);
    }
    if ((A < B) && (B > C))
    {
        s = B + C;
        printf("x = %d\n", s);
    }
    return 0;
}