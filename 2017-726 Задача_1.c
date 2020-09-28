#include <stdio.h>
main()
{
	int a, b, S;
	printf("S = a * b");
	printf("\na - ");
	scanf_s("%i", &a);
	printf("b - ");
	scanf_s("%i", &b);
	S = a * b;
	printf("%i ", S);
}