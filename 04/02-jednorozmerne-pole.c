#include <stdio.h>

void tisk_pole (int pole[]);
void tisk_pole_2 (int pole[], int pocet);

int main ()
{
    /* jednorozmerne pole */

    /* pole velikosti 10 prvku typu integer */
    int a[10];

    /* pole inicializovane vyctem behem deklarace */
    int b[] = {10, 20, 30};

    /* pole inicializovane castecnym vyctem */
    int c[5] = {[2] = 20, [4] = 30};

    int i;

    /*
        funkce sizeof (pole) vraci pocet bytu, ktere pole v
        pameti zabira, takze je treba hodnotu podelit velikosti
        pametoveho prvku
    */

    printf ("velikost pole a je %i\n", sizeof(a)/sizeof(int));

    /*
        pole v C/C++ je indexovane od 0
    */

    for (i = 0; i < sizeof(c)/sizeof(int); i++)
    {
        printf ("c[%i] = %i\n", i, c[i]);
    }

    int *pc;
    pc = &c[0];

    puts ("tisk pole pomoci ukazatelu");

    for (i = 0; i < sizeof(c)/sizeof(int); i++)
    {
        printf ("pc = %lu\n", pc);
        printf ("c[%i] = %i\n", i, *(pc++));
    }

    tisk_pole (b);
    tisk_pole_2(b, 5);

    return 0;
}

void tisk_pole (int pole[])
{
    int i;

    puts ("tisk pole pomoci procedury");

    printf ("velikost pole je %i\n", sizeof(pole));

    for (i = 0; i < sizeof(pole)/sizeof(int); i++)
    {
        printf ("pole[%i] = %i\n", i, pole[i]);
    }
}

void tisk_pole_2 (int pole[], int velikost_pole)
{
    int i;

    puts ("tisk pole pomoci procedury varianta 2");

    for (i = 0; i < velikost_pole; i++)
    {
        printf ("pole[%i] = %i\n", i, pole[i]);
    }
}

/*

3 prvkove pole

 - - -
| | | |
 _ _ _


v C je prvni polozka pole, tj. s indexem 0, ukazatelem na pole

*/













