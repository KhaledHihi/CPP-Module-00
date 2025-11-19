#include "PhoneBook.hpp"

int main(int ac, char **av)
{
	std::string input;
	PhoneBook a;

	a.n = 0;
	if (ac != 1)
	{
		std::cout << "Please enter only name of program [phonebook]" << std::endl;
		return 1;
	}
	while(true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, input);

		if (std::cin.eof())
			break;
		if (input == "ADD")
			a.add();
		else if (input == "SEARCH")
			a.search();
		else if (input == "EXIT")
			break ;
		else
		{
			std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
		}
	}
	return 0;
}
