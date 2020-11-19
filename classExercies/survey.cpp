#include <iostream>

using namespace std;

int main() {
    int redBullTotal = 0;
    int coffeeTotal = 0;
    int waterTotal = 0;
    int dietCokeTotal = 0;
    int input = 0;
    int count = 1;

    while (input != -1) {
        cout << "Menu: \n";
        cout << "1. Red Bull\n";
        cout << "2. Coffee\n";
        cout << "3. Water\n";
        cout << "4. Diet Coke\n";
        // asking the user to select a beverage by entering an input number
        cout << "Please make a selection for person: #" 
        << count << endl;
        cout << "Enter -1 to when finished, to exit: ";
        cin >> input;
        count++;
        // Adding 1 to the total of each beverage when their number is entered
        switch(input) {
            case 1:
                redBullTotal++;
                break;
            case 2:
                coffeeTotal++;
                break;
            case 3:
                waterTotal++;
                break;
            case 4:
                dietCokeTotal++;
                break;
            case -1:
            break;
            default:
                cout << "Invalid Input, please enter a number 1-4.";
                break;
        }
    }
    cout << "Totals: \n";
    cout << "Red Bull: \n" << redBullTotal << endl;
    cout << "Coffee: \n" << coffeeTotal << endl;
    cout << "Water: \n" << waterTotal << endl;
    cout << "Diet Coke: \n" << dietCokeTotal << endl;

    return 0;
}