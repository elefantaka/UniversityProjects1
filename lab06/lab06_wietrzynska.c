#include<stdio.h>

int main()
{
	int n = 1;                        //ilosc liczb
	int podane_liczby[5];           //podane przez u�ytkownika liczby 
	int ile_d, ile_u;               //ilosc liczb dodatnich i ujemnych
	int i;

	printf("Program oblicza ile jest dodatnich oraz ile ujemnych\n");
	printf("wsrod liczb podanych przez Ciebie.\n");
	printf("Autor: Dorota Dabrowska.\n\n");
	printf("Podaj ile liczb podasz (nie moze byc wiecej niz 5):\t");
	scanf_s("%d", &n);

	ile_d = 0;
	ile_u = 0;

	for (i = 0; i<n; i++)
	{
		printf("liczba %d:\t", i + 1);
		scanf_s("%d", &podane_liczby[i]);
		if (podane_liczby[i]>0)
		{
			ile_d++;
		}
		else if (podane_liczby[i]<0)
		{
			ile_u++;
		}
	}
	printf("\n\nIlosc liczb dodatnich:\t%d.", ile_d);
	printf("\nIlosc liczb ujemnych.:\t%d.", ile_u);
	printf("\n\nKoniec programu.\n");
	return 0;
}

//41
#include <stdio.h>
#include <math.h>

int main()
{
	double x1;
	double y1;
	double x2;
	double y2;
	printf("Program... Autor...\n");
	printf("Podaj pierwsza wspolrzedna pierwszego wektora.\n");
	while (scanf_s("%lf", &x1) != 1 || getchar() != '\n')
	{
		printf("Bledne dane popraw\n");

		char character = getchar();
		while (character != '\n')
		{
			character = getchar();
		}
	}
	printf("Podaj druga wspolrzedna pierwszego wektora.\n");
	while (scanf_s("%lf", &y1) != 1 || getchar() != '\n')
	{
		printf("Bledne dane popraw\n");

		char character2 = getchar();
		while (character2 != '\n')
		{
			character2 = getchar();
		}
	}
	printf("Podaj pierwsza wspolrzedna drugiego wektora.\n");
	while (scanf_s("%lf", &x2) != 1 || getchar() != '\n')
	{
		printf("Bledne dane popraw\n");

		char character3 = getchar();
		while (character3 != '\n')
		{
			character3 = getchar();
		}
	}
	printf("Podaj druga wspolrzedna drugiego wektora.\n");
	while (scanf_s("%lf", &y2) != 1 || getchar() != '\n')
	{
		printf("Bledne dane popraw\n");

		char character4 = getchar();
		while (character4 != '\n')
		{
			character4 = getchar();
		}
	}
	printf("Podane wektory [%lg,%lg], [%lg,%lg]\n", x1, y1, x2, y2);
	double temp1 = x1 * y1 + x2 * y2;
	double temp2 = x1 * y2 - x2 * y1;
	if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
	{
		printf("Wektor zerowy.\n");
	}
	else if (temp1 == 0)
	{
		printf("Wektory sa prostopadle\n");
	}
	else if (temp2 == 0)
	{
		printf("Wektory sa rownolegle\n");
	}
	else
	{
		printf("Wektory nie sa do siebie prostopadle ani rownolegle\n");
	}
	printf("Koniec programu\n");
	return 0;
}

//42
#include <stdio.h>
#include <math.h>

int main()
{
	double angle;
	double option1;
	double option2;
	double a; //bok a
	double h; //wysokosc
	double b; //bok b
	double c; //bok c
	printf("Program... Autor...\n");
	printf("Wybierz jedna z 3 opcji obliczania pola trojkata.\n");
	printf("1. bok i spuszczona nan wysokosc 2. dwa boki i kat miedzy nimi 3. trzy boki\n");
	while (scanf_s("%lf", &option1) != 1 || getchar() != '\n')
	{
		printf("Bledne dane popraw\n");

		char character = getchar();
		while (character != '\n')
		{
			character = getchar();
		}
	}
	if (option1 == 1)
	{
		printf("Podaj dlugosc boku\n");
		while (scanf_s("%lf", &a) != 1 || a < 0 || getchar() != '\n')
		{
			printf("Bledne dane popraw\n");

			char character2 = getchar();
			while (character2 != '\n')
			{
				character2 = getchar();
			}
		}
		printf("Podaj wysokosc\n");
		while (scanf_s("%lf", &h) != 1 || h < 0 || getchar() != '\n')
		{
			printf("Bledne dane popraw\n");

			char character3 = getchar();
			while (character3 != '\n')
			{
				character3 = getchar();
			}
		}
		printf("Pole trojkata wynosi: %lg\n", 0.5 * a*h);
	}
	else if (option1 == 2)
	{
		printf("Podaj pierwszy bok\n");
		while (scanf_s("%lf", &a) != 1 || a < 0 || getchar() != '\n')
		{
			printf("Bledne dane popraw\n");

			char character4 = getchar();
			while (character4 != '\n')
			{
				character4 = getchar();
			}
		}
		printf("Podaj drugi bok\n");
		while (scanf_s("%lf", &b) != 1 || b < 0 || getchar() != '\n')
		{
			printf("Bledne dane popraw\n");

			char character5 = getchar();
			while (character5 != '\n')
			{
				character5 = getchar();
			}
		}
		printf("Chcesz podac kat w 1. stopniach 2. radianach\n");
		while (scanf_s("%lf", &option2) != 1 || getchar() != '\n')
		{
			printf("Bledne dane popraw\n");

			char character6 = getchar();
			while (character6 != '\n')
			{
				character6 = getchar();
			}
		} 
		printf("Podaj kat\n");
		while (scanf_s("%lf", &angle) != 1 || angle < 0 || getchar() != '\n')
		{
			printf("Bledne dane popraw\n");

			char character7 = getchar();
			while (character7 != '\n')
			{
				character7 = getchar();
			}
		}
		if (option2 == 1)
		{
			printf("Pole trojkata wynosi: %lf", 0.5 *a*b*sin(angle));
		}
		else if (option2 == 2)
		{
			double temp1 = angle * 57.29577951308;
				printf("Pole trojkata wynosi: %lg\n", 0.5*a*b*sin(temp1));
		}
	}
	else if (option1 == 3)
	{
		printf("Podaj bok pierwszy\n");
		while (scanf_s("%lf", &a) != 1 || a < 0 || getchar() != '\n')
		{
			printf("Bledne dane popraw\n");

			char character8 = getchar();
			while (character8 != '\n')
			{
				character8 = getchar();
			}
		}
		printf("Podaj bok drugi\n");
		while (scanf_s("%lf", &b) != 1 || b < 0 || getchar() != '\n')
		{
			printf("Bledne dane popraw\n");

			char character9 = getchar();
			while (character9 != '\n')
			{
				character9 = getchar();
			}
		}
		printf("Podaj bok trzeci\n");
		while (scanf_s("%lf", &c) != 1 || c < 0 || getchar() != '\n')
		{
			printf("Bledne dane popraw\n");

			char character10 = getchar();
			while (character10 != '\n')
			{
				character10 = getchar();
			}
		}
		if (a + b > c && a + c > b && b + c > a)
		{
			double temp2 = (a + b + c) / 0.5;
			printf("Pole trojkata wynosi: %lf", sqrt(temp2*(temp2 - a)*(temp2 - b)*(temp2 - c)));
		}
		else
		{
			printf("Taki trojkat nie istnieje\n");
		}
	}
	printf("Koniec programu\n");
	return 0;
}

//43
#include <stdio.h>
#include <math.h>

int main()
{
	double a;
	double b;
	double c;
	printf("Program... Autor...\n");
	printf("Podaj pierwsza liczbe\n");
	while (scanf_s("%lf", &a) != 1 || getchar() != '\n')
	{
		printf("Bledne dane popraw\n");

		char character = getchar();
		while (character != '\n')
		{
			character = getchar();
		}
	}
	printf("Podaj druga liczbe\n");
	while (scanf_s("%lf", &b) != 1 || getchar() != '\n')
	{
		printf("Bledne dane popraw\n");

		char character2 = getchar();
		while (character2 != '\n')
		{
			character2 = getchar();
		}
	}
	printf("Podaj trzecia liczbe\n");
	while (scanf_s("%lf", &c) != 1 || getchar() != '\n')
	{
		printf("Bledne dane popraw\n");

		char character3 = getchar();
		while (character3 != '\n')
		{
			character3 = getchar();
		}
	}
	if (a < b)
	{
		if (a < c)
		{
			printf("Najmniejsza liczba jest %lg\n", a);
		}
	}
	else if (b < c)
	{
		if (b < a)
		{
			printf("Najmniejsza liczba jest %lg\n", b);
		}
	}
	else if (c < a)
	{
		if (c < b)
		{
			printf("Najmniejsza liczba jest %lg\n", c);
		}
	}
	else
	{
		printf("Nie znaleziono najmniejszej liczby w tym zestawie\n");
	}
	printf("Koniec programu\n");
	return 0;
}

//44
#include <stdio.h>

int main()
{
	char code;
	printf("Program... Autor...\n");
	printf("Podaj znak lub liczbe\n");
	code = getchar();
	printf("Kod ASCII: %d\n", code);
	printf("Koniec programu");
	return 0;
}

//45
#include <stdio.h>
#include <ctype.h>

int main()
{
	int code;
	printf("Program... Autor...\n");
	printf("Podaj kod ASCII\n");
	while (scanf_s("%d", &code) != 1 || getchar() != '\n')
	{
		printf("Bledne dane popraw\n");
	
		char character = getchar();
		while (character != '\n')
		{
			character = getchar();
		}
	}
	if (code <= 127)
	{
		if (iscntrl(code))
		{
			printf("%c jest znakiem kontrolnym\n", code);
		}
		else
		{
			printf("%c jest znakiem drukowalnym\n", code);
		}
	}
	else
	{
		printf("Kod ASCII wychodzi poza zakres, bledne dane.\n");
	}
	printf("Koniec programu\n");
	return 0;
}

//46

#include <stdio.h>
#include <ctype.h> //testuje znaki

int main()
{
	int godz; //godzina
	int min; //minuty
	char znak; //znak np. 
	printf("Program... Autor...\n");
	printf("Podaj godzine\n");
	//wczytanie 1 znaku
	znak = getchar();
	if (znak < '0' || znak > '2')
	{
		printf("Pierwszy znak powinien byc cyfra 0, 1 lub 2\n");
		return 0;
	}
	godz = znak - '0'; //sposob przeliczenia, zapisanie zmiennej
	//wczytanie 2 znaku
	znak = getchar();
	if (!isdigit(znak)) //kontrolujemy czy znak jest liczba, jesli nieprawda jest ze znak 
	{
		printf("Drugi znak powinien byc cyfra.\n");
		return 0;
	}
	godz = 10 * godz + (znak - '0'); //sklejamy np. godz 23, 10*2+3
	if (godz > 23)
	{
		printf("Godzina powinna byc z przedzialu: 0-23.\n");
		return 0;
	}
	//trzeci znak
	if (getchar() != ':')
	{
		printf("Trzeci znak powinien byc dwukropkiem.\n");
		return 0;
	}
	//4 znak
	znak = getchar();
	if (znak < '0' || znak > '5')
	{
		printf("Czwarty znak powinien byc cyfra z zakresu 0 - 5\n");
		return 0;
	}
	min = znak - '0'; //zapisanie zmiennej
	//5 znak
	znak = getchar();
	if (!isdigit(znak)) //kontrolujemy czy znak jest liczba, jesli nieprawda jest ze znak 
	{
		printf("Piaty znak powinien byc cyfra.\n");
		return 0;
	}
	min = 10 * min + (znak - '0'); //sklejamy np. godz 23, 10*2+3
	if (min > 59)
	{
		printf("Minuty powinny byc z przedzialu: 0-59.\n");
		return 0;
	}
	if (min == 1)
	{
		printf("Oto wczytana godzina:\n");
		printf("%d minuta po %d\n", min, godz);
	}
	else if (min <= 19 && min >= 10)
	{
		printf("Oto wczytana godzina:\n");
		printf("%d minut po %d\n", min, godz);
	}
	else if ((min <= 4 && min >= 2) || (min <= 24 && min >= 22))
	{
		printf("Oto wczytana godzina:\n");
		printf("%d minuty po %d\n", min, godz);
	}
	else
	{
		printf("Oto wczytana godzina:\n");
		printf("%d minut po %d\n", min, godz);
	}
	printf("Koniec programu.\n");
	return 0;
}
do zrobienia: 
1skompilowac,zrobic wstepne test
2.skopiowac to przerobic na wczytanie 4, 5 ,6 znaku
3. testowanoie
wypisac minuty
zmienne: int godz, int min, char znak
minut na koniec 
zaczynamy od 1 minuta

//47

#include <stdio.h>
#include <ctype.h> //testuje znaki

int main()
{
	int dzien;
	int miesiac;
	int rok;
	char znak;
	printf("Program... Autor...\n");
	printf("Podaj date. Format: dd.mm.rr\n");
	//1 znak
	znak = getchar();
	if (!isdigit(znak)) //kontrolujemy czy znak jest liczba, jesli nieprawda jest ze znak 
	{
		printf("Pierwszy znak powinien byc cyfra.\n");
		return 0;
	}
	dzien = znak - '0';
	//2 znak
	znak = getchar();
	if (!isdigit(znak)) //kontrolujemy czy znak jest liczba, jesli nieprawda jest ze znak 
	{
		printf("Drugi znak powinien byc cyfra.\n");
		return 0;
	}
	dzien = 10 * dzien + (znak - '0');
	//3 znak
	if (getchar() != '.') //kontrolujemy czy znak jest liczba, jesli nieprawda jest ze znak 
	{
		printf("Trzeci znak powinien byc kropka.\n");
		return 0;
	}
	//4 znak
	znak = getchar();
	if (!isdigit(znak)) //kontrolujemy czy znak jest liczba, jesli nieprawda jest ze znak 
	{
		printf("Czwarty znak powinien byc cyfra.\n");
		return 0;
	}
	miesiac = znak - '0';
	//5 znak
	znak = getchar();
	if (!isdigit(znak)) //kontrolujemy czy znak jest liczba, jesli nieprawda jest ze znak 
	{
		printf("Piaty znak powinien byc cyfra.\n");
		return 0;
	}
	miesiac = 10 * miesiac + (znak - '0');
	if (miesiac > 12)
	{
		printf("Miesiace powinny byc z przedzialu 1-12\n");
		return 0;
	}
	// 6 znak
	if (getchar() != '.') //kontrolujemy czy znak jest liczba, jesli nieprawda jest ze znak 
	{
		printf("Szosty znak powinien byc kropka.\n");
		return 0;
	}
	//7 znak 
	znak = getchar();
	if (!isdigit(znak)) //kontrolujemy czy znak jest liczba, jesli nieprawda jest ze znak 
	{
		printf("Siodmy znak powinien byc cyfra.\n");
		return 0;
	}
	rok = znak - '0';
	//8 znak
	znak = getchar();
	if (!isdigit(znak)) //kontrolujemy czy znak jest liczba, jesli nieprawda jest ze znak 
	{
		printf("Osmy znak powinien byc cyfra.\n");
		return 0;
	}
	rok = 10 * rok + (znak - '0') + 2000;
	if (rok < 2001 || rok > 2050)
	{
		printf("Rok powinien byc z przedzialu 2001-2050\n");
		return 0;
	}
	if ((rok - 2000) % 4 == 0)
	{
		if (miesiac == 1)
		{
			if (dzien <= 31 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d stycznia %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-31\n");
			}
		}
		else if (miesiac == 2)
		{
			if (dzien <= 29 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d lutego %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-29\n");
			}
		}
		else if (miesiac == 3)
		{
			if (dzien <= 31 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d marca %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-31\n");
			}
		}
		else if (miesiac == 4)
		{
			if (dzien <= 30 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d kwietnia %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-30\n");
			}
		}
		else if (miesiac == 5)
		{
			if (dzien <= 31 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d maja %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-31\n");
			}
		}
		else if (miesiac == 6)
		{
			if (dzien <= 30 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d czerwca %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-30\n");
			}
		}
		else if (miesiac == 7)
		{
			if (dzien <= 31 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d lipca %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-31\n");
			}
		}
		else if (miesiac == 8)
		{
			if (dzien <= 31 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d sierpnia %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-31\n");
			}
		}
		else if (miesiac == 9)
		{
			if (dzien <= 30 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d wrzesnia %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-30\n");
			}
		}
		else if (miesiac == 10)
		{
			if (dzien <= 31 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d pazdziernika %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-31\n");
			}
		}
		else if (miesiac == 11)
		{
			if (dzien <= 30 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d listopada %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-30\n");
			}
		}
		else if (miesiac == 12)
		{
			if (dzien <= 31 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d grudnia %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-31\n");
			}
		}
	}
	else
	{
		if (miesiac == 1)
		{
			if (dzien <= 31 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d stycznia %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-31\n");
			}
		}
		else if (miesiac == 2)
		{
			if (dzien <= 28 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d lutego %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-28\n");
			}
		}
		else if (miesiac == 3)
		{
			if (dzien <= 31 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d marca %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-31\n");
			}
		}
		else if (miesiac == 4)
		{
			if (dzien <= 30 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d kwietnia %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-30\n");
			}
		}
		else if (miesiac == 5)
		{
			if (dzien <= 31 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d maja %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-31\n");
			}
		}
		else if (miesiac == 6)
		{
			if (dzien <= 30 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d czerwca %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-30\n");
			}
		}
		else if (miesiac == 7)
		{
			if (dzien <= 31 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d lipca %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-31\n");
			}
		}
		else if (miesiac == 8)
		{
			if (dzien <= 31 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d sierpnia %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-31\n");
			}
		}
		else if (miesiac == 9)
		{
			if (dzien <= 30 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d wrzesnia %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-30\n");
			}
		}
		else if (miesiac == 10)
		{
			if (dzien <= 31 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d pazdziernika %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-31\n");
			}
		}
		else if (miesiac == 11)
		{
			if (dzien <= 30 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d listopada %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-30\n");
			}
		}
		else if (miesiac == 12)
		{
			if (dzien <= 31 && dzien >= 1)
			{
				printf("Oto wczytana data:\n");
				printf("%d grudnia %d\n", dzien, rok);
			}
			else
			{
				printf("Dzien powinien byc miedzy 1-31\n");
			}
		}
	}
	printf("Koniec programu\n");
	return 0;
}