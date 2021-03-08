//==========================================================
//
//  Title: Fruity Filers
//  Description:
//    This C++ console application uses validation loops to 
// to solve a Leibniz Formula
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

    // Declare constants & Variables
    double pi = 0;
    int NumTerms;
    const int numerator = 1;
    double denominator = 1;

    // Show application header
    cout << "Welcome to Fruity Fillers" << endl;
    cout << "---------------------------" << endl << endl;

    // Prompt user to input
    cout << "Enter the number of terms to approximate PI to (between 1 and " << endl;
    cout << "10,000, 99 to exit: " << endl;
    cin >> NumTerms;

    // Validation loop so number is between 1 and 10,000
    while (NumTerms < 1 || NumTerms >10000)
    {

        // Error
        cout << "Error: The number of terms must be betwwen 1 and 10,000." << endl;
        // Prompt user to input number again
        cout << "Enter the number of terms to approximate PI to (between 1 and " << endl;
        cout << "10,000, 99 to exit: " << endl;
        cin >> NumTerms;
    }

    //Sentinnel Loop for 99 to exist
    while (NumTerms != 99)
    {
        pi = 0;
        denominator = 1;
        for (int i = 1; i <= NumTerms; i++)
        {
            //Odd or even
            if (i % 2 == 0)
            {
                pi -= (numerator / denominator);
            }
            else
            {
                pi += (numerator / denominator);
            }
            denominator += 2;

        }



        //Output
        cout << "PI to " << NumTerms << " term(s) is " << fixed << setprecision(10) << 4 * pi << endl << endl;

        //Prompt one more time for exit 99  
        cout << "Enter the number of terms to approximate PI to (between 1 and " << endl;
        cout << "10,000, 99 to exit: " << endl;
        cin >> NumTerms;
        while (NumTerms < 1 || NumTerms >10000)
        {

            // Error
            cout << "Error: The number of terms must be betwwen 1 and 10,000." << endl;
            // Prompt user to input number again
            cout << "Enter the number of terms to approximate PI to (between 1 and " << endl;
            cout << "10,000, 99 to exit: " << endl;
            cin >> NumTerms;
        }

    }
    //Closing
    cout << "--------------------" << endl;
    cout << "End of Fruity Fillers" << endl;
}