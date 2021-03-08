//==========================================================
//
//  Title: VIN Valets
//  Description:
//    This C++ console application demonstrates reading one 
// token at a time from a text file.
//
//==========================================================
#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout"

int main()
{

    // Declare variables
    ifstream inFile;
    string VIN;
    string Country;
    int Year;
    char countryCode;
    int line;
    int TC;
    int LC;
    char modelyear;

    string columnVin = "VIN";
    string columnYear = "Year";
    string columnCountry = "Country";


    // Declare constants
    const string INPUT_FILE_NAME = "VINs.txt";
    const int COLFMT1 = 20;
    const int COLFMT2 = 20;
    const int COLFMT3 = 20;



    // Show application header
    cout << "Welcome to VIN Valets!"
        << endl;
    cout << "-----------------------------------------------"
        << endl << endl;

    // Attempt to open input file
    inFile.open(INPUT_FILE_NAME);
    
    cout << "Reading lines from file '" << INPUT_FILE_NAME
        << "' ..." << endl << endl;


    // Loop to read from input file
    LC = 0;
    TC = 0;
    while (inFile.good())
    {
        if (LC > 0)
        {
            inFile >> VIN;
            countryCode = VIN.at(0);
            cout << setw(21) << VIN;
            switch (countryCode)
            {
            case '1':
            case '4':
            case '5':
                cout << setw(21) << "United States";
                break;
            case '2':
                cout << setw(21) << "Canada";
                break;
            case '3':
                cout << setw(21) << "Mexico";
                break;
            default:
                cout << "VIN '" << VIN << "' has an unknown country code."
                    << endl;
            }
            modelyear = VIN.at(9);
            switch (modelyear)
            {
            case 'B':
                cout << setw(21) << "2011";
                break;
            case 'C':
                cout << setw(21) << "2012";
                break;
            case 'D':
                cout << setw(21) << "2013";
                break;
            case 'E':
                cout << setw(21) << "2014";
                break;
            case 'F':
                cout << setw(21) << "2015";
                break;
            case 'G':
                cout << setw(21) << "2016";
                break;
            case 'H':
                cout << setw(21) << "2017";
                break;
            case 'I':
                cout << setw(21) << "2018";
                break;
            case 'K':
                cout << setw(21) << "2019";
                break;
            case 'L':
                cout << setw(21) << "2020";
                break;
            default:
                cout << "VIN '" << VIN << "' has an unknown model year." << endl;
                break;
            }
        }
        else
        {
            cout << left << setw(21) << columnVin
                << left << setw(COLFMT2) << columnCountry
                << left << setw(COLFMT3) << columnYear << endl;
        }




        // Close input file
        LC++;
    }
    cout << endl << LC << " line(s) "
            << " read from file '"
            << INPUT_FILE_NAME << "'." << endl << endl;



        // Show application close
        cout << "End of VIN Valets"
            << endl;

    
}
