//87

//normalnie

#include <stdio.h>

#define ILE 25

int main()
{
	printf("Program... Autor...\n");
	int tab[ILE][ILE];
	int n;
	int m;
	printf("Podaj n\n");
	while (scanf_s("%d", &n) != 1 || n > ILE || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		while (getchar() != '\n')
		{
		}
	}
	printf("Podaj m\n");
	while (scanf_s("%d", &m) != 1 || m > ILE || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		while (getchar() != '\n')
		{
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("Podaj wartosc tablicy\n");
			while (scanf_s("%d", &tab[i][j]) != 1 || getchar() != '\n')
			{
				printf("Bledne dane. Popraw\n");
				while (getchar() != '\n')
				{
				}
			}
			printf("tab[%d][%d] = %3d\n",i , j, tab[i][j]);
		}
	}
	printf("Koniec programu\n");
	return 0;
}

//na losowanie

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ILE 25

int main()
{
	srand(time(NULL));
	printf("Program... Autor...\n");
	int tab[ILE][ILE];
	int n;
	int m;
	printf("Podaj n\n");
	while (scanf_s("%d", &n) != 1 || n > ILE || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		while (getchar() != '\n')
		{
		}
	}
	printf("Podaj m\n");
	while (scanf_s("%d", &m) != 1 || m > ILE || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		while (getchar() != '\n')
		{
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			tab[i][j] = rand() % 26;
			printf("%3d", tab[i][j]);
		}
		putchar('\n');
	}
	printf("Koniec programu\n");
	return 0;
}

//88

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ILE 25

	int main()
	{
		srand(time(NULL));
		printf("Program... Autor...\n");
		int tab[ILE][ILE];
		int n;
		int m;
		printf("Podaj n\n");
		while (scanf_s("%d", &n) != 1 || n > ILE || getchar() != '\n')
		{
			printf("Bledne dane. Popraw\n");
			while (getchar() != '\n')
			{
			}
		}
		printf("Podaj m\n");
		while (scanf_s("%d", &m) != 1 || m > ILE || getchar() != '\n')
		{
			printf("Bledne dane. Popraw\n");
			while (getchar() != '\n')
			{
			}
		}
		for (int i = 0; i < ILE; i++)
		{
			for (int j = 0; j < ILE; j++)
			{
				tab[i][j] = rand() % 26;
			}
			putchar('\n');
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				printf("%3d", tab[i][j]);
			}
			putchar('\n');
		}
		putchar('\n');
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				printf("%3d", tab[j][i]);
			}
			putchar('\n');
		}
		printf("Koniec programu\n");
		return 0;
	}

//89

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ILE 25

int main()
{
	srand(time(NULL));
	printf("Program... Autor...\n");
	int tab[ILE][ILE];
	int n;
	int m;
	int max = 0;
	int x = 0;
	int y = 0;
	printf("Podaj n\n");
	while (scanf_s("%d", &n) != 1 || n > ILE || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		while (getchar() != '\n')
		{
		}
	}
	printf("Podaj m\n");
	while (scanf_s("%d", &m) != 1 || m > ILE || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		while (getchar() != '\n')
		{
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			tab[i][j] = rand() % 26;
			printf("%3d", tab[i][j]);
			if (tab[i][j] > max)
			{
				max = tab[i][j];
				x = i;
				y = j;
			}
		}
		putchar('\n');
	}
	printf("Maks: %3d\n", max);
	printf("Koniec programu\n");
	return 0;
}

//90

#include <stdio.h>

#define ILE 25

int main()
{
	printf("Program... Autor...\n");
	int tab[ILE][ILE];
	int n;
	int m;
	printf("Podaj n\n");
	while (scanf_s("%d", &n) != 1 || n > ILE || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		while (getchar() != '\n')
		{
		}
	}
	printf("Podaj m\n");
	while (scanf_s("%d", &m) != 1 || m > ILE || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		while (getchar() != '\n')
		{
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("Podaj elemnty tablicy\n");
			while (scanf_s("%d", &tab[i][j]) != 1 || tab[i][j] < 0 || tab[i][j] > 1 || getchar() != '\n')
			{
				printf("Bledne dane. Popraw\n");
				while (getchar() != '\n')
				{
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%3d", tab[i][j]);
		}
		putchar('\n');
	}
	//na diagonali musza byc 1, a na reszcie zera 
	for (int i = 0; i < n; i++)
	{
		if (tab[i][i] == 0)
		{
			printf("\nW kazdym wierszu i w kazdej kolumnie powinna stac dok³adnie jedna jedynka\n");
		}
	}
	printf("Koniec programu\n");
	return 0;
}

//91

#include <stdio.h>

#define ILE 25

int main()
{
	printf("Program... Autor...\n");
	int tab[ILE][ILE];
	int n;
	int m;
	int suma = 0;
	printf("Podaj n\n");
	while (scanf_s("%d", &n) != 1 || n > ILE || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		while (getchar() != '\n')
		{
		}
	}
	printf("Podaj m\n");
	while (scanf_s("%d", &m) != 1 || m > ILE || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		while (getchar() != '\n')
		{
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("Podaj elemnty tablicy\n");
			while (scanf_s("%d", &tab[i][j]) != 1 || getchar() != '\n')
			{
				printf("Bledne dane. Popraw\n");
				while (getchar() != '\n')
				{
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			suma += tab[i][j];
		}
	}
	printf("Suma: %d\n", suma);
	printf("Koniec programu\n");
	return 0;
}

//92

#include <stdio.h>

#define ILE 25

int main()
{
	printf("Program... Autor...\n");
	int tab[ILE][ILE];
	int n;
	int suma = 0;
	printf("Podaj n\n");
	while (scanf_s("%d", &n) != 1 || n > ILE || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		while (getchar() != '\n')
		{
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Podaj elemnty tablicy\n");
			while (scanf_s("%d", &tab[i][j]) != 1 || getchar() != '\n')
			{
				printf("Bledne dane. Popraw\n");
				while (getchar() != '\n')
				{
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%3d", tab[i][j]);
		}
		putchar('\n');
	}
	for (int i = 0; i < n; i++)
	{
			suma += tab[i][i];
	}
	printf("Suma: %d\n", suma);
	printf("Koniec programu\n");
	return 0;
}

//93

//powyzej diagonali

#include <stdio.h>

#define ILE 25

int main()
{
	printf("Program... Autor...\n");
	int tab[ILE][ILE];
	int n;
	int suma = 0;
	printf("Podaj n\n");
	while (scanf_s("%d", &n) != 1 || n > ILE || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		while (getchar() != '\n')
		{
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Podaj elemnty tablicy\n");
			while (scanf_s("%d", &tab[i][j]) != 1 || getchar() != '\n')
			{
				printf("Bledne dane. Popraw\n");
				while (getchar() != '\n')
				{
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%3d", tab[i][j]);
		}
		putchar('\n');
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (i < j)
			{
				suma += tab[i][j];
			}
		}
		
	}
	printf("Suma: %d\n", suma);
	printf("Koniec programu\n");
	return 0;
}

//ponizej diagonali

#include <stdio.h>

#define ILE 25

int main()
{
	printf("Program... Autor...\n");
	int tab[ILE][ILE];
	int n;
	int suma = 0;
	printf("Podaj n\n");
	while (scanf_s("%d", &n) != 1 || n > ILE || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		while (getchar() != '\n')
		{
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Podaj elemnty tablicy\n");
			while (scanf_s("%d", &tab[i][j]) != 1 || getchar() != '\n')
			{
				printf("Bledne dane. Popraw\n");
				while (getchar() != '\n')
				{
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%3d", tab[i][j]);
		}
		putchar('\n');
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (i > j)
			{
				suma += tab[i][j];
			}
		}
	}
	printf("Suma: %d\n", suma);
	printf("Koniec programu\n");
	return 0;
}
