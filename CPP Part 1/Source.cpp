#include <iostream>
#include <string>

using namespace std;

struct BankAccount {
	int acnumber;
	double balance;
	std::string cname;
	std::string password;

};


// std::string name;
/// std::cout << "What is your name? ";
/// getline(std::cin, name);
/// std::cout << "Hello, " << name << "!\n";

int main()
{

	std::string placeholder;

	cout << "Enter your USERID" << endl;
	std::getline(std::cin, placeholder);
	cout << "Enter your password" << endl;
	std::getline(std::cin, placeholder);

	while (true)

	{
		int command;
		cout << "Welcome User" << endl;;
		cout << "Select Function" << endl;;
		cout << "1 = Create New Account" << endl;;
		cout << "2 = Exit" << endl;
		cin >> command ;

		if (command == 2)
		{
			break;
		}

		if (command == 1){
			///std::getline(std::cin, name);
			int userid;
			int number;
			double acbalance;
			std::string acname="Lorem Ipsum Dolor Si Amet";
			std::string password;
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

			BankAccount temp1;
			temp1.acnumber = number;
			temp1.balance = acbalance;
			temp1.cname = acname;
			temp1.password = password;

			cout << "you have entered the fol. information ";
			cout << "your name " << temp1.cname << endl;
			cout << "your password " << temp1.password << endl;
			cout << "your account number " << temp1.acnumber << endl;
			cout << "your account balance " << temp1.balance << endl;
		}
	}
	


	
	///	cout << "\nDisplaying Information." << endl;
	///	cout << "Name: " << p1.name << endl;
	///	cout << "Age: " << p1.age << endl;
	///	cout << "Salary: " << p1.salary;  

	return 0;
}