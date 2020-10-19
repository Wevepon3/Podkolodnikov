#include <stdio.h>
#include <math.h>
main()
{
	float A, B, C;
	printf("A - ");
	scanf_s("%f", &A);
	printf("B - ");
	scanf_s("%f", &B);
	printf("C - ");
	scanf_s("%f", &C);
	while (A < B && B < C)
	{
		printf("Istino");
		return 0;
	}
	printf("Ne istino");
}

