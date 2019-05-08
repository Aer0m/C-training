#include <iostream>
#include "stdafx.h"
#include <string>


class Property {
	
	public:
		string name;
		int worth;

		void account()
		{
			worth / 1000;

		}



};


class Appartment: public Property {

	public:
	
		string neighborhood;
		int area;
		short rooms;

		

};

class Car : public Property {

	public: 
	
		int horsepower;
		int maxspeed;
		short doors;
};

class Countryhouse : public Property {

	public:

		string location;
		int area;
		
};


int main()
{
    return 0;
}
