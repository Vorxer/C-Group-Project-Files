#include <iostream>
#include <string>
#include <typeinfo>
#include "BankBranch.h"
#include "CheckingAccount.h"
#include "CheckingAccountWithInterest.h"

using namespace std;

int getInt()
{
	int i;
	while (!(cin >> i)) {
		cin.clear();
		cin.ignore(999, '\n');
		cout << "Error: Invalid Input. Please Re-Enter";
	}
	cout << endl;
	return i;
}

double getDouble()
{

	double i;
	while (!(cin >> i)) {
		cin.clear();
		cin.ignore(999, '\n');
		cout << "Error: Invalid Input. Please Re-Enter";
	}
	cout << endl;
	return i;
}

template < class A>
int getTypeInfo(A account)
{
	if (typeid(account) == typeid(class SavingsAccount))
	{
		return 1;
	}

	else if (typeid(account) == typeid(class CheckingAccount))
	{
		return 2;
	}

	else if (typeid(account) == typeid(class CheckingAccountWithInterest))
	{
		return 3;
	}
}

int getLocationinfo(int acno, SavingsAccount SACs[10], CheckingAccount CACs[10], CheckingAccountWithInterest CACIs[10] ){
	int Specifedtype = getTypeInfo(acno);
	
	if (Specifedtype == 1){
		for (int i = 0; i <= 10; i++)
		{
			if (SACs[i].acnumber == acno){
				return acno;
			}
		}
	}

	if (Specifedtype == 2){
		for (int i = 0; i <= 10; i++)
		{
			if (CACs[i].acnumber == acno){
				return acno;
			}
		}
	}

	if (Specifedtype == 3){
		for (int i = 0; i <= 10; i++)
		{
			if (CACIs[i].CheckingAccount::acnumber == acno){
				return acno;
			}
		}
	}
};


void SavingSpecifics(SavingsAccount account)
{
	cout << "Account Interest Rate =" << account.getInterest() << endl;
	cout << "-------------------" << endl;
}

void CheckingAccountSpecific(CheckingAccount account)
{	
	cout << "Account MonthlyFee =" << account.getFee() << endl;
	cout << "-------------------" << endl;
	cout << "Account Number of Checks =" << account.getChecks() << endl;
	cout << "-------------------" << endl;
}

void CheckingAccountWithIntSpecific(CheckingAccountWithInterest account)
{
	cout << "Account MonthlyFee =" << account.getFee() << endl;
	cout << "-------------------" << endl;
	cout << "Account Number of Checks =" << account.getChecks() << endl;
	cout << "-------------------" << endl;
	cout << "Account Interest Rate =" << account.getInterest() << endl;
	cout << "-------------------" << endl;
};

template<class Z>
int getEmpty(Z input[10])
{
	for (size_t i = 0; i < 10; i++)
	{
		if (input[i].acnumber == 0)
		{
			return i;
		};
	};
}



template < class T, class U>

void produceReport(T title, U account){
	cout << title << endl;
	cout << "-------------------" << endl;
	cout << "Account Number =" << account.getAcNo() << endl;
	cout << "-------------------" << endl;
	cout << "Account Balance =" << account.getBalance() << endl;
	cout << "-------------------" << endl;

	bool control = false;
	int type = getTypeInfo(account);

	if (type==1)
	{
		SavingSpecifics(account);
	}

	else if (type == 2)
	{
		CheckingAccountSpecific(account);
	}

	else if (type == 3)
	{
		CheckingAccountWithIntSpecific(account);
	}

};



void main()
{
	
	CheckingAccountWithInterest  temp;

	SavingsAccount SavingsAccounts[10];
	CheckingAccount CheckingAccounts[10];	
	CheckingAccountWithInterest CheckingAccountsWithInterest[10];
	cout << getEmpty(SavingsAccounts) << endl;
	system("Pause");


	bool mainloopexit = false;
	
	cout << "Session Intiated" << endl;
	cout << "Select a function" << endl;
	cout << "1 = Create new account" << endl;
	cout << "2=Login" << endl;

	while (mainloopexit != true)
	{
		//Username and password validation

		cout << "Select a banking function" << endl;
		cout << "1 = Create new account" << endl;
		cout << "2=transfer money" << endl;
		cout << "3=generate Report" << endl;
		cout << "4=display account dietails" << endl;
		int secondcommand = getInt();

		if (secondcommand==1)
		{
			cout << "Select the type of account" << endl;
			int actype= getInt();
			if (actype == 1)
			{
				
				//append the account to the list;
				SavingsAccount temp;
				temp.enterAccountData();
				SavingsAccounts[getEmpty(SavingsAccounts)] = temp;
			}

			if (actype == 2)
			{
				CheckingAccount temp;
				temp.enterAccountData();
				CheckingAccounts[getEmpty(CheckingAccounts)] = temp;

			}
			
			if (actype == 3)
			{
				CheckingAccountWithInterest  temp;
				temp.enterAccountData();
				CheckingAccountsWithInterest[getEmpty(CheckingAccountsWithInterest)] = temp;
			}


		}



		if (secondcommand == 3)
		{
			for (int i = 0; i <= 10; i++)
			{
				//if (SavingsAccounts[i].acnumber!=0);
				//CheckingAccount CheckingAccounts[i];
				//CheckingAccountWithInterest CheckingAccountsWithInterest[i];
			}

		}

		getLocationinfo(1234, SavingsAccounts, CheckingAccounts, CheckingAccountsWithInterest);


		if (secondcommand == 4)
		{
			cout << "enter the account number to get dietals for";
			int targetaccount = getInt();

			int TypeSpecifier = getTypeInfo(targetaccount);
			if (TypeSpecifier == 1)
			{
				SavingsAccounts[getLocationinfo(targetaccount,SavingsAccounts,CheckingAccounts,CheckingAccountsWithInterest)].displayAccount();
			}

			if (TypeSpecifier == 2)
			{
				CheckingAccounts[getLocationinfo(targetaccount, SavingsAccounts, CheckingAccounts, CheckingAccountsWithInterest)].displayAccount();
			}

			if (TypeSpecifier == 3)
			{
				CheckingAccountsWithInterest[getLocationinfo(targetaccount, SavingsAccounts, CheckingAccounts, CheckingAccountsWithInterest)].displayAccount();
			}

		}
	}
	
}