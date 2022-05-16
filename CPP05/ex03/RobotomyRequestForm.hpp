#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form 
{
	public:
			RobotomyRequestForm();
			RobotomyRequestForm(RobotomyRequestForm const &src);
			RobotomyRequestForm(std::string target);
			~RobotomyRequestForm();

			RobotomyRequestForm& operator=(RobotomyRequestForm const & src);
			void execute( Bureaucrat const & executor ) const;
	private:
			std::string target;
};


#endif