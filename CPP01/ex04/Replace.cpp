#include "Replace.hpp"

Replace::Replace() {}
Replace::~Replace() {}

void Replace::openAndReplace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream file;
	std::string file2name;

	file2name = filename;
	file2name.append(".replace");
	file.open(filename);
	if (!file) 
	{
		std::cout << "Cant open file\n"; 
		return ;
	}
	else 
		std::cout << "File was opened\n";
	



	std::ofstream file2;
	file2.open(file2name);
	if (!file2) 
	{
		std::cout << "Cant open file2\n"; 
		return ;
	}
	else 
		std::cout << "File2 was opened\n";
	std::string buffer; 
	while (!file.eof() &&  getline(file, buffer))
	{
		std::cout << buffer << std::endl;
		std::string::size_type n = buffer.find(s1);
		
		while (n != std::string::npos)
		{
			file2 << buffer.substr(0, n) << s2;
			//int len = buffer.size();
			// file2 << buffer.substr(n + s1.size(), len - n) << std::endl;
			buffer.erase(0, s1.size() + n);
			n = buffer.find(s1);
		}
		if (n == std::string::npos)
				file2 << buffer << std::endl;	
		
	}
	file.close();
	file2.close();
}