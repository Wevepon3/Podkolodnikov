#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Rus");
    int a, b;
    printf("Введите число А ");
    scanf_s("%i", &a);
    printf("Введите число B ");
    scanf_s("%i", &b);
    int i, k;
    for (i = a; i <= b; ++i)
    {
        for (k = 1; k <= i; k++)
            printf("%i", i);
        printf("\n");
    }
}
