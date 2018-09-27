#include <iostream>
using namespace std;


class BankAccount
{
	// Access specifier 
private:
	int acnumber=0;
	double balance;
	const double iRate = 0.3;

public:

	void BankAccount::computeInterest(int years)
	{
		int months = years * 12;
		double startbalance;
		double interestEarned=0;
		for (int i = 1; i <= months; i++)
		{
			cout << "month number" << i << endl;
			startbalance = balance;
			interestEarned = ((startbalance*iRate) / 12);
			balance = startbalance + interestEarned;

			cout << "account balance " << balance << endl;

		}
	}


	int BankAccount::getAcNo()
	{
		return acnumber;
	}

	void BankAccount::enterAccountData()
	{

		int number=0;
		double bal=-1;
		cout << "hello" << endl;

		while (bal<1 || bal>10000)

		{

			cout << "Enter Account balance" << endl;

			cin >> bal;

		};

		while (number<1000 || number>9999)

		{
			cout << "Enter Account Number" << endl;

			cin >> number;

		}

		acnumber = number;
		balance = bal;

	}

};

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
		cin >> prompt;
		if (prompt == 0)
		{
			break;
		}
	}

	for (int i = 0; i <= loopcontrol; i++)
	{
		

		if (accounts[i].getAcNo() == 0)
		{
			break;
		}

		cout << "Information for account numnbber " << i + 1 << endl;
		//displayAccount function goes here

	}

	int years;
	cout << "Calculate interest for :" << endl;
	cin >> years;

	for (int i = 0; i <= loopcontrol; i++)
	{
		if (accounts[i].getAcNo() == 0)
		{
			break;
		}
		cout << "Interst Calculations for account number " << i + 1 << endl;
		accounts[i].computeInterest(years);

	}
};

//10:43