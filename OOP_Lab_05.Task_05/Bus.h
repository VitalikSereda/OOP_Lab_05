#pragma once
#include "Drive.h"

class Bus : public Drive
{
private:
	int pricePerOne;
	int minPeople;
	int currentPeople;
public:
	Bus();
	Bus(int, string, int, int, int);

	int getPricePerOne();
	int getMinPeople();
	int getCurrentPeople();

	void setcurrentPeople(int value);
	void setPricePerOne(int value);
	void setMinPeople(int value);

	//n - number of people
	int PriceOfDrive() override;

	~Bus();
};

