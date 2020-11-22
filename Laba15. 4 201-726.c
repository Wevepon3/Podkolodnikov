#include <locale.h>
#include <stdio.h>
#include <math.h>
int Quarter(float x, float y)
{
	if ((x > 0) && (y > 0))
		return 1;
	if ((x < 0) && (y > 0))
		return 2;
	if ((x > 0) && (y < 0))
		return 4;
	if ((x < 0) && (y < 0))
		return 3;
}
main(void)
{
	setlocale(LC_ALL, "Rus");
	float x, y;
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("\n X - ");
		scanf_s("%f", &x);
		printf(" Y - ");
		scanf_s("%f", &y);
		printf("\n Четверть - %i", Quarter(x,y));
	}
}
