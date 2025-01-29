#ifndef USERACCOUNT_H
#define USERACCOUNT_H
#include <string>

class UserAccount
{
public:
	UserAccount(int id, const std::string& userName, const std::string& password);
	bool Login(const std::string& enteredUserName, const std::string& enteredPassword);

private:
	int id;
	std::string userName;
	std::string password;
};

void RunUserAccount();

#endif


