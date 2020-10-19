#include <stdio.h>
#include <math.h>
main()
{
	float A, B, C;
	printf("A - ");
	scanf_s("%f", &A);
	while (9 < A && A < 100)
	{
		printf("Istino");
		return 0;
	}
	printf("Ne istino");
}

