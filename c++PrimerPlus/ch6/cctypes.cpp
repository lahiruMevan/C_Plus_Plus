//#include <iostream>
//#include <cctype>
//
//int main()
//{
//	std::cout << "Enter text for analysis, and type @"
//		" to terminate input.\n";
//	char ch;
//	int whitespace = 0;
//	int digits = 0;
//	int chars = 0;
//	int punct = 0;
//	int others = 0;
//
//	std::cin.get(ch);
//
//	while (ch != '@')
//	{
//		if (isalpha(ch))
//			chars++;
//		else if (isspace(ch))
//			whitespace++;
//		else if (isdigit(ch))
//			digits++;
//		else if (ispunct(ch))
//			punct++;
//		else
//			others++;
//		std::cin.get(ch);
//	}
//
//	std::cout << chars << " letters, "
//		<< whitespace << " whitespace, "
//		<< digits << " digits, "
//		<< punct << " punctuations, "
//		<< others << " other.\n";
//
//
//	return 0;
//}