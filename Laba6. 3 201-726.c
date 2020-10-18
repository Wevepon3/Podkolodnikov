#include <stdio.h>
main()
{
	float A, B, C, X, Z;
	printf("A = C, B = A, C = B");
	printf("\n A - ");
	scanf_s("%f", &A);
	printf("\n B - ");
	scanf_s("%f", &B);
	printf("\n C - ");
	scanf_s("%f", &C);
	X = B;
	Z = A;
    A = C;
	B = Z;
	C = X;
	printf("\n A - %.2f \n B - %.2f \n C - %.2f", A, B, C);
}



