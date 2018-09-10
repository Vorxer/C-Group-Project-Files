#include <iostream>
#include <string>

using namespace std;

int getinput()
{
	int inputvalue;
	cin >> inputvalue;
	return inputvalue;
}

struct BankAccount {
	int acnumber;
	double balance;
	std::string cname;
	std::string password;

};

void transfer(int destinatoin, int target, int amount)
{

}

int getIndex(BankAccount *input, int target)
{
	int current = 0;
	int output = 11;
	int lenght = (sizeof(input) / sizeof(*input));
	while (current<lenght)
	{
		if ((input[current].acnumber) == target)
		{
			output = current;
			break;
		}
	}
	return current;
}

int main()
{

	BankAccount USERID[10];

	///Create 10 accounts for the user
	///For Test Purposes Only
	while (true)

	{

		int userid;
		int number;
		double acbalance;
		std::string name;
		std::string password;

		int origin = 0;
		int target = 0;
		int tAmount = 0;

		int command;
		int i=0;

		cout << "Welcome User" << endl;;
		cout << "Select Function" << endl;;
		cout << "1 = Create New Account" << endl;;
		cout << "2 = Transfer" << endl;
		cout << "3 = Exit" << endl;
		cin >> command;

		if (command == 3)
		{
			break;
		}

		if (command == 1)
		{

			cout << "new account creation" << endl;
			cin.ignore(1000, '\n');
			cout << "enter your name:";
			std::getline(std::cin, name);
			cout << endl;
			cout << "enter your password:";
			std::getline(std::cin, password);
			cout << endl;
			cout << "enter your accoutn number :";
			cin >> number;
			cout << endl;
			cout << "enter your accoutnt balance:";
			cin >> acbalance;
			cout << endl;


			cout << USERID[i].balance << endl;
			cout << USERID[i].balance << endl;

			USERID[i] = { number, acbalance, name, password };
			i = i + 1;

		}

		if (command == 2)
		{
			///TRANSFER FUNCTION


			cout << "Enter the Origin Account";
			cin >> origin;
			cout << "Enter the Target Account";
			cin >> target;
			cout << "Transfer amount";
			cin >> tAmount;

			int targetActual = getIndex(USERID, target);
			int originActual = getIndex(USERID, origin);

			double balanceholder = 0;
			double newbalance = 0;

			///DEDUCT FROM THE ORIGIN ACCOUNT
			balanceholder = USERID[originActual].balance;
			newbalance = balanceholder - tAmount;
			USERID[originActual].balance = newbalance;

			///ADD TO THE TARGET ACCOUNT
			balanceholder = USERID[targetActual].balance;
			newbalance = balanceholder + tAmount;
			USERID[targetActual].balance = newbalance;

			cout << "Transfer Complete!" << endl;
			cout << "New Target Account Balance" << USERID[targetActual].balance << endl;
			cout << "New Origin Account Balance" << USERID[originActual].balance << endl;

		}
	}
}