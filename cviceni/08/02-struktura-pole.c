/*
	idea struktury, popisujici 2D pole, napr. obrazova data
*/
#include <stdio.h>

struct pole {
    int vyska;
    int sirka;
    int **data;
};

void init_pole (struct pole *a, int sirka, int vyska);

void print_pole (struct pole *a);

void init_pole (struct pole *a, int sirka, int vyska)
{
    a->sirka = sirka;
    a->vyska = vyska;
    a->data = ...
}

void print_pole (struct pole *a)
{

}

int main ()
{
    struct pole *aa = (struct pole*)malloc (sizeof (struct pole));

    init_pole (aa, 10, 10);

    return 0;
}
