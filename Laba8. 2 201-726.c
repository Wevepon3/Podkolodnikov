#include <stdio.h>
#include <math.h>
main()
{
	float A, B, x;
	printf("A - ");
	scanf_s("%f", &A);
	printf("\n B - ");
	scanf_s("%f", &B);
     x = A / B;
	printf("\n %.2f x - ", floor(x));
}
