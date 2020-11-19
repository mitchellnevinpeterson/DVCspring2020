#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

// ****************************************************
//                       Main                         *
// ********************\/*\/*\/************************

int main() {

    // setting up the variables to open the file
    ifstream inFile;
    string fname;

    // Setting the variables for the program
    int lineNum = 0,
        searchNum,
        *numbers = 0,
        num,
        numMatch = 0;

    // Letting user know that they can exit at anytime
    // Enter -1 to exit program
    cout << endl
         << "* Enter -1 to exit program at anytime. *" 
         << endl;



// ****************************************************
//                      Program                       *
// ********************\/*\/*\/************************

    // Starting loop for the user to search for different number in a file
    while (lineNum != -1) {

    // ****************************************************
    //                     File Open                      *
    // ********************\/*\/*\/************************

    // setting up the loop to ask the user for the file name, repeats until success
    do {
        // error messagae if user enters wrong file name
        if (!inFile.good()) {
            cout << endl
                 << "File not found.\nPlease enter a valid file name."
                 << endl;
        }
        // Asking for the file name
        cout << endl
             << "What file would you like to open? ";
        cin >> fname;
        inFile.open(fname.c_str());

        // Triggering an exit if user types -1
        if (fname == "-1") {
            cout << endl
                 << "Exiting..."
                 << endl
                 << endl;
            return 0;
        }
    } while(!inFile.good());
    // End of Do-while Loop
    // The file in now open

        // print dashes to make it easier to read, because sections are separated
        cout << "------------------------------------------------------------------";

        // asking user for the amount of numbers to read
        cout << endl
             << "How many numbers would you like to read from the file? (1-20) ";
        cin >> lineNum;

        // Setting a boundry between 1 and 20 for user input of lineNum
        if (lineNum > 20) {
            lineNum = 20;
        }
        if (lineNum == 0 || lineNum < -1) {
            lineNum = 1;
        }

        // Triggering an exit if user types -1
        if (lineNum == -1) {
            cout << endl
                 << "Exiting..."
                 << endl
                 << endl;
            break;
        }

        // letting the user know the file was read
        // then prompting user to enter a number to search for
        cout << endl
             << "Read " 
             << lineNum 
             << " numbers from file " 
             << fname 
             << endl
             << endl;
        cout << "Which number do you want search for? ";
        cin >> searchNum;

        // Triggering an exit if user types -1
        if (searchNum == -1) {
            cout << endl
                 << "Exiting..."
                 << endl
                 << endl;
            break;
        }

        // adding the apropriate amount of index
        numbers = new int[lineNum];

        // Adding the correct amount of numbers to the array "numbers"
        for (int i = 0; i < lineNum; i++) {
            // reading the numbers in the file
            inFile >> num;
            // adding each number of the file into the array "numbers"
            numbers[i] = num;
        }
        
        // Adding 1 to to the variabel numMatch everytime the loop finds a match
        for (int i = 0; i < lineNum; i++) {
            if (numbers[i] == searchNum) {
                numMatch++;
            }   
        }

        // If the users number was found this will print
        // If no match was found the else statement will run
        if (numMatch > 0) {
            cout << endl
                    << searchNum
                    << " is in the array!"
                    << endl;
        } else { 
            cout << endl
                << searchNum
                << " could not be found in the array..."
                << endl;
        }

        // print dashes to make it easier to read, because sections are separated
        cout << "------------------------------------------------------------------"
             << endl;

    // ****************************************************
    //                 Closing the File                   *
    // ********************\/*\/*\/************************

    // closing the file
    inFile.close();

    // freeing the memerory space
    delete [] numbers;

    // resetting numMatch to zero
    numMatch = 0;
        
    }

    // ****************************************************************
    //   Outside the Loop - Closing the File - Freeing Memory         *
    // ********************\/*\/*\/************************************
    // closing the file
    inFile.close();

    // freeing the memerory space
    delete [] numbers;

    return 0; 
}