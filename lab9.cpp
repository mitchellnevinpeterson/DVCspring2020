#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// ****************************************************
//                     Constants                      *
// ********************\/*\/*\/************************

const int NUM_RAND_NUM = 30;
const int NUM_MAX = 100;

// ****************************************************
//                       Main                         *
// ********************\/*\/*\/************************

int main()
{
// Seeding the random number generator with current time
srand(time(0));

// variable for user input
char answer;

// The start of the program which runs inside a while loop 
// so it can be ran again as many times as user desires
while (!(answer == 'n')) {

    // Vectors to hold different numbers
    vector <int> numbers(NUM_RAND_NUM);

    // Added '1' to NUM_MAX becuase '0-30' is 101 in length
    vector <int> counters((NUM_MAX + 1), 0);
    vector <int> mostCommon;

    // Variables used to store values
    int highestNum;
    int highestCount = 0;

    // Asking the user if they would like to run the program generating 30 random numbers
    cout << endl
         << "Would you like to generate thirty random numbers? ('y' or 'n'): ";
    cin >> answer;

    // If the user wants to exit the program
    if (answer == 'n') {
        cout << "\nExiting..." 
             << endl 
             << endl;
        continue;
    }
    
    // Generate NUM_RAND amount of numbers
    for (int i = 0; i < NUM_RAND_NUM; i++) {
        numbers[i] = rand() % (NUM_MAX + 1); 
    }

    // looping through the vector 
    // to count the amount we see a number between 1-100
    for (int i = 0; i < NUM_RAND_NUM; i++) {
        // everytime the index of 'counters' runs the value of 'numbers[i]'
        // add one to that index, which is equal to the value of 'numbers[i]'
        counters[numbers[i]] += 1;

        // if the value of the counter at the 'i' idex is greater
        // than the last then that number has been seen the most
        if (counters[numbers[i]] > highestCount) {
            highestCount = counters[numbers[i]];
        }
    }

    // looping through the vector 'counters' to determine
    for (int i = 0; i < NUM_MAX; i++) {
        // if there are other numbers seen the same amount of times
        // if so then put that number into a vector called 'highestNumTie'
        if (highestCount == counters[i]) {
            highestNum = i;
            mostCommon.push_back(highestNum);
        }
    }

    // Printing out the array of thirty random numbers
    cout << endl
         << "------------------------------------------------------------------------"
         << endl
         << "Array of thirty random numbers:" 
         << endl 
         << endl;
         cout << "\t";
        for (int i = 0; i < (NUM_RAND_NUM / 2); i++) {
            cout << numbers[i] << ", ";
        }
        cout << endl;
        // Indenting using tab
        cout << "\t";
        // printing each number followed by a ','
        for (int i = 15; i < NUM_RAND_NUM; i++) {
            cout << numbers[i];
            if (i < 29) {
                cout << ", ";
            }
        }

    // Varible to hold the length of vector 'highestNumTie'
    int commonLength = mostCommon.size();

    // If there were multiple numbers with the highest appearance
    // This will run
    if (commonLength > 1) {
        // Printing out the most common numbers (if there are multiple)
        cout << endl
             << endl
             << "The following numbers are the most common: " 
             << endl
             << endl;
             cout << "\t";
        for (int i = 0; i < commonLength; i++) {
            // The most common numbers in vector 'highestNumTie'
            cout << mostCommon[i];
            // Adding a comma between numbers
            if (i < (commonLength - 1)) {
                cout << ", ";
                // Adding the word 'and' before the last number listed
                if (i == (commonLength - 2)) {
                    cout << "and ";
                }
            }
        }
        cout << "."
             << endl
             << endl
             << "They appeared "
             << highestCount 
             << " times each."
             << endl
             << "------------------------------------------------------------------------"
             << endl;
    }
    // If there was only one number with the highest appearance
    // This will run
    if (commonLength <= 1) {
        // Printing out the number 1 most common number (if there is only 1)
        cout << endl
             << endl 
             << "The most common number is " 
             << highestNum 
             << ", which appears "
             << highestCount 
             << " times." 
             << endl
             << "------------------------------------------------------------------------"
             << endl;
    }

    // Resetting/Clearing out the vectors and variables for new run
    numbers.clear();
    counters.clear();
    mostCommon.clear();
    highestCount = 0;
    highestNum = 0;
}

return 0;   
}
