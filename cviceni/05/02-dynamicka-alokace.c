#include <stdio.h>
#include <stdlib.h>

/*
    Dynamicka alokace pameti.
    Probiha pomoci nasledujicich funkci:

    malloc
    calloc
    realoc
    free

*/

void f (int *p);

int main ()
{
    /*  a = ...
        *a = malloc (..)
    */

    int *a = malloc (4);
    int *b = malloc (4);

    *a = 10;

    printf ("%i\n", *a);
    printf ("adresa dynamicky alokovaneho prvku a %lu\n", (unsigned long)&(*a));
    printf ("adresa dynamicky alokovaneho prvku b %lu\n", (unsigned long)&(*b));

    f (a);
    printf ("%i\n", *a);

    scanf ("%i", a);

    /* uvolneni zabrane pameti */
    free (a);

    return 0;
}

void f (int *p)
{
    *p = 333;
}
