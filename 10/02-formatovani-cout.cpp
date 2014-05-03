#include <iostream>
#include <iomanip>

int main ()
{
	float pi = 3.14159265;
	float pp = 43.897243;

	std::cout << pi << std::endl;

	std::cout << std::setprecision (5);

	std::cout << pi << std::endl;

	std::cout << pp << std::endl;

	std::cout << std::fixed;

	std::cout << pi << std::endl;

	std::cout << std::setprecision (7);

	std::cout << pi << std::endl;

	std::cout << std::scientific;

	std::cout << pi << std::endl;

	std::cout.unsetf (std::ios_base::floatfield);

	std::cout << pi << std::endl;

	std::cout << std::setw (10);

	std::cout << pi << std::endl;

	// fill, width, ..

	return 0;
}
