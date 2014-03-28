/* veskere potrebne funkce deklarovany v stdio.h */
#include <stdio.h>

#define PI  3.1412

int main()
{
/*
   	nejjednodussi tisk retezcove konstanty - literalu
	printf tiskne presne ve tvaru, v jakem je konstanta zadana, bez odradkovani
*/
	printf ("ahoj");

/*
	ridici znaky

		\n - konec radky a navrat kurzoru na zacatek dalsi radky
		\r - navrat na zacatek aktualni radky
		\t - tabulator, delka podle nastaveni systemu, typicky 8 zn.
*/

/*	tisk literalu s explicitnim odradkovanim */
	printf("ahoj svete\n");

/*	ekvivalent -> puts, radkovani automaticke */
	puts ("ahoj svete");

/* 	pouziti \r */
	printf ("\nahoj\r##\n");

/*	tisk ciselne konstanty */
	printf ("a = %i\n", 1);

/*	vice ciselnych konstant */
	printf ("a = %i, b = %i\n", 10, 30);

/*	*/
	printf ("a = %i, b = %i\n", 10);

/*
	konverze 
		%i       int, cele cislo (%d)
		%c       char
		%s       retezec - string (pole char)
		%f       float, cislo s desetinnou carkou ve znamenkovem tvaru
		%e, %E   float, ve exponencialnim tvaru
		%g       double, tvar je automaticky
		%u       cislo v osmickove soustave
		%x, %X   cislo v sestnactkove soustave
		%l       long

	prinaky
		- 	tisk zarovnan doleva (jinak doprava)
		+	cislo typu signed bude opatren znamenkem (jinak pouze - u zapornych cisel)
		' '	vysledku bude predchazet znak ' ', pokud neni opatren znamenkem
		# 	prevedeni do alternativniho tvaru, naps. explicitnejsi vyjadreni typu
*/

	printf ("%i - %x\n", 255, 255);
	printf ("%i - %#x\n", 255, 255);
	printf ("%i - %X\n", 255, 255);
	printf ("makam na %i%%\n", 100);
	printf ("%s\n", "muhehe");
	printf ("PI = %f\n", PI); // preprocesor prepise PI na definovany literal

/*	nastaveni presnosti realneho cisla */
	printf ("%.2f\n", PI);
	printf ("%8.2f\n", PI);
	printf ("1 = %i = %10i = % 10i = %-10i = %010i\n", 1, 1, 1, 1, 1);


	int i;

	for (i = 0; i < 10; i++)
	{
		printf ("%-8i %6.2f\n", i, 2*PI*i*i);
	}
}
