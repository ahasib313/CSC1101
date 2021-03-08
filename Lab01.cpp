//==========================================================
//
// Title:      Lab 1 
// Course:     CSC 1101
// Lab Number: 1
// Author:     Altaful Hasib 
// Date:       01/14/2020
// Description:
//   Calculate total and average snofall
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
	int month1 = 2; 
	int month2 = 6;	
	int month3 = 5;
	double total; 
	double average; 
	string name;
	total = month1 + month2 + month3;
	average = total / 3;
	cout << "Enter your Name :";
	cin >> name;
	cout << "Snowfall amounts" << endl;  
	cout << "Month 1 (inches):       " << month1 << endl;
	cout << "Month 2 (inches):       " << month2 << endl;
	cout << "Month 3 (inches):       " << month3 << endl;
	cout << "Total (inches):         " << total << endl; 
	cout << "Average (inches/month): " << average << endl;
	cout << "Press any key to exit ..." << endl; _getch();
	// Write to screen 
	cout << "Hello World!" << endl;  
	cout << "Just doing my job" << endl;
}



