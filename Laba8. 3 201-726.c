#include <stdio.h>
#include <math.h>
main()
{
	float A, B, x, c;
	printf("A - ");
	scanf_s("%f", &A);
	printf("\n B - ");
	scanf_s("%f", &B);
     x = A / B;
	 x = floor(x);
	 c = A - B * x;
	printf("\n %.2f C - ", floor(c));
}
