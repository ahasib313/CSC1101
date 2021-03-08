//==========================================================
//
// Title:      Fever Foxes, v2
// Course:     CSC 1101
// Lab Number: 08
// Author:     Altaful Hasib
// Date:       2/10/2020
// Description:
//   Converting  fahrenheit to celcius 
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

  // Declare constants & variables
    const int col1 = 20;
    const int col2 = 20;
    const int col3 = 20;
    double F;
    double C;
    const char DEGREE_SYMBOL = 167;

  // Format real numbers
    cout << fixed << setprecision(2);

  // Show application header
    cout << "Welcome to Fever Foxes, v2" << endl << endl;
    cout << "------------------------------------" << endl << endl;

 // Prompt user to enter temperature in Fahrenheit from -60 to 120
    cout << "Enter a temperature in Fahrenheit between the range -60 and 120" << endl;
    cin >> F;

    // Calculate Fahrenheit to Celcius
    C = (F - 32) * 5 / 9;

  

  // Test whether a number is within range or not
    if (F >= -60 && F <= 120)
    {
        cout << setw(col1) << left << "Fahrenheit:" << setw(col2) << right << F << DEGREE_SYMBOL << "F" << endl;
        cout << setw(col1) << left << "Celcius:" << setw(col2) << right << C << DEGREE_SYMBOL << "C" << endl << endl;

    }
    
    else if (F < -60 || F > 120)
    {
        cout << "Error: The number for Fahrenheit " << F << " is outside of the range of -60 to 120." << endl << endl;
        cout << "End of Fever Foxes, v2" << endl;

    }




  // Show application close
    cout << "This is the end of the Fever Foxes, v2" << endl;

}
