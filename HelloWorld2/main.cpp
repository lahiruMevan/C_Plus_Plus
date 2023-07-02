#include <iostream>
#include <typeinfo>

class Base {
public:	
	virtual void vvfunc() {}

};

class Derived : public Base {};

int main() {
	Derived* pd = new Derived;
	Base* pb = pd;

	std::cout << typeid(pb).name() << std::endl;
	std::cout << typeid(*pb).name() << std::endl;
	std::cout << typeid(pd).name() << std::endl;
	std::cout << typeid(*pd).name() << std::endl;
	delete pd;

}