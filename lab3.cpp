#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// An application to try and trouble shoot why your car isn't starting
int main() {
    
    // creating the varible to hold the users input for the questions
    char choice;

    // -----------------------------------Start of scenario 1-------------------------------------------
    cout << endl<< "Please answer questions with \'y' for yes and 'n' for no.'" << endl << endl; 
    cout << "Is the car silent when you turn the key?";
    cin >> choice;
    if (choice == 'y') {
        cout << "Are the batter terminals corroded?";
        cin >> choice;
        if (choice == 'y') {
            cout << "Clean teh terminals and try starting again."<< endl << endl;
        }else {
            cout << "Replace teh cables and try agian." << endl << endl;
        }
    }
    // -----------------------------------Start of scenario 2-------------------------------------------
    else {
        cout << "Does the car make a clicking sound?";
        cin >> choice;
        if (choice == 'y') {
            cout << "Replace the battery." << endl << endl;
        }else {
            cout << "Does the car crank up but fail to start?";
            cin >> choice;
            if (choice == 'y') {
                cout << "Check the spark plug connections." << endl << endl;
            }else {
                cout << "Take the car in for service." << endl << endl;
            }
        }
    }

    return 0;
}