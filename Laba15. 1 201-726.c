#include <locale.h>
#include <stdio.h>
#include <math.h>
void powerA3(float a, float *b)
{
	*b = a * a * a;
}
int main(void)
{
	setlocale(LC_ALL, "Rus");
	int i;
	float a;
	for (i = 1; i <= 5; i++)
	{   
		printf("A - ");
		scanf_s("%f", &a);
		float b;
		powerA3(a, &b);
		printf("B =  %.2f \n", b);
	}
}
