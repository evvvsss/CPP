#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {

public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed();

		Fixed & operator=(const Fixed &assign);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

private:
		int integer;
		static const int bits = 8;

};
  
#endif