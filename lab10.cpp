#include <iostream>
#include <string>

using namespace std;

// ****************************************************
//                     Functions                      *
// ********************\/*\/*\/************************

// A recursive function to add up odd numbers
int parityOdd(int num) {
    if (num == 0) {
        return 0;
    }
    if ((num % 2) != 0) {
        return(num + parityOdd(num - 1));
    }
    else
        return (parityOdd(num - 1));
}

// A recursive function to add up odd or even number
int parityEven(int num) {
    if (num == 0) {
        return 0;
    }
    if ((num % 2) == 0) {
        return(num + parityEven(num - 1));
    }
    else
        return (parityEven(num - 1));
}
// ****************************************************
//                       Main                         *
// ********************\/*\/*\/************************

int main() {

    // variable for user input
    int userNum;
    string parity;

    // Telling user how to exit program
    cout << endl
             << "* Enter -1 to exit the program. *"
             << endl;

    // The start of the program which runs inside a while loop 
    // so it can be ran again as many times as user desires
    while (!(userNum == -1)) {
        // Using dashes to seperate sections for easy reading
        cout << endl
             << "------------------------------------------------"
             << endl;

        // Asking user for a number
        cout << endl
             << "Enter a number from 1 to 50: ";
        cin >> userNum;

        // restricting the user input to default 50 
        // if user types value greater than 50
        if (userNum > 50) {
            userNum = 50;
        }
        // restricting the user input to default 1 
        // if user types value less than 1
        // Reminder, -1 is to exit
        if (userNum == 0 || userNum < -1) {
            userNum = 1;
        }

        // If the user wants to exit the program
        if (userNum == -1) {
            cout << "\nExiting..." 
                << endl 
                << endl;
            continue;
        }

        // asking the user which parity they want to add up
        cout << endl
             << "Even or odd? ";
        cin >> parity;

        // If the user wants to exit the program
        if (parity == "-1") {
            cout << "\nExiting..." 
                << endl 
                << endl;
            return 0;
        }

        // Calling on the appropriate function based off
        // Which parity the user chooses (even)
        if (parity == "even" || parity == "Even") {
            cout << endl
                 << "The sum of the even numbers from 1 to " 
                 << userNum 
                 << " is: " 
                 << parityEven(userNum)
                 << endl;
        }

        // Calling on the appropriate function based off
        // Which parity the user chooses (odd)
        if (parity == "odd" || parity == "Odd") {
            cout << endl
                 << "The sum of the odd numbers from 1 to " 
                 << userNum 
                 << " is: " 
                 << parityOdd(userNum)
                 << endl;
        }
    }

return 0;   
}
