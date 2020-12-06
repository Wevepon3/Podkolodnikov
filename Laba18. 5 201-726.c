#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int n, i, x, k, a[10];
	printf("Введите размер массива -  ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("\n a[%d] - ", i);
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < n - 1; i++) {
		if (a[i] > a[i + 1]) {
			x = a[i];
			a[i] = a[i + 1];
			a[i + 1] = x;
		}
	}
	printf("\n Новый массив ");
	for (i = 0; i < n; i++)
		printf("\n a[%d] - %d", i, a[i]);
}
