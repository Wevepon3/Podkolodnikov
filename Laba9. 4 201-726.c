#include <stdio.h>
#include <math.h>
main()
{
	float A, B, C, x, y, z, c;
	printf("A - ");
	scanf_s("%f", &A);
	printf("\n B - ");
	scanf_s("%f", &B);
	printf("\n C - ");
	scanf_s("%f", &C);
	x = A * B;
	y = C * C;
	z = x / y;
	z = floor(z);
	c = x - z * y;
	printf("\n z - %.2f \n c - %.2f", z, c);

}

