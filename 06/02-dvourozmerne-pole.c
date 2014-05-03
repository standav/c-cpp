#include <stdio.h>
#include <stdlib.h>

void napln_index (int pole[][3], int radky)
{
	int i, j, k = 0;

	for (i = 0; i < radky; i++)
		for (j = 0; j < 3; j++)
			pole[i][j] = k++;
		
}

void tisk_index (int p1[][3], int radky)
{
	int i, j;

	for (i = 0; i < radky; i++)
	{
		for (j = 0; j < 3; j++)
			printf ("%i ", p1[i][j]);
		printf ("\n");
	}
}

void napln_pointer (int ** pole, int I, int J)
{
	int i, j, k = 0;

	for (i = 0; i < I; i++)
		for (j = 0; j < J; j++)
			pole[i][j] = k++;
}

void tisk_pointer (int ** pole, int I, int J)
{
	int i, j;

	for (i = 0; i < I; i++)
	{
		for (j = 0; j < J; j++)
			printf ("%i\t%ld\n", pole[i][j], (long)&pole[i][j]);
	}
}

int main ()
{
	int p1[2][3];
	int i, j, k = 0;

	puts ("=== 1. pole (staticke) ===");

	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			p1[i][j] = k++;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			printf ("%i ", p1[i][j]);
		printf ("\n");
	}

	puts ("=== tisk funkci ===");

	tisk_index (p1, 2);

	/* jednorozmerne pole pointeru na jednotlive radky pole */
	puts ("=== 2. pole ===");
	int *p2[2];
	/* prvni radek */
	p2[0] = (int *)malloc (3*sizeof(int));
	/* druhy radek */
	p2[1] = (int *)malloc (3*sizeof(int));
	napln_pointer(p2, 2, 3);
	tisk_pointer (p2, 2, 3);

	/* pointer na triprvkove pole */
	puts ("=== 3. pole ===");
	int (*p3)[3];
	/* alokujeme souvisly blok 6 prvku */
	p3 = (int (*)[3])malloc (6*sizeof(int));
	napln_index (p3, 2);
	tisk_index (p3, 2);

	/* pointer na pointer typu int */
	puts ("=== 4. pole ===");
	int ** p4;
	p4 = (int **)malloc (2*sizeof(int));
	p4[0] = (int *)malloc (3*sizeof(int));
	p4[1] = (int *)malloc (3*sizeof(int));

}

