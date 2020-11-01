#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Rus");
	int p, x, k;
	printf("P - ");
	scanf_s("%i", &p);
	x = 1000;
	k = 0;
	if (p < 25 && p > 0)
	{
        while (x <= 1100)
		{
			x =  x + x * p / 100;
			k += 1;
		}
	}
	printf("Месяц - %d", k);
	printf("\n Cумма - %d", x);
}
