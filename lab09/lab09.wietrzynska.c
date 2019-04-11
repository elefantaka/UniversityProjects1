//62

#include <stdio.h>
#include <ctype.h>

int main()
{
	int udaloSie = 0;
	while (!udaloSie) //proba wczytania imienia, dopoki imie nie jest poprawne
	{
		printf("Jak masz na imie?\n");
		udaloSie = 1;
		char znak;
		//pierwsza litera
		znak = getchar();
		if (!isupper(znak))
		{
			printf("\nImie nalezy pisac wielka litera.\n");
			//wyczyscic bufor klawiatury
			while (getchar() != '\n')
			{
			}
			udaloSie = 0;
			continue;
		}
		//pozostale litery
		printf("Masz na imie %c", znak);
		while ((znak = getchar()) != '\n')
		{
			if (isdigit(znak))
			{
				printf("...?");
				printf("\nImie sklada sie tylko z liter.\n");
				//wyczyscic bufor klawiatury
				while (getchar() != '\n')
				{
				}
				udaloSie = 0;
				break;
			}
			else if (!islower(znak))
			{
				printf("...?");
				printf("\nPoza pierwsza litera wszystkie powinny byc male.\n");
				//wyczyscic bufor klawiatury
				while (getchar() != '\n')
				{
				}
				udaloSie = 0;
				break;
			}
			else 
			{
				putchar(znak);
			}		
		}
	}
	printf("\nKoniec programu\n");
	return 0;
}

//63

#include <stdio.h> 
#include <math.h>

#define POCZ 0.0 //poczatek przedzialu 
#define KON 0.125 //koniec przedzialu 
#define ILE 33 //liczba punktow

int main() 
{
	double krok = (KON - POCZ) / (ILE - 1); //odl. miedzy pkt. 
	int i=0;
	printf("Program oblicza bledy przyblizenia"); 
	printf(" funkcji sin(x) przez x\ndla %d", ILE); 
	printf(" rownoodleglych punktow z przedzial"); 
	printf("u [%.g,%g].\n\n%-14s", POCZ, KON, "x"); 
	printf("%-13s%-12s", "sin(x)", "x-sin(x)"); 
	printf("%-12s\n", "|(x-sin(x))/x|");
	for (i; i <= ILE; i++) 
	{ 
	double x = POCZ + i * krok; 
	double sin_x = sin(x); 
	double bl_b = x - sin_x; 
	double bl_w = x != 0.0 ? fabs(bl_b / x) : -1.0; 
	printf("\n%11.9f%14.9f%12.3e", x, sin_x, bl_b); 
		if (bl_w != -1.0) 
		printf("%12.3e", bl_w); 
	} 
	printf("\n\nKoniec programu.\n");
}

//64

#include <stdio.h>
#include <limits.h>

void info()
{
	printf("Program... Autor...\n");
}

void zakoncz()
{
	printf("Koniec programu\n");
}

int main()
{
	info();
	int i;
	int liczba;
	for (i = 0, liczba = INT_MAX - 5; i < 10; i++, liczba++)
	{
		printf("Liczba: %d\n", liczba);
	}
	zakoncz();
}

//65

#include <stdio.h>
#define PODST 2

void info() //funkcja info, zeby oszczedzic pisania tyle rzeczy, void - funkcja nie produkuje wyniku, nic nie zwraca, def funkcji
{
	printf("Program... Autor...\n");
}

int wczytajNaturalna() //funkcja - zeby wczytac liczbe, definicja funckji
{
	printf("Podaj liczbe\n");
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || liczba <= 0 || getchar() != '\n')
	{
		printf("Bledne dane popraw.\n");

		while (getchar() != '\n')
		{
		}
	}
	return liczba; //zakoncz dzialanie tej funckji, zwraca wartosc (czyli to co policzy), typ int - "int wczytajNaturalna"
}

void wypiszPotegi(int ile) //nie zwraca konkretnej wartosci dlatego void, musimy miec n
{
	int pot = 1;
	for (int i = 0; i < ile; i++)
	{
		printf("%d ^ %d = %d", PODST, i, pot);

		pot *= PODST; //pot = pot * PODST
	}
	//return; //funckja nieczego nie zwraca, nie zalecane
}

int main()
{
	info(); //zamiast tego pczatku
	//wczytanie n
	int n;
	n = wczytajNaturalna(); //wywolanie funckji, przypisujemy wartosc ktora oliczy ta funkcja 
	wypiszPotegi(n); //
	printf("Koniec programu.\n");
	return 0;
}
//FUNKCJE: poprawa czytelnosci programu, moze byc dluzszy, unikania powtarzania tych samych fragmentow kodu
//wydzielic kawalek kodu

//66

#include <stdio.h>

#define ILE 10

int main()
{
	printf("Program... Autor...\n");

	double liczba;
	int i;
	double suma = 0;
	for (i = 1; i <= ILE; i++)
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
	}
	printf("Srednia arytmetyczna liczb %lf\n", suma / ILE);
	printf("Koniec programu\n");
	return 0;
}