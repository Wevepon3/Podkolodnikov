#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Rus");
	int N, K, L, i;
	float s;
	printf("Введите размер массива - ");
	scanf_s("%d", &N);
	int a[10];
	printf("\nВведите число К - ");
	scanf_s("%d", &K);
	printf("\nВведите число L - ");
	scanf_s("%d", &L);
	s = 0;
	for (i = 1; i <= N; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
	for (i = K; i <= L; i++)
	{
		s = s + a[i];
	}
	s = s / (L - K + 1);
	printf("Среднее значение - %.2f", s);
}
