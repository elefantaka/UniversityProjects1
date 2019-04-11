//75

//normalnie

#include <stdio.h>

#define ILE 10

int main()
{
	printf("Program... Autor...\n");
	//wczytaj liczby
	int tab[ILE];
	printf("Podaj %d liczb\n", ILE);
	for (int i = 0; i < ILE; i++) //bo tablica zaczyna sie od 0
	{
		printf("liczba [%d]=", i + 1); //zeby uzytkownik widzial ktora liczba
		//wczytanie tablicy
		while (scanf_s("%d", &tab[i]) != 1 || getchar() != '\n')
		{
			printf("Bledne dane. Popraw\n");

			while (getchar() != '\n')
			{
			}
		}
	}
	//wypisanie od konca
	for (int i = ILE - 1; i >= 0; i--)
	{
		printf("%d ", tab[i]);
	}
	printf("Koniec programu\n");
	return 0;
}

//na funkcje

#include <stdio.h>

#define ILE 10

info()
{
	printf("Program...Autor...\n");
}

int wczytajCal(void) //jak nie ma parametrow to dobry zwyczaj pisac void
{
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");

		while (getchar() != '\n')
		{
		}
	}
	return liczba;
}

void wczytajTab(int tab[], int ile) //nie zwraca sie tablicy, bo jest duza, tab[] dostaje adres tablicy oryginalny, trzeba pracowac na orginali
{
	printf("Podaj %d liczb\n", ile);
	for (int i = 0; i < ile; i++) //bo tablica zaczyna sie od 0
	{
		printf("liczba [%d]=", i + 1); //zeby uzytkownik widzial ktora liczba
									   //wczytanie tablicy
		tab [i] = wczytajCal();
	}
}

void wypisz_tab_od_konca(int tab[], int ile)
{
	for (int i = ile - 1; i >= 0; i--)
	{
		printf("%d ", tab[i]);
	}
}

koniec()
{
	printf("Koniec programu\n");
}

int main()
{
	info();
	int tab[ILE];
	wczytajTab(tab, ILE);
	wypisz_tab_od_konca(tab, ILE);
	koniec();
  return 0;
}

//76

//normalnie
//z tablicami

#include <stdio.h>

#define ILE 100

int main()
{
	printf("Program... Autor...\n");

	double tab[ILE];
	int n;
	printf("Podaj ilosc liczb\n");
	while (scanf_s("%d", &n) != 1 || n <= 0 || n > ILE || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");

		while (getchar() != '\n')
		{
		}
	}
	double suma = 0;
	double iloczyn = 1;
	for (int i = 1; i <= n; i++)
	{
		printf("Podaj liczbe\n");
		while (scanf_s("%lf", &tab[i]) != 1 || tab[i] == 0 || getchar() != '\n')
		{
			printf("Bledne dane. Popraw\n");
		
			while (getchar() != '\n')
			{
			}
		}
		suma = suma + tab[i];
		iloczyn = iloczyn * tab[i];
	}
	printf("Suma: %lg\n", suma);
	printf("Iloczyn: %lg\n", iloczyn);
	printf("Koniec programu\n");
	return 0;
}

//bez uzycia tablic

#include <stdio.h>

#define ILE 100

int main()
{
	printf("Program... Autor...\n");

	int n;
	printf("Podaj ilosc liczb\n");
	while (scanf_s("%d", &n) != 1 || n <= 0 || n > ILE || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");

		while (getchar() != '\n')
		{
		}
	}
	double suma = 0;
	double iloczyn = 1;
	for (int i = 1; i <= n; i++)
	{
		double liczba;
		printf("Podaj liczbe\n");
		while (scanf_s("%lf", &liczba) != 1 || liczba == 0 || getchar() != '\n')
		{
			printf("Bledne dane. Popraw\n");

			while (getchar() != '\n')
			{
			}
		}
		suma = suma + liczba;
		iloczyn = iloczyn * liczba;
	}
	printf("Suma: %lg\n", suma);
	printf("Iloczyn: %lg\n", iloczyn);
	printf("Koniec programu\n");
	return 0;
}


//77

//ulepszona wersja

#include <stdio.h>

int main()
{
	//stablicowac szesciany, np petla, recznie
	int szesc[10] = { 0, 1, 8, 27, 64, 125, 216, 343, 512, 729}; //dokoncz
	int liczba = 99;
	for (int s = 1; s <= 9; s++)
	{
		for (int d = 0; d <= 9; d++)
		{
			for (int j = 0; j <= 9; j++)
			{
				liczba++;
				//szesciany
				if (liczba == szesc[j] + szesc[d] + szesc[s])
				{
					printf("%d ", liczba);
				}
			}
		}
	}
	printf("\nKoniec programu\n");
	return 0;
}


//78 

#include <stdio.h>

#define ILE 20

int main()
{
	printf("Program... Autor...\n");
	printf("Podaj n\n");
	int n;
	while (scanf_s("%d", &n) != 1 || n > ILE || n <= 0 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");

		while (getchar() != '\n')
		{
		}
	}
	int tab[ILE];
	for (int i = 1; i <= n; i++)
	{ 
		if (i == 1 || i == 2)
		{
			tab[i] = 1;
		}
		else
		{
			for (int j = 3; j <= n; j++)
			{
				tab[i] = tab[i - 1] + tab[i - 2];
			}
		}
	}
	for (int i = n; i > 0; i--)
	{
		printf("%d ", tab[i]);
	}
	printf("\nKoniec programu\n");
	return 0;
}

//79 

//na funckje

#include <stdio.h>

#define ILE 10

info()
{
	printf("Program...Autor...\n");
}

int wczytajCal(void) //jak nie ma parametrow to dobry zwyczaj pisac void
{
	int liczba;
	while (scanf_s("%d", &liczba) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");

		while (getchar() != '\n')
		{
		}
	}
	return liczba;
}

void wczytajTab(int tab[], int ile) //nie zwraca sie tablicy, bo jest duza, tab[] dostaje adres tablicy oryginalny, trzeba pracowac na orginali
{
	printf("Podaj %d liczb\n", ile);
	for (int i = 0; i < ile; i++) //bo tablica zaczyna sie od 0
	{
		printf("liczba [%d]=", i + 1); //zeby uzytkownik widzial ktora liczba
									   //wczytanie tablicy
		tab[i] = wczytajCal();
	}
}

void wypisz_tab_od_min_do_max(int tab[], int ile)
{
	for (int k = 0; k <= ile - 1; k++)
	{
		int min = tab[k];
		int gdzie = k;
		//szukanie minimum, w czesci tablicy od k do ILE - 1 wlacznie
		for (int i = k + 1; i < ile; i++)
		{
			if (tab[i] < min)
			{
				min = tab[i];
				gdzie = i;
			}
		}
		//zamieniamy element o indeksie k z minimum
		tab[k] tab[gdzie]
		int temp = tab[k];
		tab[k] = tab[gdzie];
		tab[gdzie] = temp;
		printf("%d ", min);
	}
}

koniec()
{
	printf("Koniec programu\n");
}

int main()
{
	info();
	int tab[ILE];
	wczytajTab(tab, ILE);
	wypisz_tab_od_min_do_max(tab, ILE);
	koniec();
	return 0;
}

//normalnie

#include <stdio.h>

#define ILE 10

int main()
{
	printf("Program... Autor...\n");
	//wczytaj liczby
	int tab[ILE];
	printf("Podaj %d liczb\n", ILE);
	for (int i = 0; i < ILE; i++) //bo tablica zaczyna sie od 0
	{
		printf("liczba [%d]=", i + 1); //zeby uzytkownik widzial ktora liczba
		//wczytanie tablicy
		while (scanf_s("%d", &tab[i]) != 1 || getchar() != '\n')
		{
			printf("Bledne dane. Popraw\n");

			while (getchar() != '\n')
			{
			}
		}
	}
	for (int k = 0; k <= ILE - 1; k++)
	{
		int min = tab[k];
		int gdzie = k;
		//szukanie minimum, w czesci tablicy od k do ILE - 1 wlacznie
		for (int i = k + 1; i < ILE; i++)
		{
			if (tab[i] < min)
			{
				min = tab[i];
				gdzie = i;
			}
		}
		//zamieniamy element o indeksie k z minimum
		//tab[k] tab[gdzie]
		int temp = tab[k];
		tab[k] = tab[gdzie];
		tab[gdzie] = temp;
		printf("%d ", min);
	}
	printf("Koniec programu\n");
	return 0;
}

//80

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define ILE 10

int main()
{
	printf("Program... Autor...\n\n");
	int tab[11]; //bo przy 10 wyskakuje blad, +1 byte dla \0
	//zeby za kazdym razem wypisywalo inna pule
	srand(time(NULL));
	//losowanie
	for (int i = 0; i <= ILE; i++)
	{
		tab[i] = rand();
	}
	for (int k = 0; k <= ILE - 1; k++)
	{
		int min = tab[k];
		int gdzie = k;
		for (int j = k + 1; j <= ILE; j++)
		{
			if (tab[j] < min)
			{
				min = tab[j];
				gdzie = j;
			}
		}
		int temp = tab[k];
		tab[k] = tab[gdzie];
		tab[gdzie] = temp;
		printf("%d ", min);
	}
	printf("\n\nKoniec programu\n");
	return 0;
}

//chcemy losowac liczby calkowite ze zbioru 0, 1....
//1 zbior 0 - 100
//int n = rand() % 101;
//2 zbior -7 18
//int n = rand() % 26 - 7;
//3 liczby zmiennopozycyjne, ze zb [0,1] // wkladamy do 0,1
//double x = rand() / (double)RAND_MAX;
//4 ze zbioru [0, 100], zmiennopozycyjne
//double x = rand() / (double)RAND_MAX * 100;
//5 zb [-7, 18] //wciskamy do 0,1
//double x = rand() / (double)RAND_MAX * 25 - 7
//srand(3); 3 jest ziarnem #include <stdlib.h>
//srand(time(NULL)); #include <time.h>

//81

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ILE 10

int main()
{
	printf("Program... Autor...\n\n");

	double tab[11];
	srand(time(NULL));
	for (int i = 0; i <= ILE; i++)
	{
		tab[i] = rand() / ((double)RAND_MAX * 2) + 1; //[a, a + k - 1], a = 1, k = 2
	}
	for (int k = 0; k <= ILE - 1; k++)
	{
		double min = tab[k];
		int gdzie = k;
		for (int j = k + 1; j <= ILE; j++)
		{
			if (tab[j] < min)
			{
				min = tab[j];
				gdzie = j;
			}
		}
		double temp = tab[k];
		tab[k] = tab[gdzie];
		tab[gdzie] = temp;
		printf("%lf\n", min);
	}
	printf("\nKoniec programu\n");
	return 0;
}
	

//od maks do min

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ILE 10

int main()
{
	printf("Program... Autor...\n\n");

	double tab[11];
	srand(time(NULL));
	for (int i = 0; i <= ILE; i++)
	{
		tab[i] = rand() / ((double)RAND_MAX * 2) + 1; //[a, a + k - 1], a = 1, k = 2
	}
	for (int k = 0; k <= ILE - 1; k++)
	{
		double max = tab[k];
		int gdzie = k;
		for (int j = k + 1; j <= ILE; j++)
		{
			if (tab[j] > max)
			{
				max = tab[j];
				gdzie = j;
			}
		}
		double temp = tab[k];
		tab[k] = tab[gdzie];
		tab[gdzie] = temp;
		printf("%lf\n", max);
	}
	printf("\nKoniec programu\n");
	return 0;
}



