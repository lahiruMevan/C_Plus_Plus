//#include <iostream>
//double betsy(int);
//double pam(int);
//
//void estimate(int liens, double (*pf)(int));
//
//int main()
//{
//	int code;
//
//	std::cout << "How many line of code do you need?";
//	std::cin >> code;
//
//	std::cout << "Here's Betsy's estimate:\n";
//	estimate(code, betsy);
//	std::cout << "Here's  pam's estimate:\n";
//	estimate(code, pam);
//
//	return 0;
//
//}
//
//double betsy(int Ins)
//{
//	return 0.05 * Ins;
//}
//
//double pam(int Ins)
//{
//	return 0.03 * Ins + 0.0004 * Ins * Ins;
//}
//
//void estimate(int lines, double (*pf)(int))
//{
//	std::cout << lines << " lines will take ";
//	std::cout << (*pf)(lines) << " hours(s)\n";
//}