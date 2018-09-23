#include <iostream>
#include <string>

using namespace std;

struct BankAccount {
	int acnumber;
	double balance;
	std::string cname;
	std::string password;

};
///This is the bank account struct exactly as specified in the Assignemt Document

inline int getIndex(BankAccount *input, int target)
{
	cout << "get index function called" << endl;
	cout << "specified target=" << target << endl;
	int current = 0;
	int output;
	while (current<10)
	{
		cout << "the current number bieng checked is: " << input[current].acnumber << endl;
		if ((input[current].acnumber) == target)
		{
			cout << "match found" << endl;
			output = current;
			break;
		}
		current = current + 1;
	}
	cout << "the value returned from getIndex is :" << current << endl;
	return current;
}

int main()
{

	std::string placeholder;

	cout << "Enter your USERID" << endl;
	std::getline(std::cin, placeholder);
	cout << "Enter your password" << endl;
	std::getline(std::cin, placeholder);
	///Used a placeholder variable because username and password functionality hasn't been implemented yet


	int number = 0;
	double acbalance = 0;
	std::string name = "";
	std::string password = "";

	BankAccount USERID[10];
	USERID[0] = { number, acbalance, name, password };
	USERID[1] = { number, acbalance, name, password };
	USERID[2] = { number, acbalance, name, password };
	USERID[3] = { number, acbalance, name, password };
	USERID[4] = { number, acbalance, name, password };
	USERID[5] = { number, acbalance, name, password };
	USERID[6] = { number, acbalance, name, password };
	USERID[7] = { number, acbalance, name, password };
	USERID[8] = { number, acbalance, name, password };
	USERID[9] = { number, acbalance, name, password };

	while (true)

	{
		
		int command;
		int i = 0;
		cout << "Welcome User" << endl;;
		cout << "Select Function" << endl;;
		cout << "1 = Create New Account" << endl;;
		cout << "2 = Exit" << endl;
		cout << "3 = accountFunctionality" << endl;
		cin >> command;

		///Rudementary menu driven inerface

		if (command == 2)
		{
			break;
			///Breaks the loop: exits the loop is the user wishes to
		}

		if (command == 1){
			///std::getline(std::cin, name);
			int number;
			double acbalance;
			std::string acname;
			std::string password;
			///these vaiables are used to store the inputs from the user


			cout << "new account creation" << endl;
			cin.ignore(1000, '\n');
			cout << "enter your name:";
			std::getline(std::cin, acname);
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

			BankAccount temp1;
			temp1.acnumber = number;
			temp1.balance = acbalance;
			temp1.cname = acname;
			temp1.password = password;
			///Here the inputs from the user are assigned to a Bank account sruct

			cout << "you have entered the fol. information ";
			cout << "your name " << temp1.cname << endl;
			cout << "your password " << temp1.password << endl;
			cout << "your account number " << temp1.acnumber << endl;
			cout << "your account balance " << temp1.balance << endl;

			USERID[i].acnumber = number;
			USERID[i].balance = acbalance;
			USERID[i].cname = name;
			USERID[i].password = password;
			i = i + 1;
			///Displaying the user input from the struct
		}

		if (command == 4)
		{
			int functAccount;
			 std::string functName;

			cout << "Enter your account Number" << endl;
			cin >> functAccount;
			cout << "Enter your name" << endl;
			std::getline(std::cin, placeholder);

			BankAccount WorkingAccount = USERID[getIndex(USERID, functAccount)];
			cout << "your account balance " << WorkingAccount.balance << endl;

		}
	}


	return 0;
}