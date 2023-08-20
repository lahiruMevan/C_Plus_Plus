#include <iostream>
#include <string>


int main()
{
	
	std::string fname;
	std::string lname;

	std::cout << "Enter your first name:\n";
	std::getline(std::cin, fname);
	std::cout << "Enter your last name:\n";
	std::getline(std::cin, lname);
	std::cout << "Here's the information in a single string:\n";

	std::string fullName;
	fullName = fname + ", " + lname;

	std::cout << fullName << std::endl;



	return 0;
}

