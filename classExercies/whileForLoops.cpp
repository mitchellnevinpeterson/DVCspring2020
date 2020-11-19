#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double miles;   // Miles driven
   double cost;    // Cost of a gallon of gas
   // More variables here needed:  costPerGallon, etc.

   // processing phase
   // Get info for each car
   cout << "Enter miles driven per day (-1 to quit):";
   cin >> miles;
   cout << fixed; // set floating-point number format

   // exit if the input is -1; otherwise,
   // proceed with the program
   do {
        // prompt user for gallons
        // and obtain the input from user
        cout << "Enter cost per gallon of gas: ";
        cin >> cost;
        if (miles != -1) {
            continue;
        }
        // prompt the user and gather the rest of the input
        // calculate the cost per day
        
        // prompt user for new value for miles -- we have to ask this again at the
        // end of the loop so we can check at the top whether to terminate the
        // looping (miles == -1)
        cout << "\n\nEnter miles driven per day "
        	   << "(-1 to quit): ";
        cin >> miles;
    }
}
