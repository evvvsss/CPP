#ifndef _HARL_HPP
#define _HARL_HPP
#include <iostream>

class Harl {

	public:
			Harl();
			~Harl();
			void complain( std::string level );
			void choose(int i);
	private:
			void (Harl::*arr[5]) ();
			void debug( void );
			void info( void );
			void warning( void );
			void error( void );
			void nothing( void );
};

#endif