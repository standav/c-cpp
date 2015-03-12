#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

struct {

    int velikost;
    unsigned char *data;

} pole_promenna;

struct ARR {

    int velikost;
    unsigned char *data;

};

typedef struct {

    int velikost;
    unsigned char *data;

} pole;

void napln (pole * a)
{
    int i;

    printf("velikost: %d\n", (*a).velikost);
    printf("velikost: %d\n", a->velikost);

    unsigned char *tmp = (unsigned char *)malloc (a->velikost);

    for (i = 0; i < a->velikost; i++)
    {
        tmp[i] = rand()%UCHAR_MAX;
        printf ("[%d] %d\n", i, tmp[i]);
    }

    a->data = tmp;

    // free (tmp); pozor, timto si zrusim i ukazatel a->data
}

int main ()
{
    int i;
    pole_promenna.velikost = 10;
    struct ARR poleA;
    pole poleB;

    poleB.velikost = 10;

    // inicializace generatoru nah. cisel
    srand(time(NULL));

    printf ("nahoda: %d", rand()%UCHAR_MAX); /* int. 0 - INT_MAX */

    // pole * poleC;
    // napln (poleC);

    printf ("velikost struktury: %d\n", sizeof(pole));

    napln (&poleB);

    for (i = 0; i < poleB.velikost; i++)
        printf("[%d] %d\n", i, poleB.data[i]);

    return 0;
}
