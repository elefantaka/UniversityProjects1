//niedobry program
#include<stdio.h>
#include<math.h>

int main()
{
	int opcja;
	double pole, podstawa, wysokosc, bok1, bok2, kat_pomiedzy;
	printf("Oto tajemniczy program. Zgadnij, co on robi.\n");
	printf("Wybierz:\n\t1. zxc pierwsza.\n\t2. zxc druga.\n");
	printf("Podaj liczbe:\t");
	scanf_s("%d", &opcja);

	if (opcja == 1)
	{
		printf("Podaj liczbe:\t");
		scanf_s("%lf", &podstawa);
		printf("Podaj liczbe:\t");
		scanf_s("%lf", &wysokosc);
		pole = 0.5*podstawa*wysokosc;
		printf("wynik: %g", pole);
	}
	else if (opcja == 2)
	{
		printf("Podaj liczbe:\t");
		scanf_s("%lf", &bok1);
		printf("Podaj liczbe:\t");
		scanf_s("%lf", &bok2);
		printf("Podaj liczbe:\t");
		scanf_s("%lf", &kat_pomiedzy);
		pole = 0.5*bok1*bok2*sin(kat_pomiedzy);
		printf("wynik: %g", pole);
	}
	else
	{
		printf("Cos niedobrze...");
	}
	printf("\nKoniec programu.\n");
	return 0;
}

//25
#include <stdio.h>

main()
{
	//info
	char klawisz; //klawisz wcisniety przez uzytkownika
	printf("Program... Autor...\n");
	//wczytanie, dbamy o uzytkownika
	printf("Prosze o nacisniecie dowolonego klawisza\n");
	klawisz = getchar();
	if (klawisz != 't' || getchar() != '\n') //nie "t" tylko 't', bo porownuje go ze stringiem
	{
		printf("Bledne dane. Koniec.\n");
		return 0;
	}
	if (klawisz == 't')
	{
		printf("Podales %c\n", klawisz); //%c bo char
	}
	printf("Koniec programu\n");
	return 0;
}

//26
#include <stdio.h>
#include <math.h>

main()
{
	const int promien = 1;
	double x;
	double y;
	printf("Podaj pierwsza wspolrzedna\n");
	if (scanf_s("%lf", &x) != 1 || getchar() != '\n') //pamietaj o lf!
	{
		printf("Bledne dane. koniec programu");
		return 0;
	}
	if (scanf_s("%lf", &y) != 1 || getchar() != '\n') //tu tez lf
	{
		printf("Bledne dane. koniec programu\n");
		return 0;
	}
	printf("Podales punkt (%lg,%lg)\n", x, y);
	if ((x * x + y * y) <= promien * promien)
	{
		printf("Punkt nalezy do kola.\n");

	}
	else
	{
		printf("Punkt nie nalezy do kola.\n");

	}
	printf("Koniec programu\n");
	return 0;
}

//27
#include <stdio.h>
#include <math.h>

main()
{
	const int promien1 = 1;
	double x;
	double y;
	printf("Podaj pierwsza wspolrzedna\n");
	if (scanf_s("%lf", &x) != 1 || getchar() != '\n') //pamietaj o lf!
	{
		printf("Bledne dane. koniec programu\n");
		return 0;
	}
	printf("Podaj druga wspolrzedna\n");
	if (scanf_s("%lf", &y) != 1 || getchar() != '\n') //tu tez lf
	{
		printf("Bledne dane. Koniec programu\n");
		return 0;
	}
	printf("Podales punkt (%lg,%lg)\n", x, y);
	if ((x * x + y * y) <= promien1 * promien1)
	{
		printf("Punkt nalezy do okregu o srodku (0,0) i promieniu 1 \n");
	}
	else
	{
		printf("Punkt nie nalezy do okregu o srodku (0,0) i promieniu 1.\n");

	}
	if ((x * x + y * y) < promien1 * promien1)
	{
		printf("Punkt lezy wewnatrz kola\n");
	}
	else
	{
		printf("Punkt nie lezy wewnatrz kola\n");
	}
	if ((x * x + y * y) > promien1 * promien1)
	{
		printf("Punkt lezy na zewnatrz okregu\n");
	}
	else
	{
		printf("Punkt nie lezy na zewnatrz okregu\n");
	}

	printf("Koniec programu\n");
	return 0;
}

//28
#include <stdio.h>
#include <math.h>

main()
{
	double x;
	double y;
	printf("Podaj pierwsza wspolrzedna\n");
	if (scanf_s("%lf", &x) != 1 || getchar() != '\n') //pamietaj o lf!
	{
		printf("Bledne dane. koniec programu\n");
		return 0;
	}
	printf("Podaj druga wspolrzedna\n");
	if (scanf_s("%lf", &y) != 1 || getchar() != '\n') //tu tez lf
	{
		printf("Bledne dane. Koniec programu\n");
		return 0;
	}
	printf("Podales punkt (%lg,%lg)\n", x, y);
	if (x < 0 && y > 0)
	{
		printf("Punkt lezy w pierwszej cwartce ukladu wspolrzednych\n");
	}
	else
	{
		printf("Punkt nie lezy w pierwszej cwartce ukladu wspolrzednych\n");
	}
	printf("Koniec programu\n");
	return 0;
}

//29
#include <stdio.h>
#include <math.h>

main()
{
	double x;
	double y;
	printf("Podaj pierwsza wspolrzedna\n");
	if (scanf_s("%lf", &x) != 1 || getchar() != '\n') //pamietaj o lf!
	{
		printf("Bledne dane. koniec programu\n");
		return 0;
	}
	printf("Podaj druga wspolrzedna\n");
	if (scanf_s("%lf", &y) != 1 || getchar() != '\n') //tu tez lf
	{
		printf("Bledne dane. Koniec programu\n");
		return 0;
	}
	printf("Podales punkt (%lg,%lg)\n", x, y);
	if (x > 0 && y > 0)
	{
		printf("Punkt lezy w pierwszej cwartce ukladu wspolrzednych\n");
	}
	if (x < 0 && y > 0)
	{
		printf("Punkt lezy w drugiej cwartce ukladu wspolrzednych\n");
	}
	if (x < 0 && y < 0)
	{
		printf("Punkt lezy w trzeciej cwartce ukladu wspolrzednych\n");
	}
	if (x > 0 && y < 0)
	{
		printf("Punkt lezy w czwartej cwartce ukladu wspolrzednych\n");
	}
	printf("Koniec programu\n");
	return 0;
}

//30

#include <stdio.h>
#include <math.h>

main()
{
	double liczba;
	printf("Program wczytuje liczbe wymierna w postaci rozwiniecia dziesietnego. Autor...\n");
	printf("Podaj liczbe.\n");
	if (scanf_s("%lf", &liczba) != 1 || getchar() != '\n') //pamietaj o lf!
	{
		printf("Bledne dane. Koniec programu\n");
		return 0;
	}
	printf("Podales liczbe: %f\n", liczba);
	if ((double)((int)liczba) == liczba)
	{
		printf("Liczba calkowita\n");
	}
	else 
	{
		liczba = (int)liczba;
		printf("Liczba niecalkowita: %f\n", liczba);
	}
	printf("Koniec programu.\n");
	return 0;
}

//31

#include <stdio.h>
#include <math.h>

main()
{
	double x;
	double y;
	double root;
	printf("Program rostrzyga czy... Autor...\n");
	printf("Podaj pierwsza wspolrzedna.\n");
	if (scanf_s("%lf", &x) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Koniec programu.\n");
		return 0;
	}
	printf("Podaj druga wspolrzedna.\n");
	if (scanf_s("%lf", &y) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Koniec programu.\n");
		return 0;
	}
	printf("Podales punkt (%lg,%lg)\n", x, y);
	if (x <= 1 && x > 0)
	{
		double fractions = exp(x) / log(x);
		double absoluteValues = fabs(acos(x) + fractions);
		root = sqrt(absoluteValues);
		printf("Odcieta nalezy do dziedziny funkcji.\n");
		printf("Wartosc funkcji: %lf\n", root);
	}
	else
	{
		printf("Odcieta nie nalezy do dziedziny. Koniec programu.\n");
		return 0;
	}
	if (y == root)
	{
		printf("Podane wspolrzedne sa punktem wykresu funckji.\n");
	}
	else if(y > root)
	{
		printf("Podany punkt lezy nad wykresem funckji.\n");
	}
	else if (y < root)
	{
		printf("Podany punkt lezy pod wykresem funckji.\n");
	}
	printf("Koniec programu.\n");
	return 0;
}
// exp(x) - e do potegi x
	//if(abs(arccos(x) + (pow( e, x)/ln(x))) >= 0)
	//funkcja == sqrt(abs(arccos(x) + exp(x) / ln(x)));

/*POMOC
#include <stdio.h>
#include <math.h>
#include <corecrt_math_defines.h> //zeby uzyc M_E, czyli liczby e, wtedy byloby pow(M_E, x)

main()
{
	double x = 0.90;
	double fractions =  exp(x) / log(x);
	double absoluteValues = fabs(acos(x) + fractions);
	double root = sqrt(absoluteValues);
	printf("%f", root);
	return 0;
}*/

//32

#include <stdio.h>

int main() {
	int x;
	printf("Testowanie instr. przypisania.\n\n");
	x = 3;
	printf("Po x=3;       wart. x jest: %d\n", x);
	x = 5;
	printf("Po x=5;       wart. x jest: %d\n", x);
	x += 2;
	printf("Po x=x+2;     wart. x jest: %d\n", x);
	x *= x + 1;
	printf("Po x=x*(x+1); wart. x jest: %d\n", x);
	x += 1;
	printf("Po x=x+1;     wart. x jest: %d\n", x);
	x -= 3 / 4;
	printf("Po x=x-(3/4); wart. x jest: %d\n", x);
	x /= x + 1;
	printf("Po x=x/(x+1); wart. x jest: %d\n", x);
	x -= 1;
	printf("Po x--;       wart. x jest: %d\n", x);
	printf("\n\nKoniec programu.  \n");
	return 0;
}

//33
#include <stdio.h>
#include <math.h>

main()
{
	int x = 1;
	int y;

	y = x + 7;
	x = x + 1;
	printf("%d\n", y);
	x = x + 1;
	y = x + 7; 
	printf("%d\n", y);
	y = x + 7;
	x = x + 1;
	printf("%d\n", y);
	x = x + 1;
	y = 7 + x; 
	printf("%d\n", y);
	y = 7 + (x + 1); 
	printf("%d\n", y);
	return 0;
}