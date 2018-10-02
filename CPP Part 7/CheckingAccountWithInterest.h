#include <iostream>
#include <string>
#pragma once
#include "BankAccount.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"


class CheckingAccountWithInterest : public SavingsAccount , public CheckingAccount
{
public:
	using CheckingAccount::acnumber;
	using CheckingAccount::balance;
	using CheckingAccount::homeBranch;
	using SavingsAccount::iRate;



	CheckingAccountWithInterest(int inputacnumber=0, double inputbalance=0, double inputiRate=0, double inputmonthlyFee=0, double inputnumberChecks=0, int inputBSBNo=0, int inputpostcode=0, std::string inputaddress="")
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