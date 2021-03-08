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
    int N;
    char C;

    





    cout << "Enter an integer between 10 and 20: " << endl;
    cin >> N;


    while (N < 10 || N>20)
    {
        cout << "Error: Input an integer betwen 10 and 20: " << endl;


        cout << "Enter an integer between 10 and 20: " << endl;
        cin >> N;
    }

    cout << "Enter a char from set (@,#,$,%,&): " << endl;
    cin >> C;
    while (C != '@' && C != '#' && C != '$' && C != '%' && C != '&')
    {
        cout << "Error: Input a char from set (@,#,$,%,&): " << endl;
        cout << "Enter a char from set (@,#,$,%,&): " << endl;
        cin >> C;
    }
    
    for (int i = 1; i <= N; i = i + 1)
        cout << C;
    cout << endl;
    for (int i = 1; i <= N - 2; i = i + 1)
        cout << left << setw((double)N - 1) << C << right << C << endl;
        
        for (int i = 1; i <= N; i=i+1)
            cout<< C;
        
    
}
