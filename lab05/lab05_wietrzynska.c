//1 czego nie robic
#include <stdio.h>
int main()
{
	int n;

	printf("Program testuje bledny);
		printf(" warunek if.\n");
	printf("Autor: Dorota Dabrowska.\n");
	printf("Podaj liczbe calkowita:\t");
	scanf("%d", &n);
	if (abs(n) >= 0)
	{
		printf("\nWarunek prawdziwy.");
	}
	else
	{
		printf("\nWarunek falszywy.");
	}

	printf("\n\nKoniec programu.\n");
	return 0;
}

//2 czego nie robic
#include <stdio.h>
int main()
{
	double x = 0.5;
	int y = x;

	printf("Program testuje anomalie);
		printf("zwiazane z przeksztalcaniem);
			printf(" typow.\n");
	printf("Autor: Dorota Dabrowska.\n");

	if (x == y)
	{
		printf("Wart. x, y sa rowne.");
	}
	else
	{
		printf("Wart. x, y nie sa rowne.");
	}

	printf("\n\nKoniec programu.\n");
	return 0;
}

//3 czego nie robic
#include <stdio.h>
int main()
{
	int x = -2;
	unsigned int y = x;

	printf("Program testuje reakcje pro");
	printf("gramu na probe przypisania");
	printf("wartosci ujemnej do zmien\n");
	printf("nej o typie przystosowanym");
	printf("do\nprzechowywania jedynie");
	printf("wartosci nieujemnych.");
	printf("Autor: Dorota Dabrowska.\n");
	if (y < 0)
	{
		printf("Zmienna y ma wartosc ");
		printf("ujemna.\n");
	}
	else
	{
		printf("Zmienna y ma wartosc ");
		printf("nieujemna.\n");
	}
	printf("Przy znaku przeksztalcenia");
	printf(" %%d (to nie jest poprawne");
	printf(" formatowanie) y= %d.\n", y);
	printf("Przy znaku przeksztalcenia");
	printf(" %%u (to jest poprawne ");
	printf("formatowanie) y= %u.", y);
	printf("\n\nKoniec programu.\n");
	return 0;
}

//4 dzielenie przez zero
#include <stdio.h>
int main()
{
	int x = 1 / 0;

	printf("Program testuje reakcje");
		printf("programu na dzielenie przez");
			printf("zero.\n");
	printf("Autor: Dorota Dabrowska.\n");
	printf("Wynik: %d", x);
	printf("\n\nKoniec programu.\n");
	return 0;
}

//5 dzielenie przez zero
#include <stdio.h>
int main()
{
	double x = 1, y = 0;
	double z = x / y;

	printf("Program testuje reakcje\n");
	printf("programu na dzielenie przez\n");
	printf("zero.\n");
	printf("Autor: Dorota Dabrowska.\n");
	printf("Wynik: %lf", z);
	printf("\n\nKoniec programu.\n");
	return 0;
}
//dzielenie przez zero przy typie cal to blad,
//a gdy zmiennopozycyjne to nie jest blad


//34
#include <stdio.h>
#include <math.h>

int main()
{
	double x;
	printf("Program... Autor...\n");
	printf("Podaj liczbe\n");
	while (scanf_s("%lf", &x) != 1 || getchar() != '\n')  //tutaj bez srednika!!!
	{
		printf("Bledne dane. Popraw.\n");

		char character = getchar();
		while (character != '\n')
		{
			character = getchar();
		}
	}
	if (x >= 0)
	{
		double temp1 = x * x + 1; //zmienna pomocnicza1, uzywamy gdy sie powtarza wyrazenie
		double temp2 = sin(temp1); //zmienna pomocnicza2
		double fx = sqrt(temp1) + log(temp1) / (5 + sin(temp1)) - exp(sin(temp1));
		printf("Wynik funkcji f(x): %lf\n", fx);
		printf("Koniec programu.\n");
	}
	else
	{
		printf("Bledne dane. Koniec programu\n");
		return 0;
	}
}

//35
#include <stdio.h>
#include <math.h>

int main()
{
	double x;
	printf("Program...Autor...\n");
	printf("Podaj liczbe\n");
	while (scanf_s("%lf", &x) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");

		char character = getchar();
		while (character != '\n')
		{
			character = getchar();
		}
	}
	x *= x;
	x *= x;
	x *= x; //x^8 
	printf("Wynik %lf", x);
	printf("Koniec programu.\n");
	return 0;
}

//36
#include <stdio.h>
#include <math.h>

int main()
{
	double x;
	printf("Program...Autor...\n");
	printf("podaj liczbe\n");
	while (scanf_s("%lf", &x) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw.\n");

		char character = getchar();
		while (character != '\n')
		{
			character = getchar();
		}
	}
	double temp = x - 2;
	temp * (13 + temp * (17 + (23 * temp)));
	printf("Wynik %lf\n", temp);
	printf("Koniec programu.\n");
	return 0;
}

//37
#include <stdio.h>
#include <math.h>

int main()
{
	double x;
	double y;
	printf("Program...Autor...\n");
	printf("Podaj pierwsza wspolrzedna.\n");
	while (scanf_s("%lf", &x) != 1 || fabs(x) > 1 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");

		char character = getchar();
		while (character != '\n')
		{
			character = getchar();
		}
	}

	printf("Podaj druga wspolrzedna.\n");
	while (scanf_s("%lf", &y) != 1 || fabs(y) > 1 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");

		char character2 = getchar();
		while (character2 != '\n')
		{
			character2 = getchar();
		}
	}
	printf("Podales wspolrzedne (%lf,%lf)\n", x, y);
	double temp1 = x * x + y * y;
	double fx = y + sqrt(temp1) + temp1 / cos(x*x);
	printf("Wynik %lf", fx);
}

//38
//konstrukcja if-else
#include <stdio.h>
#include <math.h>

int main()
{
	int number1;
	int number2;
	int number3;
	printf("Program... Autor...\n");
	printf("Podaj pierwsza liczbe.\n");
	while (scanf_s("%d", &number1) != 1 || getchar() != '\n') //pamietaj o &
	{
		printf("Bledne dane. Popraw\n");
		char character1 = getchar();
		while (character1 != '\n')
		{
			character1 = getchar();
		}
	}
	printf("Podaj druga liczbe.\n");
	while (scanf_s("%d", &number2) != 1 || getchar() != '\n') //pamietaj o &
	{
		printf("Bledne dane. Popraw\n");
		char character2 = getchar();
		while (character2 != '\n')
		{
			character2 = getchar();
		}
	}
	printf("Podales liczby %d, %d\n", number1, number2);
	printf("Wybierz jedno z 4 dzialan wprowadzajac odpowiednia cyfre.\n");
	printf("1 dodawanie 2 odejmowanie 3 mnozenie 4 dzielenie\n");
	while (scanf_s("%d", &number3) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
			char character3 = getchar();
		while (character3 != '\n')
		{
			character3 = getchar();
		}
	}
	if (number3 == 1)
	{
		printf("Dodawanie: %d\n", number1 + number2);
	}
	else
	{
		if (number3 == 2)
		{
			printf("Odejmowanie: %d\n", number1 - number2);
		}
		else 
		{
			if (number3 == 3)
			{
				printf("Mnozenie: %d\n", number1 * number2);
			}
			else
			{
				if (number3 == 4 && number2 != 0)
				{
					printf("Dzielenie: %d\n", number1 / number2);
				}
				else
				{
					printf("Bledne dane: dzielenie przez zero. Koniec programu.\n");
					return 0;
				}
			}
		}
	}
		printf("Koniec programu.\n");
		return 0;
}

//konstrukcja switch
#include <stdio.h>
#include <math.h>

int main()
{
	int number1;
	int number2;
	int number3;
	printf("Program... Autor...\n");
	printf("Podaj pierwsza liczbe.\n");
	while (scanf_s("%d", &number1) != 1 || getchar() != '\n') //pamietaj o &
	{
		printf("Bledne dane. Popraw\n");
		char character1 = getchar();
		while (character1 != '\n')
		{
			character1 = getchar();
		}
	}
	printf("Podaj druga liczbe.\n");
	while (scanf_s("%d", &number2) != 1 || getchar() != '\n') //pamietaj o &
	{
		printf("Bledne dane. Popraw\n");
		char character2 = getchar();
		while (character2 != '\n')
		{
			character2 = getchar();
		}
	}
	printf("Podales liczby %d, %d\n", number1, number2);
	printf("Wybierz jedno z 4 dzialan wprowadzajac odpowiednia cyfre.\n");
	printf("1 dodawanie 2 odejmowanie 3 mnozenie 4 dzielenie\n");
	while (scanf_s("%d", &number3) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		char character3 = getchar();
		while (character3 != '\n')
		{
			character3 = getchar();
		}
	}
	switch (number3)
	{
	case 1:
		printf("Dodawanie: %d\n", number1 + number2);
		break;
	case 2:
		printf("Odejmowanie: %d\n", number1 - number2);
		break;
	case 3:
		printf("Mnozenie: %d\n", number1 * number2);
		break;
	case 4:
		if (number2 != 0)
		{
			printf("Dzielenie: %d\n", number1 * number2);
		}
		else
		{
			printf("Bledne dane: dzielenie przez zero. Koniec programu.\n");
		}
		break;
	}
	printf("Koniec programu.\n");
	return 0;
}

//39
//wyrazenie warunkowe

#include <stdio.h>
#include <math.h>

int main()
{
	double x;
	double fx;
	printf("Program... Autor...\n");
	printf("Podaj liczbe zmiennopozycyjna x.\n");
	while (scanf_s("%lf", &x) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw.\n");
		char character1 = getchar();
		while (character1 != '\n')
		{
			character1 = getchar();
		}
	}
	fx = (x > 0) ? pow(2, x) : -1; //wyrazenie warunkowe
	printf("Wynik funkcji fx: %lf\n", fx);
	printf("Koniec programu\n");
	return 0;
}


//40
#include <stdio.h>
#include <math.h>

int main()
{
	double x;
	double y;
	double R1;
	double R2;
	printf("Program... Autor...\n");
	printf("Podaj pierwsza wspolrzedna punktu.\n");
		while (scanf_s("%lf", &x) != 1 || getchar() != '\n')
		{
			printf("Bledne dane. Popraw.\n");
			char character1 = getchar();
			while (character1 != '\n')
			{
				character1 = getchar();
			}
		}
	printf("Podaj druga wspolrzedna punktu.\n");
	while (scanf_s("%lf", &y) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw.\n");
		char character2 = getchar();
		while (character2 != '\n')
		{
			character2 = getchar();
		}
	}
	printf("Podales punkt (%.17g,%.17g)\n", x, y);
	R1 = sqrt(x * x + y * y);
	printf("Wynik R1: %.17g\n", R1);
	if (x == 0)
	{
		R2 = fabs(y);
		printf("Wynik R2: %.17g\n", R2);
	}
	else
	{
		if (fabs(x) >= fabs(y) && x != 0)
		{
			R2 = fabs(x) * sqrt(1 + (y / x * y / x));
			printf("Wynik R2: %.17g\n", R2);
		}
		else
		{
			R2 = fabs(y) * sqrt(1 + (x / y * x / y));
			printf("Wynik R2: %.17g\n", R2);
		}
	}
	if (R1 == R2)
	{
		printf("OBA ALGORYTMY DAJA TEN SAM WYNIK.\n");
		printf("Odleglosc punktu (%.17g,%.17g) od (0,0) wynosi %.17g.\n", x, y, R1);
	}
	else
	{
		printf("ALGORYTMY DAJA ROZNE WYNIKI.\n");
		printf("Odleglosc punktu (%lf,%lf) od (0,0) wynosi:\n");
		printf("-wg ""klasycznego"" algorytmu %.17g:\n", R1);
		printf("-wg ""specjalnego"" algorytmu %.17g:\n", R2);
		printf("Wartosc bezwzgledna roznicy miedzy wynikami: %.17g", fabs(R1 - R2));
	}
	printf("Koniec programu.\n");
	return 0;
}
