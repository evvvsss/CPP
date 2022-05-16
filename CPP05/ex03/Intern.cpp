#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Default Intern constructor" << std::endl;
}

Intern::Intern(Intern const & src)
{
	(void)src;
	std::cout << "Copy Intern constructor" << std::endl;

}

Intern::~Intern() 
{
	std::cout << "Default Intern destructor" << std::endl;
}

Intern & Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	std::cout << "Assignment Intern operator" << std::endl;
	return *this;
}

Form* Intern::makeForm(std::string formName, std::string formTarget)
{
	int i = 0;
	Form* f = NULL;

	std::string	forms[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	while (i < 3 && forms[i] != formName)
		++i;
	switch ( i )
	{
	case 0:
		f = new ShrubberyCreationForm(formTarget);
		break;
	case 1:
		f = new RobotomyRequestForm(formTarget);
		break;
	case 2:
		f = new PresidentialPardonForm(formTarget);
		break;
	default:
		throw FormIsNotCreatedException();
	}
	std::cout << "Intern creates " << *f << std::endl;
	return f;
}

const char* Intern::FormIsNotCreatedException::what() const throw()
{
	return "Intern couldn't create form!";
}