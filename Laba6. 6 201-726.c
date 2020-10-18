#include <stdio.h>
#include <math.h>
main()
{
	float A, x;
	printf("A^8 = x");
	printf("\n A - ");
	scanf_s("%f", &A);
	x = pow(A, 2);
	A = pow(A, 2) * pow(A, 2);
	x = x * x;
	A = A * x;
	printf("\n %.2f x = ", A);
}
