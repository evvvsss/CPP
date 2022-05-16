#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>
# include <string>
# include <algorithm>
# include <list>
# include <iomanip>


template< typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{

	public:
		MutantStack() {}
		MutantStack( MutantStack< T, Container > const & src) { *this = src; }
		virtual ~MutantStack() {}

		MutantStack & operator=( MutantStack< T, Container > const & rhs)
		{
			*this = rhs;
			return *this;
		}

		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end();}

		reverse_iterator rbegin() { return this->c.rbegin(); }
		reverse_iterator rend() { return this->c.rend();}

};

#endif
