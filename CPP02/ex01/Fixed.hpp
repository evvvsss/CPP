#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {

public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(int const n);
		Fixed(float const n);
		~Fixed();

		Fixed & operator=(const Fixed &assign);


		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );

private:
		int integer;
		static const int bits = 8;

};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);
#endif