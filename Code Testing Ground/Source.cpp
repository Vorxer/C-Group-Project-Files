#include <iostream>
using namespace std;

class BankAccount
{
	// Access specifier 
private:
	int acnumber;
	double balance;
	const double iRate = 0.3;

public:
	int getInt();
	double getDouble();
	double input(int);
	void enterAccountData();
	void displayAccount();
	int getAcNo();
	void computeInterest(int);



};
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
void BankAccount::computeInterest(int years)
{
	int months = years * 12;
	double startbalance;
	double interestEarned = 0;
	for (int i = 1; i <= months; i++)
	{
		startbalance = balance;
		interestEarned = ((startbalance*iRate) / 12);
		balance = startbalance + interestEarned;
		cout << "balance at the end of month" << i << "  " << this->balance << endl;

	};

};






void BankAccount::enterAccountData()
{

	int number = 0;
	double bal = -1;
	cout << "hello" << endl;




	while (number<1000 || number>9999)

	{
		cout << "Enter Account Number" << endl;

		number = getInt();



	};

	while (bal<1 || bal>10000)

	{

		cout << "Enter Account balance" << endl;

		bal = getDouble();



	};


	acnumber = number;
	balance = bal;

}
void BankAccount::displayAccount()
{
	cout << "The Account number is " << acnumber << endl;
	cout << "The Account balance is " << balance << endl;
};

int BankAccount::getAcNo()
{
	return acnumber;
}

int main()

{


	const int arraysize = 10;
	const int loopcontrol = arraysize - 1;
	BankAccount accounts[arraysize];
	int prompt;

	for (int i = 0; i <= loopcontrol; i++)
	{
		accounts[i].enterAccountData();
		cout << "Do you wish to continue? 1=yes 0=no" << endl;
		prompt = accounts[i].getInt();
		if (prompt == 0)
		{
			break;
		}
	}

	//for (int i = 0; i <= loopcontrol; i++)
	//{
	//cout << "Information for account number " << i + 1 << endl;
	//accounts[i].displayAccount();



	for (int i = 0; i <= loopcontrol; i++)
	{
		int years;
		cout << "Information for account number " << i + 1 << endl;
		accounts[i].displayAccount();
		cout << "Calculate interest for :" << endl;
		years = accounts[i].getInt();


		for (int i = 0; i <= loopcontrol; i++)
		{
			if (accounts[i].getAcNo() == 0)
			{
				break;
			}

			cout << "Interest Calculations for account number " << i + 1 << endl;
			accounts[i].computeInterest(years);


		};





		return 0;
		int ast;
		cin >> ast;
	};


};