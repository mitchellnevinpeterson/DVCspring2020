#include <iostream>
#include <iomanip>

using namespace std;

// Constant values for pricing
const double 
TIME_RATE = 0.50,
FEE_20 = 20.00,
LBS_80_RATE = 1.00;

int main() {
    // Variables to store the values the user inputs
    double
    mins,
    weight,
    timePrice,
    weightPrice,
    priceTotal;

    // Asking user for information/values
    // Seperating with a line for easy viewing
    cout << "___________________________________________________\n";
    cout << "\n\tHow many minutes?: \t";
    cin >> mins;
    cout << "\tWeight of dog? (lbs): \t";
    cin >> weight;

    // Calculating the appropriate price based on the user input
    // For dogs under 20 lbs
    if (weight >= 20) {
        priceTotal = TIME_RATE * mins;
    }
    // For dogs over 20 lbs but under 81 lbs
    if (weight > 20 && weight <= 80) {
        // calculating the charge for time walked
        timePrice = mins * TIME_RATE;
        // calculating the total price
        priceTotal = timePrice + FEE_20;
    }
    // For dogs weighing over 80 lsbs
    if (weight > 80) {
        // calculating the charge for time walked
        timePrice = mins * LBS_80_RATE;
        // calculating the total price
        priceTotal = timePrice + FEE_20;
    }

    // Printing the price to the screen for  user to observe
    cout << fixed << setprecision(2) << "\nThe charge for this walk is: $" << priceTotal << endl;
    // Seperating with a line for easy viewing
    cout << "\n_________________________________________________________\n\n";

    return 0;
}