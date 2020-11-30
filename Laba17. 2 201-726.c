#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int i, n, n1, k;
    printf("Введите размер массива - ");
    scanf_s("%i", &n);
    n1 = n - 1;
    int arr[10], arr1[10];
    for (i = 0; i < n; i++)
    {
        printf("Элемент массива - ");
        scanf_s("%i",&arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        arr1[i] = arr[i + 1] - arr[i];
    }
    i = 0;
    k = arr1[i];
    while (k == arr1[i + 1] && i < n1 - 1) 
    {
        i++;
    }
    k = arr1[i];
    if (i == n1 - 1 && k == arr1[i - 1])
    {
        printf("Разность прогрессии - %i", arr1[i]);
    }
    else
    {
        printf("Не является прогрессией");
    }
}
