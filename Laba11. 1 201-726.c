#include <stdio.h>
#include <math.h>
main()
{
	int A, B, x;
	printf("A - ");
	scanf_s("%i", &A);
	printf("\n B - ");
	scanf_s("%i", &B);
	while (A != B)
	{
		if (A > B)
		{
			B = A;
			printf("A - %i , B - %i", A, B);
			return 0;
		}
		else
		{
			A = B;
			printf("A - %i , B - %i", A, B);
			return 0;
		}
	}
	A = 0;
	B = 0;
	printf("A - %i , B - %i", A, B);
}