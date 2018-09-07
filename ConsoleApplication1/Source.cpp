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
	std::string pass1("Panzer kampfwagen");
	std::string temp("Panzer kampfwagen");

	int var = pass1.compare(temp);
	cout << var;
	if (var==0)
	{
		cout << "ja";

	}
	

	///std::getline(std::cin, name);
	int userid;
	int number;
	double acbalance;
	std::string name;
	std::string password;
	cout << "new account creation" << endl;
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

	BankAccount temp1;
	temp1.acnumber=number;
	temp1.balance=acbalance;
	temp1.cname=name;
	temp1.password=password;

	cout << "you have entered the fol. information ";
	cout << "your name " << temp1.cname << endl;
	cout << "your password " << temp1.password << endl;
	cout << "your account number " << temp1.acnumber << endl;
	cout << "your account balance " << temp1.balance << endl;
	cin >> number;

	


	
	///	cout << "\nDisplaying Information." << endl;
	///	cout << "Name: " << p1.name << endl;
	///	cout << "Age: " << p1.age << endl;
	///	cout << "Salary: " << p1.salary;  

	return 0;
}