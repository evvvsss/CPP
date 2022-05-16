#pragma once

# include "Base.hpp"

class A: public Base{
	public:
			A() {std::cout << "Class A conctrustor" << std::endl;}
			~A() {std::cout << "Class A dectrustor" << std::endl;}
};

