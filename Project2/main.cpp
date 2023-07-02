#include <iostream>

int main() 
{
	int example[5];
	example[0] = 2;
	example[4] = 4;

	for (int i = 0; i < 5; i++)
	{
		example[i] = 2;
	}

	std::cout << example[0] << std::endl;


	std::cin.get();
}