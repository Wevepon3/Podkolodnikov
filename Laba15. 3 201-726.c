#include <locale.h>
#include <stdio.h>
#include <math.h>
float RingS(float R1, float R2)
{
	return 3.14*(R1 * R1 - R2 * R2);
}
int main(void)
{
	float R1, R2;
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("\n A- ");
		scanf_s("%f", &R1);
		printf(" B - ");
		scanf_s("%f", &R2);
		printf("\n N - %.2f", RingS(R1, R2));
	}
}
