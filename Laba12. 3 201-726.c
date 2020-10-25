#include <stdio.h> 
#include <locale.h>
main()
{
    setlocale(LC_ALL, "Rus");
    int x, m, k, k1;
    printf("Введите число - ");
    scanf_s("%i", &x);
    k = x / 10; //десяток 
    k1 = x % 10; //еденицы 
    if ((x >= 10) && (x < 20))
        switch (x)
        {
        case(10):
            printf("Десять ");
            break;
        case(11):
            printf("Одиннадцать ");
            break;
        case(12):
            printf("Двенадцать ");
            break;
        case(13):
            printf("Тринадцать ");
            break;
        case(14):
            printf("Четырнадцать ");
            break;
        case(15):
            printf("Пятнадцать ");
            break;
        case(16):
            printf("Шестнадцать ");
            break;
        case(17):
            printf("Семнадцать ");
            break;
        case(18):
            printf("Восемнадцать ");
            break;
        case(19):
            printf("Девятнадцать ");
            break;
        }
    if (x == 30)
    {
        printf("Тридцать ");
        return 0;
    }
    if (x == 40)
    {
        printf("Сорок ");
        return 0;
    }
    switch (k)
    {
    case(2):
        printf("Двадцать ");
        break;
    case(3):
        printf("Тридцать ");
        break;
    }
    if ((x != 11) && (x != 12) && (x != 13) && (x != 14) && (x != 15) && (x != 16) && (x != 17) && (x != 18) && (x != 19))
        switch (k1)
        {
        case(1):
            printf("одно");
            break;
        case(2):
            printf("два ");
            break;
        case(3):
            printf("три");
            break;
        case(4):
            printf("четыре");
            break;
        case(5):
            printf("пять ");
            break;
        case(6):
            printf("шесть ");
            break;
        case(7):
            printf("семь ");
            break;
        case(8):
            printf("восемь ");
            break;
        case(9):
            printf("девять ");
        }
    if ((x == 21) || (x == 31))
    {
        printf("учебное задание");
    }
    if ((x == 22) || (x == 32))
    {
        printf("учебных задания");
    }
    if ((x != 22) && (x != 32) && (x != 21) && (x != 31))
    {
        printf("учебных заданий");
    }
    return 0;
}