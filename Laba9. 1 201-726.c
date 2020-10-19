#include <stdio.h>
#include <math.h>
main()
{
	float N, x;
	printf("N - ");
	scanf_s("%f", &N);
	x = N / 60;
	x = floor(x);
	x = N - x * 60;
	printf("\n %.2f", x);
}
