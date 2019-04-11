//82 

//normalnie

#include <stdio.h>

#define ILE 100

int main()
{
	printf("Program...Autor...\n");
	int tab[ILE];
	printf("Podaj liczbe n\n");
	int n;
	while (scanf_s("%d", &n) != 1 || n > ILE || getchar() != '\n')
	{
		printf("Bledne dane popraw\n");

		while (getchar() != '\n')
		{
		}
	}
	for (int i = 1; i <= n; i++)
	{
		printf("Podaj liczbe\n");
		while (scanf_s("%d", &tab[i]) != 1 || getchar() != '\n')
		{
			printf("Bledne dane popraw\n");

			while (getchar() != '\n')
			{
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (tab[i] == tab[j])
			{
				printf("Powtarzajacy sie element to: %d\n", tab[i]);
			} 
		}
	}
	printf("Koniec programu\n");
	return 0;
}

//na funkcje

#include <stdio.h>

#define ILE 100

void info(void);
int wczytajCal(void);
void wczytajTab(int n, int *tab);
void sprawdzJednakowe(int n, int *tab);
void koniec(void);

void info(void)
{
	printf("Program... Autor...\n");
}

int wczytajCal(void)
{
	printf("Podaj liczbe n\n");
	int n;
	while (scanf_s("%d", &n) != 1 || n > ILE || getchar() != '\n')
	{
		printf("Bledne dane popraw\n");

		while (getchar() != '\n')
		{
		}
	}
	return n;
}

void wczytajTab(int n, int *tab) //nie mozna zwrocic tablicy
{
	for (int i = 1; i <= n; i++)
	{
		printf("Podaj liczbe\n");
		while (scanf_s("%d", &tab[i]) != 1 || getchar() != '\n')
		{
			printf("Bledne dane popraw\n");
			while (getchar() != '\n')
			{
			}
		}
	}
}

void sprawdzJednakowe(int n, int *tab)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (tab[i] == tab[j])
			{
				printf("Powtarzajacy sie element to: %d\n", tab[i]);
			}
		}
	}
}

void koniec(void)
{
	printf("Koniec programu\n");
}



int main()
{
	void info(void);
	int n = wczytajCal();
	int tab[ILE];
	wczytajTab(n, tab);
	sprawdzJednakowe(n, tab);
	void koniec(void);
	return 0;
}

//83

//normalnie

#include <stdio.h>

#define ILE 100

int main()
{
  printf("Program... Autor...\n");
	int n; //stopien wielomianu
	int x; //czyli x
	int a[ILE]; //wspolczynniki
	//w(alfa) - wynik
	//wczytanie danych
	printf("Podaj stopien wielomianu\n");
	while (scanf_s("%d", &n) != 1 || n < 0 || n > ILE || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");

		while (getchar() != '\n')
		{
		}
	}
	//printf("Stopien wielomianu: %d\n", n);
	printf("Podaj x\n");
	while (scanf_s("%d", &x) != 1 || x < 0 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");

		while (getchar() != '\n')
		{
		}
	}
	//printf("Twoje x = %d\n", alfa);
	for (int i = 0; i <= n; i++)
	{
		printf("Podaj wspolczynnik\n");
		while (scanf_s("%d", &a[i]) != 1 || a[i] < 0 || getchar() != '\n')
		{
			printf("Bledne dane. Popraw\n");

			while (getchar() != '\n')
			{
			}
		}
		//printf("Wspolczynnik dla %d to %d\n", i, a[i]);
	}
	//algorytm 1 - wolniejszy
	/*int w1 = a[0];
	int pot = x;
	for (int i = 1; i <= n; i++)
	{
		w1 += a[i] * pot;
		pot *= x;
	}

	printf("Wynik: %d\n", w1);*/

	//algorytm 2 - szybszy
	int w = a[n];
	for (int i = n - 1; i >= 0; i--)
	{
		w = a[i] + x * w;
	}
	printf("Wynik: %d\n", w);
	printf("Koniec programu\n");
	return 0;
}

//na funckje - (nie dziala)
//jak najmniej printow w funkcjach
#include <stdio.h>

#define ILE 100

void info(void);
int wczytajN(void);
int wczytajX(void);
int wczytajA(int n);
void wypisz(int *a, int n, int x);
void koniec(void);

void info(void)
{
	printf("Program... Autor...\n");
}

int wczytajN(void)
{
	int n;
	printf("Podaj stopien wielomianu\n");
	while (scanf_s("%d", &n) != 1 || n < 0 || n > ILE || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		while (getchar() != '\n')
		{
		}
	}
	return n;
}

int wczytajX(void)
{
	int x;
	printf("Podaj x\n");
	while (scanf_s("%d", &x) != 1 || x < 0 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		while (getchar() != '\n')
		{
		}
	}
	return x;
}

int wczytajA(int n, int *a)
{
	for (int i = 0; i <= n; i++)
	{
		printf("Podaj wspolczynnik\n");
		while (scanf_s("%d", &a[i]) != 1 || a[i] < 0 || getchar() != '\n')
		{
			printf("Bledne dane. Popraw\n");
			while (getchar() != '\n')
			{
			}
		}
		return a;
	}
}

void wypisz(int *a, int n, int x)
{
	int w = a[n];
	for (int i = n - 1; i >= 0; i--)
	{
		w = a[i] + x * w;
	}
	printf("Wynik: %d\n", w); //powinna byc osoba funkcja do wypisywania
}

void koniec(void)
{
	printf("Koniec programu\n");
}

int main()
{
	void info(void);
	int n = wczytajN();
	int x = wczytajX();
	int a[ILE];
	int wczytajA(n, a);
	void wypisz(a, n, x);
	void koniec(void);
	return 0;
}


//84 - nie ma sensu na funckje

#include <stdio.h>

#define ILE 13

int main()
{
	//iloczyn uogolniony
	printf("Program... Autor...\n");
	int wynik; //wynik
	for (int i = 0; i <= ILE - 1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (i == 0 || j == 0)
			{
				wynik = 1;
			}
			else 
			{
				wynik *= (double)(i - j + 1) / j;
			}
			printf("%6d", wynik);
		}
		printf("%6d", 1);
		printf("\n");
	}
	printf("Koniec programu\n");
	return 0;
}

//85 - nie ma sensu na funkcje

#include <stdio.h>

#define ILE 35

int main()
{
	printf("Program...Autor...\n");
	int tab[ILE] = { 1 };
	for (int i = 0; i < ILE; i++)
	{
		for (int k = 0; k < ILE; k++)
		{
			if (tab[k] != 0) //zeby nie wypisywalo 0
			{
				printf("%6d", tab[k]); //wypisz tablice
			}
		}
		putchar('\n');
		for (int j = ILE - 1; j > 0; j--)
		{
			tab[j] = tab[j] + tab[j - 1]; //dodaje sasiednie wartosci tablicy popraw zawartosc tablicy
		}
	}
	return 0;
}

//86

int main()
{
	//conio.h - do czyszczenia ekranu
	//czyscimy ekran
	//rysujemy
	//czyscimy klatke//

	//nie przejmowac sie
	//stablicowac wartosc sinusa
	f[33];
	for ()
	{
		f[i] = sin();
	}
}