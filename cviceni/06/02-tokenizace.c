#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{

	FILE *f;
	char radek[100];
	char *zbytek = malloc (3);

	f = fopen ("data.txt", "r");

	while (fgets (radek, 99, f))
	{
		printf ("%s\n", radek);
		zbytek = strtok (radek, ";");
		printf ("zbytek: %s\n", zbytek);

		while (zbytek = strtok (NULL, ";"))

			/*
				atoi : retezec -> int
				atof : retezec -> float
			 */

			printf ("zbytek: %s %i\n", zbytek, atoi (zbytek));

	}

	/*
	   	formatovani retezcu, priklad: cisla snimku grabovanych z videa
	 */
	char *s1 = malloc (12);
	sprintf (s1, "frame%i.jpg", 10);
	printf ("%s\n", s1);

	return 0;
}
