#include <stdio.h> 
#include <locale.h>
main()
{
    setlocale(LC_ALL, "Rus");
    int N, k, k1;
    char C, v;
    printf("C���� - N, B����� - E, �� - S, ����� - W");
    printf("\n ������� C - ");
    scanf_s("%c", &C);
    printf("\n ������� N - ");
    scanf_s("%i", &N);
    if (((C == 'N') || (C == 'S')) && (N == 1))
    {
        v = 'W';
    }
    if (((C == 'N') || (C == 'S')) && (N == -1))
    {
        v = 'E';
    }
    if ((C == 'N') && (N == 0))
    {
        v = 'N';
    }
    if ((C == 'S') && (N == 0))
    {
        v = 'S';
    }
    if (((C == 'W') || (C == 'E')) && (N == 1))
    {
        v = 'S';
    }
    if (((C == 'W') || (C == 'E')) && (N == -1))
    {
        v = 'N';
    }
    if ((C == 'W') && (N == 0))
    {
        v = 'W';
    }
    if ((C == 'E') && (N == 0))
    {
        v = 'E';
    }
    printf("�������� ����������� = %c", v);
    return 0;
}