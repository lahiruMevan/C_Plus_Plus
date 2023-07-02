#include <iostream>

int main()
{
	int deg = 0, min = 0, sec = 0;
	const int SecToDeg = 3600;
	const int MinToDEG = 60;
	double total = 0.0;
	std::cout << "Enter a latitude in degrees, minutes, and seconds:" << std::endl;
	std::cout << "First, enter the degrees:";
	std::cin >> deg;
	std::cout << "Next, enter the minutes of arc:";
	std::cin >> min;
	std::cout << "Finally, enter the seconds of arc:";
	std::cin >> sec;
	total = deg + (min / double(MinToDEG)) + (sec / double(SecToDeg));

	std::cout << deg << " degrees, " << min << " minutes " << sec << " seconds = " << total << " degrees " << std::endl;




	return 0;
}