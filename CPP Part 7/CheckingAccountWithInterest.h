#include <iostream>
#include <string>
#pragma once
#include "BankAccount.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"


class CheckingAccountWithInterest : public SavingsAccount , public CheckingAccount
{
protected:
	using CheckingAccount::acnumber;
	using CheckingAccount::balance;
	//using CheckingAccount::homeBranch;
	using SavingsAccount::iRate;


public:
	CheckingAccountWithInterest(int inputacnumber, double inputbalance, double inputiRate, double inputmonthlyFee, double inputnumberChecks, int inputBSBNo, int inputpostcode, std::string inputaddress)
		: CheckingAccount(inputacnumber,inputbalance,inputiRate,inputmonthlyFee, inputnumberChecks,inputBSBNo,inputpostcode,inputaddress)
		, SavingsAccount(inputacnumber,inputbalance,inputiRate,inputBSBNo,inputpostcode, inputaddress)


	{};
	using CheckingAccount::getAcNo;

	using CheckingAccount::enterAccountData;

	using CheckingAccount::setBalance;

	using CheckingAccount::getBalance;
		
	void displayAccount();

	void enterAccountData();


};