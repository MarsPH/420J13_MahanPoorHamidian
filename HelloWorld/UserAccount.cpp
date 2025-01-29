#include <iostream>
#include "UserAccount.h"

UserAccount::UserAccount(int id, const std::string& userName, const std::string& password)
	: id(id), userName(userName), password(password)
{
}

bool UserAccount::Login(const std::string& enteredUserName, const std::string& enteredPassword)
{
	return (enteredUserName == userName && enteredPassword == password);
}

void RunUserAccount()
{
	int id;
	std::string username;
	std::string password;

	while (true) {
		std::cout << "Enter account ID: ";
		std::cin >> id;


		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout << "Invalid Input for ID" << "\n";
		}
		else {
			std::cin.ignore();
			break;
		}
	}

	std::cout << "Enter Username: ";
	std::getline(std::cin, username);

	std::cout << "Enter Password: ";
	std::getline(std::cin, password);

	UserAccount user(id, username, password);

	std::string inputUser, inputPass;
	
	while (true) {
		std::cout << "\nLogin:";
		std::cout << "\nEnter Username to Login: ";
		std::getline(std::cin, inputUser);

		std::cout << "Enter Password to Login: ";
		std::getline(std::cin, inputPass);

		if (user.Login(inputUser, inputPass)) 
		{
			std::cout << "Login Successful!";
			std::cout << "\nID: " << id << std::endl;
			break;
		}
		else 
		{
			std::cout << "Wrong username or password. Please Try again.\n";
		}
	}
	
}
