#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
    setlocale(LC_ALL, "Rus");
    int n, a;
    printf("¬ведите число N - ");
    scanf_s("%i", &n);
    printf("¬ведите число A - ");
    scanf_s("%i", &a);
    float q = 1;
    int i;
    for (i = 1; i <= n; i++)
      q = q + pow(i, a);

    printf("—умма равна  = %.2f \n ", q);
    return 0;
}
