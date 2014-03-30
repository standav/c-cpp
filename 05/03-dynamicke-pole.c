#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /* pole 10 prvku typu integer */
    int *a = malloc (10 * sizeof (int));
    /* pole 10 prvku typu integer */
    int *b = calloc (10, sizeof (int));

    int *tmp;
    tmp = a;

    printf ("velikost pole a je %i\n", 10);
    int i;
    for (i = 0; i < 10; i++)
        *(a++) = i+1;
    /*
        po skonceni cyklu je ukazatel na konci pole, takze dalsi
        cyklus vypisuje pamet mimo alokovanou oblast
        reseni: pomocny ukazatel
    */

    a = tmp;

    for (i = 0; i < 10; i++, a++)
        printf ("a[%i] = %i\n", i, *a);

    return 0;
}
