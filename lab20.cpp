//==========================================================
//
//  Title: Appazon Ants
//  LAB NUMBER:20
//
//==========================================================
#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout"

//==========================================================
// GLOBAL VARIABLES
//==========================================================
const int COLMFT1 = 12;
const int COLMFT2 = 14;
const int COLMFT3 = 11;
const int miminum_deliveries = 0;
const int maximum_deliveries = 60;
const int array_size = 30;
int arr[array_size];

//==========================================================
// RANDOMIZE ARRAY
//==========================================================

void randomizeArray(int arr[], int lowerLimit, int upperLimit)
{
	srand(time(NULL));

	for (int i = 0; i < array_size; i++)
	{
		arr[i] = rand() % upperLimit + lowerLimit;
	}


}

//==========================================================
// PRINT DELIVERIES
//==========================================================

void printDeliveries(int arr[])
{

	//Variables
	int day = 0;
	int total = 0;

	//Headers
	cout << "--------------------------------------------" << endl;
	cout << "April deliveries per day" << endl;
	cout << setw(COLMFT1) << left << "\nDay";
	cout << setw(COLMFT2 - 1) << right << "Deliveries";
	cout << setw(COLMFT3) << left << "\tBar Chart" << endl;

	//Loop
	for (int i = 0; i < array_size; i++)
	{
		day++;
		cout << endl;
		cout << setw(COLMFT1) << left << day;
		cout << setw(COLMFT2) << right << arr[i];
		cout << setw(COLMFT3) << right;

		for (int d = 0; d < arr[i]; d++)
		{
			cout << '*';
		}

		total = total + arr[i];
	}



	cout << setw(COLMFT1) << left << "\nTotal: ";
	cout << setw(COLMFT2+1) << right << right << total << endl;
}




//==========================================================
// INT MAIN
//==========================================================

int main()
{

	//Variables and Constants
	const int COLMFT1 = 12;
	const int COLMFT2 = 14;
	const int COLMFT3 = 11;
	const int miminum_deliveries = 0;
	const int maximum_deliveries = 60;
	const int array_size = 30;
	int arr[array_size];
	char input;


	cout << "Welcome to Appazon Ants" << endl;
	cout << "--------------------------" << endl;

	//Prompt
	cout << "\nEnter any character to run the simulation ('w' to exit): " ;
	cin >> input;

	//Loop
	while (input != 'w')
	{
		randomizeArray(arr, miminum_deliveries, maximum_deliveries);
		printDeliveries(arr);

		cout << "\nEnter any character to run the simulation ('w' to exit): ";
		cin >> input;

	}

	cout << "\nEnd of Appazon Ants" << endl;



}
