#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int n, i, x, N;
	int a[10], b[10];
	printf("Максимальное число разрядов - ");
	scanf_s("%d", &N);
	for (i = 1; i <= N; i++)
	{
		printf("a[%d] - ", i);
		scanf_s("%d", &a[i]);
	}
	printf("\n");
	for (i = 1; i <= N; i++)
	{
		printf("b[%d] - ", i);
		scanf_s("%d", &b[i]);
	}
	for (i = 1; i <= N; i++)
	{
		x = a[i];
		a[i] = b[i];
		b[i] = x;
	}
	printf("\n Новые массивы");
	for (i = 1; i <= N; i++)
	{
		printf("\n a[%d] - %d", i, a[i]);
	}
	printf("\n");
	for (i = 1; i <= N; i++)
	{
		printf("\n b[%d] - %d", i, b[i]);
	}
}
