#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Rus");
    int a, b, h;
    printf("Введите число А ");
    scanf_s("%i", &a);
    printf("Введите число B ");
    scanf_s("%i", &b);
    h = a;
    while (h > b)
    {
        h = h - b;
    }
    printf("остаток = %d", h);
    return 0;
}
