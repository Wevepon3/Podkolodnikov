#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int a[10], n, i, min=0, max=0;
    printf("Размер массива - ");
    scanf_s("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("a[%d] - ", i);
        scanf_s("%d",&a[i]);
    }
    min = a[1];
    max = a[1];
    for (i = 2; i <= n; i++)
    {
        if (a[min] < a[i - 1])
        {
            a[i - 1] = 0;
            i++;
        }
        if (a[max] > a[i])
        {
            a[i + 1] = 0;
            i++;
        }
    }
    printf("\na - %i", n);
    for (i = 1; i <= n; i++)
        printf("\na[%i] - %i", i, a[i]);
    return 0;
}
