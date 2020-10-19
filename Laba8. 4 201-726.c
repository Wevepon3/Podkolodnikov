#include <stdio.h>
#include <math.h>
main()
{
	float A, B, x, c;
	printf("A - ");
	scanf_s("%f", &A);
	B = 10;
	x = A / B;
	x = floor(x);
	c = A - B * x;
	c = floor(c);
	c = 10 * c + x;
	printf("\n %.0f C - ", floor(c));
}
