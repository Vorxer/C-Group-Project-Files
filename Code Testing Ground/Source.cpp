#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

template <class T,class U>
T produceReport(T title, U account)
{
	
	if (typeid(account) == typeid(class Test))
	{
		cout << "EUREKA";
	}

	else if (typeid(account) == typeid(class Test2))
	{
		cout << "EUREKA AGAIN!!!";
	}

	return 0;

}


class Test
{
public:
	Test(int idno, int value)
	{
		idno = 1;
		value = 2;
	}

	Test()
	{
		idno = 1;
		value = 2;
	}
	int idno;
	double value;
};

class Test2
{
public:
	int roflmao;
	Test Supremo;
	Test2(int roflmao, Test Supremo)
	{

	};
};

void main()
{
	Test Kongou(32, 45);
	Test2 Lipsum(12, Test::Test(12, 13));
	//CheckingAccount Test(int 1234, double 9999,double 200,double 29, BankBranch(2424, 10100,"221B Baker St."));

	produceReport(101, Lipsum);

	int exit = 0;
	cin>> exit;

}

