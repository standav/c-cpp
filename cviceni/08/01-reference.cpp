#include <iostream>

void funkce (int *a)
{
    *a = 31;
}

void funkce1 (int &a)
{
    a = 45;
}

int main()
{

    int x = 10;
    int *b; b = &x;

    int &y = x;     // reference

    funkce (&x);

    std::cout << x << std::endl;

    funkce1 (x);

    std::cout << x << std::endl;

    x = 10;

    std::cout << y << std::endl;

    y = 33;

    std::cout << x << std::endl;

}
