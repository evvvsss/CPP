#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	public:
		class OutOfRangeException: public std::exception 
		{
		public:
			const char* what() const throw() {return "Index out of range";}
		};

		Array()
		{
			std::cout << "Empty array Constructor called" << std::endl;
			array = new T [0];
			size = 0;
		}

		Array(unsigned int n)
		{
			std::cout << "Empty array Constructor called" << std::endl;
			array = new T [n];
			size = n;
		}

		Array(const Array& src) 
		{
			array = new T[src.getSize()];
			size = src.getSize();
			for (int i = 0; i < src.getSize(); i++)
				array[i] = src.array[i];
		}

		Array &operator=(Array const &src)
		{
			if (this->array)
				delete [] this->array;
				array = new T[src.getSize()];
			if (this != &src)
			{
				this->size = src.getSize();
				for (int i = 0; i < src.getSize(); i++)
					array[i] = src.array[i];
			}
			return *this;
		}

		T& operator[](int index) const 
		{
			if (index < 0)
				throw OutOfRangeException();
			else if (index >= this->getSize()) 
				throw OutOfRangeException();
			return array[index];
		}

		T		getArray(unsigned int i) const{return this->array[i]; }
		void	setArray(T a, unsigned int i){this->array[i] = a;}
		int 	getSize() const {return size;}

		private:
				T* array;
				int size;
		


};

#endif
