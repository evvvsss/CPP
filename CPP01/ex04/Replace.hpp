#ifndef _REPLACE_HPP
#define _REPLACE_HPP
#include <string>
#include <iostream>
#include <fstream>

class Replace {

public:
		Replace();
		~Replace();

		void openAndReplace(std::string filename, std::string s1, std::string s2);

};

#endif