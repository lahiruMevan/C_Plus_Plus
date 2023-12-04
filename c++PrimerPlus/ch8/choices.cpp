#include <iostream>

template<class T>
T lesser(T a, T b)
{
	return a < b ? a : b;
}

int lesser(int a, int b)
{
	a = a < 0 ? -a : a;
	b = b < 0 ? -b : b;
	return a < b ? a: b;
}

int main()
{
	int m = 20;
	int n = -30;
	double x = 15.5;
	double y = 25.9;

	std::cout << lesser(m, n) << std::endl;
	std::cout << lesser(x, y) << std::endl;
	std::cout << lesser<>(m, n) << std::endl;
	std::cout << lesser<int>(x, y) << std::endl;


	return 0;
}


