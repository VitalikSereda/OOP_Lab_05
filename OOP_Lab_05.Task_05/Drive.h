#pragma once
#include <iostream>

using namespace std;

class Drive
{
private:
	int carNumber;
	string driverName;
public:
	Drive();
	Drive(int, string);

	int GetCarNumb();
	string GetDriverName();

	void SetCarNumb(int numb);
	void SetDriveName(string name);

	virtual int PriceOfDrive();

	friend ostream& operator<<(ostream& out, const Drive& obj);

	~Drive();
};