/*
 * 01-zakladni-struktura.c
 *
 */

/* komentar, muze byt viceradkovy */

// jednoradkovy komentar, neni soucasti puvodni normy ANSI C

/* 
   direktivy preprocesoru - vkladani souboru:

	#include <nazev.h> - hlavickovy soubor v system. ceste (%PATH, $PATH)
	#include "nazev.h" - hlavickovy soubor v aktualnim adresari
	#include <nazev>   - hlavickovy soubor v sys. ceste v C++
*/

#include <stdio.h>
#include <stdlib.h>

/* direktivy preprocesoru - neparametricke makro */
#define PI 3.14

/* globalni promenne */
int global = 33;

int main ()
{

/*
	funkce main je nezbytna pro vytvoreni spustitelneho souboru
	temer vyhrane je datoveho typu int, vyjimecne i typu void
	bud nema zadne argumenty, pak muze byt deklarovana jako int main (void)
	nebo ma dva argumenty reprezentujici parametry predavane z prikazove radky
*/

/*   	deklarace promennych */

	float local = 10.3;

/*   	formatovany vystup */
    	
	printf ("ahoj!\n");
	printf ("%f\n", PI);
	printf ("%i\n", global);
	printf ("%f\n", local); 

/*
	navratova hodnota - podle zvyklosti

	0 - uspesne ukonceni
	1 (resp. jina nez 0) - nekorektni konec

	v stdlib.h jsou definovana neparametricka makra EXIT_SUCCESS a EXIT_FAILURE
	odpovidajici teto konvenci
*/

	return EXIT_SUCCESS;
}
