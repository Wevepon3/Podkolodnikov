#include <stdio.h>
#include <math.h>
main()
{
	float A, x, y;
	printf("A^15 = x");
	printf("\n A - ");
	scanf_s("%f", &A);
	x = pow(A, 2);
	y = pow(A, 3);
	A = pow(A, 2) * pow(A, 2);
	x = x * x; 
	A = A * x; 
	A = A * x;
	A = A * y;
	printf("\n %.2f x = ", A);
}
