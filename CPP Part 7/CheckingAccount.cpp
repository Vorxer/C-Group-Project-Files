#include "CheckingAccount.h"




CheckingAccount::~CheckingAccount()
{
}


void CheckingAccount::displayAccount()
{
	cout << "The account number is : " << acnumber << endl;
	cout << "The current balance  is : " << balance << endl;
	cout << "The set monthly fee is : " << monthlyFee << endl;
	cout << "The number of checks allowed per month is " << numberChecks << endl;

	//int printBranch = homeBranch.BSBNo;
	//cout << "The home branch BSB is : " << homeBranch.getBSB() << endl;
	//cout << "The home branch postcode is : " << homeBranch.getPost() << endl;
	//cout << "The home branch address is : " << homeBranch.getAddress() << endl;



	//BankBranch homeBranch(int BSBNo, int postcode, std::string address);


};

double CheckingAccount::getFee()
{
	return monthlyFee;
}
int CheckingAccount::getChecks()
{
	return numberChecks;
}
