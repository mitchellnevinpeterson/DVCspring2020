#include <iostream>
#include <iomanip> 

using namespace std; 

// the list of constant values
const double TAX_RATE = .0825;
const double DELIVERY_RATE = .05;

int main() {
    // declaring names for variables associated with cost 
    double cost1;
    double cost2;
    double cost3;
    // declaring names for the variables to store the number of items to be purchased
    int numItem1;
    int numItem2;
    int numItem3;
    // delcaring variable names for tax ammount
    double taxItem1;
    double taxItem2;
    double taxItem3;
    // declaring variable names for delivery amount
    double delFee1;
    double delFee2;
    double delFee3;

    // setting up inputs for user to delcare the price and number of items
    // Item 1
    cout << endl << "How much does your 1st item cost?: $";
    cin >> cost1;
    cout << "Amount you would like to purchase: ";
    cin >> numItem1;

    // Item 2
    cout << endl << "How much does your 2nd item cost?: $";
    cin >> cost2;
    cout << "Amount you would like to purchase: ";
    cin >> numItem2;
    
    // Item 3
    cout << endl << "How much does your 3rd item cost?: $";
    cin >> cost3;
    cout << "Amount you would like to purchase: ";
    cin >> numItem3;

    // printing out the list of items including: cost, delivery fee, tax, and total amount.
    cout << endl << "*** Here is your receipt! ***" << endl << endl; 
    // Total Item 1
    double totalItem1 = cost1 * numItem1;
    cout << fixed << setprecision(2) 
    << "Item 1: ordered " << numItem1 << " @ $" << cost1 << " = $" << totalItem1 << endl;
    // Total Item 2
    double totalItem2 = cost2 * numItem2;
    cout << fixed << setprecision(2) 
    << "Item 2: ordered " << numItem2 << " @ $" << cost2 << " = $" << totalItem2 << endl;
    // Total Item 3
    double totalItem3 = cost3 * numItem3;
    cout << fixed << setprecision(2) 
    << "Item 3: ordered " << numItem3 << " @ $" << cost3 << " = $" << totalItem3 << endl;

    // total delivery fee
    double allItemsTotal = totalItem1 + totalItem2 + totalItem3;
    double deliveryTotal = allItemsTotal * DELIVERY_RATE;
    double taxTotal = (deliveryTotal + allItemsTotal) * TAX_RATE;
    double finalTotal = allItemsTotal + deliveryTotal + taxTotal;

    // The final totals printed to the console in receipt form
    cout << endl << endl << fixed << setprecision(2) 
    << "Items Total Cost: $" << allItemsTotal << endl;
    cout << fixed << setprecision(2) 
    << "Delivery Fee: $" << deliveryTotal << endl;
    cout << fixed << setprecision(2) 
    << "Tax: $" << taxTotal << endl;
    cout << fixed << setprecision(2) 
    << "Total: $" << finalTotal;
    cout << endl << endl 
    << "THANKS FOR SHOPPING WITH US!" << endl << endl;

    return 0;
}