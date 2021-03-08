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

    // Declare constants
    const int cw1 = 20;
    const int cw2 = 20;

    // Declare variables
    double x1;
    double x2;
    double y1;
    double y2;
    double distance;



    // Format real numbers
    cout << fixed << setprecision(1);

    // Show application header
    cout << "Welcome to Longitude Lizards, distance calculator" << endl << endl;
    cout << "----------------------------" << endl << endl;

    // Prompt user to input values
    cout << "Enter a x1 coordinate" << endl;
    cin >> x1;
    cout << "Enter a y1 coordinate" << endl;
    cin >> y1;
    cout << "Enter a x2 coordinate" << endl;
    cin >> x2;
    cout << "Enter a y2 coordinate" << endl;
    cin >> y2;

    // Calculate distance
    // Distance between two points
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Show outputs
    cout << setw(20) << left << "x1:" << setw(20) << right << x1 << endl << endl;
    cout << setw(20) << left << "y1:" << setw(20) << right << y1 << endl << endl;
    cout << setw(20) << left << "x2:" << setw(20) << right << x2 << endl << endl;
    cout << setw(20) << left << "y2:" << setw(20) << right << y2 << endl << endl;
    cout << setw(20) << left << "Distance:" << setw(20) << right << distance << " meters" << endl;
    

    // Show application closer
    cout << "This is the end of Longitude Lizards" << endl << endl;


}
