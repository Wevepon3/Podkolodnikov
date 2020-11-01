#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Rus");
	int x, k, n;
	printf("N - ");
	scanf_s("%d", &n);
	x = 0;
	k = 1;
	while ((x + k) < n)
	{
		k += 1;
		x += k;
	}
	printf("Минимальное - %d", k);
	printf("\n Сумма - %d", x);
}
