//1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define KUPONY 100 //100 kuponow klientow
#define ILOSC 6//losy
#define LICZBY 49 //ilosc liczb w kupownie

int main()
{
	printf("Program... Autor...\n");
	srand(time(NULL)); 
	//WYPELNIANIE KUPONOW
	int kupony[KUPONY][LICZBY] = { {0} };
	for (int i = 0; i < KUPONY; i++)
	{
		for (int j = 0; j < ILOSC; j++)
		{
			int temp = rand() % 50 + 1;
			kupony[i][temp - 1] = 1;
		}
	}
	for (int i = 0; i < KUPONY; i++)
	{
		for (int j = 0; j < ILOSC; j++)
		{
			printf("%3d", kupony[i][j]);
		}
		putchar('\n');
	}
	//MASZYNA LOSUJACA
	int los[ILOSC];
	for (int i = 0; i < ILOSC; i++)
	{
		los[i] = rand() % 50 + 1;
	}
	printf("Maszyna wylosowala:\n");
	for (int i = 0; i < ILOSC; i++)
	{
		printf("%3d", los[i]);
	}
	putchar('\n');
	//SPRAWDZANIE WYGRANYCH
	int trafienia[KUPONY];
	for (int i = 0; i < KUPONY; i++)
	{
		int temp = 0;
		int temp1 = 0;
		for (int j = 0; j < LICZBY; j++)
		{
			for(int k = 0; k < ILOSC; k++)
			if (kupony[i][j] == 1 && j + 1 == los[k]) //j+1 zakreslona liczba
			{
				temp++; //ilosc trafien
			}
			if (kupony[i][j] == 1)
			{
				printf("%3d", j + 1); 
				temp1++; 
			}
		}
		putchar('\n');
		if (temp1 != 6)
		{
			printf("  - Blednie wypelniony kupon\n");
		}
		else
		{
			printf("   - Ilosc trafien: %d\n", temp);
		}
	}
	printf("\nKoniec programu\n");
	return 0;
}

//2

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define ILE 10
//#define STRZALY 40
//#define STATKI 6
//#define WODA 0
//#define DZIOB 1 //LEWY GORNY ROG
//#define RUFA 2 //LEWY DOLNY ROG	
//
//
//int main()
//{
//	srand(time(NULL));
//	printf("Program... Autor...\n\n");
//	int plansza[ILE][ILE] = { {WODA} };
//	printf("Pierwsza liczba w parze oznacza nr wiersza, a druga kolumny.Numeracja od 0.\n\n");
//	printf("Ustawianie - proby losowan:\n\n");
//	for (int i = 0; i < STATKI; 1)
//	{
//		int x = rand() % 8 + 1;
//		int y = rand() % 8 + 1;
//		if ((plansza[x][y] != DZIOB || plansza[x][y] != RUFA) && (plansza[x + 1][y + 1] != RUFA || plansza[x + 1][y + 1] != DZIOB)) //musi byc wszedzie 0 czyli woda
//		{
//			plansza[x][y] = DZIOB;
//			plansza [x+1][y+1] = RUFA;
//			printf("(%d,%d)ok ", x, y);
//			i++;
//		}
//		else
//		{
//			printf("(%d,%d)", x, y);
//		}
//	}
//	putchar('\n');
//	//printf("\nRozmieszczenie statkow (podano wspolrzedne lewego gornego pola):\n\n");
//	printf("Strzaly:\n\n");
//	for (int i = 0; i < STRZALY; i++)
//	{
//		int x = rand() % 10 + 1;
//		int y = rand() % 10 + 1;
//		if (plansza[x][y] == DZIOB)
//		{
//			printf("(%d,%d) trafiony\n", x, y);
//			plansza[x + 1][y + 1] = WODA;
//			plansza[x][y] = WODA;
//		}
//		else if (plansza[x][y] == RUFA)
//		{
//			printf("(%d,%d) trafiony\n", x, y);
//			plansza[x - 1][y - 1] = WODA;
//			plansza[x][y] = WODA;
//		}
//		else
//		{
//			printf("(%d,%d) pudlo\n", x, y);
//		}
//	}
//	printf("Rozmieszczenie pozostalych statkow (podano wspolrzedne lewego gornego pola):\n");
//	int temp = 0;
//	for (int i = 0; i < ILE; i++)
//	{
//		for (int j = 0; j < ILE; j++)
//		{
//			if (plansza[i][j] == DZIOB || plansza[i][j] == RUFA)
//			{
//				temp = 1;
//				printf("(%d,%d) \n", i, j);
//			}
//		}
//	}
//	if (temp == 1)
//	{
//		printf("Niestety przegrales\n");
//	}
//	else
//	{
//		printf("Wygrales. Gratulacje!\n");
//	}
//	printf("\nKoniec programu\n");
//	return 0;
//}

//3


//#include<stdio.h> //1
//#include<stdlib.h> //2
//#define dd NULL //3
//enum { ee = 1 } ff = ee + 17; //4
//main() { //5
//	float hh[] = { 10,4,(float)(’b’ - ’d’) }; //6
//	static float *ii = dd; //7
//	hh[0] += 6 / 4; //8
//	ii = &hh[2] - 1; //9
//	*ii = ii[0] + 3; //10
//	ii[-1] = (*(hh + 1)) + 2; //11
//	hh[2] = *(++ii) * 2; //12
//	*ii = hh[0] == 4; //13
//	printf("++ff=%d", ff + 1); //14
//	if (ff - 2) //15
//		ff--; //16
//	if ((ff++ < 120) && (hh[1] = 3) || (++hh[0])) //17
//		ff--; //18
//	for (1;; 1) { //19
//		int ff = (int)(*(hh)); //20
//		for (hh[0] = 1, ff = 3; ff < 4; ff *= 2) { //21
//			int ii = ff + 1; //22
//			ii++; //23
//		} //24
//		break; //25
//		ff++; //26
//	} //27
//	return 0; //28
//}