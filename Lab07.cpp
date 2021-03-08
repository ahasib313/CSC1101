//==========================================================
//
// Title:      BMI Application
// Course:     CSC 1101
// Lab Number: 07
// Author:     Altaful Hasib
// Date:       2/04/2020
// Description:
//   Finding BMI of a person 
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <math.h> // 
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

    // Declare constants
    const int col1 = 10;
    const int col2 = 10;

    // Declare variables
    string name;
    double weight;
    double height;
    double bmi;


    // Format real numbers
    cout << fixed << setprecision(4);

    // Show application header
    cout << "Welcome to BMI calculator" << endl << endl;
    cout << "-----------------------------" << endl << endl;

    // Prompt user to input values
    cout << "Enter a name" << endl;
    cin >> name;
    cout << endl;
    cout << "Enter weight of the person" << endl;
    cin >> weight;
    cout << endl;
    cout << "Enter height of the person" << endl;
    cin >> height;
    cout << endl;


    // Calculate BMI
    bmi = (weight) / (height * height);



    // Show outputs

    cout << setw(col1) << left << "Name:" << setw(col2) << right << name << endl;
    cout << setw(col1) << left << "Weight:" << setw(col2) << right << weight << " pounds" << endl;
    cout << setw(col1) << left << "Height:" << setw(col2) << right << height << " inches" << endl;
    cout << setw(col1) << left << "BMI:" << setw(col2) << right << bmi << endl << endl;

    // Show application close
    cout << "This is the end of the BMI calculator" << endl;

}
