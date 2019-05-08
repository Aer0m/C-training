#include "stdafx.h"
#include <iostream>
#include <clocale>
#include <string>

using namespace std;

class Property {

public:
	string name;
	double worth;

	Property(double x)
	{
		worth = x;
	}

	virtual ~Property() {}
	virtual double tax() = 0;

};


class Appartment : public Property {

public:

	
	Appartment(double x) : Property(x) {}
	double tax() {
		return 0.001*worth;
	}
	
	string neighborhood;
	int area;
	short rooms;

};

class Car : public Property {

public:

	Car(double x) : Property(x) {}
	double tax()
	{
		return 0.005*worth;
	}

	int horsepower;
	int maxspeed;
	short doors;
};

class CountryHouse : public Property {

public:

	CountryHouse(double x) : Property(x) {}
	double tax()
	{
		return 0.002*worth;
	}
	
	string location;
	int area;

};


int main()
{
	setlocale(LC_ALL, "rus");
	

	Property*a[6];

	a[0] = new Appartment(5000000);
	a[1] = new Appartment(7800000);
	a[2] = new Appartment(2100000);
	a[3] = new Car(1300000);
	a[4] = new Car(520000);
	a[5] = new CountryHouse(5500000);
	a[6] = new CountryHouse(350000);

	for (int i = 0; i < 7; i++)
	{
		cout << "Налог " << i + 1 << "-го объекта составляет: " << a[i]->tax() <<" у.е."<< endl;

		delete a[i];
	}

	

	return 0;
}
