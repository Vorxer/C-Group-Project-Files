#include "BankBranch.h"


BankBranch::BankBranch(int BSBNo, int postcode, std::string address)
{
};


BankBranch::~BankBranch()
{
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
