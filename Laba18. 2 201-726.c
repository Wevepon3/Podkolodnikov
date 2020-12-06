#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int n, i, sum;
	printf("Введите размер массива - ");
	scanf_s("%d",&n);
	float a[10], b[10];
	for (i = 1; i <= n; i++)
	{
		printf("\n a[%d] - ", i);
		scanf_s("%f", &a[i]);
	}
	sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum = sum + a[i];
		b[i] = (float)sum / (float)i;
	}
	printf("\n Новый массив");
	for (i = 1; i <= n; i++)
		printf("\n b[%d] - %.2f", i, b[i]);
}
