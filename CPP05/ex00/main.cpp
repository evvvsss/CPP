#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b("Borya", 5);
	std::cout << b;

	for (int i = 0; i < 7; ++i)
	{
		try
		{
			b.incrementGrade();
			std::cout << b;
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	try 
	{
		Bureaucrat c("Kostya", 156);
		std::cout << c;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}