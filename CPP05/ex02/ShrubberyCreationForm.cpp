#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), target("Shrubberytarget")
{
	std::cout << "Default ShrubberyCreationForm constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137), target(target)
{
	std::cout << "Setting target ShrubberyCreationForm constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : target(src.target)
{
	std::cout << "Copy ShrubberyCreationForm constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Default ShrubberyCreationForm destructor" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & src)
{
	Form::operator=(src);
	if (this != &src)
	{
		this->target = src.target;
	}
	std::cout << "Assignment ShrubberyCreationForm operator" << std::endl;
	return *this;
}

void ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	std::ofstream file;

	if (!this->getSign())
		throw FormIsNotSignedException();
	else if (this->getMinGradeExec() < executor.getGrade())
		throw GradeTooLowException();
	else
	{
		file.open((this->target + "_shrubbery").c_str());
		if (!file.is_open())
		{
			std::cerr << "Cannot open file!" << std::endl;
			return;
		}
		else
		{
			file << " 										#####" << std::endl;
			file << " 						#######" << std::endl;
			file << " 				######    ########       #####" << std::endl;
			file << " 			###########/###########  #############" << std::endl;
			file << " 		############/##########--#####################" << std::endl;
			file << " 	####         ######################          #####" << std::endl;
			file << " 	##          ####      ##########/@@              ###" << std::endl;
			file << " 	#          ####        ,-.##/`.#######               ##" << std::endl;
			file << " 			###         /  |$/  |,-. ####                 #" << std::endl;
			file << " 			##           #_,'$#_,'|  #  ###" << std::endl;
			file << " 			#              #_$$$$$`._/   ##" << std::endl;
			file << " 							$$$$$_/     ##" << std::endl;
			file << " 							$$$$$        #" << std::endl;
			file << " 							$$$$$" << std::endl;
			file << " 							$$$$$" << std::endl;
			file << " 							$$$$$" << std::endl;
			file << " 							$$$$$" << std::endl;
			file << " 							$$$$$" << std::endl;
			file << " 							$$$$$" << std::endl;
			file << " 							$$$$$" << std::endl;
			file << " 							$$$$$        ___" << std::endl;
			file << " 							$$$$$    _.-'   `-._" << std::endl;
			file << "							$$$$$   ,'           `." << std::endl;
			file << "							$$$$$  /               |" << std::endl;
			file << "	~~~~~~~~~~~~~~~~~~~~~~~~$$$$$~~~'~~~~~~~~~~~~~~~~`~~~~~~~~~~~~" << std::endl;
			file << "    	~      ~  ~    ~  ~ $$$$$  ~   ~       ~          ~" << std::endl;
			file << "		~ ~      ~~~ ~~     $$$$$     ~    ~  ~        ~" << std::endl;
			file << "	~            ~ ^   ~ ~~ $$$$$~        ______    ~        ~" << std::endl;
			file << "	________________________$$$$$________|//////_________________" << std::endl;
			file << "					  	    $$$$$        |>/////" << std::endl;
			file << "		______              $$$$$        |>>////" << std::endl;
			file << "	                        $$$$$       //>>|#####|" << std::endl;
			file << "		`------`            $$$$$      /=|##|#####|" << std::endl;
			file << "						    $$$$$        |##|#####|" << std::endl;
			file << "						   $$$$$$$          ||"" |" << std::endl;
			file << "						   $$$$$$$          ||   |" << std::endl;
			file << "						  $$$$$$$$$" << std::endl;
			file << "	......................$$$$$$$$$............................... " << std::endl;
			file << "							 $$$            " << std::endl;
		}
		file.close();
	}
}
