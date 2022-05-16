#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), target("Robotomyytarget")
{
	std::cout << "Default RobotomyRequestForm constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45), target(target)
{
	std::cout << "Setting target RobotomyRequestForm constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : target(src.target)
{
	std::cout << "Copy RobotomyRequestForm constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Default RobotomyRequestForm destructor" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & src)
{
	Form::operator=(src);
	if (this != &src)
	{
		this->target = src.target;
	}
	std::cout << "Assignment RobotomyRequestForm operator" << std::endl;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{

	if (!this->getSign())
		throw FormIsNotSignedException();
	else if (this->getMinGradeExec() < executor.getGrade())
		throw GradeTooLowException();
	else
	{
		int n = rand();
		std::cout << "Drrrrrrrrr..... Drrrrrr....." << std::endl;
		if (n % 2 == 0)
			std::cout << target <<  " has been robotomized successfully" << std::endl;
		else 
			std::cout << target <<  "Robotomy failed" << std::endl;
	}
}
