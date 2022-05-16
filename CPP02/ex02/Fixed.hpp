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

		/* comparison operators */
		bool	operator>(const Fixed &fixed) const;
		bool	operator<(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator==(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;
		/* comparison operators */

		/* arithmetic operators */
		Fixed	operator+(const Fixed &fixed) const;
		Fixed	operator-(const Fixed &fixed) const;
		Fixed	operator*(const Fixed &fixed) const;
		Fixed	operator/(const Fixed &fixed) const;
		/* arithmetic operators */

		/* increment/decrement */
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);
		/* increment/decrement */

		float 	toFloat( void ) const;
		int 	toInt( void ) const;
		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );

		static 	Fixed &min(Fixed &fixed1, Fixed &fixed2);
		static 	const Fixed &min(const Fixed &fixed1, const Fixed &fixed2);
		static 	Fixed &max(Fixed &fixed1, Fixed &fixed2);
		static 	const Fixed &max(const Fixed &fixed1, const Fixed &fixed2);

private:
		int integer;
		static const int bits = 8;

};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);
#endif