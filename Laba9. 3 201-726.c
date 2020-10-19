#include <stdio.h>
#include <math.h>
main()
{
	int x, k;
	printf("k - ");
	scanf_s("%i", &x);
	k = 0;
	while (x > 6)
	{
		x = x - 7;
		k = k + 1;

	}
	printf("\n %i x - ", x);
	printf("\n %i k - ", k);
}

