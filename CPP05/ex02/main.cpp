#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{ 
	Bureaucrat b("Boris", 5);
	std::cout << b;

	Bureaucrat c("Petya", 98);
	std::cout << c;



	try
	{	std::cout <<  "\n*********************\n" << std::endl;
		std::cout <<  "\nShrubberyCreationForm\n" << std::endl;
		ShrubberyCreationForm form_s("berry");
		std::cout << form_s << std::endl;
		std::cout << "Boris tries to sign form_s" << std::endl;
		b.signForm(form_s);
		std::cout << "Petya tries to execute form_s" << std::endl;
		c.executeForm(form_s);
		std::cout << "Boris tries to execute form_s" << std::endl;
		b.executeForm(form_s);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout <<  "\n*********************\n" << std::endl;
		std::cout <<  "\nRobotomyRequestForm\n" << std::endl;
		RobotomyRequestForm form_r("robot");
		std::cout << form_r << std::endl;
		std::cout << "Boris tries to sign form_r" << std::endl;
		b.signForm(form_r);
		std::cout << "Petya tries to execute form_r" << std::endl;
		c.executeForm(form_r);
		std::cout << "Boris tries to execute form_r" << std::endl;
		b.executeForm(form_r);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout <<  "\n*********************\n" << std::endl;
		std::cout <<  "\nPresidentialPardonForm\n" << std::endl;
		PresidentialPardonForm form_p("president");
		std::cout << form_p << std::endl;
		std::cout << "Boris tries to sign form_p" << std::endl;
		b.signForm(form_p);
		std::cout << "Petya tries to execute form_p" << std::endl;
		c.executeForm(form_p);
		std::cout << "Boris tries to execute form_p" << std::endl;
		b.executeForm(form_p);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	return 0;
}