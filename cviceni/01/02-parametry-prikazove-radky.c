#include <stdio.h>

/*	hlavni funkce main
      
		typicky je typu int, vyjimecne typu void

	        argumenty:    
			argc - pocet parametru pr. radky
			argv - pole stringu s hodnotami pr. radky

		pokud nema argumenty, muze byt deklatovana jako  main (void)
*/

int main (int argc, char *argv[])
{
	printf ("pocet predanych parametru: %i\n", argc);

	printf ("nazev souboru: %s\n", argv[0]);

	if (argc > 1)
	{
		int i = 1;

		printf ("vsechny parametry:\n");

		for (; i < argc;)
		{
			printf ("\t- %s\n", argv[i++]);
		}
	}

	return 0;
}
