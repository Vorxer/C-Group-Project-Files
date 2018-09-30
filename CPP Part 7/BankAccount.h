#pragma once
#include <iostream>
#include <string>
#include "BankBranch.h"
using namespace std;


class BankAccount
{
	// Access specifier 
protected:
	int acnumber;
	double balance;
	BankBranch homeBranch(int BSBNo, int postcode, std::string address);

public:
	BankAccount(int acnumber, double balance, BankBranch homeBranch);

	~BankAccount();
	

	int BankAccount::getAcNo();

	void BankAccount::enterAccountData();

	void BankAccount::setBalance(double input);

	void BankAccount::displayAccount();

	double BankAccount::getBalance();

	int BankAccount::getInt();

	double BankAccount::getDouble();


};
