======================== =
//
// Title:      University Grade
// Course:     CSC 1101
// Lab Number: 09
// Author:     Altaful Hasib
// Date:       2/11/2020
// Description:
// Converting University grade percentages to letter grades   
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
    int grade;



    // Show application header
    cout << "Welcome to University Grades" << endl << endl;
    cout << "------------------------------------" << endl << endl;

    // Prompt user to enter grade percentage from 0-100
    cout << "Enter a grade percentage (0-100)" << endl;
    cin >> grade;
    cout << endl;




    // Test whether the grade percentage inputted is between 0-100
    if (grade < 0 || grade > 100)
    {
        cout << "Invalid" << endl;

    }
   

  // Show application close
    cout << "This is the end of the University Grades" << endl;

}
