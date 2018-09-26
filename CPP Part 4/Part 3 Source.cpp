#include <iostream>
#include <string>

using namespace std;
struct BankAccount
{

	int acnumber;
	double balance;
	std::string cname;
	std::string password;
	double iRate;

};



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



struct Customer
{
	int customerID;
	double balance;
	std::string cname;
	std::string password;
	BankAccount USERID[10];
};


Customer Customers[10];


BankAccount enterAccountData()
{
	int number = 0;
	double acbalance = 0;
	std::string name = "";
	std::string password = "";
	double interestRate = 0;

	cout << "new account creation" << endl;
	cin.ignore(1000, '\n');
	cout << "enter your name:";
	std::getline(std::cin, name);
	cout << endl;
	cout << "enter your password:";
	std::getline(std::cin, password);
	cout << endl;
	cout << "enter your accoutn number :";
	number = getInt();
	while (number<1000 || number > 9999)
	{
		cout << "Invalid Input, Reenter number:";
		number = getInt();
		cout << endl;
	}
	cout << endl;
	cout << "enter your accoutnt balance:";
	acbalance = getDouble();
	cout << "enter your accoutnt interest Rate:";
	interestRate = getDouble();
	while (interestRate <= 0.01 || interestRate > 15.0)
	{
		cout << "Invalid Input, Reenter number:";
		interestRate = getDouble();
		cout << endl;
	}
	cout << "LOOK " << interestRate << endl;

	cout << endl;
	BankAccount output;
	output.cname = name;
	output.password = password;
	output.acnumber = number;
	output.balance = acbalance;
	output.iRate = interestRate;
	
	return output;
}

void computeInterest(BankAccount input)
{

	double startbalance;
	double endbalance;
	double interestEarned;
	cout << "Enter the number off months: ";
	int months=getInt();
	cout << endl;
	for (int i = 1; i <= months; i++)
	{
		cout << "month number" << i << endl;
		startbalance = input.balance;
		interestEarned = ((startbalance*input.iRate) / 12);
		input.balance = startbalance + interestEarned;

		cout << "account balance " << input.balance << endl;

	}
}


void diplayAccount(BankAccount input)
{
	cout << "you have entered the fol. information ";
	cout << "your name " << input.cname << endl;
	cout << "your password " << input.password << endl;
	cout << "your account number " << input.acnumber << endl;
	cout << "your account balance " << input.balance << endl;
	cout << "your interest Rate " << input.iRate << endl;
}

int dataPersistency()
{
	return 0;
}

int main()
{
	Customer Current;
	BankAccount temp;
	
	int i = 0;

	while (true)
	{
		temp = enterAccountData();
		if (temp.acnumber == 0)
			break;
		else
		{
			Current.USERID[i] = temp;
			i++;
		}
	}

}