#include <iostream>
#include <array>

int main()
{
	std::array<float, 3> dash;
	int time = 0;
	std::cout << "Enter " << time + 1 << " yards dash (max 40 yards): ";
	std::cin >> dash[time];
	time++;
	std::cout << "Enter " << time + 1 << " yards dash (max 40 yards): ";
	std::cin >> dash[time];
	time++;
	std::cout << "Enter " << time + 1 << " yards dash (max 40 yards): ";
	std::cin >> dash[time];

	std::cout << time + 1 << " times average is " << (dash[0] + dash[1] + dash[2]) / dash.size() << std::endl;



	return 0;
}