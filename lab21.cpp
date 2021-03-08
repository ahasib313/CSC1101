//==========================================================
//
//  Title: GPA Outputter
//  LAB NUMBER:21
//
//==========================================================
#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout"


//==========================================================
// PRINTDATA
//==========================================================

void printData(string name[], int age[], double GPA[])
{
	for (int i = 1; i < 4; i++)
	{
		cout << "\nPerson: " << i << endl;
		cout << "Name: " << name[i] << endl;
		cout << "Age: " << age[i] << endl;
		cout << "GPA: " << GPA[i] << endl<< endl;
	}
}

//==========================================================
// MAIN
//==========================================================

int main()
{

	//Variables
	string name[4];
	int age[4];
	double GPA[4];


	// Show application header
	cout << "Welcome to GPA Outputter" << endl;
	cout << "-----------------" << endl;

	for (int i = 1; i < 4; i++)
	{
		// Prompt for and get city to add
		cout << "\nEnter the name of person "<< i <<": ";
		cin >> name[i];
		cout << "Enter the age of person "<<i<<": ";
		cin >> age[i];
		cout << "Enter the GPA of person "<<i<<": ";
		cin >> GPA[i];
	}


	printData(name, age, GPA);

	//Application End
	cout << "-----------------------------" << endl;
	cout << "End of GPA Outputter" << endl;


}