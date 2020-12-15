#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int a[10], k = 0, n, i;
    printf("Размер массива - ");
    scanf_s("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("a[%d] - ", i);
        scanf_s("%d",&a[i]);
    }
    for (i = 1; i <= n; i++)
    {
        if (a[k] != a[i])
        {
            k++;
            a[k] = a[i];
        }
    }
    for (i = 1; i <= k; i++)
    {
        printf("\na[%d] - %d", i, a[i]);
    }
}
