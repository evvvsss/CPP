#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

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
		int grade; //from 1 (high) to 150 (low)
};

std::ostream &	operator<<(std::ostream & out, Bureaucrat const & src);

#endif