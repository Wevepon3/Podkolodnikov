#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Rus");
	int K, N, D;
	printf("Введите день этого года - ");
	scanf_s("%d", &K);
	printf("Введите каким номером было 1 января - ");
	scanf_s("%d", &N);
	D = ((K + N - 2) % 7) + 1;
	printf("День недели - %d", D);
}


