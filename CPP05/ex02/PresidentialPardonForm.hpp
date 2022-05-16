#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form 
{
	public:
			PresidentialPardonForm();
			PresidentialPardonForm(PresidentialPardonForm const &src);
			PresidentialPardonForm(std::string target);
			~PresidentialPardonForm();

			PresidentialPardonForm& operator=(PresidentialPardonForm const & src);
			void execute( Bureaucrat const & executor ) const;
	private:
			std::string target;
};

#endif