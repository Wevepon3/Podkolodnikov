#include <stdio.h> 
#include <locale.h>
main()
{
    setlocale(LC_ALL, "Rus");
    int x, m, k, k1;
    printf("������� ����� - ");
    scanf_s("%i", &x);
    k = x / 10; //������� 
    k1 = x % 10; //������� 
    if ((x >= 10) && (x < 20))
        switch (x)
        {
        case(10):
            printf("������ ");
            break;
        case(11):
            printf("����������� ");
            break;
        case(12):
            printf("���������� ");
            break;
        case(13):
            printf("���������� ");
            break;
        case(14):
            printf("������������ ");
            break;
        case(15):
            printf("���������� ");
            break;
        case(16):
            printf("����������� ");
            break;
        case(17):
            printf("���������� ");
            break;
        case(18):
            printf("������������ ");
            break;
        case(19):
            printf("������������ ");
            break;
        }
    if (x == 30)
    {
        printf("�������� ");
        return 0;
    }
    if (x == 40)
    {
        printf("����� ");
        return 0;
    }
    switch (k)
    {
    case(2):
        printf("�������� ");
        break;
    case(3):
        printf("�������� ");
        break;
    }
    if ((x != 11) && (x != 12) && (x != 13) && (x != 14) && (x != 15) && (x != 16) && (x != 17) && (x != 18) && (x != 19))
        switch (k1)
        {
        case(1):
            printf("����");
            break;
        case(2):
            printf("��� ");
            break;
        case(3):
            printf("���");
            break;
        case(4):
            printf("������");
            break;
        case(5):
            printf("���� ");
            break;
        case(6):
            printf("����� ");
            break;
        case(7):
            printf("���� ");
            break;
        case(8):
            printf("������ ");
            break;
        case(9):
            printf("������ ");
        }
    if ((x == 21) || (x == 31))
    {
        printf("������� �������");
    }
    if ((x == 22) || (x == 32))
    {
        printf("������� �������");
    }
    if ((x != 22) && (x != 32) && (x != 21) && (x != 31))
    {
        printf("������� �������");
    }
    return 0;
}