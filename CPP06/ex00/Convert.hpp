#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <cmath>
# include <climits>
# include <iomanip>

class Convert
{
	public:
			Convert();
			Convert(char *arg);
			Convert(Convert const &src);
			~Convert();

			Convert &	operator=(Convert const &src);
			void	isChar() const;
			void	isInt() const;
			void	isFloat() const;
			void	isDouble() const;

			int getPrecision() const;
	private:
			int precision;
			double arg;
};

#endif