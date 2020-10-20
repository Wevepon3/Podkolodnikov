#include <stdio.h>
#include <math.h>
main()
{
	int A, B, C;
	printf("A - ");
	scanf_s("%i", &A);
	printf("\n B - ");
	scanf_s("%i", &B);
	printf("\n C - ");
	scanf_s("%i", &C);
	if ((A * A + B * B == C * C) || (B * B + C * C == A * A) || (C * C + A * A == B * B))
	{
		printf("Pramougolnuy");
		return 0;
	}
}
