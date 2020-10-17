#include <stdio.h>
#include <math.h>
main()
{
	float x1, x2, x3, y1, y2, y3, a, b, c, p, P, S;
	printf("S = sqrt(p * (p - a) * (p - b) * (p - c))");
	printf("\n P = a + b + c");
	printf("\n x1 - ");
	scanf_s("%f", &x1);
	printf("\n x2 - ");
	scanf_s("%f", &x2);
	printf("\n x3 - ");
	scanf_s("%f", &x3);
	printf("\n y1 - ");
	scanf_s("%f", &y1);
	printf("\n y2 - ");
	scanf_s("%f", &y2);
	printf("\n y3 - ");
	scanf_s("%f", &y3);
	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	P = a + b + c;
	printf("\n %.2f S = ", S);
	printf("\n %.2f P = ", P);
}
