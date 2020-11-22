#include <locale.h>
#include <stdio.h>
#include <math.h>
main()
{
    int N, A, B, j;
    int s[10];
    int i = 1;
    printf("N = ");
    scanf_s("%d", &N);
    printf("A = ");
    scanf_s("%d", &A);
    printf("B = ");
    scanf_s("%d", &B);
    s[1] = A;
    s[2] = B;
    for (i = 3; i <= N; i++)
    {
        s[i] = 0;
        for (j = 1; j <= i - 1; j++)
        {
            s[i] = s[i] + s[j];
        }
    }
    for (i = 1; i <= N; i++)
    {
        printf("a[%d] = %d\n", i, s[i]);
    }
}
