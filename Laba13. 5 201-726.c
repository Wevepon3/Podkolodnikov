#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
    setlocale(LC_ALL, "Rus");
    int i, N;
    float A, P, S;
    printf("A - ");
    scanf_s("%f", &A);
    printf("N - ");
    scanf_s("%i", &N);
    P = 1;
    S = 1;
    for (i = 0; i <= N; i++)
    {
        P = -P * A;
        S = S + P; 
    }
    printf("S - %.1f", S);
}
