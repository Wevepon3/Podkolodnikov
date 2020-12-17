#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int a[10], n, i, b, j, k, x;
    printf("Размер массива - ");
    scanf_s("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("a[%d] - ", i);
        scanf_s("%d",&a[i]);
    }
    for (i = 1; i <= n; i++)
    {
        x = 0;
        for (j = 1; j <= n; j++)
        {
            if (a[i] == a[j])
            {
                x=x+1;
            }
            if (x == 2)
            {
                k = i - 1;
                b = a[i];
                for (j = i; j <= n; j++)
                {
                    if (a[j] != a[i])
                    {
                        k++;
                        a[k] = a[j];
                    }
                    n = k + 1;
                    i--;
                }
            }
        }
    }
    printf("\na - %i", n);
    for (i = 1; i < n; i++)
        printf("\na[%i] - %i", i, a[i]);
    return 0;
}
