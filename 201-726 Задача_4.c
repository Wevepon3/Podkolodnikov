#include <stdio.h>
main()
{
	float a, b, G, H, J, K;
	printf("\n a - ");
	scanf_s("%f", &a);
	printf("\n b - ");
	scanf_s("%f", &b);
	printf("G = a + b");
	G = a + b;
	printf("\n G - %.2f", G);
	printf("\n H = a * b");
	H = a * b;
	printf("\n H - %.2f", H);
	if (a > b)
	{
		printf("\n J = a - b");
		J = a - b;
		printf("\n G - %.2f", J);
		printf("\n K = (a * a) / (b * b)");
		J = (a * a) / (b * b);
		printf("\n G - %.2f", J);
	}
	else
	{
		printf("\n J = b - a");
		J = b - a;
		printf("\n G - %.2f", J);
		printf("\n K = (b * b) / (a * a)");
		J = (b * b) / (a * a);
		printf("\n G - %.2f", J);
	}

}
