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
		void get_all(void)
		{
			std::cout << "firstName : " << firstName << '\n';
			std::cout << "lastName : " << lastName << '\n';
			std::cout << "nickName : " << nickName << '\n';
			std::cout << "phoneNumber : " << phoneNumber << '\n';
			std::cout << "darkestSecret : " << darkestSecret << '\n';
		}
		void setFirstName(std::string value) {firstName = value;}
        void setLastName(std::string value) {lastName = value;}
        void setNickName(std::string value) {nickName = value;}
        void setPhoneNumber(std::string value) {phoneNumber = value;}
		void setDarkestSecret(std::string value){darkestSecret = value;}
		
		std::string getFirstName(){return (firstName);}
		std::string getLastName() {return (lastName);}
		std::string getNickName(){return (nickName);}
		std::string getPhoneNumber() {return (phoneNumber);}
		std::string getDarkestSecret() {return (darkestSecret);}

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
