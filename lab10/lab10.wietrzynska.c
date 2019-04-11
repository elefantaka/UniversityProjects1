//67

//normalnie

#include <stdio.h>

int main()
{
	printf("Program... Autor...\n");

	printf("Podaj ilosc gwiazdek\n");
	int n;
	while (scanf_s("%d", &n) != 1 || getchar() != '\n')
	{
		printf("bledne dane. popraw\n");

		while (getchar() != '\n')
		{
		}
	}

	for (int i = 0; i < n; i++)
	{
		putchar('*');
	}
	putchar('\n');

	printf("Koniec programu\n");
	return 0;
}

//na funkcje

#include <stdio.h>

void info()
{
	printf("Program... Autor...\n");
}

int wczytajNaturalna()
{
	printf("Podaj ilosc gwiazdek\n");
	int n;
	while (scanf_s("%d", &n) != 1 || getchar() != '\n')
	{
		printf("bledne dane. popraw\n");

		while (getchar() != '\n')
		{
		}
	}
	return n;
}

void wypiszLinie(int ile)
{
	for (int i = 0; i < ile; i++)
	{
		putchar('*');
	}
	putchar('\n');
}

void koniec()
{
	printf("Koniec programu\n");
}

int main()
{
	info();

	int n = wczytajNaturalna();//liczba gwiazdek, od razu wczytaje
	wypiszLinie(n);
	koniec();
	return 0;
}

//68

//normalnie 

#include <stdio.h>

int main()
{
	printf("Program... Autor...\n");

	printf("Podaj ilosc gwiazdek\n");
	int n;
	while (scanf_s("%d", &n) != 1 || getchar() != '\n')
	{
		printf("bledne dane. popraw\n");

		while (getchar() != '\n')
		{
		}
	}

	for (int j = 0; j < n; j++) //gdy petla w petli 2 rozne ideksy
	{
		for (int i = 0; i < n; i++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	printf("Koniec programu\n");
	return 0;
}

//na funckje

#include <stdio.h>

void info()
{
	printf("Program... Autor...\n");
}

int wczytajNaturalna()
{
	printf("Podaj ilosc gwiazdek\n");
	int n;
	while (scanf_s("%d", &n) != 1 || getchar() != '\n')
	{
		printf("bledne dane. popraw\n");

		while (getchar() != '\n')
		{
		}
	}
	return n;
}

void wypiszLinie(int ile)
{
	for (int i = 0; i < ile; i++)
	{
		putchar('*');
	}
	putchar('\n');
}

void wypiszKwadrat(int ile)
{
	for (int i = 0; i < ile; i++)
	{
		wypiszLinie(ile);
	}
}

void koniec()
{
	printf("Koniec programu\n");
}

int main()
{
	info();
	int n = wczytajNaturalna();
	wypiszKwadrat(n);
	koniec();
	return 0;
}

//69 

//normalnie

#include <stdio.h>

int main()
{
	printf("Program... Autor...\n");

	printf("Podaj ilosc gwiazdek\n");
	int n;
	while (scanf_s("%d", &n) != 1 || getchar() != '\n')
	{
		printf("bledne dane. popraw\n");

		while (getchar() != '\n')
		{
		}
	}

	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < 2 * n; i++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	printf("Koniec programu\n");
	return 0;
}

//na funkcje

#include <stdio.h>

void info()
{
	printf("Program... Autor...\n");
}

int wczytajNaturalna()
{
	printf("Podaj ilosc gwiazdek\n");
	int n;
	while (scanf_s("%d", &n) != 1 || getchar() != '\n')
	{
		printf("bledne dane. popraw\n");

		while (getchar() != '\n')
		{
		}
	}
	return n; //zwroc n
}

void wypiszLinie(int ile)
{
	for (int i = 0; i < ile; i++)
	{
		putchar('*');
	}
	putchar('\n');
}

void wypiszKwadrat(int ile)
{
	for (int i = 0; i < ile; i++)
	{
		wypiszLinie(2 * ile); //tutaj zmiana
	}
}

void koniec()
{
	printf("Koniec programu\n");
}

int main()
{
	info();
	int n = wczytajNaturalna();
	wypiszKwadrat(n);
	koniec();
  return 0;
}

//70

//normalnie

#include <stdio.h>

int main()
{
	printf("Program... Autor...\n");

	printf("Podaj ilosc gwiazdek\n");
	int n;
	while (scanf_s("%d", &n) != 1 || getchar() != '\n')
	{
		printf("bledne dane. popraw\n");

		while (getchar() != '\n')
		{
		}
	}

	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < j + 1; i++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	printf("Koniec programu\n");
	return 0;
}

//na funkcje

#include <stdio.h>

void info()
{
	printf("Program... Autor...\n");
}

int wczytajNaturalna()
{
	printf("Podaj ilosc gwiazdek\n");
	int n;
	while (scanf_s("%d", &n) != 1 || getchar() != '\n')
	{
		printf("bledne dane. popraw\n");

		while (getchar() != '\n')
		{
		}
	}
	return n;
}

void wypiszLinie(int ile)
{
	for (int i = 0; i < ile; i++)
	{
		putchar('*');
	}
	putchar('\n');
}

void wypiszKwadrat(int ile)
{
	for (int i = 0; i < ile; i++)
	{
		wypiszLinie(i + 1); //tutaj zmiana
	}
}

void koniec()
{
	printf("Koniec programu\n");
}

int main()
{
	info();
	int n = wczytajNaturalna();
	wypiszKwadrat(n);
	koniec();
}

//71 

//normalnie

#include <stdio.h>

int main() 
{
	printf("Program... Autor...\n");

	printf("Podaj ilosc n\n");
	int n;
	while (scanf_s("%d", &n) != 1 || getchar() != '\n')
	{
		printf("Bledne dane popraw\n");

		while (getchar() != '\n')
		{
		}
	}
	
	for (int j = 1; j <= n; j++)
	{
		//wczytaj jedna linie, narysuj jota linie
		//rysujemy spacje
		for (int i = 1; i <= n - j; i++)
		{
			putchar(' ');
		}
		//rysujemy 2 linie
		for (int i = 1; i <= 2 * j - 1; i++) //mozna uzyc i znwu, bo petle roznolegle, nie ma problemu
		{
			putchar('*');
		}
		//rysuj enter
		putchar('\n');
	}
	printf("Koniec programu\n");
	return 0;
}

//na funckje //j przeszlo na i

#include <stdio.h>

void info()
{
	printf("Program... Autor...\n");
}

int wczytajNaturalna()
{
	printf("Podaj ilosc n\n");
	int n;
	while (scanf_s("%d", &n) != 1 || getchar() != '\n')
	{
		printf("Bledne dane popraw\n");

		while (getchar() != '\n')
		{
		}
	}
	return n;
}

void wypiszZnaki(int ile, char znak)
{
	for (int i = 1; i <= ile; i++)
	{
		putchar(znak);
	}
}

void wypiszTrojkat(int ile) //ile rzedow
{
	for (int i = 1; i <= ile; i++)
	{
		wypiszZnaki(ile - i, ' ');
		wypiszZnaki(2 * i - 1, '*');
		putchar('\n');
	}
}

void koniec()
{
	printf("Koniec programu\n");
}

int main()
{
	info();
	int n = wczytajNaturalna();
	wypiszTrojkat(n);
	koniec();
	return 0;
}

//72

//normalnie

#include <stdio.h>

#define ILE 15

int main()
{
	printf("Program... Autor...\n\n");
	//pierwsza linia
	putchar('\t');
	for (int i = 1; i <= ILE; i++)
	{
		printf("%4d", i);
	}
	putchar('\n');
	//druga linia
	for (int i = 1; i <= 68; i++)
	{
		putchar('-');
	}
	putchar('\n');
	//reszta linii
	for (int j = 1; j <= ILE; j++)
	{
		printf("%2d |    ", j);

		for (int i = 1; i <= ILE; i++)
		{
			printf("%4d", i * j);
		}
		putchar('\n');
	}
	putchar('\n');
	printf("Koniec programu.\n");
	return 0;
}

//na funkcje

#include <stdio.h>

#define ILE 15

void info()
{
	printf("Program... Autor...\n");
}

void wypiszTabliczke()
{
	putchar('\t');
	for (int i = 1; i <= ILE; i++)
	{
		printf("%4d", i);
	}
	putchar('\n');
	//druga linia
	for (int i = 1; i <= 68; i++)
	{
		putchar('-');
	}
	putchar('\n');
	for (int j = 1; j <= ILE; j++)
	{
		printf("%2d |    ", j);

		for (int i = 1; i <= ILE; i++)
		{
			printf("%4d", i * j);
		}
		putchar('\n');
	}
	putchar('\n');
}

void koniec()
{
	printf("Koniec programu.\n");
}

int main()
{
	info();
	wypiszTabliczke();
	koniec();
	return 0;
}

//73 

//normalnie

#include <stdio.h>

#define ILE 255

int main()
{
	printf("Program... Autor\n\n");
	//pierwsza linia
	printf("kod  skrot\n");
	//reszta linii
	for (int i = 0; i <= ILE; i++)
	{
		switch (i)
		{
		case 0:
			printf("%3d   nul\n", i);
			continue;
		case 7:
			printf("%3d   bel\n", i);
			continue;
		case 8:
			printf("%3d   bs\n", i);
			continue;
		case 9:
			printf("%3d   ht\n", i);
			continue;
		case 10:
			printf("%3d   nl\n", i);
			continue;
		case 11:
			printf("%3d   vt\n", i);
			continue;
		case 12:
			printf("%3d   np\n", i);
			continue;
		case 13:
			printf("%3d   cr\n", i);
			continue;
		case 26:
			printf("%3d   eof\n", i);
			continue;
		case 27:
			printf("%3d   esc\n", i);
			continue;
		case 127:
			printf("%3d   del\n", i);
			continue;
		}
		printf("%3d   %c\n", i, i);	
	}
	printf("Koniec programu\n");
	return 0;
}

//na funkcje

#include <stdio.h>

#define ILE 255

void info()
{
	printf("Program...Autor...\n");
}

void kodAscii()
{
	//pierwsza linia
	printf("kod  skrot\n");
	//reszta linii
	for (int i = 0; i <= ILE; i++)
	{
		switch (i)
		{
		case 0:
			printf("  %d   nul\n", i);
			continue;
		case 7:
			printf("  %d   bel\n", i);
			continue;
		case 8:
			printf("  %d   bs\n", i);
			continue;
		case 9:
			printf("  %d   ht\n", i);
			continue;
		case 10:
			printf("  %d   nl\n", i);
			continue;
		case 11:
			printf("  %d   vt\n", i);
			continue;
		case 12:
			printf("  %d   np\n", i);
			continue;
		case 13:
			printf("  %d   cr\n", i);
			continue;
		case 26:
			printf("  %d   eof\n", i);
			continue;
		case 27:
			printf("  %d   esc\n", i);
			continue;
		case 127:
			printf("  %d   del\n", i);
			continue;
		}
		printf("  %d   %c\n", i, i);
	}
}

void koniec()
{
	printf("Koniec programu\n");
}

int main()
{
	info();
	kodAscii();
	koniec();
	return 0;
}

//74

//normalnie

#include <stdio.h>

int main()
{
	printf("Program... Autor...\n");
	//uzytkownik wprowadza liczbe n
	printf("Podaj liczbe n\n");
	int n;
	while (scanf_s("%d", &n) != 1 || n < 1 || n > 9 || getchar() != '\n')
	{
		printf("Bledne dane popraw\n");

		while (getchar() != '\n')
		{
		}
	}
	//suma
	int suma = 0;
	for (int i = 1; i <= n; i++)
	{
		int liczba = 0;
		for (int j = 1; j <= i; j++)
		{
			liczba = 10 * liczba + i;
		}
		if (i < n)
		{
			printf("%d + ", liczba);
		}
		else
		{
			printf("%d", liczba);
		}
		suma = suma + liczba;
	}
	putchar('\n');
	printf("Suma = %d\n", suma);
	printf("Koniec programu\n");
	return 0;
}

//na funkcje

#include <stdio.h>

void info()
{
	printf("Program... Autor...\n");
}

int wczytajNaturalna()
{
	printf("Podaj liczbe n\n");
	int n;
	while (scanf_s("%d", &n) != 1 || n < 1 || n > 9 || getchar() != '\n')
	{
	printf("Bledne dane popraw\n");
	
		while (getchar() != '\n')
		{
		}
	}
	return n;
}

void koniec()
{
	printf("Koniec programu\n");
}

int main()
{
	info();
	int n = wczytajNaturalna();
	koniec();
}

