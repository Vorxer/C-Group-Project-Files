#pragma once
#include <iostream>
#include <string>

using namespace std;
class BankBranch
{
protected:
	int BSBNo;
	int postcode;
	std::string address;

public:

	BankBranch::BankBranch() :BSBNo(0), postcode(0), address(""){};

	void BankBranch::reConstruct(int inputBSBNo, int inputpostcode, std::string inputaddress)
	{
	BSBNo = inputBSBNo;
	postcode = inputpostcode;
	address=inputaddress;
	};

	int getBSB();
	int getPost();
	string getAddress();
	
	~BankBranch();
};
