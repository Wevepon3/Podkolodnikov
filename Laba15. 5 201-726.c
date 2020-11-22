#include <locale.h>
#include <stdio.h>
#include <math.h>
float Fact2(int N)
{
	int d = 1;
	for (; N > 0; N = N - 2)
		d = d * N;
	return d;
}
int main(void)
{
    setlocale(LC_ALL, "Rus");
    int i, N;
    for (i = 1; i <= 2; i++)
    {
        printf("N= ");
        scanf_s("%d", &N);
        printf("двойной факториал = %.f\n", Fact2(N));
    }
}
