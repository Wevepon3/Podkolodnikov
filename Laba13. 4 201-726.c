#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
    setlocale(LC_ALL, "Rus");
    int n, a;
    printf("������� ����� N - ");
    scanf_s("%i", &n);
    printf("������� ����� A - ");
    scanf_s("%i", &a);
    float q = 1;
    int i;
    for (i = 1; i <= n; i++)
      q = q + pow(i, a);

    printf("����� �����  = %.2f \n ", q);
    return 0;
}
