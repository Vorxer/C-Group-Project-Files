#include <iostream>

using namespace std;

int getinput()
{
	int inputvalue;
	cin >> inputvalue;
	return inputvalue;
}

int a = 1;
int b = 1;
int c = 1;

int main()
{
	if (a == 1 || b == 0 && c == 1)
	{
		cout << "Himasha and Yoonus Win";
	}

	a = getinput();

	return 0;

}