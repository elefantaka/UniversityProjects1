//11
#include <stdio.h>

main()
{
	printf("d: %d\n", -5);
	printf("d: %o\n", -5);
	printf("d: %u\n", -5);
	printf("d: %f\n", -5);
	printf("d: %e\n", -5);
	printf("d: %g\n", -5);
	printf("d: %s\n", 5);
	return 0;
	//dziwna reakcja, nie wyswietla sie ostatnia linia, czyli 7
}

//12

#include <stdio.h>

main()
{
	printf("d: %d\n", -5.0); //ma byc calkowita - dlatego nie dziala
	printf("d: %o\n", -5.0); //ma byc calkowita - dlatego nie dziala
	printf("d: %u\n", -5.0); //ma byc calkowita - dlatego nie dziala
	printf("d: %f\n", -5.0);
	printf("d: %e\n", -5.0);
	printf("d: %g\n", -5.0);
	printf("d: %s\n", -5.0); //wyskakuje null :)
	return 0;
}

//13

#include <stdio.h>

main()
{
	printf("Oba argumenty w dzialaniach sa zmiennopozycyjne, format wypisywania wyniku zmiennopozycyjny.\n");
	printf("Wynik dodawania: %f\n\n", 2.0 + 3.0);
	printf("Oba argumenty sa calkowite, format wypisywania calkowity:\n");
	printf("Wynik dodawania: %d\n\n", 2 + 3);
	printf("Jeden argument zmiennopozycyjny, drugi calkowity, format wypisywania zmiennopozycyjny\n");
	printf("Wynik dodawania: %f\n\n", 2.0 + 3);
	printf("Jeden argument zmiennopozycyjny, drugi calkowity, format wypisywania calkowity\n");
	printf("Wynik dodawania: %d\n\n", 2.0 + 3); //blad, powinien byc format wypisywania zmiennopozycyjny
	return 0;
}

//14

#include <stdio.h>

main()
{
	printf("%s\n", "ala"); //ok
	printf("%s\n", ’ala’); //zle nawiasy 
	printf("%s\n", ala); //brak nawiasow
	printf("%s\n""ala"); //brak przecinka
	printf("%s\n", "5"); //ok
	printf("%s\n", ’5’); //zle nawiasy
	printf("%s\n", 5); //zly format, liczba (a mamy string)
	return 0;
}

//15

#include <stdio.h>

main()
{
	printf("Sekwencja specjalna\ntekst za nia.\n"); //przenies kursor do nastepnej linii
	printf("Sekwencja specjalna\ttekst za nia.\t"); //tabulator
	printf("Sekwencja specjalna\vtekst za nia.\v");
	printf("Sekwencja specjalna\btekst za nia.\b");
	printf("Sekwencja specjalna\rtekst za nia.\r"); //brak reakcji
	printf("Sekwencja specjalna\ftekst za nia.\f");
	printf("Sekwencja specjalna\atekst za nia.\a");
	printf("Sekwencja specjalna\\tekst za nia.\\"); //robi slashe
	printf("Sekwencja specjalna\?tekst za nia.\?"); //daje ?
	printf("Sekwencja specjalna\'tekst za nia.\'"); //daje '
	printf("Sekwencja specjalna\"tekst za nia.\""); //daje "
	return 0;
}

//16

#include <stdio.h>

main()
{
	printf("Uzywanie sekwencji specjalnych.\n\n");
	printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
	printf("Czy \"a\" oznacza w C to samo co \'a\'\?\n");
	printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n");
	printf("Koniec.\n\n");
	return 0;
}