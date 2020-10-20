#include<stdio.h>
#include<math.h>
 main()
{
    int V1, V2, S, S1, S2, T, K;
    float r;
    printf("V1 = ");
    scanf_s("%d", &V1);
    printf("V2 = ");
    scanf_s("%d", &V2);
    printf("S = ");
    scanf_s("%d", &S);
    printf("t  = ");
    scanf_s("%d", &T);
    S1 = V1 * T;
    S2 = V2 * T;
    K = S + S1 + S2;
    printf("S %d ch  ravno %d km \n", T, K);

}