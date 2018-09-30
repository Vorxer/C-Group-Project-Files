#include <iostream>
#include <string>
#pragma once
#include "BankAccount.h"

class CheckingAccount : public BankAccount
{
protected:
	double monthlyFee;
	int numberChecks;
public:
	CheckingAccount(int acnumber, double balance, double monthlyFee, double numberChecks, BankBranch homeBranch);
	~CheckingAccount();
	void CheckingAccount::displayAccount();
	double CheckingAccount::getFee();
	int CheckingAccount::getChecks();

};

