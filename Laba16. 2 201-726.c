#include <locale.h>
#include <stdio.h>
#include <math.h>
main()
{
    int N, A, D;
    int s[10];
    int i = 1;
    printf("N = ");
    scanf_s("%d", &N);
    printf("A = ");
    scanf_s("%d", &A);
    printf("D = ");
    scanf_s("%d", &D);
    s[1] = A;
    for (i = 2; i <= N; i++, D *= D)
    {
        s[i] = A * D;
    }
    for (i = 1; i <= N; i++)
    {
        printf("a[%d] = %d\n", i, s[i]);
    }
}
