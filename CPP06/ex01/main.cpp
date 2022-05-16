#include "Data.hpp"

/* What is uintptr_t ?? */
/* "an unsigned integer type with the property that any valid pointer to void can be converted to this type,
then converted back to pointer to void, and the result will compare equal to the original pointer" */

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw); 
}

int main()
{
	Data *data = new Data;
	data->num = 3456;
	uintptr_t pointer = serialize(data);
	std::cout << pointer << std::endl;

	Data *new_data = deserialize(pointer);

	std::cout << "Data address:			    " << &data << std::endl;
	std::cout << "Data address after Deserialization: " << &new_data << std::endl;
	std::cout << "Data original number " << data->num << std::endl;
	std::cout << "Data final number    " << new_data->num << std::endl;
}