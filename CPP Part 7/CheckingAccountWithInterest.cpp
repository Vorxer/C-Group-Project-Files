#include "CheckingAccountWithInterest.h"

void CheckingAccountWithInterest::enterAccountData()
{

	int number = 0;
	double bal = -1;
	double interest = -1;

	while (bal<1 || bal>10000)

	{

		cout << "Enter Account balance" << endl;

		bal = CheckingAccount::getDouble();

	};

	while (interest < 0 || number>15)

	{

		cout << "Enter Intrest rate" << endl;

		interest = CheckingAccount::getDouble();

	};

	cout << "Enter Monthly Fee" << endl;
	monthlyFee = CheckingAccount::getInt();

	cout << "Enter Maximum allowed number of Checks" << endl;
	numberChecks = CheckingAccount::getInt();

	CheckingAccount::acnumber = number;
	CheckingAccount::balance = bal;
	SavingsAccount::iRate = interest;
}

void CheckingAccountWithInterest::displayAccount()
{
	cout << "The account number is : " << CheckingAccount::acnumber << endl;
	cout << "The current balance  is : " << CheckingAccount::balance << endl;
	cout << "This function is from the Checking Account With Interest class" << CheckingAccount::balance << endl;
	//int printBranch = homeBranch.BSBNo;
	//cout << "The home branch BSB is : " << homeBranch.getBSB() << endl;
	//cout << "The home branch postcode is : " << homeBranch.getPost() << endl;
	//cout << "The home branch address is : " << homeBranch.getAddress() << endl;



	//BankBranch homeBranch(int BSBNo, int postcode, std::string address);


};