#include <stdio.h>
#include <math.h>
main()
{
	float x, a;
	printf("Byt a - ");
	scanf_s("%f", &a);
     x = a / 1024;
	printf("\n %.2f KB - ", ceil(x));

}
