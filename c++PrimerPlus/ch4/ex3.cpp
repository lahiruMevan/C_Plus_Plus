//#include <iostream>
//#include <cstring>
//
//int main()
//{
//	const int SIZE = 20;
//	char fname[SIZE];
//	char lname[SIZE];
//
//	std::cout << "Enter your first name:\n";
//	std::cin >> fname;
//	std::cout << "Enter your last name:\n";
//	std::cin >> lname;
//	std::cout << "Here's the information in a single string:\n";
//	
//	char fullName[(SIZE+SIZE+3)];
//	strcat_s(fullName, fname);
//	strcat_s(fullName, ", ");
//	strcat_s(fullName, lname);
//	int s = std::strlen(fullName)+1;
//	fullName[s] = '\0';
//
//	std::cout << fullName << std::endl;
//
//
//	return 0;
//}