//#include <iostream>
//const int Max = 5;
//
//int main()
//{
//	int golf[Max];
//	std::cout << "Please enter your golf scores.\n";
//	std::cout << "You must enter " << Max << " rounds.\n";
//	int i;
//	for (i = 0; i < Max; i++)
//	{
//		std::cout << "round#" << i + 1 << ": ";
//		while (!(std::cin >> golf[i])) 
//		{
//			std::cin.clear();
//			while (std::cin.get() != '\n')
//				continue;
//			std::cout << "Please enter a number: ";
//		}
//	}
//
//	double total = 0.0;
//	for (i = 0; i < Max; i++)
//	{
//		total += golf[i];
//	}
//	std::cout << total / Max << " = average score"
//		<< Max << " rounds\n";
//
//	return 0;
//}