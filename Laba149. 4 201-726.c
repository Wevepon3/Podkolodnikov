#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int a[10], n, i;
    printf("Размер массива - ");
    scanf_s("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("a[%d] - ", i);
        scanf_s("%d",&a[i]);
    }
    for (i = 1; i <= n; i++)
    {
        if (a[i]<0)
        {
            a[i + 1] = 0;
            i++;;
        }
    }
    printf("\na - %i", n);
    for (i = 1; i <= n; i++)
        printf("\na[%i] - %i", i, a[i]);
    return 0;
}
