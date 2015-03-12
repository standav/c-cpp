#include <stdio.h>

int main ()
{

    int a = 10;
    int b = 20;
    int c = 30;
    int d[] = {22, 32};
    int i;
    int *p;

    p = &c;

    printf ("%lu\n", (unsigned long)&a);
    printf ("%lu\n", (unsigned long)&b);
    printf ("%lu\n", (unsigned long)&c);
    printf ("%lu\n", (unsigned long)&d[0]);

    printf ("%i\n", *p);
    printf ("%i\n", *(p+1));

    *(p+1) = 1000;

    printf ("b = %i\n", b);

    for (i = 0; i < 10; i++)
        printf ("d[%i] = %i\n", i, d[i]);

    return 0;
}
