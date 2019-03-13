#pragma once
#ifndef BLOODDATA_H
#define BLOODDATA_H

#include <string>

using namespace std;

class BloodData { //Tracks blood type and the rh factor
	private:
		char rhFactor;
		string bloodType;
	public:
		//Constructors
		BloodData(); //Default contructor
		BloodData(char, string); //Overload of the default contructor, takes arguments
		//Getters
		char getRH();
		string getBloodType();
};

BloodData::BloodData() { //Default constructor
	rhFactor = '+';
	bloodType = "O";
}

BloodData::BloodData(char rh, string bt) { //Overload of the default contructor, takes arguments
	rhFactor = rh;
	bloodType = bt;
}

char BloodData::getRH() {
	return rhFactor;
}

string BloodData::getBloodType() {
	return bloodType;
}

#endif // !BLOODDATA_H
