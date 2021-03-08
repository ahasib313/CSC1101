//==========================================================//
//
// Title: Ping Pong Pals
// Course:     CSC 1101
// Lab Number: Final App
// Author:    Altaful Hasib
// Date:       4/22/2020
// Description:
//   Keep scores for a ping pong match in a best-of-five match
//
//==========================================================
#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

//=======================================================================================
//GLOBALS
//=======================================================================================
const int ROW_SIZE = 5;
const int COLUMN_SIZE = 2;
const int COL1 = 15;
const int COL2 = 8;
const int COL3 = 8;
const int score = 11;
const int numberofGames = 5;
const int numberofPlayers = 2;

void enterScores(int scores[ROW_SIZE][COLUMN_SIZE], int games)
{
    //Input scores
    int a; 
    int b; 
    
    cout << "Enter KnightRiders score: ";
    cin >> a;
    scores[games][0] = a;
    cout << "Enter SuperKings runs: ";
    cin >> b;
    scores[games][1] = b;


    // Conditions for the score number
    while (!(((a >= 0 && a <= 11)  && (b >= 0 && b <= 11)) && (a == score || b == score) && (a!=b))) 
    {
 
        if (a == score and b == score)
        {
            cout << "Error: one of the following condition occured:";
            cout << "\n-The score was tied";
            cout << "\n-At least one score was outside the range 0-11";
            cout << "\n-Neither score was 11";
            cout << endl << endl;
            cout << "Enter KnightRiders score: ";
            cin >> a;
            scores[games][0] = a;
            cout << "Enter SuperKings runs: ";
            cin >> b;
            scores[games][1] = b;
        }

        else if (a != score and b != score) 
        {
            cout << "Error: one of the following condition occured:";
            cout << "\n-The score was tied";
            cout << "\n-At least one score was outside the range 0-11";
            cout << "\n-Neither score was 11";
            cout << endl << endl;
            cout << "Enter KnightRiders score: ";
            cin >> a;
            scores[games][0] = a;
            cout << "Enter SuperKings runs: ";
            cin >> b;
            scores[games][1] = b;
        }

        
    
        else if ((a < 0 || b < 0) || (a > 11 || b > 11))
        {
            cout << "Error: one of the following condition occured:";
            cout << "\n-The score was tied";
            cout << "\n-At least one score was outside the range 0-11";
            cout << "\n-Neither score was 11";
            cout << endl << endl;
            cout << "Enter KnightRiders score: ";
            cin >> a;
            scores[games][0] = a;
            cout << "Enter SuperKings runs: ";
            cin >> b;
            scores[games][1] = b;
        }
    }
}

void printScores(int scores [ROW_SIZE][COLUMN_SIZE], int games) 
{

    // Print scores after each game 
    cout << "Score after " << games + 1 << " game\n"; 
    
    cout << setw(COL1) << left << "Team";
    for (int i = 0; i <= games; i++)
    {
        cout << setw(COL2) << right << i + 1;
    }
    cout << endl;
    
    // Shows scores for KnightRiders
    cout << setw(COL1) <<  left << "KnightRiders";
    for (int i = 0; i <= games; i++)
    {
        cout << setw(COL2) << right << scores[i][0];
    }
    cout << endl;
    
    // Shows scores for SuperKings
    cout << setw(COL1) << left << "SuperKings"; 
    for (int i = 0; i <= games; i++)
    {
        cout << setw(COL2) << right << scores[i][1];
    }
    cout << endl;
}



int main ()
{
    // Record wins for each team
    int winsKnightRiders = 0;
    int winsSuperKings = 0;     
   
    // Record number of games played 
    int games = 0; 
    cout << "Welcome to Ping Pong Pals" << endl;
    cout << "-------------------------\n" << endl;

    while (winsKnightRiders < 3 && winsSuperKings < 3)
    {
        int scores[5][2];
        cout << "Game " << games + 1 << endl;

        enterScores(scores, games);
        cout << endl;
        printScores(scores, games);
        cout << endl;

        if (scores[games][0] == 11)
        {
            winsKnightRiders++;
        }
        else if (scores[games][1] == 11)
        {
            winsSuperKings++;
        }
        games++;
    }
    
    // Figure out the winner
    if (winsKnightRiders > winsSuperKings)
    {
        cout << "KnightRiders WIN the match " << winsKnightRiders << "-" << winsSuperKings << endl << endl;;
    }
    else
    cout << "SuperKings WIN the match " << winsSuperKings << "-" << winsKnightRiders << endl;
    cout << "\n------------------------------------" << endl;
    cout << "End of Ping Pong Pals" << endl << endl;
  
}
