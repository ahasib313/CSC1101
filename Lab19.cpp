//==========================================================
//
// Title: lab 19
// Course: CSC 1101
// Lab Number: 19
// Author: Andrew Morales
// Date: 03/31/2020
// Description: This app turns a string into and enum var
// & turns an int into a string and outputs the results
//
//
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout

// Global Variables //------------------------------------------------------------------------------------

enum t_cars{Ford, GMC, Tesla, Honda};



// Function that turns string into Enum //----------------------------------------------------------------

 t_cars stringToEnum(string str) {

	 t_cars s;

	 if (str == "Ford")
		 s = Ford;
	 else if (str == "GMC") {
		 s = GMC;
	 }
	 else if (str == "Tesla") {
		 s = Tesla;
	 }
	 else if (str == "Honda") {
		 s = Honda;
	 }
	 else
		 cout << "Error" << endl;

	 return s;
}

 // Function that turns Int into String //----------------------------------------------------------------

string inToString(int index) {
	string str;
	switch (index) {
	case 0:
		str = "Ford";
		break;
	case 1:
		str = "GMC";
		break;
	case 2:
		str = "Tesla";
		break;
	case 3:
		str = "Honda";
		break;
	default:
		str = "Unknown";
		break;
	}
	return str;
}

// Main Function //----------------------------------------------------------------------------------------

int main() {

	//Declare Variables

	string input;
	int num;

	// App Header

	cout << "Welcome to my application!" << endl;
	cout << "===============================" << endl;
	cout << "" << endl;

	// Input type of Car + Validation loop

	do {
		cout << "Input a string for the car (Ford, GMC, Tesla, Honda):" << endl;
		cin >> input;
	}while (input != "Ford" && input != "GMC" && input != "Tesla" && input != "Honda");
		cout << "Your car occurs at index " << stringToEnum(input) << endl;

	// Input int + Validation Loop

	do {
		cout << "Input an int between 0-3" << endl;
		cin >> num;
	}while (num < 0 || num > 3);
	   cout << "The index input corresponds to " << inToString(num) << " in the enum" << endl;

	// End of App

	cout << "" << endl;
	cout << "End of my Application" << endl;

}
