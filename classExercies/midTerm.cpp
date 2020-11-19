#include <iostream>
#include <iomanip>

using namespace std;

// Constant values for pricing
const double 
PET_PRICE = 100.00,
PARKING_PRICE = (12.00 * 20.00),
SEC_DEPOSIT = (2000.00 * .02),
RENT_COST = 2300.00;

int main() {
    // Variables to store the values the user input
    int numPets,
    numParking;
    double priceTotal;

    // Asking user for information/values
    // Seperating with a line for easy viewing
    cout << "_________________________________________________\n";
    cout << "\n\tHow many cats or dogs? \t\t";
    cin >> numPets;
    cout << "\tHow many extra parking spaces? \t";
    cin >> numParking;

    // Calculating the appropriate price based on the user input
    priceTotal = - SEC_DEPOSIT 
                + (numPets * PET_PRICE)
                + (numParking * PARKING_PRICE)
                + (12 * RENT_COST);    

    // Printing to the console, for user to observe
    cout << "\nThe 1-year cost of this unit is:\t" << "$" 
         << fixed << setprecision(2)
         << priceTotal << endl;
    // Seperating with a line for easy viewing
    cout << "\n__________________________________________________\n\n";

    return 0;
}