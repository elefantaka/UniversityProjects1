//94 

#include <stdio.h>

#define ILE 25

int main()
{
	printf("Program... Autor...\n");
	int n;
	int tab[ILE][ILE];
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
			printf("Podaj elementy tablicy\n");
			while (scanf_s("%d", &tab[i][j]) != 1 || getchar() != '\n')
			{
				printf("Bledne dane. Popraw\n");
				while (getchar() != '\n')
				{
				}
			}
		}
	}
	//wypisanie tablicy w kwadracie lub prostokacie!!!
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%3d", tab[i][j]);
		}
		putchar('\n');
	}
	int k = 1; 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (tab[i][j] != 0)
			{
				k = 0;
				break;
			}
		}
	}
	if (k == 1)
	{
		printf("Wszystkie elementy pod przekatna sa zerem\n");
	}
	else
	{
		printf("Wszystkie elementy pod przekatna nie sa zerem\n");
	}
	printf("Koniec programu\n");
	return 0;
}

//95 

#include <stdio.h>

#define ILE 25

int main()
{
	printf("Program... Autor...\n");
	int n;
	int a = 1;
	int b = 2;
	int tab[ILE][ILE];
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
			printf("Podaj elementy tablicy\n");
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
	putchar('\n');
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == a)
			{
				printf("%3d", tab[b][j]);
			}
			else if (i == b)
			{
				printf("%3d", tab[a][j]);
			}
			else
			{
				printf("%3d", tab[i][j]);
			}
		}
		putchar('\n');
	}
	printf("Koniec programu\n");
	return 0;
}

//96 

#include <stdio.h>

#define ILE 25

int main()
{
	printf("Program... Autor...\n");
	int n;
	int max = 0;
	int tab[ILE][ILE];
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
			printf("Podaj elementy tablicy\n");
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
	putchar('\n');
	for (int i = 0; i < n; i++)
	{
		if (tab[i][i] > max)
		{
			max = i;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == max || j == max)
			{
				printf("%3d", tab[j][i]);
			}
			else
			{
				printf("%3d", tab[i][j]);
			}
		}
	}
	printf("Koniec programu\n");
	return 0;
}

//97 

#include <stdio.h>

#define ILE 25

int main()
{
	int n;
	int m;
	int a[ILE][ILE];
	int b[ILE][ILE];
	int c[ILE][ILE] = { 0 };
	printf("Program... Autor...\n");
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
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Podaj elementy tabeli a\n");
			while (scanf_s("%d", &a[i][j]) != 1 || getchar() != '\n')
			{
				printf("Bledne dane. Popraw\n");
				while (getchar() != '\n')
				{
				}
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%3d", a[i][j]);
		}
		putchar('\n');
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Podaj elementy tabeli b\n");
			while (scanf_s("%d", &b[i][j]) != 1 || getchar() != '\n')
			{
				printf("Bledne dane. Popraw\n");
				while (getchar() != '\n')
				{
				}
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%3d", b[i][j]);
		}
		putchar('\n');
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	putchar('\n');
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%3d", c[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
	printf("Koniec programu\n");
	return 0;
}

//98 

#include <stdio.h>

#define ILE 25

int main()
{
	int n;
	int m;
	int k;
	int a[ILE][ILE];
	int b[ILE][ILE];
	int c[ILE][ILE] = { 0 };
	printf("Program... Autor...\n");
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
	printf("Podaj k\n");
	while (scanf_s("%d", &k) != 1 || k > ILE || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		while (getchar() != '\n')
		{
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Podaj elementy tabeli a\n");
			while (scanf_s("%d", &a[i][j]) != 1 || getchar() != '\n')
			{
				printf("Bledne dane. Popraw\n");
				while (getchar() != '\n')
				{
				}
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%3d", a[i][j]);
		}
		putchar('\n');
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			printf("Podaj elementy tabeli b\n");
			while (scanf_s("%d", &b[i][j]) != 1 || getchar() != '\n')
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
		for (int j = 0; j < k; j++)
		{
			printf("%3d", b[i][j]);
		}
		putchar('\n');
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < k; j++)
		{
			for (int s = 0; s < n; s++)
			{
				c[i][j] += a[i][s] * b[s][j];
			}
		}
	}
	putchar('\n');
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < k; j++)
		{
			printf("%3d", c[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
	printf("Koniec programu\n");
	return 0;
}

//99 

#include <stdio.h>
#include <stdlib.h>

#define ILE 25

int main()
{
	int n;
	int m;
	int max = 0;
	int suma = 0;
	int a[ILE][ILE];
	int p[ILE] = { 0 };
	printf("Program... Autor...\n");
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
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Podaj elementy tabeli a\n");
			while (scanf_s("%d", &a[i][j]) != 1 || getchar() != '\n')
			{
				printf("Bledne dane. Popraw\n");
				while (getchar() != '\n')
				{
				}
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%3d", a[i][j]);
		}
		putchar('\n');
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			suma += abs(a[i][j]);
		}
		p[i] = suma;
		suma = 0;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (p[i] > max)
			{
				max = p[i];
			}
		}
	}
	printf("max: %d", max);
	putchar('\n');
	printf("Koniec programu\n");
	return 0; 
}

//100 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ILE 25

int main()
{
	int n;
	int m;
	int suma = 0;
	int a[ILE][ILE];
	double p[ILE] = { 0 };
	printf("Program... Autor...\n");
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
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Podaj elementy tabeli a\n");
			while (scanf_s("%d", &a[i][j]) != 1 || getchar() != '\n')
			{
				printf("Bledne dane. Popraw\n");
				while (getchar() != '\n')
				{
				}
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%3d", a[i][j]);
		}
		putchar('\n');
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			suma += a[i][j] * a[i][j];
		}
		suma = sqrt(suma);
	}
	printf("Suma: %d", suma);
	putchar('\n');
	printf("Koniec programu\n");
	return 0;
}
