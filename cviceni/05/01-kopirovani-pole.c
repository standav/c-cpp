#include <stdio.h>

void tisk (int *pole, int delka);
void arrcpy (int *p1, int lp1, int *p2);

int main ()
{
    int a[] = {11, 22, 33, 44, 55};
    int b[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int *pa = &a[0];
    int *pb = &b[0];

    /* volani funkce tisk, ktere vytiskne pole a */
    puts ("tisk pole a");
    tisk (pa, 5);
    arrcpy(pa, 5, pb);
    pa = pb;
    /* stejne volani funkce tisk, ktere vytiskne pole b */
    puts ("tisk zvetseneho pole 'a'");
    tisk (pa, 10);

    return 0;
}

void tisk (int *pole, int delka)
{
    int i = 0;

    for (; i < delka; i++)
        printf ("p[%i] = %i\n", i, *pole++);
}

void arrcpy (int *p1, int lp1, int *p2)
{
    int i = 0;

    for (; i < lp1; i++, p2++, p1++)
        *p2 = *p1;
}
