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
	while ((A<B+C) && (B<A+C) && (C<A+B))
	{
		printf("Suheystvuet");
		return 0;
	}
}
