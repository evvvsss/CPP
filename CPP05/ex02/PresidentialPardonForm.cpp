#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), target("Presidentialtarget")
{
	std::cout << "Default PresidentialPardonForm constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5), target(target)
{
	std::cout << "Setting target PresidentialPardonForm constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : target(src.target)
{
	std::cout << "Copy PresidentialPardonForm constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Default PresidentialPardonForm destructor" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	Form::operator=(src);
	if (this != &src)
	{
		this->target = src.target;
	}
	std::cout << "Assignment PresidentialPardonForm operator" << std::endl;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw FormIsNotSignedException();
	else if (this->getMinGradeExec() < executor.getGrade())
		throw GradeTooLowException();
	else
	{
		std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}