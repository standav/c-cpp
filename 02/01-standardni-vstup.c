/*
    pro vstup pouzijeme funkci scanf
    deklarovana v stdio.h
*/
#include <stdio.h>

int main ()
{
    int a, b, c;
#ifdef PROVADEJ
    scanf ("%i", &a);

    printf ("napsal jsi %i\n", a);

    printf ("adresa %i\n", &a);
#endif // PROVADEJ

    printf ("zadej dve cisla odddelena mezerou\n> ");
    c = scanf ("%i %i", &a, &b);
    printf ("zadal jsi %i cisel a = %i, b = %i\n", c, a, b);

    // YYYY/MM/DD
    int den, mesic, rok;
    scanf ("%i/%i/%i", &rok, &mesic, &den);
    printf ("%i.%i.%i", den, mesic, rok);

    return 0;
}
