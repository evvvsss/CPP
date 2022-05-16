#ifndef _PHONEBOOK_H
#define _PHONEBOOK_H
#include <iostream>
#include "Contact.hpp"

class PhoneBook {

public:
		PhoneBook();
		~PhoneBook();
		
		int id;
		void addContact();
		void searchContact();
		

private:
		Contact contacts[8];
		
};

#endif