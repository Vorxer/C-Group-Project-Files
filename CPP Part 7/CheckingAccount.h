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
	CheckingAccount(int inputacnumber, double inputbalance, double inputiRate, double inputmonthlyFee, int inputnumberChecks, int inputBSBNo, int inputpostcode, std::string inputaddress)
		: BankAccount(inputacnumber, inputbalance, inputBSBNo,inputpostcode, inputaddress)
	{
		monthlyFee=inputmonthlyFee;
		numberChecks=inputnumberChecks;
	};

	void CheckingAccount::displayAccount();
	double CheckingAccount::getFee();
	int CheckingAccount::getChecks();
	void enterAccountData();

};

