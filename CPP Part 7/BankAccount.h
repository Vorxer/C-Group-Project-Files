#pragma once
#include <iostream>
#include <string>
#include "BankBranch.h"
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

class BankAccount
{
	// Access specifier 
protected:
	int acnumber;
	double balance;
	BankBranch homeBranch(int BSBNo, int postcode, std::string address);

public:
	BankAccount(int acnumber, double balance, BankBranch homeBranch(int BSBNo, int postcode, std::string address))
	{
		double balance = 0;
		double iRate = 0;
	}

	~BankAccount();
	

	int BankAccount::getAcNo();

	void BankAccount::enterAccountData();

	void BankAccount::setBalance(double input);

	void BankAccount::displayAccount();

	double BankAccount::getBalance();


};


int BankAccount::getAcNo()
{
	return acnumber;
}

void BankAccount::enterAccountData()
{

	int number = 0;
	double bal = -1;
	cout << "hello" << endl;

	while (bal<1 || bal>10000)

	{

		cout << "Enter Account balance" << endl;

		bal = getDouble();

	};

	while (number<1000 || number>9999)

	{
		cout << "Enter Account Number" << endl;

		number = getInt();

	}

	acnumber = number;
	balance = bal;

}

void BankAccount::setBalance(double input)
{
	balance = input;
}

void BankAccount::displayAccount()
{
	cout << "The account number is : " << acnumber << endl;
	cout << "The current balance  is : " << balance << endl;
	//int printBranch = homeBranch.BSBNo;
	//cout << "The home branch BSB is : " << homeBranch.getBSB() << endl;
	//cout << "The home branch postcode is : " << homeBranch.getPost() << endl;
	//cout << "The home branch address is : " << homeBranch.getAddress() << endl;



	BankBranch homeBranch(int BSBNo, int postcode, std::string address);


};

double BankAccount::getBalance()
{
	return balance;
}