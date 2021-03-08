//==========================================================
//
//  Title: Text file input - one token per read
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
    string line;
    string place;
    int losses;
    int year;
    int wins;
    int TC;
    int LC;
    double WINPERCENT;


    // Declare constants
    const string INPUT_FILE_NAME = "TigerRecords.txt";
    const int COLFMT1 = 8;
    const int COLFMT2 = 8;
    const int COLFMT3 = 7;
    const int COLFMT4 = 8;
    const int COLFMT5 = 15;

    // Format real numbers
    cout << setprecision(3) << fixed;

    // Show application header
    cout << "Welcome to Tiger Sales!"
        << endl;
    cout << "-----------------------------------------------"
        << endl << endl;

    // Attempt to open input file
    inFile.open(INPUT_FILE_NAME);
    if (!inFile.is_open())
        cout << "Error: unable to open file '"
        << INPUT_FILE_NAME << "'." << endl << endl;
    else
    {

        // Print read messsage
        cout << "Reading tokens from file '" << INPUT_FILE_NAME
            << "' ..." << endl << endl;

        // Read and echo header line
        getline(inFile, line);
        cout << setw(COLFMT1) << left << "Year"
            << setw(COLFMT2+2) << left << "Place"
            << setw(COLFMT3) << left << "Wins"
            << setw(COLFMT4+2) << right << "Losses"
            << setw(COLFMT5-4) << right << "Win %" << endl;

        // Loop to read from input file
        LC = 1;
        TC = 0;
        while (inFile.good())
        {
            inFile >> year;
            inFile >> place;
            inFile >> wins;
            inFile >> losses;
            WINPERCENT = (double)wins / (double)(wins + losses);
            cout << setw(COLFMT1) << left << year
                << setw(COLFMT2-20) << right << place
                << setw(COLFMT3+2) << right << wins
                << setw(COLFMT4+5) << right << losses
                << setw(COLFMT5-2) << right << WINPERCENT << endl;
            LC = LC + 1;
            TC = TC + 3;



            // Close input file
            inFile.close();
            cout << endl << LC << " line(s) "
                << " read from file '"
                << INPUT_FILE_NAME << "'." << endl << endl;

        }

        // Show application close
        cout << "End of Tiger Tales"
            << endl;

    }
}