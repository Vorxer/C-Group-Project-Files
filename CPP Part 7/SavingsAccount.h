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
	SavingsAccount(int acnumber, double balance, double iRate, BankBranch homeBranch(int BSBNo, int postcode, std::string address));
	~SavingsAccount();
	void SavingsAccount::displayAccount();

};
