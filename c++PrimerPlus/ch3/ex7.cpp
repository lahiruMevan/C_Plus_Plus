#include <iostream>

int main()
{
	const float MILES_FOR_100KM = 62.14;
	const float LITERS_FOR_GALLON = 3.875;
	double val = 0;
	std::cout << "Enter value in liter/100km:";
	std::cin >> val;
	std::cout << (MILES_FOR_100KM * LITERS_FOR_GALLON) / val << " mpg" << std::endl;
	return 0;
}