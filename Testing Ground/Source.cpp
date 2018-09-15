#include <iostream>
#include <string>


using namespace std;

///This is a testing ground for code im unsure of

int getinput()
{
	int inputvalue;
	cin >> inputvalue;
	return inputvalue;
}

struct BankAccount 
{
	int acnumber;
	double balance;
	std::string cname;
	std::string password;

};


BankAccount incrementbalance(BankAccount temp, double increase)
{
	BankAccount outputvalue;
	outputvalue.acnumber = temp.acnumber;
	double tempbalance = temp.balance + increase;
	outputvalue.balance = tempbalance;
	outputvalue.cname = temp.cname;
	outputvalue.password = temp.password;

	return outputvalue;
}

BankAccount decreasebalance(BankAccount temp, double decrease)
{
	BankAccount outputvalue;
	outputvalue.acnumber = temp.acnumber;
	double tempbalance = temp.balance - decrease;
	outputvalue.balance = tempbalance;
	outputvalue.cname = temp.cname;
	outputvalue.password = temp.password;

	return outputvalue;
}

void exit()
{
	int exitvar;
	cin >> exitvar;
}

int getIndex(BankAccount *input, int target)
{
	cout << input;
	cout << target;
	int current = 0;
	int output = 11;
	int lenght = (sizeof(input) / sizeof(*input));
	cout << lenght;
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
	
	temp1=decreasebalance(temp1,400);

	cout << endl;
	cout << endl;
	cout << endl;

	cout << "AFTER DEDUCT FUNCTION" << endl;
	cout << "your name " << temp1.cname << endl;
	cout << "your password " << temp1.password << endl;
	cout << "your account number " << temp1.acnumber << endl;
	cout << "your account balance " << temp1.balance << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	///ADD TO THE TARGET ACCOUNT

	temp1 = incrementbalance(temp1, 800);

	cout << "AFTER DEDUCT FUNCTION" << endl;
	cout << "your name " << temp1.cname << endl;
	cout << "your password " << temp1.password << endl;
	cout << "your account number " << temp1.acnumber << endl;
	cout << "your account balance " << temp1.balance << endl;
	cout << endl;
	cout << endl;
	cout << endl;


	exit();
}
