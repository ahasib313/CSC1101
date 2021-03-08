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
//LOAN AMOUNT
//=================================================================
double getLoanamount()
{
    double Loan;
    cout << "Enter the car loan amount (2,500-7,500): ";
    cin >> Loan;
    while (Loan < 2500 || Loan >7500)
    {
        cout << "Error: " << Loan << "is an invalid loan amount." << endl;
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
        cout << "Error: " << Payment << "is an invalid Monthly payment amount." << endl;
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
        cout << "Error: " << Rate << "is an invalid Interest rate." << endl;
        cout << "Enter the interest rate (1%-6%): ";
        cin >> Rate;
    }
    return Rate;
}

int main()
{
    //Constants and Variables 
    double Interest;
    double Principal;
    double Balance = getLoanamount();
    double Payment = getMonthlyPaymentamount();
    double InteresRate = getInterestRate();
    double Rate = InteresRate / 12 / 100;
    const int COLFMT1 = 20;
    const int COLFMT2 = 20;
    const int COLFMT3 = 20;
    const int COLFMT4 = 20;
    int Month = 0;


    
    cout << left << setw(COLFMT1) << "Month"
        << left<< setw(COLFMT2) << "Balance ($)"
        << left << setw(COLFMT3) << "Payment ($)"
        << left<< setw(COLFMT4) << "Principal ($)" << endl;

    // Calculations
    while (Balance > 0)
    {
        Interest = Balance * Rate;
        Principal = Payment - Interest;
        Balance = Balance - Principal;

        Month++;

        cout << left << setw(COLFMT1) << fixed << setprecision(2) << Month
            << left << setw(COLFMT2) << fixed << setprecision(2) << Balance
            << left << setw(COLFMT3) << fixed << setprecision(2) << Interest
            << left << setw(COLFMT4) << fixed << setprecision(2) << Principal << endl;
    }

    cout << "Months to repay loan: " << Month << endl << endl;
    cout << "End of Banker Bisons" << endl;
}