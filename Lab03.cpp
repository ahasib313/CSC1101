// Title:      Velocity Operator
// Course:     CSC 1101
// Lab Number: 3
// Author:     Altaful Hasib
// Date:       1/21/2020
// Description:
//   Evaluate velocity
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
    
    cout << "Welcome to the velocity operator" << endl;
    // Declare double variable g with an initial value of -9.18
    double g = -9.81;
    
    


    // Declare double variable Velocity, t
    double velocity;
    double t;

   
    // Take time "t" input from user
    cout << "Enter time in seconds" << endl;
    cin >> t;

    //calculate the velocity of abject
    velocity = g * t;

    // velocity= <velocity of an object> in m per sec 
    cout << "Velocity is " << velocity << "m/s";
    cout << endl; 
    cout << "This is the end of the velocity operator" << endl; 


}
