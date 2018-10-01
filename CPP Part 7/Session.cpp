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


template <class T>
T produceReport(int acno, SavingsAccount SACs[10], CheckingAccount CACs[10], CheckingAccountWithInterest CACIs[10] ){
	
	for (int i = 0; i <= 10; i++)
	{
		if (SACs[i].getAcNo == acno){
			return{1,acno}
		}
	}

	for (int i = 0; i <= 10; i++)
	{
		if (CACs[i].getAcNo == acno){
			return{ 1, acno }
		}
	}

	for (int i = 0; i <= 10; i++)
	{
		if (CACIs[i].getAcNo == acno){
			return{ 1, acno }
		}
	}

	return 0;
};


int UserID[10];
std::string password[10] = {};

template <class T>
T produceReport(T title, T account){
	cout << title << endl;
	cout << "-------------------" << endl;
	cout << "Account Number =" << account.getNumber << endl;
	cout << "-------------------" << endl;
	cout << "Account Balance =" << account.getBalance << endl;
	cout << "-------------------" << endl;

	if (typeid(account) == typeid(class SavingsAccount))
	{
		cout << "Account Interest Rate =" << account.getInterest << endl;
		cout << "-------------------" << endl
	}

	else if (typeid(account) == typeid(class CheckingAccount))
	{
		cout << "Account MonthlyFee =" << account.getFee << endl;
		cout << "-------------------" << endl;
		cout << "Account Number of Checks =" << account.getChecks << endl;
		cout << "-------------------" << endl
	}

	else if (typeid(account) == typeid(class CheckingAccountWithInterest))
	{
		cout << "Account MonthlyFee =" << account.getBalance << endl;
		cout << "-------------------" << endl
	}

	return 0;
};



void main()
{
	SavingsAccount temp(0, 0, 0, 0, 0, "");
	SavingsAccount SavingsAccounts[10] = { temp, temp, temp, temp, temp, temp, temp, temp, temp, temp };
	bool mainloopexit = false;

	CheckingAccount temp2(0, 0, 0, 0, 0, 0, 0, "");
	CheckingAccount CheckingAccounts[10] = { temp2, temp2, temp2, temp2, temp2, temp2, temp2, temp2, temp2, temp2 };
	
	CheckingAccountWithInterest temp3(0, 0, 0, 0, 0, 0, 0, "");
	CheckingAccountWithInterest CheckingAccountsWithInterest[10] = { temp3, temp3, temp3, temp3, temp3, temp3, temp3, temp3, temp3, temp3 };
	CheckingAccountWithInterest(0,0,0,0,0,0,0,"")

	//SavingsAccount SavingsAccounts[10] = { temp, temp, temp, temp, temp, temp, temp, temp, temp, temp };
	//bool mainloopexit = false;

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
			int actype = 1;
			if (actype == 1)
			{
				CheckingAccount temp(0, 0, 0, 0, 0, 0, 0, "");
				temp.enterAccountData();
				//append the account to the list;
			}

			if (actype == 1)
			{
				SavingsAccount temp(0, 0, 0, 0, 0, "");
				temp.enterAccountData();
			}
			
			if (actype == 0)
			{
				//CheckingAccountWithInterest  temp(0, 0, 0, 0, 0, 0, 0 ,0 ,0 , "");;
				//append the account to the list
			}


		}



		if (secondcommand == 4)
		{
			for (int i = 0; i <= 10; i++)
			{
				produceReport(inputAcNo, SavingsAccounts,CheckingAccounts,CheckingAccountsWithInterest)
			}

		}
	}
	
}