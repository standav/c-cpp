#include <stdio.h>

int vypocet (int op1, char op, int op2);
int vypocet1 (int op1, char op, int op2, float *vysledek);

int main ()
{
    int a, b;
    char o;
    float d;
    FILE *f, *g;
    f = fopen ("data.txt", "r");
    g = fopen ("data1.txt", "w");

    fprintf (g, "+---+--+---+--------+\n");

    while (fscanf(f, "%i%c%i", &a, &o, &b) != -1)
    {
        printf("%i%c%i\n", a, o, b);
        // fprintf (g, "|%3i|%2c|%3i|%-8i|\n", a, o, b, vypocet(a, o, b));
        if (vypocet1(a, o, b, &d) != 1)
            fprintf (g, "|%3i|%2c|%3i|% 8.2f|\n", a, o, b, d);
    }

    fprintf (g, "+---+--+---+--------+\n");

    return 0;
}

int vypocet (int op1, char op, int op2)
{
    switch (op)
    {
    case '+':
        return op1 + op2;
    case '-':
        return op1 - op2;
    case '*':
        return op1 * op2;
    case '/':
        if (op2 != 0)
            return (int)((float)op1 / (float)op2);
    }
    return 0;
}

int vypocet1 (int op1, char op, int op2, float *vysledek)
{
    switch (op)
    {
    case '+':
        *vysledek = op1 + op2;
        return 0;
    case '-':
        *vysledek = op1 - op2;
        return 0;
    case '*':
        *vysledek = op1 * op2;
        return 0;
    case '/':
        if (op2 != 0)
        {
            *vysledek = (float)op1/(float)op2;
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
