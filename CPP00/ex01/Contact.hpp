#ifndef _CONTACT_HPP
#define _CONTACT_HPP
#include <iostream>

class Contact {

public:
		Contact();
		~Contact();
		
		int index;
		void newContact(int id);
		void displayContact();
		void displayMoreContact();
		void cut(std::string line);

private: 
		
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

#endif