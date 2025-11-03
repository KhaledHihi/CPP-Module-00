#include "PhoneBook.hpp"

std::string ten_char(std::string str)
{
    if (str.length() >= 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

void PhoneBook::search()
{
    std::string str;
    if (n == 0)
    {
        std::cout << "empty PhoneBook\n";
        return ;
    }
    for (int i = 0; i < 8; i++)
    {
        str = ten_char(con[i].getFirstName());
        if (!str[0])
            break ;
        std::cout << "_____________________________________________" << std::endl;
		std::cout << '|' << std::setw(10) << i;
		std::cout << '|' << std::setw(10) << str;
		str = ten_char(con[i].getLastName());
		std::cout << '|' << std::setw(10) << str;
		str = ten_char(con[i].getNickName());
		std::cout << '|' << std::setw(10) << str << '|' << std::endl;
    }
    std::cout << "enter the index of contact: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
			exit(1);
    if (str.length() != 1 || (str[0] < '0' || str[0] > '9'))
    {
        std::cout << "invalid index\n";
        return ;
    }
    int i = str[0] - '0';
	str = con[i].getFirstName();
	if (!str[0])
		std::cout << "bad index !!!" << std::endl;
	else
		con[i].get_all();
}

int allnumber(std::string data)
{
    if (data.empty())
        return (1);
    for (size_t i = 0; i < data.length(); i++)
    {
        if (data[i] < '0' || data[i] > '9')
            return (1);
    }
    return (0);
}


void PhoneBook::add()
{
    std::string str;

    if (n == 8)
        n = 0;
    while (1)
    {
        std::cout << n << '\n';
        std::cout << "First Name: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
			exit(1);
        if (!str.empty())
        {
            con[n].setFirstName(str);
            break ;
        }
        std::cout << "First Name is empty\n";
    }
    while(1)
    {
        std::cout << "Last Name: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(1);
        if (!str.empty())
        {
            con[n].setLastName(str);
            break ;
        }
        std::cout << "Last Name is empty\n";
    }
    while (1)
    {
        std::cout << "Nick Name: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(1);
        if (!str.empty())
        {
            con[n].setNickName(str);
            break ;
        }
        std::cout << "Nick Name is empty\n";
    }
    while (1)
    {
        std::cout << "Phone Number: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(1);
        if (allnumber(str) == 0)
        {
            con[n].setPhoneNumber(str);
            break ;
        }
        std::cout << "Phone Number is empty or invalid\n";
    }
    while (1)
    {
        std::cout << "Darkest Secret: ";
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(1);
        if (!str.empty())
        {
            con[n].setDarkestSecret(str);
            break ;
        }
        std::cout << "Darkest Secret is empty\n";
    }
    n++;
}
