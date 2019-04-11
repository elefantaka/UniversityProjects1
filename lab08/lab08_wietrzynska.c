
#include <stdio.h>

int main()
{
	printf("Hello world\n");
    return 0;
}

//czesc zadaniowa

//55
#include <stdio.h>
#include <limits.h>

int main()
{
	printf("Program... Autor...\n");
	int min = INT_MAX; //aktualne min, dajemy najwieksza mozliwa
	int liczba = 1; //aktualnie wczytana liczba
	while (liczba != 0)
	{
		//wczytaj liczbe
		printf("Podaj liczbe\n");
		while (scanf_s("%d", &liczba)!= 1 || liczba < 0 || getchar() != '\n')
		{
			printf("Bledne dane. Popraw\n");

			while (getchar() != '\n')
			{
			}
		}
		//tutaj kontrola poprawnosci danych
		if (liczba < min)
		{
			min = liczba;
		}
		
	}
	printf("Wartosc najmniejsza %d\n", min);
	return 0;
}

//wczytaj liczbe
//ewentualna zmiana min

//56

#include <stdio.h>

#define ILE 10

int main()
{
	printf("Program... Autor...\n");
	
	double liczba;
	int i = 1;
	double suma = 0;
	while (i <= ILE)
	{
		printf("Podaj liczbe\n");
		while (scanf_s("%lf", &liczba) != 1 || getchar() != '\n')
		{
			printf("Bledne dane. Popraw\n");

			while (getchar() != '\n')
			{
			}
		}
		suma = suma + liczba;
		i++;
	}
	printf("Srednia arytmetyczna liczb %lf\n", suma / ILE);
	printf("Koniec programu\n");
	return 0;
}

//57

#include <stdio.h> 
#include <math.h>

int main()
{
	printf("Autor... Program...\n");
	int i = 1;
	int liczba = 1;
	int suma = 0;
	int iloczyn = 1;
	while (liczba != 0)
	{
		printf("Podaj liczbe\n");
		while (scanf_s("%d", &liczba) != 1 || liczba < 0 || getchar() != '\n')
		{
			printf("Bledne dane. Popraw\n");
			while (getchar() != '\n')
			{
			}
		}
		if (liczba != 0)
		{
			suma = suma + liczba;
			iloczyn = iloczyn * liczba;
			i++;
		}
		else
		{
			suma = suma; 
			iloczyn = iloczyn;
		}
	}
	printf("Srednia arytmetyczna %lg\n", (double)suma / (double)i);
	printf("Srednia geometryczna %lg\n", pow((double)iloczyn, 1.0 / (i - 1)));
	printf("Koniec programu.\n");
	return 0;
}

//58

#include <stdio.h>

int main()
{
	int dziesietna = 0;

	printf("Program... Autor...\n");

	printf("Podaj ciag zer i jedynek\n");
	char znak = getchar();
	while (znak != '\n')
	{
		if (znak != '1' && znak != '0')
		{
			printf("Bledne dane. Koniec programu\n");
			return 0;
		}
		dziesietna = 2 * dziesietna + znak - '0';
		znak = getchar();
	}
	printf("Twoja liczba w systemie dziesietnym: %d\n", dziesietna);
	return 0;
}

//59

#include <stdio.h>
#include <ctype.h>

int main()
{
	int menu = 1;
	int liczba1;
	int liczba2;
	printf("Program... Autor...\n");

	while (menu != 0)
	{
		printf("Rodzaje operacji matematycznych:\n");
		printf("0. Zakoncz program\n");
		printf("1. Wczytaj liczby\n");
		printf("2. Dodaj\n");
		printf("3. Odejmij\n");
		printf("4. Pomnoz\n");
		printf("5. Podziel\n");
		printf("Wprowadz rodzaj operacji\n\n");
		while (scanf_s("%d", &menu) != 1 || menu < 0 || menu > 5 || getchar() != '\n')
		{
			printf("Bledne dane popraw\n");
			while (getchar() != '\n')
			{
			}
		}
		switch (menu)
		{
		case 1:
			printf("Wprowadz pierwsza liczbe\n");
			while (scanf_s("%d", &liczba1) != 1 || getchar() != '\n')
			{
				printf("Bledne dane popraw\n");
				while (getchar() != '\n')
				{
				}
			}
			printf("Wprowadz druga liczbe\n");
			while (scanf_s("%d", &liczba2) != 1 || getchar() != '\n')
			{
				printf("Bledne dane popraw\n");
				while (getchar() != '\n')
				{
				}
			}
			break;
		case 2:
				printf("Dodawanie %d\n\n", liczba1 + liczba2);
				break;
		case 3:
			printf("Odejmowanie %d\n\n", liczba1 - liczba2);
			break;
		case 4:
			printf("Mnozenie %d\n\n", liczba1 * liczba2);
			break;
		case 5:
			if (liczba2 != 0)
			{
				printf("Odejmowanie %d\n\n", liczba1 / liczba2);
			}
			else
			{
				printf("Dzielenie przez zero, bledne dane\n\n");
			}
			break;
		}
	}
	printf("Koniec programu\n");
	return 0;
}

//60

#include <stdio.h>
#include <math.h>

int main()
{
	double angle;
	double option1 = 1;
	double option2;
	double a; //bok a
	double h; //wysokosc
	double b; //bok b
	double c; //bok c
	printf("Program... Autor...\n");
	while (option1 != 0)
	{
		printf("Wybierz jedna z 3 opcji obliczania pola trojkata.\n");
		printf("0. Koniec programu 1. Bok i spuszczona nan wysokosc 2. Dwa boki i kat miedzy nimi 3. trzy boki\n");
		while (scanf_s("%lf", &option1) != 1 || option1 < 0 || option1 > 3 || getchar() != '\n')
		{
			printf("Bledne dane popraw\n");

			while (getchar != '\n')
			{
			}
		}
		if (option1 == 1)
		{
			printf("Podaj dlugosc boku\n");
			while (scanf_s("%lf", &a) != 1 || a < 0 || getchar() != '\n')
			{
				printf("Bledne dane popraw\n");

				while (getchar() != '\n')
				{
				}
			}
			printf("Podaj wysokosc\n");
			while (scanf_s("%lf", &h) != 1 || h < 0 || getchar() != '\n')
			{
				printf("Bledne dane popraw\n");

				while (getchar() != '\n')
				{
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

				while (getchar() != '\n')
				{
				}
			}
			printf("Podaj drugi bok\n");
			while (scanf_s("%lf", &b) != 1 || b < 0 || getchar() != '\n')
			{
				printf("Bledne dane popraw\n");

				while (getchar() != '\n')
				{
				}
			}
			printf("Chcesz podac kat w 1. stopniach 2. radianach\n");
			while (scanf_s("%lf", &option2) != 1 || option2 < 0 || option2 > 2 || getchar() != '\n')
			{
				printf("Bledne dane popraw\n");

				while (getchar() != '\n')
				{
				}
			}
			printf("Podaj kat\n");
			while (scanf_s("%lf", &angle) != 1 || angle < 0 || getchar() != '\n')
			{
				printf("Bledne dane popraw\n");

				while (getchar() != '\n')
				{
				}
			}
			if (option2 == 1)
			{
				printf("Pole trojkata wynosi: %lf\n", 0.5 *a*b*sin(angle));
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

				while (getchar() != '\n')
				{
				}
			}
			printf("Podaj bok drugi\n");
			while (scanf_s("%lf", &b) != 1 || b < 0 || getchar() != '\n')
			{
				printf("Bledne dane popraw\n");

				while (getchar() != '\n')
				{
				}
			}
			printf("Podaj bok trzeci\n");
			while (scanf_s("%lf", &c) != 1 || c < 0 || getchar() != '\n')
			{
				printf("Bledne dane popraw\n");

				while (getchar() != '\n')
				{
				}
			}
			if (a + b > c && a + c > b && b + c > a)
			{
				double temp2 = (a + b + c) / 0.5;
				printf("Pole trojkata wynosi: %lf\n", sqrt(temp2*(temp2 - a)*(temp2 - b)*(temp2 - c)));
			}
			else
			{
				printf("Taki trojkat nie istnieje\n");
			}
		}
	}
	printf("Koniec programu\n");
	return 0;
}

//61

#include <stdio.h>
#include <ctype.h> //testuje znaki

int main()
{
	int godz; //godzina
	int min; //minuty
	char znak; //znak np. 
	int sprawdzenie = 1;
	printf("Program... Autor...\n");
	printf("Podaj godzine\n");
	//wczytanie 1 znaku
	while (sprawdzenie == 1) //bo musimy wczytac caly znak od nowa, po to ta petla, sprawdzenie jako pomoc
	{
		znak = getchar();
		if (znak < '0' || znak > '2')
		{
			printf("Pierwszy znak powinien byc cyfra 0, 1 lub 2. Popraw\n");

			while (getchar() != '\n')
			{
			}
			continue;
		}
		godz = znak - '0'; //sposob przeliczenia, zapisanie zmiennej, bo kod 0 to 48, kod 1 to 49, kod 2 to 50 itd., wiêc by przeliczyæ trzeba odj¹æ kod 0
		//wczytanie 2 znaku
		znak = getchar();
		if (!isdigit(znak)) //kontrolujemy czy znak jest liczba, jesli nieprawda jest ze znak 
		{
			printf("Drugi znak powinien byc cyfra. Popraw\n");

			while (getchar != '\n')
			{
			}
			continue;
		}
		godz = 10 * godz + (znak - '0'); //sklejamy np. godz 23, 10*2+3
		if (godz > 23)
		{
			printf("Godzina powinna byc z przedzialu: 0-23. Popraw\n");

			while (getchar() != '\n')
			{
			}
			continue;
		}
		//trzeci znak
		if (getchar() != ':')
		{
			printf("Trzeci znak powinien byc dwukropkiem. Popraw\n");

			while (getchar() != '\n')
			{
			}
			continue;
		}
		//4 znak
		znak = getchar();
		if (znak < '0' || znak > '5')
		{
			printf("Czwarty znak powinien byc cyfra z zakresu 0 - 5. Popraw\n");

			while (getchar() != '\n')
			{
			}
			continue;
		}
		min = znak - '0'; //zapisanie zmiennej
		//5 znak
		znak = getchar();
		if (!isdigit(znak)) //kontrolujemy czy znak jest liczba, jesli nieprawda jest ze znak 
		{
			printf("Piaty znak powinien byc cyfra. Popraw\n");
			
			while (getchar != '\n')
			{
			}
			continue;
		}
		min = 10 * min + (znak - '0'); //sklejamy np. godz 23, 10*2+3
		if (min > 59)
		{
			printf("Minuty powinny byc z przedzialu: 0-59. Popraw\n");
			
			while (getchar != '\n')
			{
			}
			continue;
		}
		sprawdzenie = 2;
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