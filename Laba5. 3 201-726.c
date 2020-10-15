#include <stdio.h>
#include <math.h>
main()
{
	float A, B, C;
	printf("D = AB + BC");
	printf("\n A - ");
	scanf_s("%f", &A);
	printf("\n B - ");
	scanf_s("%f", &B);
	C = (B - A) / 2;
	A = C - A;
	B - C - B;
	C = A * B;
	printf("\n %.2f AC = ", A);
	printf("\n %.2f BC = ", B);
	printf("\n %.2f D = ", C);
}
