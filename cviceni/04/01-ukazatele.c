#include <stdio.h>

int main ()
{
    /*
        promenna a s adresou &a
    */
    int a = 10;

    /*
        * slouzi pro deklaraci ukazatele a zaroven jako
        tzv. dereferencni operator, ktery umoznuje pracovat
        s obsahem pametove bunky, jejiz adresu ukazatel obsahuje
    */
    int * aaa;
    int * pa;

    aaa = &a;
    pa = &a;

    printf ("a = %i\n", a);
    printf ("a = %i\n", *aaa);
    printf ("a = %i\n", *pa);
    printf ("adresa a je %lu\n", (unsigned long)&a);
    printf ("obsah aaa je %lu\n", (unsigned long)aaa);

    *pa = 20;
    printf ("a = %i\n", a);

    funkce (aaa);
    printf ("a = %i\n", a);


    return 0;

}

int funkce (int * a)
{
    *a = 333;
}
