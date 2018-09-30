#include "SavingsAccount.h"




SavingsAccount::~SavingsAccount()
{
}


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