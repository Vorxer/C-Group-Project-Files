#include <iostream>
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
private:
	int acnumber = 0;
	double balance;
	const double iRate = 0.3;

public:

	void BankAccount::computeInterest(int years)
	{
		int months = years * 12;
		double startbalance;
		double interestEarned = 0;
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
	
	double BankAccount::getBalance()
	{
		return balance;
	}


};

class transaction
{
private:
	BankAccount origin;
	BankAccount target;
	const double originBalance = origin.getBalance();
	const double targetBalance = target.getBalance();

	double increasebalance(BankAccount account, double increase)
	{
		double output = (account.getBalance())+increase;
		return output;
	}

	double decreasebalance(BankAccount account, double decrease)
	{
		double output = (account.getBalance()) - decrease;
		return output;
	}

public:
	void transaction::Rollback()
	{
		origin.setBalance(originBalance);
		target.setBalance(targetBalance);
	}

	void transaction::changeAccounts()
	{
		BankAccount originholder = origin;
		BankAccount targetholder = target;
		//origin = target;
		//target = originholder;
	}

	void transaction::Transfer(BankAccount& origin, BankAccount& target,double amount)
	{
		double newOriginBalance = decreasebalance(origin, amount);
		double newTargetBalance = increasebalance(origin, amount);

		bool stop = false;

		if ((newOriginBalance) < 0)
		{
			stop = true;
			cout << "CANNOT MAKE TRANSER: Insufficient Funds" << endl;
		}

		if (newOriginBalance < 10)
		{
			cout << "!!! WARNING , this will cause the balnce of origin account to fall below $10.00 !!!" << endl;
		}

		if (newTargetBalance > 100000)
		{
			cout << "!!! WARNING , this will cause the balnce of traget account to rise above $100,000.00, which is highier than can be frederally insured !!!" << endl;
		}


		if (stop == false)
		{

			origin.setBalance(newOriginBalance);
			target.setBalance(newTargetBalance);

		}

		

	}



};

int main()

{
	///testing ground
};

