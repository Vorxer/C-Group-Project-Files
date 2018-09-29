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
	BankBranch(int BSBNo,int postcode, std::string address);;
	int BankBranch::getBSB();
	int BankBranch::getPost();
	string BankBranch::getAddress();
	~BankBranch();
};

int BankBranch::getBSB()
{
	return BSBNo;
};
int BankBranch::getPost()
{
	return postcode;
};
string BankBranch::getAddress()
{
	return address;
};
