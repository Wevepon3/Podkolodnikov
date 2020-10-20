#include<stdio.h>
#include<math.h>
main()
{
    int A, f;
    printf("A = ");
    scanf_s("%d", &A);
    if (A == 0)
    {
        printf("Nulevoe chislo\n");
    }
    f = A % 2;
    if ((f == 0) && (A != 0))
    {
        printf("Chislo chetnoe\n");
    }
    if (f == 1)
    {
        printf("Chislo ne chetnoe\n");
    }
    if (A > 0)
    {
        printf("Chislo pologitelnoe\n");
    }
    if (A < 0)
    {
        printf("Chislo otricatelnoe\n");
    }
}