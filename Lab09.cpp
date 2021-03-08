//==========================================================
//
// Title:      Longitude Lizards
// Course:     CSC 1101
// Lab Number: 06
// Author:     Altaful Hasib
// Date:       2/03/2020
// Description:
//   Calculate distance between two points
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

    // Declare constants and variables
    const int cw1 = 20;
    const int cw2 = 20;
    int percent;

    // App header
    cout << "This is the University Grade" << endl;
    cout << "------------------------------" << endl;


    // Show input
    cout << "Enter a valid percentage (0-100)" << endl;
    cin >> percent;
    cout << endl;

    // Conditions
    if (percent < 0 || percent > 100)
    {
        cout << percent <<" is an Invalid percentage." << endl;
    }
    else if (percent <= 59)
    {
        cout << left << setw(cw1) <<"Percentage:" << right << setw(cw2) << percent  <<  endl;
        cout << left << setw(cw1) << "Grade:" << right << setw(cw2) << "F" << endl;
    }
    else if (percent <= 69)
    {
        cout << left << setw(cw1) << "Percentage: " << right << setw(cw2) << percent << endl;
        cout << left << setw(cw1) << "Grade:" << right << setw(cw2) << "D" << endl;

    }
    else if (percent <= 79)
    {
        cout << left << setw(cw1) << "Percentage: " << right << setw(cw2) << percent << endl;
        cout << left << setw(cw1) << "Grade:" << right << setw(cw2) << "C" << endl;

    }
    else if (percent <= 89)
    {
        cout << left << setw(cw1) << "Percentage: " << right << setw(cw2) << percent << endl;
        cout << left << setw(cw1) << "Grade:" << right << setw(cw2) << "B" << endl;

    }
    else
    {
        cout << left << setw(cw1) << "Percentage: " << right << setw(cw2) << percent << endl;
        cout << left << setw(cw1) << "Grade:" << right << setw(cw2) << "A" << endl;

    }
    cout << "------------------------------------" << endl; 
    cout << "This is the end of University Grades" << endl;

}

