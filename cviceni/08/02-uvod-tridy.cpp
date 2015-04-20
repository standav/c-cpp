#include <iostream>

class TridaA
{
    int c;  // promenna implicitne private

public:
    int a;
    TridaA();   // konstruktor
    TridaA(int nastaveni);
    ~TridaA();  // destruktor
    friend void nastav();
    static int soucet (int a, int b);

private:
    int b;
};

TridaA::TridaA ()
{
    std::cout << "vytvoren objekt TridaA" << std::endl;
}

TridaA::TridaA (int nastaveni)
{
    this->b = nastaveni;
}

TridaA::~TridaA()
{
    std::cout << "zavolan destruktor" << std::endl;
}

int TridaA::soucet (int a, int b)
{
    return a + b;
}

struct TridaB
{
    int c;  // promenna implicitne public
};


void nastav()
{
    TridaA x;
    x.b = 55;
}

int main ()
{
    TridaA a;

    a.a = 10;

    TridaA *b = new TridaA();
    b->a = 30;

    TridaA *c = new TridaA(10);

    TridaA d(50);

    delete b;

    std::cout << TridaA::soucet (10, 30) << std::endl;
}
