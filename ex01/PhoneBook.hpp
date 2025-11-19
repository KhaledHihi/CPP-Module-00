#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class Contact {
	private:
	 	std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
		std::string darkestSecret;
	public:
		void get_all(void)
		{
			std::cout << "firstName : " << firstName << '\n';
			std::cout << "lastName : " << lastName << '\n';
			std::cout << "nickName : " << nickName << '\n';
			std::cout << "phoneNumber : " << phoneNumber << '\n';
			std::cout << "darkestSecret : " << darkestSecret << '\n';
		}
		void setFirstName(std::string value);
        void setLastName(std::string value);
        void setNickName(std::string value);
        void setPhoneNumber(std::string value);
		void setDarkestSecret(std::string value);

		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getDarkestSecret();

};

class PhoneBook
{
	private:
		Contact con[8];
	public:
		int n;
		void search();
		void add();
};


