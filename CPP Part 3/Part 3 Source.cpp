#include <iostream>
#include <string>

using namespace std;

struct BankAccount 
{

	int acnumber;
	double balance;
	std::string cname;
	std::string password;

};


struct Customer 
{
	int customerID;
	double balance;
	std::string cname;  
	std::string password;
	BankAccount USERID[10];	
};


Customer Customers[10];


///The bank account struct


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

inline BankAccount incrementbalance(BankAccount temp, double increase)
{
	BankAccount outputvalue;
	outputvalue.acnumber = temp.acnumber;
	double tempbalance = temp.balance + increase;
	outputvalue.balance = tempbalance;
	outputvalue.cname = temp.cname;
	outputvalue.password = temp.password;


	return outputvalue;
}

inline BankAccount decreasebalance(BankAccount temp1, double decrease)
{
	BankAccount outputvalue;
	outputvalue.acnumber = temp1.acnumber;
	double tempbalance = temp1.balance - decrease;
	cout << tempbalance << endl;
	outputvalue.balance = tempbalance;
	cout << outputvalue.balance << endl;
	outputvalue.cname = temp1.cname;
	outputvalue.password = temp1.password;

	return outputvalue;
}

///This get index function is used to take a specific account number and then find and return
///Its corresponding index on an array

int emptyvalue(BankAccount *evinput)
{
	for (int i = 0; i <= 9; i++)
	{
		if (evinput[i].acnumber == 0)
		{
			return i;
		}
	}

}
///This gets the last bank account value in the array




int main()
{
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

	///Create 10 accounts for the user
	///For Test Purposes Only
	while (true)

	{

		///these vaiables are used to store the inputs from the user


		int origin = 0;
		int target = 0;
		int tAmount = 0;
		///initailises the variable used in the Transfer function

		int command;
		int i = 0;

		cout << "Welcome User" << endl;;
		cout << "Select Function" << endl;;
		cout << "1 = Create New Account" << endl;;
		cout << "2 = Transfer" << endl;
		cout << "3 = Exit" << endl;
		cin >> command;
		///Rudementary menu driven inerface

		if (command == 4)
		{
			cout << "Index 1" << endl;
			cout << "your name " << USERID[0].cname << endl;
			cout << "your password " << USERID[0].password << endl;
			cout << "your account number " << USERID[0].acnumber << endl;
			cout << "your account balance " << USERID[0].balance << endl;

			cout << "Index 2" << endl;
			cout << "your name " << USERID[1].cname << endl;
			cout << "your password " << USERID[1].password << endl;
			cout << "your account number " << USERID[1].acnumber << endl;
			cout << "your account balance " << USERID[1].balance << endl;

		}


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
			while (number<1000 || number > 9999)
			{
				cout << "Invalid Input, Reenter number:";
				cin >> number;
				cout << endl;
			}
			cout << endl;
			cout << "enter your accoutnt balance:";
			while (acbalance<9999)
			{
				cout << "Invalid Input, account balance:";
				cin >> number;
				cout << endl;
			}
			cin >> acbalance;
			cout << endl;
			///This is prompting the user for input and asigning the inputs to the variables declared above

			i = emptyvalue(USERID);

			USERID[i].acnumber = number;
			USERID[i].balance = acbalance;
			USERID[i].cname = name;
			USERID[i].password = password;



			cout << "you have entered the fol. information ";
			cout << "your name " << USERID[i].cname << endl;
			cout << "your password " << USERID[i].password << endl;
			cout << "your account number " << USERID[i].acnumber << endl;
			cout << "your account balance " << USERID[i].balance << endl;
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

			cout << "origin: " << origin << ", target account: " << target << ", amount: " << tAmount << endl;

			int targetActual = getIndex(USERID, target);
			cout << "the value returned for taget is :" << targetActual << endl;
			int originActual = getIndex(USERID, origin);
			cout << "the value origin is for taget is :" << targetActual << endl;
			cout << targetActual << endl;


			///appending the taget and origin account number to thier value on the array


			///DEDUCT FROM THE ORIGIN ACCOUNT
			cout << "The decrease balance function has been called. The specified origin account is value is :" << originActual << endl;


			USERID[originActual] = decreasebalance(USERID[originActual], tAmount);

			///ADD TO THE TARGET ACCOUNT
			cout << "The increase balance function has been called. The specified targer account is value is :" << targetActual << endl;


			USERID[targetActual] = incrementbalance(USERID[targetActual], tAmount);

			cout << "Transferred " << tAmount << " From " << USERID[originActual].cname << " to " << USERID[targetActual].cname << endl;
			cout << "Transfer Complete!" << endl;
			cout << "New Target Account Balance" << USERID[targetActual].balance << endl;
			cout << "New Origin Account Balance" << USERID[originActual].balance << endl;

		}
	}
}