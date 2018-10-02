#include <iostream>
#include <string>
#pragma once
#include "BankAccount.h"

class CheckingAccount : public BankAccount
{
public:
	double monthlyFee;
	int numberChecks;

	CheckingAccount(int inputacnumber=0, double inputbalance=0, double inputiRate=0, double inputmonthlyFee=0, int inputnumberChecks=0, int inputBSBNo=0, int inputpostcode=0, std::string inputaddress="")
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

