#pragma once

# include "Base.hpp"

class C: public Base{
	public:
			C() {std::cout << "Class C conctrustor" << std::endl;}
			~C() {std::cout << "Class C dectrustor" << std::endl;}
};
