#include <stdio.h>
#include <math.h>
main()
{
	float y, x;
	printf("y = 4 * ( x - 3)^6 - 7 * (x - 3)^3 + 2 ");
	printf("\n x - ");
	scanf_s("%f", &x);
	y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	printf("\n %.2f y = ", y);
}
