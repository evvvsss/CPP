#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"


int main()
{ 
	Intern internov;
	Form* f = NULL;

	Bureaucrat b("Boris", 5);
	Bureaucrat c("Petya", 98);

	std::cout << b;
	std::cout << c;


	try
	{	std::cout <<  "\n*********************\n" << std::endl;
		std::cout <<  "\nShrubberyCreationForm\n" << std::endl;
		f = internov.makeForm("shrubbery creation", "Sun");
		std::cout << *f << std::endl;
		std::cout << "Boris tries to sign form" << std::endl;
		f->beSigned(b);
		std::cout << *f << std::endl;
		std::cout << "Petya tries to execute form" << std::endl;
		f->execute(c);
		std::cout << *f << std::endl;
		delete f;
	}
	catch(const std::exception& e)
	{
		if (f)
			delete f;
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout <<  "\n*********************\n" << std::endl;
		std::cout <<  "\nRobotomyRequestForm\n" << std::endl;
		f = internov.makeForm("robotomy request", "Bender");
		std::cout << *f << std::endl;
		std::cout << "Boris tries to sign form" << std::endl;
		f->beSigned(b);
		std::cout << *f << std::endl;
		std::cout << "Petya tries to execute form" << std::endl;
		f->execute(c);
		std::cout << *f << std::endl;
		delete f;
	}
	catch(const std::exception& e)
	{
		
		if (f)
			delete f;
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout <<  "\n*********************\n" << std::endl;
		std::cout <<  "\nPresidentialPardonForm\n" << std::endl;
		f = internov.makeForm("presidential pardon", "Cmp");
		std::cout << *f << std::endl;
		std::cout << "Boris tries to sign form" << std::endl;
		f->beSigned(b);
		std::cout << *f << std::endl;
		std::cout << "Petya tries to execute form" << std::endl;
		f->execute(c);
		std::cout << *f << std::endl;
		delete f;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete f;

	return 0;
}