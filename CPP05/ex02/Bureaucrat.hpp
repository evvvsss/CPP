#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat 
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();

		Bureaucrat 	&operator=(Bureaucrat const & src);
		std::string getName() const;
		int 		getGrade() const;

		void 		incrementGrade();
		void 		decrementGrade();
		void		signForm(Form & form);
		void		executeForm(Form const & form);



		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};


	private:

		const std::string name;
		int grade;
};

std::ostream &	operator<<(std::ostream & out, Bureaucrat const & src);

#endif