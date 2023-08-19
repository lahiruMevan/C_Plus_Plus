#include <iostream>
#include <vector>



int main()
{
	//float treacle[10] = {5,2,8,4,1,2,2,4,6,8};

	//float* first = treacle;

	//std::cout << "first : " << *first << std::endl;
	//std::cout << "last : " << *(first + 9) << std::endl;
	int size = 0;
	std::cout << "Enter a positive integer : ";
	std::cin >> size;
	int* array = new int[size];
	std::vector<int> a1(size);
	std::cout << " size of the array : " << sizeof(*array) << std::endl;
	
	delete[] array;
	
	return 0;
}
