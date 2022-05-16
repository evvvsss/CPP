#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"


class Intern 
{
	public:
			Intern();
			Intern(Intern const & src);
			~Intern();
			Intern &operator=(Intern const &src);

			Form* makeForm( std::string formName, std::string formTarget );

			class FormIsNotCreatedException : public std::exception
			{
			public:
				virtual const char* what() const throw();
			};
};

#endif