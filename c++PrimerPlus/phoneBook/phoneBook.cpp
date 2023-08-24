#include <iostream>
#include <string>
#include <vector>

struct page {

	std::string name;
	std::string number;

};



int main()
{
	std::vector<page> book(4);
	int i;
	for (i = 0; i < 10; i++)
	{
		book[i].name = "test" + i;
		book[i].number = std::string (i + " " + i +" " + i + " " + "-" + (i + 1) + "" + (i + 1) + "" + (i + 1) + "" + (i + 1));
	}


	return 0;
}