#include "CheckingAccount.h"


void CheckingAccount::enterAccountData()
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

		cout << "Enter Account balance" << endl;

		number = getDouble();

	};

	

	cout << "Enter Monthly Fee" << endl;
	monthlyFee = getInt();
	
	cout << "Enter Maximum allowed number of Checks" << endl;
	numberChecks= getInt();

	acnumber = number;
	balance = bal;

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
