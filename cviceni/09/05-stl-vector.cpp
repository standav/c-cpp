#include <iostream>
#include <vector>

int main ()
{
	// vector je soucasti STL - Standard Template Library
	// vytvoreni vektoru 10 cisel typu int
	std::vector<int> pole(10);

	for (int i = 0; i < 5; i++)
	{
		pole[i] = i + 10;
	}

	for (int i = 0; i < pole.size(); i++)
	{
		std::cout << "[" << i << "] = " << pole[i] << std::endl;
	}

	pole[20] = 120;

	pole.resize(15);

	for (int i = 0; i < pole.size(); i++)
	{
		std::cout << "[" << i << "] = " << pole.at(i) << std::endl;
	}

	std::vector<char> pismena;
	char c;
	for (int i = 0; i < 4; i++)
	{
		std::cout << "napis pismeno: ";
		std::cin >> c;
		pismena.push_back(c);
	}

	for (int i = 0; i < pismena.size(); i++)
	{
		std::cout << pismena.at(i) << std::endl;
	}

	for (std::vector<char>::iterator it = pismena.begin(); it != pismena.end(); ++it)
	{
		std::cout << *it;
	}
}
