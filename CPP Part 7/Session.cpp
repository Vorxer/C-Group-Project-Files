#include <iostream>
#include <string>
#include <typeinfo>
#include "BankBranch.h"
#include "CheckingAccount.h"
using namespace std;

template <class T>
T produceReport(T title,T account){
	cout << title << endl;
	cout << "-------------------" << endl;
	cout << "Account Number =" << account.getNumber << endl;
	cout << "-------------------" << endl;
	cout << "Account Balance =" << account.getBalance << endl;
	cout << "-------------------" << endl;

	if (typeid(account) == typeid(class SavingsAccount))
	{
		cout << "EUREKA";
	}

	else if (typeid(account) == typeid(class CheckingAccount))
	{
		cout << "EUREKA AGAIN!!!";
	}

	else if (typeid(account) == typeid(class CheckingAccountWithInterest))
	{
		cout << "EUREKA AGAIN SE !!!";
	}

	return 0;
	//cout << "M =" << account.getBalance << endl;
	//cout << "-------------------" << endl;


}

class Test
{
public:
	Test(int idno, int value);
	int idno;
	double value;
};

void main()
{
	Test Lipsum(12, 13);
	//CheckingAccount Test(int 1234, double 9999,double 200,double 29, BankBranch(2424, 10100,"221B Baker St."));

}