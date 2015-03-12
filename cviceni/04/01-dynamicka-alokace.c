#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define SIZE    10

int main ()
{
    int i;

    unsigned char * dataA = (unsigned char *)malloc (SIZE*sizeof(unsigned char));

    printf ("adresa bloku %u\n", dataA);

    puts ("jednotlive polozky pole A");

    for (i = 0; i < SIZE; i++)
    {
        printf ("[%d] %d\n", i, dataA[i]);
    }

    unsigned char * dataB = (unsigned char *)calloc (SIZE, sizeof(unsigned char));

    puts ("jednotlive polozky pole B");

    for (i = 0; i < SIZE; i++)
    {
        printf ("[%d] %d\n", i, dataB[i]);
    }

    memset (dataA, 1, SIZE*sizeof(unsigned char));

    puts ("jednotlive polozky pole A po memset");

    for (i = 0; i < SIZE; i++)
    {
        printf ("[%d] %d\n", i, dataA[i]);
    }

    // dataA = (unsigned char *)malloc (2*SIZE*sizeof(unsigned char));
    // pokud nezavolam free (dataA), ztracim 10B pameti -> memory leak

    printf ("adresa bloku %u\n", dataA);

    dataA = (unsigned char *)realloc(dataA, 2*SIZE*sizeof(unsigned char));

    printf ("adresa bloku %u\n", dataA);

    return 0;
}
