#include <stdio.h>

int main ()
{
	short i;
	int size1, size2, size3;
	size1 = sizeof (i);
	size2 = sizeof (long int);
	size3 = sizeof (double);
	printf ("Velikosti:\n\tshort %i,\n\tlong int %i,\n\tdouble %i\n", size1, size2, size3);
}
