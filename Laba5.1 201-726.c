#include <stdio.h>
#include <math.h>
main()
{
	float x1, x2, y1, y2, AB;
	printf("(AB)^2 = (X2-X1)^2 + (y2-y1)");
	printf("\n x1 - ");
	scanf_s("%f", &x1);
	printf("\n x2 - ");
	scanf_s("%f", &x2);
	printf("\n y1 - ");
	scanf_s("%f", &y1);
	printf("\n y2 - ");
	scanf_s("%f", &y2);
	AB = pow((x2 - x1), 2) + pow((y2 - y1), 2);
	AB = sqrtf(AB);
	printf("\n %.2f AB - ", AB);
	AB = AB * (-1);
	printf("\n %.2f AB - ", AB);
}
