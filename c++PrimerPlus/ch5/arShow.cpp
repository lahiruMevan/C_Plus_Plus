#include <iostream>
#include <string>
#include <array>
#include <cstdlib>
const int SIZE = 10000;

int main()
{
	srand(time(0));

	std::array<std::string, SIZE> a;

	for (int i = 0; i < SIZE; i++)
	{
		//a[i] = rand();
		long long num = rand();
		if (num % 2 == 0)
		{
			std::cout << rand();
		}
		else
		{
			std::cout << std::endl;
		}
	}
	

	for (int i = 0; i < SIZE; i++)
	{
		//std::cout << a[i] << std::endl;
	}


	return 0;
}