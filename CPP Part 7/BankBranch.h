#pragma once
#include <iostream>
#include <string>

using namespace std;
class BankBranch
{
public:
	int BSBNo;
	int postcode;
	std::string address;

	BankBranch(int inputBSBNo = 0, int inputpostcode = 0, std::string inputaddress = "")
	{
		BSBNo = inputBSBNo;
		postcode = inputpostcode;
		address = inputaddress;
	};

	void BankBranch::reConstruct(int inputBSBNo=0, int inputpostcode=0, std::string inputaddress="")
	{
	BSBNo = inputBSBNo;
	postcode = inputpostcode;
	address=inputaddress;
	};

	int getBSB();
	int getPost();
	string getAddress();
};
