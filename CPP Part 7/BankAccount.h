#pragma once
#include <iostream>
#include <string>
#include "BankBranch.h"
using namespace std;


class BankAccount
{
	// Access specifier 
public:
	int acnumber;
	double balance;
	BankBranch homeBranch;


	BankAccount::BankAccount(int inputacnumber=0, double inputbalance=0, int inputBSBNo=0, int inputpostcode=0, std::string inputaddress="")
	{
		acnumber = inputacnumber;
		balance = inputbalance;
		homeBranch.reConstruct(inputBSBNo, inputpostcode, inputaddress);
	};

	int getAcNo();

	void enterAccountData();

	void setBalance(double input);

	void displayAccount();

	double getBalance();

	int getInt();

	double getDouble();


};
