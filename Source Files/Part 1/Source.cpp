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

int main()
{

	std::string placeholder;

	cout << "Enter your USERID" << endl;
	std::getline(std::cin, placeholder);
	cout << "Enter your password" << endl;
	std::getline(std::cin, placeholder);
	///Used a placeholder variable because username and password functionality hasn't been implemented yet

	while (true)

	{
		int command;
		cout << "Welcome User" << endl;;
		cout << "Select Function" << endl;;
		cout << "1 = Create New Account" << endl;;
		cout << "2 = Exit" << endl;
		cin >> command ;
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
			///Displaying the user input from the struct
		}
	}
	

	return 0;
}