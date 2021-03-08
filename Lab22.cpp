//==========================================================
//
//  Title: Cupcake Compilers
//  LAB NUMBER:22
//
//==========================================================
#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout"


//==========================================================
// GLOBALS
//==========================================================
int comntcntr = 0;
int coutcntr = 0;
int cincntr = 0;
int doublecntr = 0;
int intcntr = 0;
int othercntr = 0;
int total = 0;
const int COMFMT1 = 10;
const int COMFMT2 = 10;
const string filename = "lab13.cpp";
ifstream inFile;


//==========================================================
// FIRST TOKEN
//==========================================================

string firstToken(string line)
{
	string str = "";
	int linepointer = 0;

	while (linepointer < line.length())
	{
		if (line.at(linepointer) != ' ')
		{
			str += line.at(linepointer);
			linepointer++;
		}
		else if (str.length() > 0)
		{
			linepointer++;
			break;
		}
	}
	return str;
}

//==========================================================
// MAIN
//==========================================================

int main()
{
	string lines = "";
	cout << "Welcome to Cupcake Outputters!" << endl;
	cout << "\n" << endl;
	
	//Call Function
	cout << "Reading lines from file '" << filename << "' ...." << endl;
	inFile.open(filename);
	while (inFile.good())
	{
		getline(inFile, lines);
		string str = firstToken(lines);

		//Tests which to read
		if (str.find("//") != -1)
		{
			comntcntr++;
		}
		else if (str.find("cin") != -1)
		{
			cincntr++;
		}
		else if (str.find("cout") != -1)
		{
			coutcntr++;
		}
		else if (str.find("int") != -1)
		{
			intcntr++;
		}
		else if (str.find("double") != -1)
		{
			doublecntr++;
		}
		else
		{
			othercntr++;
		}
	}
	total = comntcntr + cincntr + coutcntr + intcntr + doublecntr + othercntr;

	//Output
	cout << setw(COMFMT1) << left << "\nToken" << setw(COMFMT2+2) << right << "Count" << endl;
	cout << setw(COMFMT1) << left << "Comment" << setw(COMFMT2) << right << comntcntr << endl;
	cout << setw(COMFMT1) << left << "cin" << setw(COMFMT2) << right << cincntr << endl;
	cout << setw(COMFMT1) << left << "cout" << setw(COMFMT2) << right << coutcntr << endl;
	cout << setw(COMFMT1) << left << "int" << setw(COMFMT2) << right << intcntr << endl;
	cout << setw(COMFMT1) << left << "double" << setw(COMFMT2) << right << doublecntr << endl;
	cout << setw(COMFMT1) << left << "Other" << setw(COMFMT2) << right << othercntr << endl;
	cout << setw(COMFMT1) << left << "Total" << setw(COMFMT2) << right << total << endl;

	//Ending
	cout << "\nEnd of Cupcake Compliers!" << endl;

}