#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat b("Boris", 5);
	std::cout << b;

	Bureaucrat c("Petya", 98);
	std::cout << c;

	Form doc("Important Doc", 20, 30);
	std::cout << doc;
	try
	{
		c.signForm(doc);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		b.signForm(doc);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	return 0;
}