#pragma once
#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
#include "BloodData.h"

class Patient { //Stores patient info
	private:
		int patientID, age;
		BloodData bloodData;
	public:
		//Constructors
		Patient(); //Default contructor
		Patient(int, int, char, string); //Overload of the default constructor, takes arguments
		//Getters
		int getID();
		int getAge();
		//Functions
		void displayBlood(); //Prints out information on the patient's blood type
};

//Constructors
Patient::Patient() { //Default contructor
	patientID = 0;
	age = 0;
	bloodData = BloodData();
}
Patient::Patient(int id, int a, char rh, string bloodType) { //Overload of the default constructor, takes arguments
	patientID = id;
	age = a;
	bloodData = BloodData(rh, bloodType);
}
//Getters
int Patient::getID() {
	return patientID;
}
int Patient::getAge() {
	return age;
}
//Functions
void Patient::displayBlood() { //Prints out information on the patient's blood type
	cout << "Blood Type: " << bloodData.getBloodType() << bloodData.getRH() << endl;
}

#endif // !PATIENT_H
