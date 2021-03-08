//==========================================================
//
//  Title: Text Recorder
//  Description:
//    This C++ console application analyzes text and counts digits, upper case, lower case.
//
//==========================================================
#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout"

void Count(string str)
{

    // Show application header
    cout << "Welcome to Text Recorder!"
        << endl;
    cout << "-----------------------------------------------" << endl << endl;

    int upper = 0, lower = 0, digits = 0, spaces = 0, words = 0, sentences = 0; int length = str.length();
    const int COLFMT1 = 20;
    const int COLFMT2 = 20;
    for(int i=0;i<str.length();i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;

        else if (str[i] == ' ')
            spaces++;
        
        else if (str[i] == '.' || str[i]=='!')
        sentences++;
        words = spaces + 1;
    }

    cout << left << setw(COLFMT1) << "String length: " << right << setw(COLFMT2) << length << endl;
    cout << left <<setw(COLFMT1)<< "Upper case letters: " << right <<setw(COLFMT2) << upper << endl;
    cout <<left << setw(COLFMT1)<< "Lower case letters: " <<right << setw(COLFMT2)<< lower << endl;
    cout << left << setw(COLFMT1)<<"Digits: " << right << setw(COLFMT2)<< digits << endl;
    cout << left << setw(COLFMT1)<<"Spaces: " <<right << setw(COLFMT2)<< spaces << endl;
    cout << left << setw(COLFMT1) << "Words: " <<right << setw(COLFMT2) <<words << endl;
    cout << left << setw(COLFMT1) << "Sentences: " <<right<<setw(COLFMT2)<< sentences << endl;


    // Show application close
    cout << "--------------------------------------------" << endl;
    cout << "End of Text Recorder." << endl;
}





int main()
{

    // Declare variables
    string str = "Oh dear little 1! Oh dear little 1! For you, parents had glorious dreams! And you were all immersed in your own dreams. Yet, Agni engulfed you and all of those dreams Taking you to Almighty’s divine presence. Usually, departed old parents are buried by sons. Whereas, Kumbakonam, saw a sad scene! Crying parents burying their little 1! Oh Almighty! show Your grace on those little ones. And keep them all in Thy Holiest Presence! Oh Almighty! bless those parents wilting in grief. To have the strength to bear this great loss. May Thy compassion and grace pervade all souls. And bring down the pain and wipe away the tears. Oh Almighty! show Your grace on those little ones.";
    Count(str);
    return 0;



    

    



        

 


}
