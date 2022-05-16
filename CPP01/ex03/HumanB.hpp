#ifndef _HUMANB_HPP
# define _HUMANB_HPP
# include <iostream>
# include <string>
#include "Weapon.hpp"


class HumanB {

public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void	setWeapon(Weapon& weapon);

private:
		
		std::string name;
		Weapon* weapon;
};

#endif