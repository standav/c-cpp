/*
   C   -> gcc
   C++ -> g++

C: stdio.h C++: iostream
 */

#include <iostream>
#include <stdio.h>

namespace test
{
	int a = 20;
}

using namespace std;
using namespace test;

int main ()
{
	/*
	   jmenny prostor std
	   std::cout   vystup
	   std::cin    vstup
	   dalsi, mene pouzivane
	   std::cerr   chybova konzole
	   std::clog   logovaci konzole, zpravidla synchronizovana s cerr

	   std::wcout
	 */

	std::cout << "ahoj";
	std::cout << 10;

	int a = 45;

	std::cout << a << '\n';

	std::cout << a + 10 << std::endl;

	std::cout << "a + 10 = " << a + 10 << std::endl;

	cout << "a + 10 = " << a + 10 << endl;

	cout << "a + 10 = " << test::a + 10 << endl;

	double b;

	cout << "zadej cislo typu double: ";

	cin >> b;

	if (cin.good())
	{
		cout << "napsal jsi " << b << endl;
	}
	else
	{
		cout << "doslo k chybe!" << endl;
	}

	// mozne, nicmene neprilis doporucovane michani C++ kodu s C kodem
	printf ("%2.2f\n", b);

	return 0;
}
