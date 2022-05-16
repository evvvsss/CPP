#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
	public:
		Form();
		Form(std::string name, int min_grade_sign, int min_grade_exec);
		Form(Form const & src);
		~Form();

		Form 		&operator=(Form const & src);
		std::string getName() const;
		int 		getMinGradeSign() const;
		int 		getMinGradeExec() const;
		bool		getSign() const;
		void 		beSigned(Bureaucrat &buro);
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
		const std::string	name;
		bool 				sign;
		const int			min_grade_sign;
		const int			min_grade_exec;

};

std::ostream &	operator<<(std::ostream & out, Form const & src);

#endif