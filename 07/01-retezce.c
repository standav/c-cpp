#include <stdio.h>
#include <string.h>

int main ()
{
	char s1[10] = "ahoj";
	s1[2] = '\0';

	printf ("velikost s1: %i\n", sizeof (s1));
	printf ("velikost s1: %i\n", strlen (s1));
	printf ("%s\n", s1);

	char s2[] = "hello";
	printf ("velikost s2: %i\n", sizeof (s2));
	printf ("velikost s2: %i\n", strlen (s2));

	// spatne
	// char s3[5];
	// s3 = "halo";

	// zkompilovatelne, nicmene hruba chyba, pracuji s pameti, ktera mi nepatri
	char s3[3] = "ahoj lidi";

	char *s4;
	// ne uplne spravne pouziti retezce
	// *s4 = "hello";

	char *s5 = (char *)malloc (6*sizeof(char));
	// spravny pristup
	strcpy (s5, "hello");

	int i;
	int delka = strlen (s5);

	for (i = 0; i < delka + 1; i++)
	{
		if (*(s5+i) == '\0')
			puts ("term");

		printf ("ascii: %i str: %s char: %c\n", *(s5+i), (s5+i), *(s5+i));
	}

	puts(s5);

	char *s6 = malloc (10*sizeof(char));

	/* 
		vyuziti scanf -> nemusi byt vyhodne, protoze po dosazeni prvniho
	   	bileho znaku scanf konci
	*/
	puts ("napis text: ");
	scanf ("%s", s6);
	printf ("napsal jsi: %s", s6);
	
	// vyprazdneni bufferu
	fflush (stdin);

	/* 
		vyuziti gets -> pracuje az do prvniho vyskytu \n
	*/
	puts ("napis text: ");
	gets (s6);
	printf ("napsal jsi: %s", s6);

	/*
		varianta s fgets
	*/

	puts ("napis text: ");
	
	if (fgets (s6, 5, stdin) != NULL)
		printf ("napsal jsi: %s\n", s6);
	else
		printf ("nenapsal jsi nic");

	/*
	   	dalsi funkce pro praci s retezci:

			strcat (str1, str2);    - spojeni dvou retezcu

	   		strcmp (str1, str2);    - porovnani dvou retezcu

	   		strcpy...

	   		strlen

	   		strchr (str1, c);       - vraci ukazatel na pozici charu



	   	"x" - 2B, 'x' + '\0'

	   	'x' - 1B
	 */

	return 0;	

}
