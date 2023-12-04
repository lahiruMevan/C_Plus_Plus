//#include <iostream>
//template <typename T>
//void Swap(T& a, T& b);
//
//struct job
//{
//	char name[40];
//	double salary;
//	int floor;
//};
//
//template <> void Swap<job>(job& j1, job& j2);
//void Show(job &j);
//
//int main()
//{
//	std::cout.precision(2);
//	std::cout.setf(std::ios::fixed, std::ios::floatfield);
//	int i = 10, j = 20;
//	std::cout << "i, j =" << i << "," << j << ".\n";
//	std::cout << "Using compiler-generated int swapper:\n";
//	Swap(i, j);
//	std::cout << "Now i,j = " << i << "," << j << ".\n";
//
//	job sue = { "Susan Yaffee", 73000.60,7 };
//	job sidney = { "Sidney Taffe", 78060.72, 9 };
//	std::cout << "Before job swapping:\n";
//	Show(sue);
//	Show(sidney);
//	Swap(sue, sidney);
//	std::cout << "After job swapping:\n";
//	Show(sue);
//	Show(sidney);
//
//
//	return 0;
//}
//
//template <typename T>
//void Swap(T& a, T& b)
//{
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//template <> void Swap<job>(job& j1, job& j2)
//{
//	double t1;
//	int t2;
//	t1 = j1.salary;
//	j1.salary = j2.salary;
//	j2.salary = t1;
//	t2 = j1.floor;
//	j1.floor = j2.floor;
//	j2.floor = t2;
//}
//
//void Show(job& j)
//{
//	std::cout << j.name << ":$" << j.salary
//		<< " no floor" << j.floor << std::endl;
//}
