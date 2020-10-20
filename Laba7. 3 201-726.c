#include<stdio.h>
#include<math.h>
main()
{
    int X, A, Y, k, k2;
    float r;
    printf("Izvestno   ");
    scanf_s("%d", &X);
    printf("Kg stoit konhpet ");
    scanf_s("%d", &A);
    printf("rubley\n");
    k = A / X;
    printf("Nayti stoimost dla  ");
    scanf_s("%d", &Y);
    printf("кг\n");
    k2 = k * Y;
    printf("1 kg konphet stoit %d\n", k);
    printf("%d kg konphet stoit %d\n", Y, k2);

}