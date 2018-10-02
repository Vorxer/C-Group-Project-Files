#include <iostream>
#include <string>
#pragma once
#include "BankAccount.h"

using namespace std;

class SavingsAccount : public BankAccount
{
public:
	double iRate = 0.3;
	

	SavingsAccount(int inputacnumber=0, double inputbalance=0, double inputiRate=0, int inputBSBNo=0,int inputpostcode=0,std::string inputaddress="")
		: BankAccount(inputacnumber, inputbalance, inputBSBNo, inputpostcode, inputaddress)

	{
		iRate = inputiRate;
	};
	void SavingsAccount::displayAccount();
	void enterAccountData();
	double getInterest();

};
