#include <iostream>
#include "Bus.h"
#include "Taxi.h"

#define MAXN 3

using namespace std;

void sort(Drive** drive);
void printInf(Drive** drive);
int getSumPrice(Drive** obj);

int main()
{
	Drive* drive[MAXN];
	drive[0] = new Taxi(1452, "Maxym", 25, 6, 7);
	drive[1] = new Bus(9986, "Petro", 12, 7, 10);
	drive[2] = new Taxi(6547, "Danylo", 30, 5, 4);
	printInf(drive);
	cout << "\nSort inf\n";
	sort(drive);
	printInf(drive);
	cout << "The most profitable drive is: " << *drive[MAXN - 1] << endl;;
	cout << "Sum price is: " << getSumPrice(drive);
	for (int i = 0; i < MAXN; i++)
	{
		delete drive[i];
	}
}

int getSumPrice(Drive** obj)
{
	int sum = 0;
	for (int i = 0; i < MAXN; i++)
	{
		sum += obj[i]->PriceOfDrive();
	}
	return sum;
}

void printInf(Drive** drive)
{
	for (int i = 0; i < MAXN; i++)
	{
		cout << *drive[i] << ", Price: " << drive[i]->PriceOfDrive() << endl;
	}
}

void sort(Drive** drive)
{
	for (int i = 0; i < MAXN - 1; ++i)
	{
		int min = i;
		for (int j = i + 1; j < MAXN; ++j)
		{
			if (drive[j]->PriceOfDrive() < drive[min]->PriceOfDrive())
				min = j;
		}
		swap(drive[i], drive[min]);
	}
}