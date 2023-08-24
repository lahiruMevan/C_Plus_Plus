//#include <iostream>
//
//
//char* getname(void);
//
//int main()
//{
//	char* name;
//	name = getname();
//	std::cout << name << " at " << (int*)name << "\n";
//	delete [] name;
//
//	name = getname();
//	std::cout << name << " at " << (int*)name << "\n";
//	delete[] name;
//	
//
//	return 0;
//}
//
//char* getname()
//{
//	char temp[80];
//	std::cout << "Enter last name: ";
//	std::cin >> temp;
//	char* pn = new char[strlen(temp) + 1];
//	strcpy(pn, temp);
//
//	return pn;
//}