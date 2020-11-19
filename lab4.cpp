#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

    const double ACME_CHARGING = 1.00;
    const double BEST_ELECTRONS = 2.50;
    const double ECONOMY_CHARGE = 0.50;

int main() {
    // Setting the variables for the user input
    double input = 0.00;
    string lowestCost;


    while (input != -1) {

        // Asking user for the amount of hours they would like to charge.
        cout << "\n-------------------------------------------------------------------\n";
        cout << "--- When you are finished you can exit program by entering -1. ---\n";
        cout << "-------------------------------------------------------------------\n\n";
        cout << "Enter the expected amount of time you will be charging your car: ";
        cin >> input;

        // if user forgets to enter a value or enters -1, the program will stop. 
        // preventing infinate loop and stopping the execution of the code below with a -1 value
        if (input == 0 || input == -1) {
            return 0;
        }

        // calulating the cost of each charging station based off of users input values
        double acmeCost = (ACME_CHARGING * input) + 10;
        double bestEleCost = (BEST_ELECTRONS * input);
        double economyCost = (ECONOMY_CHARGE * input) + 20;

        // printing to the screen the total cost of each charing station for users given amount of hours
        cout << "\nYour expected costs for each station are:\n\n";
        cout << fixed << setprecision(2) 
            << "\tAcme Charging:\t" 
                 << "$" << acmeCost << endl;
        cout << fixed << setprecision(2) 
            << "\tBest Electrons:\t"  
                 << "$" << bestEleCost << endl;
        cout << fixed << setprecision(2) 
            << "\tEconomy Charge:\t"  
                 << "$" << economyCost << endl << endl;

        // finding the lowest cost network
        if (acmeCost < bestEleCost && acmeCost < economyCost){
            lowestCost = "Acme Charging";
        }else if (bestEleCost < acmeCost && bestEleCost < economyCost){
            lowestCost = "Best Electrons";
        }else {
            lowestCost = "Economy Charge";
        }

        // the station with the lowest cost for this specfic user input
        cout << "The lowest cost network for you amount of charge time is " << lowestCost << ".\n\n";
    }

    return 0;
}