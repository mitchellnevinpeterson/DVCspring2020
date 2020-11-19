#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

// ****************************************************
//                     Constants                      *
// ********************\/*\/*\/************************

// US dollar conversion rates
const double BIT_RATE = 0.00012;
const double CAD_RATE = 1.33;
const double MEX_RATE = 19.57;

// Percents for service charge
const double SEVEN_PERCENT = 0.07;
const double SIX_PERCENT = 0.06;
const double FIVE_PERCENT = 0.05;
const double THREE_5_PERCENT = 0.035;
const double TWO_5_PERCENT = 0.025;

// ****************************************************
//                     Functions                      *
// ********************\/*\/*\/************************

// Bitcoin converter function
double dollarsToBTC(double usDollars) {
    // variables
    double serviceFee = 0.00;
    double remainAfterFee = 0.00;
    // service fee for $1000 or less
    if(usDollars <= 1000) {
        serviceFee = usDollars * FIVE_PERCENT;
        remainAfterFee = usDollars - serviceFee;
    }
    // service fee for $1000 or less
    if(usDollars > 1000) {
        serviceFee = (usDollars - 1000) * TWO_5_PERCENT;
        remainAfterFee = (usDollars - 50) - serviceFee;
    }
    double bitcoins = remainAfterFee  * BIT_RATE;

    return (bitcoins);
}

// Canadian Dolllar converter function
double dollarsToCAD(double usDollars) {
    // variables
    double serviceFee = 0.00;
    double remainAfterFee = 0.00;
    // service fee for $1000 or less
    if(usDollars <= 1500) {
        serviceFee = usDollars * SEVEN_PERCENT;
        remainAfterFee = usDollars - serviceFee;
    }
    // service fee for $1000 or less
    if(usDollars > 1500) {
        serviceFee = (usDollars - 1500) * FIVE_PERCENT;
        remainAfterFee = (usDollars - 105) - serviceFee;
    }
    double cadDollars = remainAfterFee  * CAD_RATE;

    return (cadDollars);
}

// Mexican Pesos converter function
double dollarsToMXN(double usDollars) {
    // variables
    double serviceFee = 0.00;
    double remainAfterFee = 0.00;
    // service fee for $1000 or less
    if(usDollars <= 1200) {
        serviceFee = usDollars * SIX_PERCENT;
        remainAfterFee = usDollars - serviceFee;
    }
    // service fee for $1000 or less
    if(usDollars > 1200) {
        serviceFee = (usDollars - 1200) * THREE_5_PERCENT;
        remainAfterFee = (usDollars - 72) - serviceFee;
    }
    double mexPesos = remainAfterFee  * MEX_RATE;

    return (mexPesos);
}

// ****************************************************
//                       Main                         *
// ********************\/*\/*\/************************
int main() {
    // Variables
    double usDollars = 0.00;

    cout << "\nWelcome to the Currency Exchange Serive!\n\n";
    cout << "I can exchange USD Dollars for Bitcoin, Canadian Dollars or Mexican Pesos.\n"; 

    // Looping through the converter until user wants to quit by entering -1
    while(1) {
    // Asking user for the amount of US dollars they'd like to convert
    cout << "\nPlease input the amount in USD to Exchange (-1 to quit) : ";
    cin.clear();
    cin >> usDollars;

    // Breaking the loop if the user inputs -1
    if(usDollars == -1) {
        cout << "\nExiting..." << endl << endl;
        break;
    }

    // If input not numeric, Error message/Restarting the loop, user mustenter valid data type
    if (cin.fail()) {
        // Error message
        cout << "\n------------------------------------------------\n";
        cout << "*** You did not enter a numeric value. ***\n" 
             << "*** Please enter a valid currency amount. ***\n";
        cout << "------------------------------------------------\n";
        // clearing the error state
        cin.clear();
        // Clearing the buffer
        cin.ignore(10000,'\n');
        // Restarting at the beginning of the loop
        continue;
    }

    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    // Printing the conversion amounts to the screen *
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    // Seperating the data with dashes for readability
    cout << "\n----------------------------------\n";

    // printing the amount of USD dollars user inputed
    cout << fixed << setprecision(2) 
    << "$" << usDollars << " USD can be exchanged for: " << endl;

    // printing the amount of bitcoins it is equal to
    cout << fixed << setprecision(2) 
    << "BTC: " << dollarsToBTC(usDollars) << endl;

    // printing the amount of CAD Dollars it is equal to
    cout << fixed << setprecision(2) 
    << "CAD: " << dollarsToCAD(usDollars) << endl;

    // printing the amount of Mexican Pesos it is equal to
    cout << fixed << setprecision(2) 
    << "MXN: " << dollarsToMXN(usDollars) << endl;

    // Seperating the data with dashes for readability
    cout << "----------------------------------\n";
    }

return 0;
}