#include "SavingsAccount.h"




double  SavingsAccount::getInterest()
{
	return iRate;
};


void SavingsAccount::displayAccount()
{
	cout << "The account number is : " << acnumber << endl;
	cout << "The current balance  is : " << balance << endl;
	cout << "The set interest Rate is : " << iRate << endl;

	//int printBranch = homeBranch.BSBNo;
	//cout << "The home branch BSB is : " << homeBranch.getBSB() << endl;
	//cout << "The home branch postcode is : " << homeBranch.getPost() << endl;
	//cout << "The home branch address is : " << homeBranch.getAddress() << endl;



	//BankBranch homeBranch(int BSBNo, int postcode, std::string address);


};

void SavingsAccount::enterAccountData()
{

	int number = 0;
	double bal = -1;
	double interest = -1;

	while (bal<1 || bal>10000)

	{

		cout << "Enter Account balance" << endl;

		bal = getDouble();

	};

	while (interest < 0 || number>15)

	{

		cout << "Enter Intrest rate" << endl;

		interest = getDouble();

	};


	acnumber = number;
	balance = bal;
	iRate = interest;
}