
//17

#include <stdio.h>

main()
{
	int liczba; //wczytana liczba
	printf("Podaj liczbe calkowita.\n");
	scanf_s("%d", &liczba);
	printf("Podales\t %d\n", liczba);
	printf("Koniec.\n\n");
	return 0;
}
//gdy jest zmiennopozycyjna odczytuje ja jako calkowita, ucina to co jest za przecinkiem
//gdy duza, nie odczytuje, podaj -1


//18
#include <stdio.h>

main()
{
	double liczba; //wczytana liczba
	printf("Podaj liczbe wymierna w postaci rozwiniecia dziesietnego\n");
	scanf_s("%f", &liczba);
	printf("Podales\t %f", liczba);
	printf("Koniec.\n");
	return 0;
}

//19

#include <stdio.h>

main()
{
	int liczba1, liczba2;
	printf("Podaj dwie liczby calkowite\n");
	scanf_s("%d%d", &liczba1, &liczba2);
	printf("Podales liczby: %d\t%d\n", liczba1, liczba2);
	printf("Koniec\n");
	return 0;
}

//20

#include <stdio.h>

main()
{
	int liczba1, liczba2;
	printf("Podaj dwie liczby calkowite.\n");
	if (scanf_s("%d", &liczba1) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Koniec\n");
		return 0;
	}
	if (scanf_s("%d", &liczba2) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Koniec\n");
		return 0;
	}
	printf("Podales liczby: %d\t%d\n", liczba1, liczba2);
	return 0;
}

//21
#include <stdio.h>

main()
{
	int liczba1;
	printf("Podaj liczbe w systemie szesnastkowym.\n");
	if (scanf_s("%x", &liczba1) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Koniec\n");
		return 0;
	}
	printf("Podales liczby: %d\n", liczba1);
	return 0;
}

//22
#include <stdio.h>

main()
{
	int liczba1;
	printf("Podaj liczbe w systemie szesnastkowym.\n");
	if (scanf_s("%d", &liczba1) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Koniec\n");
		return 0;
	}
	printf("Podales liczby: %x\n", liczba1);
	return 0;
}

//23
#include <stdio.h>

main()
{
	int liczba;
	printf("Podaj liczbe w systemie dziesietnym.\n");
	if (scanf_s("%d", &liczba) != 1 || liczba <= 0 || getchar() != '\n')
	{
		printf("Bledne dane. Koniec\n");
		return 0;
	}
	printf("Podales liczby: %x\n", liczba);
	return 0;
}


//24
#include <stdio.h>

main()
{
	//info
		int liczba;
	printf("Program... Autor...\n");
	//wczytanie, dbamy o uzytkownika
		printf("Podaj liczbe calkowita.\n");
	if (scanf_s("%d", &liczba) != 1 || liczba <= 0 || getchar() != '\n')
	{
		printf("Bledne dane. Koniec.\n");
		return 0;
	}
	printf("Podales %d\n", liczba);
	//czy dodatnia
		if (liczba > 0)
		{
			printf("Jest dodatnia.\n\n");
		}
		else
		{
			printf("Jest niedodatnia.\n\n");
		}
	//koncowka
		printf("Koniec.\n");
	return 0;
}

