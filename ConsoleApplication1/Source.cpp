#include <iostream>

using namespace std;


int getinput()
{
	int inputvalue;
	cin >> inputvalue;
	return inputvalue;
}

class pilot
{
	int age;
};

class Fighter
{
	int Topspeed;
};

class CV {
private:
	//std::string Name;
	//std::string CVClass;
	//std::string Operator;
	//std::string country;
	//std::string Ldown;
	//std::string Launched;
	//std::string Status;
	bool incommission;
	double lenght;
	double beam;
	double draft;
	double installedPower;
	double speed;
	double range;
	Fighter PrimaryAttack;
	//double complementOfficers;
	//double complementEnlisted;
	//double armourBelt;
	//double armourDeck;
	//double aircraftMax;
	//double aircraftStandard;

public:
	void getInfo()
	{
		cout << "Lorem Ipsum Dolor Si amet";
	}

	float function2()
	{
		cout << "";
	}

	CV(double incommission, double lenght, double beam, double draft, double installedPower, double speed, double range);
	~CV();

	double getlenght()
	{
		return lenght;
	}

	double getbeam()
	{
		return beam;
	}

	double getdraft()
	{
		return draft;
	}

	double getinstalledPower()
	{
		return installedPower;
	}

	double getrange()
	{
		return range;
	}


	double getspeed()
	{
		return speed;
	}
		// Member functions declaration
	
};

CV::CV(double incommission,double lenght, double beam, double draft, double installedPower, double speed, double range)
{
	this->incommission = incommission;
	this -> lenght = lenght;
	this -> beam = beam;
	this -> draft = draft;
	this -> installedPower = installedPower;
	this -> speed = speed;
	this -> range = range;
}

CV::~CV()
{
	cout << "vessel has sunk" << endl;
}

class Test
{
private:
	int data1;
	float data2;

public:
	void function1()
	{
		data1 = 2;
	}

	float function2()
	{
		data2 = 3.5;
		return data2;
	}
};

void wait()
{
	int wait;
	cin >> wait;
}

int main()
{
	//cout << "Enter the CV Number" ;
	{
		CV Ranger(0, 222.5, 33.4, 6.8, 53500, 39.3, 10000);

		cout << "USS Ranger lenght: " << Ranger.getlenght() << " meters, beam: " << Ranger.getbeam() << " meters ,draft: " << Ranger.getdraft() << " meters, " << endl <<  "Installed Power: " << Ranger.getinstalledPower() << " shaft horse power  , speed: " << Ranger.getspeed() << " knots range: " << Ranger.getrange() << " nautcal Miles" <<endl ;
	}
	wait();

}



