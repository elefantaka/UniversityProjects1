#include<stdio.h>

int class(int x)
{
	return x * x;
}

main()
{
	int x = 2;
	printf("Program, ktory sie skompiluje w C, a nieskompiluje w C++.\n");
	printf("Autor: Dorota Dabrowska.\n\n");
	printf("%d do drugiej to %d\n", x, class(x));
	printf("\nKoniec programu.\n");
	return 0;
}

//to sie kompiluje

//czesc zadaniowa

//48
#include <stdio.h>

#define PODST 2
#define ILE 100

int main()
{
	int i = 1; //nie trzeba pisac komentarza, wykladnik, trzeba to ustalic jaka ma wart
	int pot = 1; 
	printf("Program... Autor...\n");
		while (i <= ILE)
		{
			pot = pot * PODST; //stara potegi razy 2
			printf("%d ^ %d = %d\n", PODST, i, pot);
			i++;
		}
	printf("Koniec programu.\n");
	return 0;
}

//wykonujemy wielokrotnie
//zwiekszanie wykladnika
//wypisanie potegi
//policzenie potegi
//long long 62 potegi, zapisyujemy %lld

//49 

#include <stdio.h>

#define ILE 200

int main()
{
	int i = 1; //nie trzeba pisac komentarza, wykladnik, trzeba to ustalic jaka ma wart
	long long sil = 1;
	printf("Program... Autor...\n");
	while (i <= ILE)
	{
		sil = sil * i; //stara potegi razy 2
		printf("%d! = %lld\n", i, sil);
		i++;
	}
	printf("Koniec programu.\n");
	return 0;
}
//przy 13! jest problem
//uwaga na silnie

//50
#include <stdio.h>

#define ILE 200

int main()
{
	int n = 1;
	double fn = 1;
	printf("Program... Autor...\n");
	while (n <= ILE)
	{
		double temp = 3.0 / (n + 2);
		fn = fn * temp; 
		printf("f(%d) = %.17lg\n", n, fn);
		n++;
	}
	printf("Koniec programu.\n");
	return 0;
}
//NIE ROBIC TEGO NA CHAMA!!! jak poprzednie zadania, moze byc na kolowkium XD

//51
#include <stdio.h>


int main()
{
	int n = 1;
	double fn = 45;
	printf("Program... Autor...\n");
	while (fn >= 1)
	{
		double temp = 90.0 / (n + 2);
		fn = fn * temp;
		printf("f(%d) = %.17lg\n", n+1, fn);
		n++;
	}
	printf("Najmniejsza liczba to %d wynik: %.17lg\n", n-1, fn);
	printf("Koniec programu.\n");
	return 0;
}

//52

#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("Program... Autor...\n");
	printf("Podaj jedna linie tekstu\n");
	char znakAktualny;
	char znakPoprzedni = ' ';
	 while ((znakAktualny = getchar()) != '\n' )
	{
		 if (znakPoprzedni == ' ' && znakAktualny == ' ') 
		 {
		 }
		 else
		 {
			 putchar(znakAktualny);
		 }

		 znakPoprzedni = znakAktualny;
	}
}

//53

#include <stdio.h>

int main()
{
	printf("Program... Autor...\n");
	printf("Podaj liczbe naturalna\n");
	int a; //liczba naturalna podana przez uzytkownika
	while (scanf_s("%d", &a) != 1 || a <= 0 || getchar() != '\n')
	{
		printf("Bledne dane popraw\n");

		char character = getchar();
		while (character != '\n')
		{
			character = getchar();
		}
	}
	printf("Twoja liczba %d\n", a);
	printf("Koniec programu\n");
	return 0;
}

//54
#include <stdio.h>
const char button = 't';
int main()
{
	printf("Program... Autor...\n");
	printf("Prosze wcisnac klawisz ""t""\n");
	char button1;
	while (getchar() != button || getchar() != '\n') //jak nie potrzebuje tego znaku to samo getchar() wystarczy
	{
		printf("Bledne dane popraw\n");

		while (getchar()!= '\n')
		{
		}
	}
	printf("Zadanie wykonane poprawnie, wpisales klawisz.\n");
	printf("Koniec programu\n");
	return 0;
}
