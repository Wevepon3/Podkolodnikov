#include <stdio.h>
#include <math.h>
main()
{
	float a, b, S, F, G, J;
	printf("a - ");
	scanf_s("%f", &a);
	printf("\n b - ");
	scanf_s("%f", &b);

	printf("\n S = a + b");
	S = a + b;
	printf("\n %.2f S -", S);

	if (a > b)
	{
    printf("\n G = a - b");
	G = a - b;
	printf("\n %.2f G -", G);

	printf("\n J = (a*a) / (b*b)");
	J = (a*a) / (b*b);
	printf("\n %.2f J -", J);

	printf("\n F = a * b");
	F = a * b;
	printf("\n %.2f F -", F);
	}
	else
	{
		printf("\n G = b - a");
		G = b - a;
		printf("\n %.2f G -", G);

		printf("\n J = (b*b) / (a*a)");
		J = (b*b) / (a*a);
		printf("\n %.2f J -", J);

		printf("\n F = a * b");
		F = a * b;
		printf("\n %.2f F -", F);
	}
	

	
}
