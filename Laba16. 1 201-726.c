#include <locale.h>
#include <stdio.h>
#include <math.h>
main()
{
    int N;
    int a[1];
    int i = 1;
    int z = 1;
    printf("N = ");
    scanf_s("%d", &N);
    for (i = 1; i <= N; i++, z += 2)
    {
        a[i] = z;
    }
    for (i = 1; i <= N; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}
