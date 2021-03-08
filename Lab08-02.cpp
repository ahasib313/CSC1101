//==========================================================
//
// Title:      Character Koalas
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
    string s1;
    int length;


    // Format real numbers
    cout << fixed << setprecision(2);

    // Show application header
    cout << "Welcome to Character Koalas" << endl << endl;
    cout << "------------------------------------" << endl << endl;

    // Prompt user to enter string with at least 10 characters
    cout << "Enter a string with at least ten characters" << endl;
    getline(cin, s1);
    cout << endl;




    // Test whether the string has 10 characters
    if (s1.size() < 10) 
    {
        cout << "Error: The string " << s1 << " has less than 10 characters." << endl;

    }

    else 
    {
     // Testing the chaarcters
        length = s1.size();

    // Ouput key
        cout << "Output Key : zero - false; non-zero-true" << endl;
        cout << endl;

    // Output as follows
        cout << setw(col1) << left << "String:" << setw(col2) << right << s1 << endl;
        cout << setw(col1) << left << "Length:" << setw(col2) << right << length << endl;
        cout << endl;

        cout << setw(col1) << left << "Character @ Index 2:" << setw(col2) << right << (s1.at(2)) << endl;
        cout << setw(col1) << left << "-Uppper?" << setw(col2) << right << isupper(s1.at(2)) << endl;
        cout << setw(col1) << left << "-Digit?" << setw(col2) << right << isdigit(s1.at(2)) << endl;
        cout << setw(col1) << left << "-Punct?" << setw(col2) << right << ispunct(s1.at(2)) << endl;
        cout << endl;

        cout << setw(col1) << left << "Character @ Index 4:" << setw(col2) << right << (s1.at(4)) << endl;
        cout << setw(col1) << left << "-Uppper?" << setw(col2) << right << isupper(s1.at(4)) << endl;
        cout << setw(col1) << left << "-Digit?" << setw(col2) << right << isdigit(s1.at(4)) << endl;
        cout << setw(col1) << left << "-Punct?" << setw(col2) << right << ispunct(s1.at(4)) << endl;
        cout << endl;

        cout << setw(col1) << left << "Character @ Index 6:" << setw(col2) << right << (s1.at(6)) << endl;
        cout << setw(col1) << left << "-Uppper?" << setw(col2) << right << isupper(s1.at(6)) << endl;
        cout << setw(col1) << left << "-Digit?" << setw(col2) << right << isdigit(s1.at(6)) << endl;
        cout << setw(col1) << left << "-Punct?" << setw(col2) << right << ispunct(s1.at(6)) << endl;
        cout << endl;

        cout << setw(col1) << left << "Character @ Index 8:" << setw(col2) << right << (s1.at(8)) << endl;
        cout << setw(col1) << left << "-Uppper?" << setw(col2) << right << isupper(s1.at(8)) << endl;
        cout << setw(col1) << left << "-Digit?" << setw(col2) << right << isdigit(s1.at(8)) << endl;
        cout << setw(col1) << left << "-Punct?" << setw(col2) << right << ispunct(s1.at(8)) << endl;
        cout << endl;

    }




    // Show application close
    cout << "This is the end of the Character Koalas" << endl;

}
