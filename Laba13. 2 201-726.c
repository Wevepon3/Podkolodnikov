#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Rus");
	int N;
	float x, y, z;
	printf("N  - ");
	scanf_s("%i", &N);
	y = 0;
	while ( y <= N)
	{ 
		z = y;
		y = y + 0.1;
		x = z * y;
		printf("X - %.1f\n", x);
	}
}
