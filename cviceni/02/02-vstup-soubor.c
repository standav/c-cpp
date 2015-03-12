/*
 *	prace se souborem
 *
 */
#include <stdio.h>

int main()
{
	int a, b, c, n;

	FILE *f;

	f = fopen ("data.txt", "r");
/*
 *  	atributy fopen:
 *		
 *	"r"	otevrit existujici soubor pro cteni
 *	"w"	otevrit soubor pouze pro zapis. pokud soubor existuje, je smazan obsah; jinak se vytvori novy soubor
 *	"a"	otevrit soubor pro pridani obsahu. pokud soubor existuje, zapisuje se za existujici data; jinak vytvori novy soubor
 *	"r+"	otevrit existujici soubor pro cteni i zapis. obsah souboru se nemeni, zapisuje se za existujici data
 *	"w+"	otevrit soubor pro zapis i cteni. pokud soubor existuje, je smazan obsah; jinak se vytvori novy soubor
 *	"a+"	otevrit soubor pro cteni a pridani. pozice pro cteni je na zacatku existujicich dat, pozice pro zapis jejich na konci
 *
 */

/*
 *  	nacteni jedne radky ze souboru
 */

	n = fscanf (f, "%i %i %i", &a, &b, &c);

/*
 *	navratova hodnota nabyva
 *
 *	pocet nactenych promennych
 *	-1, EOF		v pripade dosazeni konce souboru (End Of File)
 */

/*
 *	nacteni vsech radek ze souboru
 */

	do
	{
		n = fscanf (f, "%i %i %i", &a, &b, &c);
		if (n == -1) break;
		printf ("%i %i %n %i\n", n, a, b, c);

	} while (n != EOF);

	return 0;
}
