#include <stdio.h>
#include <math.h>
main()
{
	float A, B;
	printf("A - ");
	scanf_s("%f", &A);
	printf("B - ");
	scanf_s("%f", &B);
	while (A > 2 && B <=3)
	{
		printf("Istino");
		return 0;
	}
	printf("Ne istino");
}

