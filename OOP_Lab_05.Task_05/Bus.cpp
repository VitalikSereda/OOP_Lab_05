#include "Bus.h"

Bus::Bus()
{
	pricePerOne = 0;
	minPeople = 0;
	currentPeople = 0;
}

Bus::Bus(int numb, string name, int price, int people, int peopleNow) : Drive(numb, name)
{
	pricePerOne = price;
	minPeople = people;
	currentPeople = peopleNow;
}

int Bus::getPricePerOne()
{
	return pricePerOne;
}

int Bus::getMinPeople()
{
	return minPeople;
}

int Bus::getCurrentPeople()
{
	return currentPeople;
}

void Bus::setcurrentPeople(int value)
{
	currentPeople = value;
}

void Bus::setPricePerOne(int value)
{
	if (value < 0)
	{
		throw ("incorrect value of pricePerOne ");
	}
	pricePerOne = value;
}

void Bus::setMinPeople(int value)
{
	if (value < 0)
	{
		throw ("incorrect value of people number");
	}
	minPeople = value;
}

int Bus::PriceOfDrive()
{
	if (currentPeople < minPeople)
	{
		return 0;
	}
	return pricePerOne * currentPeople;
}

Bus::~Bus()
{
}
