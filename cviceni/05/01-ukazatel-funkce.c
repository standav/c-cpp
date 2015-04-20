#include <stdio.h>

float Scitani (float a, float b)
{
    return a + b;
}

float Odcitani (float a, float b)
{
    return a - b;
}

float Deleni (float a, float b)
{
    return a / b;
}

void operace (float a, float b, char op)
{
    switch (op)
    {
        case '+':
            printf ("Vysledek operace je %2.2f.\n", Scitani (a, b));
            break;
        case '-':
            printf ("Vysledek operace je %2.2f.\n", Odcitani (a, b));
            break;
        case '/':
            printf ("Vysledek operace je %2.2f.\n", Deleni (a, b));
            break;
    }
}

void operace_ukazatel (float a, float b, float (*p)(float, float))
{
    printf ("Vysledek operace je %2.2f.\n", p (a, b));
}

int main ()
{
    operace (10, 34, '+');
    operace_ukazatel (76, 24, &Scitani);
}
