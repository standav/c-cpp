/*
    prace se souborem
*/
#include <stdio.h>

int main()
{
    int a, c, i;
    char b;
    FILE *f;
    f = fopen ("data.txt", "r");

    do
    {
        i = fscanf (f, "%i%c%i", &a, &b, &c);
        if (i == -1) break;
        printf ("%i %i %c %i\n", i, a, b, c);

    } while (i != EOF);

    return 0;
}
