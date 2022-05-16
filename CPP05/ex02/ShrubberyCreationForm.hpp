#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
			ShrubberyCreationForm();
			ShrubberyCreationForm(std::string target);
			ShrubberyCreationForm(ShrubberyCreationForm const &src);
			~ShrubberyCreationForm();

			ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src);
			void execute( Bureaucrat const & executor ) const;
	private:
			std::string target;
};

#endif