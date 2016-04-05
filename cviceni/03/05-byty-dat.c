#include <stdio.h>

int main ()
{
    int i;
    int a = 1023;
    int *b = &a;

    puts ("ukazatele");

    for (i = 0; i < sizeof (a); i++)
    {
         printf ("%d ", *((unsigned char *)b+i));
    }

    puts ("\n");

    puts ("bitovy posun");

    for (i = 0; i < sizeof (a); i++)
    {
        printf ("%d ", (a >> (i*8)) & 0xff);
    }

    puts ("");

    return 0;
}
