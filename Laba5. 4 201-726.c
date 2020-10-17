
#include <stdio.h>
#include <math.h>
main()
{
	float x1, x2, y1, y2, a, b, P, S;
	printf("S = a * b");
	printf("\n P = (a + b)*2");
	printf("\n x1 - ");
	scanf_s("%f", &x1);
	printf("\n x2 - ");
	scanf_s("%f", &x2);
	printf("\n y1 - ");
	scanf_s("%f", &y1);
	printf("\n y2 - ");
	scanf_s("%f", &y2);
	a = x2 - x1;
	a = abs(a);

	b = y2 - y1;
	b = abs(b);

	P = (a + b) * 2;
	S = a * b;
	printf("\n %.2f S = ", S);
	printf("\n %.2f P = ", P);
}

