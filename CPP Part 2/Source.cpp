#include <iostream>
#include <string>

using namespace std;

struct BankAccount {
	int acnumber;
	double balance;
	std::string cname;
	std::string password;

};
///The bank account struct


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
///This get index function is used to take a specific account number and then find and return
///Its corresponding index on an array


int main()
{

	BankAccount USERID[10];

	///Create 10 accounts for the user
	///For Test Purposes Only
	while (true)

	{
		int number;
		double acbalance;
		std::string name;
		std::string password;
		///these vaiables are used to store the inputs from the user


		int origin = 0;
		int target = 0;
		int tAmount = 0;
		///initailises the variable used in the Transfer function

		int command;
		int i=0;

		cout << "Welcome User" << endl;;
		cout << "Select Function" << endl;;
		cout << "1 = Create New Account" << endl;;
		cout << "2 = Transfer" << endl;
		cout << "3 = Exit" << endl;
		cin >> command;
		///Rudementary menu driven inerface


		if (command == 3)
		{
			break;
			///Breaks the loop: exits the loop is the user wishes to

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
			///This is prompting the user for input and asigning the inputs to the variables declared above



			cout << USERID[i].balance << endl;


			USERID[i] = { number, acbalance, name, password };
			i = i + 1;
			///The inputs from the user are assigned to the ith place on the array

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
			/// Getting the account info from the user

			int targetActual = getIndex(USERID, target);
			int originActual = getIndex(USERID, origin);

			///appending the taget and origin account number to thier value on the array

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