#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	protected:
			std::string type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const & src);
		virtual ~WrongAnimal();

		WrongAnimal 	&operator=(WrongAnimal const & src);
		std::string		getType() const;
		void	makeSound() const;

};

std::ostream &	operator<<(std::ostream & out, WrongAnimal const & a);

#endif