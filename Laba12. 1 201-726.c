#include <locale.h>
#include <stdio.h>
#include <math.h>
main()
{
	setlocale(LC_ALL, "Rus");
	int x, y, z, g;
	printf("X (день) - ");
	scanf_s("%i", &x);
	printf("y (месяц) - ");
	scanf_s("%i", &y);
	g = x / 10; //десяток
	z = x % 10; //еденицы
	while ((x > 10) && (x < 20))
	{
		switch (x)
		{
		case(11):
			printf("Одиннадцатое ");
			break;
		case(12):
			printf("Двенадцатое ");
			break;
		case(13):
			printf("Тринадцатое ");
			break;
		case(14):
			printf("Четырнадцатое ");
			break;
		case(15):
			printf("Пятнадцатое ");
			break;
		case(16):
			printf("Шестнадцатое ");
			break;
		case(17):
			printf("Семнадцатое ");
			break;
		case(18):
			printf("Восемнадцатое ");
			break;
		case(19):
			printf("Девятнадцатое ");
			break;
		}

		break;
	}
		
	switch (g)
	{
	case(1):
		printf("Десятое ");
		break;
	case(2):
		printf("Двадцать ");
		break;
	case(3):
		printf("Тридцать ");
		break;
	}
	switch (z)
	{
	case(1):
		printf("Первое ");
		break;
	case(2):
		printf("Второе ");
		break;
	case(3):
		printf("Третье ");
		break;
	case(4):
		printf("Четвертое ");
		break;
	case(5):
		printf("Пятое ");
		break;
	case(6):
		printf("Шестое ");
		break;
	case(7):
		printf("Седьмое ");
		break;
	case(8):
		printf("Восьмое ");
		break;
	case(9):
		printf("Девятое ");
	}

	switch (y)
	{
	case(1):
		printf("Января");
		break;
	case(2):
		printf("Февраля");
		break;
	case(3):
		printf("Марта");
		break;
	case(4):
		printf("Апреля");
		break;
	case(5):
		printf("Мая");
		break;
	case(6):
		printf("Июня");
		break;
	case(7):
		printf("Июля");
		break;
	case(8):
		printf("Августа");
		break;
	case(9):
		printf("Сентября");
		break;
	case(10):
		printf("Октября");
		break;
	case(11):
		printf("Ноября");
		break;
	case(12):
		printf("Декабря");
		break;
	}
}
