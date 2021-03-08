//==========================================================
//
//  Title: Enumerated Types
//  LAB NUMBER:19
//
//==========================================================
#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout"

//==========================================================
// GLOBAL TYPES AND VARIABLES
//==========================================================

enum t_cars { Ford, GMC, Tesla, Honda };


//==========================================================
// STRING TO ENUM
//==========================================================
t_cars stringToEnum(string str)
{


	t_cars s;


	if (str == "Ford")
		s = Ford;
	else if (str == "GMC")
	{
		s = GMC;
	}
	else if (str == "Tesla")
	{
		s = Tesla;
	}
	else if (str == "Honda")
	{
		s = Honda;
	}





	return s;
}


//==========================================================
// INT TO STRING
//==========================================================
string inToString(int index)
{
	string str;
	switch (index)
	{
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


//==========================================================
// INT MAIN
//==========================================================



int main()
{
	//Variables
	string i;
	int num;

	cout << "Welcome to Enumerated Types" << endl;
	cout << "---------------------------" << endl;



	cout << "Input a string for the car (Ford, GMC, Tesla, Honda)" << endl;
	cin >> i;
	while (i != "Ford" && i != "GMC" && i != "Tesla" && i != "Honda")
	{
		cout << "Input a string for the car (Ford, GMC, Tesla, Honda)" << endl;
		cin >> i;
	}
	cout << "Your car occurs at Index " << stringToEnum(i) << endl;

	cout << "Input an int between 0-3" << endl;
	cin >> num;
	while (num < 0 && num>3);
	{
		cout << "Input an int between 0-3" << endl;
		cin >> num;
	}
	cout << "The index input corresponds to " << inToString(num) << " in the enum" << endl;
}