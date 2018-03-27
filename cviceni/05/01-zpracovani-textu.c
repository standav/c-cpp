#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {char * slovo; int cetnost;} w;

char * orez (char * vstup, int cs) {
	// posledni pismeno
	char p = vstup[strlen(vstup)-1];

	if (p == '.' || p == ',') {
		vstup[strlen(vstup)-1] = '\0';	
	}

	if (cs) return vstup;

	// osetreni prvniho pismene
	p = vstup[0];
	if (p >= 'A' && p <= 'Z') vstup[0]+=' ';

	return vstup;
}

int main(int argc, char *argv[])
{
	char slovo[20];
	w slova[50];
	int i, j, pocet = 0, vlozeno, caseSensitive = 0, sortOrder = 0, max = 1;
	// inicializace
	for (i = 0; i < 50; i++) {
		slova[i].cetnost = 0;
		slova[i].slovo = (char *)malloc(20);
	}
	// zpracovani argumentu prikazove radky
	for (i = 0; i < argc; i++) {
		if(!strcmp(argv[i], "-c")) caseSensitive = atoi(argv[i+1]);
		if(!strcmp(argv[i], "-s")) sortOrder = atoi(argv[i+1]);
	}	

	while (scanf("%s", slovo) != EOF) {
		vlozeno = 0;
		for (i = 0; i < pocet; i++)		{
			// projdu seznam, zda tam jiz slovo neni
			if(!strcmp (slova[i].slovo, orez(slovo, caseSensitive))) {
				// slovo jiz v seznamu existuje
				vlozeno = 1;
				slova[i].cetnost++;
				if (slova[i].cetnost > max) 
					max = slova[i].cetnost;
				break;
			}
		}
		// vlozim slovo do seznamu
		if (vlozeno == 1) continue;	
		strcpy(slova[pocet].slovo, orez(slovo, caseSensitive));
		slova[pocet++].cetnost = 1;
	}


	if (sortOrder == 0)
		for (i = 0; i < pocet; i++) 
			printf("%d\t%s\n", slova[i].cetnost, slova[i].slovo);	
	else if (sortOrder == 1)
	{
		for (i = 0; i <= max; i++)
		{
			for (j = 0; j < pocet; j++)
			{
				if (slova[j].cetnost == i)
					printf("%d\t%s\n", slova[j].cetnost, slova[j].slovo);
			}
		}
	}

	return 0;
}




