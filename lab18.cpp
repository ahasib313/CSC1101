//==========================================================
//
//  Title: Banker Bisons
//  LAB NUMBER:14
//
//==========================================================
#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout"


//=================================================================
//MENU OPTIONS
//=================================================================
int menuOption()
{
    int option;

    //Show prompt menu
    cout << "Banker Bisons Menu" << endl;
    cout << " 1 - Enter loan amount" << endl;
    cout << " 2 - Enter monthly payment" << endl;
    cout << " 3 - Enter annual interest rate" << endl;
    cout << " 4 - Show loan parameters" << endl;
    cout << " 5 - Show loan repayment" << endl;
    cout << " 9 - Exit" << endl;
    cout << "Enter an option :" << endl;
    cin >> option;

    return option;

}
                      
                      
                      
                      
//=================================================================
//LOAN AMOUNT
//=================================================================
double getLoanamount()
{
    double Loan;
    cout << "Enter the car loan amount (2,500-7,500): ";
    cin >> Loan;
    while (Loan < 2500 || Loan >7500)
    {
        cout << "Error: " << Loan << " is an invalid loan amount." << endl;
        cout << "Enter the car loan amount (2,500-7,500): ";
        cin >> Loan;
    }
    return Loan;
}
//=================================================================
//MONTHLY PAYMENT AMOUNT
//=================================================================
double getMonthlyPaymentamount()
{
    double Payment;
    cout << "Enter the monthly payment amount (50-750): ";
    cin >> Payment;
    while (Payment < 50 || Payment >750)
    {
        cout << "Error: " << Payment << " is an invalid Monthly payment amount." << endl;
        cout << "Enter the monthly payment amount (50-750): ";
        cin >> Payment;
    }
    return Payment;
}
  
//=================================================================
//INTEREST RATE
//=================================================================
double getInterestRate()
{
    double Rate;
    cout << "Enter the interest rate (1%-6%): ";
    cin >> Rate;
    while (Rate < 1 || Rate >6)
    {
        cout << "Error: " << Rate << " is an invalid Interest rate." << endl;
        cout << "Enter the interest rate (1%-6%): ";
        cin >> Rate;
    }
    return Rate;
}

//=================================================================
//LOAN PARAMETERS
//=================================================================
void showLoanParameters(double amount, double payment, double rate)
{
    //Constants and variables
    const int COLM1 = 15;
    const int COLM2 = 10;

    //Set Precision
    cout << fixed << setprecision(2) << endl;

    //Prompt for the inputs
    cout << setw(COLM1) << left << "Amount($):" << setw(COLM2) << right << amount << endl;
    cout << setw(COLM1) << left << "Payment($):" << setw(COLM2) << right << payment << endl;
    cout << setw(COLM1) << left << "Rate:" << setw(COLM2) << right << fixed << setprecision(4)<<rate << endl;

}

//=================================================================
//LOAN REPAYMENT
//=================================================================
void showLoanRepayment(double amount, double payment, double rate)
{
    //Constants and Variables 
    double interest;
    double principal;
    double balance;
    double Monthlyrate;
    const int COLFMT1 = 10;
    const int COLFMT2 = 12;
    const int COLFMT3 = 12;
    const int COLFMT4 = 12;
    const int COLFMT5 = 12;
    int Month = 0;
    balance=amount;



    //Print
    cout << setw(COLFMT1) << right << "Month"
        << setw(COLFMT2) << right << "Balance($)"
        << setw(COLFMT3) << right << "Payment($)"
        << setw(COLFMT4) << right << "Interest($)"
        << setw(COLFMT5) << right << "Principal($)" << endl;
    //Set Precision
    cout << fixed << setprecision(2);

    //Sentinel Loop
    while (balance > 0)
    {
        Monthlyrate = rate / 12 / 100;
        interest = balance * Monthlyrate;
        principal = payment - interest;
        balance = balance - principal;

        Month++;

        cout <<  setw(COLFMT1) << right <<Month
            <<   setw(COLFMT2) << right << balance
            <<  setw(COLFMT3) <<right << payment
            <<  setw(COLFMT4) <<right<< interest
            <<  setw(COLFMT5) <<right << principal << endl;
    }
    cout << "------------------------------" << endl;
    cout << "Months to repay loan: " << Month << endl << endl;
}

int main()
{
    //Constants and Variables 
    double amount = 2500;
    double payment = 50;
    double rate = 1. / 12 / 100;
    int option;

    cout << "Welcome to Banker Bisons" << endl;
    cout << "---------------------------" << endl;

    //Process menu options
    option = menuOption();
    while (option != 9)
    {
        if (option == 1)
        {
            amount = getLoanamount();
        }
        else if (option == 2)
        {
            payment = getMonthlyPaymentamount();
        }
        else if (option == 3)
        {
            rate = getInterestRate();
        }
        else if (option == 4)
        {
            showLoanParameters(amount, payment, rate);
        }
        else if (option == 5)
        {
            showLoanRepayment(amount, payment, rate);
        }

        option = menuOption();
    }

    cout << "--------------------" << endl;
    cout << "End of Banker Bisons" << endl;
    

}