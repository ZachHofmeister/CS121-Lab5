/*
	Zach Hofmeister		3/4/19
	Lab 5 - Patient Info
	Uses 2 classes, BloodData and Patient, to organize patient hospital info. Demonstrates knowledge of composition and header files.

*/

#include "pch.h"
#include <iostream>
#include "Patient.h"

int main() {
	Patient Timmy;
	cout << "Patient ID: " << Timmy.getID() << endl;
	cout << "Patient Age: " << Timmy.getAge() << endl;
	Timmy.displayBlood();

	Patient Spike(1337, 19, '-', "AB");
	cout << "Patient ID: " << Spike.getID() << endl;
	cout << "Patient Age: " << Spike.getAge() << endl;
	Spike.displayBlood();

	return 0;
}

/*
SAMPLE OUTPUT
Patient ID: 0
Patient Age: 0
Blood Type: O+
Patient ID: 1337
Patient Age: 19
Blood Type: AB-

Press any key to close this window . . .
*/