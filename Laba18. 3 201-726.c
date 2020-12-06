#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int n, i, k, a[10];
	printf("Введите размер массива - ");
	scanf_s("%d",&n);
	for (i = 1; i <= n; i++)
	{
		printf("\n a[%d] - ", i);
		scanf_s("%d", &a[i]);
	}
	k = 0;
	for (i = 1; i <= n; i++)
	{
		if (a[i] % 2 != 0)
			k = a[i];
	}
	for (i = 1; i <= n; i++)
	{
		if (a[i] % 2 != 0)
			a[i] += k;
	}
	if (k == 0)
	{
		printf("\n Нет нечетных чисел");
		for (i = 1; i <= n; i++)
		{
			printf("\n a[%d] - %d", i, a[i]);
		}
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			printf("\n a[%d] - %d", i, a[i]);
		}
	}
}
