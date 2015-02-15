#include <iostream>
#include <stdio.h>

int main ()
{
	std::string vstup;

	std::cout << "napis sve jmeno: ";

	std::cin >> vstup;

	std::cout << "napsal jsi " << vstup << std::endl;

	// mozne reseni
	fflush (stdin);

	std::getline (std::cin, vstup);

	std::cout << "napsal jsi " << vstup << std::endl;
}
