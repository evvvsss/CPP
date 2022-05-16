#include "Form.hpp"

Form::Form() : name("default name"), sign(false), min_grade_sign(150), min_grade_exec(150)
{
	std::cout << "Deafult Form constructor" << std::endl;
} 

Form::Form(std::string name, int min_grade_sign, int min_grade_exec) : name(name), sign(false),  min_grade_sign(min_grade_sign), min_grade_exec(min_grade_exec)
{
	std::cout << "Setting params Form constructor" << std::endl;
} 

Form::~Form() 
{
	std::cout << "Deafult Form destructor" << std::endl;
} 

Form::Form(Form const & src) : name(src.name), sign(src.sign), min_grade_sign(src.min_grade_sign), min_grade_exec(src.min_grade_exec)
{
	std::cout << "Copy Form constructor" << std::endl;
} 

Form 		&Form::operator=(Form const & src)
{
	std::cout << "Assignment Form operator" << std::endl;
	if (this != &src)
		sign = src.getSign();
	return *this;
}


std::string Form::getName() const
{
	return this->name;
}

int Form::getMinGradeSign() const
{
	return this->min_grade_sign;
}

int Form::getMinGradeExec() const
{
	return this->min_grade_exec;
}

bool Form::getSign() const
{
	return this->sign;
}

std::ostream &operator<<(std::ostream & out, Form const &src)
{
	out << "\nName: " << src.getName() << std::endl;
	out << "Min grade sign: " << src.getMinGradeSign() << std::endl;
	out << "Min grade execute: " << src.getMinGradeExec() << std::endl;
	if (src.getSign() == true)
		out << "Signed" << std::endl;
	else
		out << "Not signed" << std::endl;
	return out;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Too HIGH grade of Bureaucrat :(";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Too LOW grade of Bureaucrat :(";
}

const char* Form::FormIsNotSignedException:: what() const throw()
{
	return "Form is NOT signed yet :(";
}

void 		Form::beSigned(Bureaucrat &buro)
{
	if (buro.getGrade() <= min_grade_sign)
		sign = true;
	else	
		throw GradeTooLowException();
}