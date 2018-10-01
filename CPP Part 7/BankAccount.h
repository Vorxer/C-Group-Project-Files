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
	//BankBranch homeBranch;

public:
	BankAccount::BankAccount(int inputacnumber, double inputbalance, int inputBSBNo, int inputpostcode, std::string inputaddres)
	{
		acnumber = inputacnumber;
		balance = inputbalance;
		//homeBranch.reConstruct(inputBSBNo, inputpostcode, inputaddress);
	};

	int getAcNo();

	void enterAccountData();

	void setBalance(double input);

	void displayAccount();

	double getBalance();

	int getInt();

	double getDouble();


};
