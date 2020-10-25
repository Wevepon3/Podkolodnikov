#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Rus");
	int N;
	float x, y;
	printf("Цена  - ");
	scanf_s("%i", &N);
	for (y = 0; y <= 1; y = y + 0.2)
	{ 
		x = N * y;
		printf("Цена %.1fкг конфет за %.2f \n", y, x);
	}
}
