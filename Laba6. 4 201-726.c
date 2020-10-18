#include <stdio.h>
#include <math.h>
main()
{
	float y, x;
	printf("y = 3x^6 - 6x^2 - 7 ");
	printf("\n x - ");
	scanf_s("%f", &x);
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	printf("\n %.2f y = ", y);
}




