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
	BankAccount p1;
	char pass1[];
	char temp[];

	if (pass1 == temp)
	{
		cout << "ja";
	}
	cout << "Enter Full name: ";
	getline(std:: cin, p1.cname);
	cout << "Enter Password: ";
	getline(std::cin, p1.password);
	cout << "Enter balance: ";
	cin >> p1.balance;

///	cout << "\nDisplaying Information." << endl;
///	cout << "Name: " << p1.name << endl;
///	cout << "Age: " << p1.age << endl;
///	cout << "Salary: " << p1.salary;  

	return 0;
}