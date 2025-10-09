#include <Phonebook.hpp>

int main(int ac, char **av)
{
	if (ac != 1)
	{
		std::cout << "Please enter only name of program [phonebook]" << std::endl;
		return 1;
	}
	std::string input;
	while(true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT)" << std::endl;
		input = handeleLine();
	}
}
