#include "iter.hpp"
#include <string>

int main ()
{
	int arr[3] = {1, 3 ,6};
	int len = static_cast<int>(sizeof(arr)/sizeof(arr[0]));

	iter(arr, len, addTwo);
	for(int i = 0; i < len; i++)
		std::cout << arr[i] << std::endl;

	char string[] = "abcde";
	int len2 = static_cast<int>(sizeof(string)/sizeof(string[0]));
	iter(string, len2, addTwo);
	std::cout << string << std::endl;
}