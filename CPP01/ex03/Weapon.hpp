#ifndef _WEAPON_HPP
# define _WEAPON_HPP
# include <iostream>
# include <string>

class Weapon {

public:
		Weapon( std::string type );
		~Weapon();
		const std::string&	getType() const;
		void	setType( std::string newType );

private:
		std::string type;
};


#endif