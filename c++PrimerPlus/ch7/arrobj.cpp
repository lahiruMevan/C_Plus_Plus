//#include <iostream>
//#include <array>
//#include <string>
//
//const int Seasons = 4;
//const std::array<std::string, Seasons> Snames =
//{ "Spring", "Summer", "Fall", "Winter" };
//
//void fill(std::array<double, Seasons>* pa);
//void show(std::array<double, Seasons> da);
//
//int main()
//{
//	std::array<double, Seasons> expenses;
//	fill(&expenses);
//	show(expenses);
//
//	return 0;
//}
//
//void fill(std::array<double, Seasons>* pa)
//{
//	for (int i = 0; i < Seasons; i++)
//	{
//		std::cout << "Enter " << Snames[i] << " Expenses: ";
//		std::cin >> (*pa)[i];
//	}
//}
//
//void show(std::array<double, Seasons> da)
//{
//	double total = 0.0;
//	std::cout << "\nEXPENSES\n";
//	for (int i = 0; i < Seasons; i++)
//	{
//		std::cout << Snames[i] << ":$" << da[i] << std::endl;
//		total += da[i];
//	}
//	std::cout << "Total Expenses: $" << total << std::endl;
//}
