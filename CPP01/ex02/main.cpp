#include <iostream>

int main ()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr; // memory address of another variable УКАЗАТЕЛЬ
	std::string ref; // another name for an already existing variable
	ptr = &str;
	ref = str;

	std::cout << "The memory address of the string variable: " << &str << std::endl;
	std::cout << "The memory address held by stringPTR: " << ptr << std::endl;
	std::cout << "The memory address held by stringREF: " << &ref << std::endl;
	std::cout << "The value of the string variable: " << str << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *ptr << std::endl;
	std::cout << "The value pointed to by stringREF: " << ref << std::endl;
}