//==========================================================
//
// Title:      Payroll Parrots
// Course:     CSC 1101
// Lab Number: 10
// Author:     Altaful Hasib
// Date:       2/17/2020
// Description:
//   Calculate pay and taxes on paycheck
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <math.h>
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()

{

	// Constants and variables
	const int col1 = 20;
	const int col2 = 20;
	char period;
	double hourlyrate;
	int hoursworked;
	double grosspay;
	double fedtax;
	double FICAtax;
	double statetax;
	double netpay;

	// Format real numbers
	cout << fixed << setprecision(2);

	//Header
	cout << "Welcome to Payroll Parrots." << endl;
	cout << "-------------------------------" << endl;


	cout << "Enter the paycheck period (A-Z): ";
	cin >> period;
	while (period < 'A' || period > 'Z')
	{
		cout << "Error: " << period << " is an invalid paycheck period." << endl;
		cout << "Enter the paycheck period (A-Z): ";
		cin >> period;
		cout << endl;
	}
	cout << "Enter the hourly rate (14-56): " << endl;
	cin >> hourlyrate;
	while (hourlyrate < 14 || hourlyrate > 56)
	{
		cout << "Error: " << "$" << hourlyrate << " is an invalid rate." << endl;
		cout << "Enter the hourly rate (14-56): " << endl;
		cin >> hourlyrate;
		cout << endl;
	}
	cout << "Enter the hours worked (60-100): " << endl;
	cin >> hoursworked;
	while (hoursworked < 60 || hoursworked > 100)
	{
		cout << "Error: " << hoursworked << " hours is an invalid amount of hours." << endl;
		cout << "Enter the hours worked (60-100): " << endl;
		cin >> hoursworked;
		cout << endl;
	}
	// Calculations
	grosspay = hourlyrate * hoursworked;
	fedtax = grosspay * 0.15;
	FICAtax = grosspay * 0.0765;
	statetax = grosspay * 0.0435;
	netpay = grosspay - fedtax - FICAtax - statetax;

	// Output
	cout << setw(col1) << left << "Paycheck Period: " << setw(col2) << right << period << endl;
	cout << setw(col1) << left << "Rate ($/hour): " << setw(col2) << right << hourlyrate << endl;
	cout << setw(col1) << left << "Hours worked: " << setw(col2) << right << hoursworked << endl;
	cout << setw(col1) << left << "Gross pay ($): " << setw(col2) << right << grosspay << endl;
	cout << setw(col1) << left << "Federal Tax ($): " << setw(col2) << right << fedtax << endl;
	cout << setw(col1) << left << "FICA Tax ($) : " << setw(col2) << right << FICAtax << endl;
	cout << setw(col1) << left << "State Tax ($): " << setw(col2) << right << statetax << endl;
	cout << setw(col1) << left << "Net Pay ($): " << setw(col2) << right << netpay << endl;

	cout << "----------------------------------" << endl;
	cout << "This is the end of Payroll Parrots" << endl;
	cout << "____________________________________" << endl;




}





