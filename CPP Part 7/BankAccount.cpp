#include "BankAccount.h"





int BankAccount::getAcNo()
{
	return acnumber;
}

void BankAccount::enterAccountData()
{

	int number = 0;
	double bal = -1;
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



	//BankBranch homeBranch(int BSBNo, int postcode, std::string address);


};

double BankAccount::getBalance()
{
	return balance;
}

int BankAccount::getInt()
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

double BankAccount::getDouble()
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