#include <iostream>

class Objekt
{
private:
    int sirka, vyska;

public:
    Objekt (int sirka, int vyska);
    void tisk ()
    {
        std::cout << "sirka je " << this->sirka << ", vyska je " << this->vyska << std::endl;
    }
    // pretizeni proudoveho operatoru <<
    friend std::ostream& operator << (std::ostream& proud, const Objekt& o);
    /*
    Objekt& operator=(const Objekt& o)
    {
        this->sirka = o.sirka + 30;
        this->vyska = o.vyska + 55;
    }
    */
};

std::ostream& operator<< (std::ostream& proud, const Objekt& o)
{
    proud << "sirka je " << o.sirka << ", vyska je " << o.vyska << std::endl;
    return proud;
}

Objekt::Objekt (int _sirka, int _vyska)
{
    this->sirka = _sirka;
    this->vyska = _vyska;
}

int main ()
{
    Objekt obdelnik(10, 30);

    obdelnik.tisk();

    std::cout << obdelnik << std::endl;

    Objekt a(30,40);
    obdelnik = a;

    std::cout << obdelnik << std::endl;

    return 0;
}
