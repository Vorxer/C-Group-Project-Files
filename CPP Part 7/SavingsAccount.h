#include <iostream>
#include <string>
#pragma once
#include "BankAccount.h"

using namespace std;

class SavingsAccount : public BankAccount
{
protected:
	double iRate = 0.3;
	
public:
	SavingsAccount(int inputacnumber, double inputbalance, double inputiRate, int inputBSBNo,int inputpostcode,std::string inputaddress)
		: BankAccount(inputacnumber, inputbalance, inputBSBNo, inputpostcode, inputaddress)

	{
		iRate = inputiRate;
	};
	void SavingsAccount::displayAccount();
	void enterAccountData();
	double getInterest();

};
