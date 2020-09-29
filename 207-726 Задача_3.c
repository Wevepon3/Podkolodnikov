#include <stdio.h>
main()
{
	float a, b, c;
	printf("c = (a + b)/2");
	printf("\n a - ");
	scanf_s("%f", &a);
	printf("\n b - ");
	scanf_s("%f", &b);
	c = (a + b) / 2;
	printf("%.2f", c);
}