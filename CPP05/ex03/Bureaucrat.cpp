#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default name"), grade(150)
{
	std::cout << "Default Bureaucrat constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->grade = grade;
	std::cout << "Setting parameters Bureaucrat constructor" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : name(src.name), grade(src.grade)
{
	std::cout << "Copy Bureaucrat constructor" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default Bureaucrat destructor" << std::endl;
}

Bureaucrat 	&Bureaucrat::operator=(Bureaucrat const & src)
{
	std::cout << "Assignment Bureaucrat operator" << std::endl;
	if (this != &src)
		grade = src.getGrade();
	return *this;
}

std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::incrementGrade()
{
	if (grade == 1)
		throw GradeTooHighException();
	else
		--this->grade;
}

void Bureaucrat::decrementGrade()
{
	if (grade == 150)
		throw GradeTooLowException();
	else
		++this->grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Too HIGH grade of Bureaucrat :(";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Too LOW grade of Bureaucrat :(";
}

std::ostream &operator<<(std::ostream & out, Bureaucrat const &src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return out;
}

void		Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " is signed: " << std::endl;
		std::cout << form << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "\n" << this->name << " could not sign " << std::endl;
		std::cerr << form.getName() << " because of " << e.what() << std::endl;
	
	}
}

	void		Bureaucrat::executeForm( Form const & form )
	{
		try
		{
			form.execute(*this);
			std::cout << *this << " executed" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << *this << " couldn't execute " << form << ", because "<< this->name << " has " << e.what() << std::endl;
		}
		
	}
