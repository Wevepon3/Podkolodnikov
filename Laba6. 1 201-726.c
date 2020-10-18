#include <stdio.h>
main()
{
	float A, B, X;
	printf("A = B, B = A");
	printf("\n A - ");
	scanf_s("%f", &A);
	printf("\n B - ");
	scanf_s("%f", &B);
	X = B;
	B = A;
	A = X;
	printf("\n A - %.2f \n B - %.2f", A, B);
}


