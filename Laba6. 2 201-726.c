#include <stdio.h>
main()
{
	float A, B, C, X;
	printf("A = B, B = C, C = A");
	printf("\n A - ");
	scanf_s("%f", &A);
	printf("\n B - ");
	scanf_s("%f", &B);
	printf("\n C - ");
	scanf_s("%f", &C);
	X = A;
	A = B;
	B = C;
	C = X;
	printf("\n A - %.2f \n B - %.2f \n C - %.2f", A, B, C);
}



