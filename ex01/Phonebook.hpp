#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class Contact {
	private:
	// Add private member variables and methods here
	 	std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
		std::string darkestSecret;
	public:
	// Add public member functions here
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
