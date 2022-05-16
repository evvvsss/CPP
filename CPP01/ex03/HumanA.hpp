#ifndef _HUMANA_HPP
# define _HUMANA_HPP
# include <iostream>
# include <string>
#include "Weapon.hpp"


class HumanA {

public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void attack();
private:
		
		std::string name;
		Weapon& weapon;
};

#endif