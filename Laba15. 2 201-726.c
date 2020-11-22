#include <locale.h>
#include <stdio.h>
#include <math.h>
int sign(float x)
{
	if (x < 0)
		return -1;
	if (x == 0)
		return 0;
	if (x > 0)
		return 1;
}
main(void)
{
	float a, b, n;
	printf("A - ");
	scanf_s("%f", &a);
	printf("\nB - ");
	scanf_s("%f", &b);
	n = sign(a) + sign(b);
	printf("n - %.2f",n);
	return 0;
}
