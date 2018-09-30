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
	using CheckingAccount::homeBranch;
	using SavingsAccount::iRate;


public:
	CheckingAccountWithInterest(int acnumber, double balance, double iRate, double monthlyFee, double numberChecks, BankBranch homeBranch);

	~CheckingAccountWithInterest();

	using CheckingAccount::getAcNo;

	using CheckingAccount::enterAccountData;

	using CheckingAccount::setBalance;

	using CheckingAccount::displayAccount;

	using CheckingAccount::getBalance;

};

//template<class T>
//T getDouble(T x)
//{
//	returb=n x
//}

//CheckingAccountWithInterest::funtion(int){ ParentClassname::method(int)}