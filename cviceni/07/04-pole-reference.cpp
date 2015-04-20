#include <iostream>


// pouziti ukazatele
void fce1 (int *a)
{
	*a = 33;
}

// pouziti reference
void fce2 (int &a)
{
	a = 44;
}

int main ()
{
	// pole staticky
	int staticke[10];
	// pole dynamicky
	int *dynamicky = new int [10];

	std::cout << "velikost pole: " << sizeof (staticke)/sizeof(*staticke) << std::endl;

	for (int i = 0; i < 10; i++)
	{
		staticke[i] = i + 10;
		dynamicky[i] = i - 10;
	}

	staticke[11] = 120;
	std::cout << "[11] = " << staticke[11] << std::endl;

	std::cout << &staticke << std::endl;
	std::cout << staticke << std::endl;
	std::cout << staticke + 1 << std::endl;

	int x;
	fce1 (&x);
	std::cout << "x = " << x << std::endl;
	fce2 (x);
	std::cout << "x = " << x << std::endl;

	return 0;
}
