//==========================================================
//
// Title:      Breakfast Buddies
// Course:     CSC 1101
// Lab Number: 10
// Author:     Altaful Hasib
// Date:       2/17/2020
// Description:
//   Calculate price of granola bar
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
	const double Salestax = 0.06;
	const int barsperbox = 12;
	const double costperbox = 3.50;
	int Boxes;
	int Bars;
	int Discount;
	double SalesbeforeDis;
	double Discountamount;
	double SalesafterDis;
	double taxamount;
	double salestotal;

	// Format real numbers
	cout << fixed << setprecision(2);

	//Header
	cout << "Welcome to Breakfast Buddies." << endl;
	cout << "-------------------------------" << endl;


	cout << "Enter the number of boxes purchased (1-6): ";
	cin >> Boxes;
	while (Boxes < 1 || Boxes > 6)
	{
		cout << "Error: " << Boxes << " is an invalid number of boxes." << endl;
		cout << "Enter the number of boxes purchased (1-6): ";
		cin >> Boxes;
		cout << endl;
	}
	cout << "Enter a percentage discount (1-40): " << endl;
	cin >> Discount;
	while (Discount < 0 || Discount >40)
	{
		cout << "Error: " << Discount << "% " << "is an invalid percentage discount." << endl;
		cout << "Enter a percentage discount (1-40): " << endl;
		cin >> Discount;
		cout << endl;
	}

	// Calculations
	SalesbeforeDis = Boxes * costperbox;
	Bars = Boxes * barsperbox;
	Discountamount = (SalesbeforeDis * Discount / 100);
	SalesafterDis = SalesbeforeDis - Discountamount;
	taxamount = SalesafterDis * Salestax;
	salestotal = SalesafterDis + taxamount;

	// Output
	cout << setw(col1) << left << "Boxes: " << setw(col2) << right << Boxes << endl;
	cout << setw(col1) << left << "Bars: " << setw(col2) << right << Bars << endl;
	cout << setw(col1) << left << "Discount: " << setw(col2) << right << Discount << endl;
	cout << setw(col1) << left << "Sales before discount ($): " << setw(13) <<right << SalesbeforeDis << endl;
	cout << setw(col1) << left << "Discount amount: " << setw(col2) << right << Discountamount << endl;
	cout << setw(col1) << left << "Sales after discount ($): " << setw(14) << right << SalesafterDis << endl;
	cout << setw(col1) << left << "Tax rate: " << setw(col2) << right << Salestax << endl;
	cout << setw(col1) << left << "Tax amount ($): " << setw(col2) << right << taxamount << endl;
	cout << setw(col1) << left << "Sale total ($): " << setw(col2) << right << salestotal << endl;

	cout << "____________________________________" << endl; 
	cout << "This is the end of Breakfast Buddies" << endl;
	cout << "____________________________________" << endl;

}







	
