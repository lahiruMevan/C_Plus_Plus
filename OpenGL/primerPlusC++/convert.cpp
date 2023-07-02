#include <iostream>

int stonetolb(int);

int main()
{
	int stone;
	std::cout << "Enter the weight in stone: ";
	std::cin >> stone;
	int pounds = stonetolb(stone);
	std::cout << stone << " stone = ";
	std::cout << pounds << " pounds." << std::endl;


	return 0;
}

int stonetolb(int sts)
{
	return 14 * sts;
}
