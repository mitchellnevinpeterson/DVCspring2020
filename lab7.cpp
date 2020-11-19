#include <iostream>
#include <iomanip>

using namespace std;

// ****************************************************
//                     Functions                      *
// ********************\/*\/*\/************************

// Calulating the median of three arguments ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**
int getMedian(int a, int b, int c) {

    // declaring the int to return the value of the median
    int median;

    // ________________________________________________________
    // if statements to determine which number is in the middle
    // _________________________\/-\/__________________________

    // Setting variable 'a' as the median if statement is true
    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        median = a;
    }
    // Setting variable 'b' as the median if statement is true
    if ((b >= a && b <= c) || (b <= a && b >= c)) {
        median = b;
    }
    // Setting variable 'c' as the median if statement is true
    if ((c <= a && c >= b) || (c >= a && c <= b)) {
        median = c;
    }
    
    // returning the integer median value
    return (median);
}

// Calulating the average, of three arguments ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**
double getAverage(int a, int b, int c) {
    // declaring the int to return the value of the median
    double average = 0.00;

    // calulating the average of the three parameters
    average = (a + b + c)/3.0;

    // Returning a double of the average of the 3 integers
    return (average);
}
// Counting the number of characters used in a users integer ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**
int countDigits(int num) {
    // Creating the vaiable to store the count of digits used
    int count = 0;

    while (num > 0) {
        num /= 10.0;
        count++;
    }

    // returning the value of number of characters used in the integer 'num'
    return (count);
}

// Getting user input, handling invalid inputs, looking for '-1' to exit ~~~~~~~~~~~~~~~~~~~~**
// Comuputing the Average, Median, and count of the digits entered ~~~~~~~~~~~~~~~~~~~~~~~~~~**
int aveMedCnt() {
     // creating the variables used to store users inputs
    int a, b, c;

    while (1) {
        // Asking and retrieving 3 intergers from user
        cout << "\nEnter 3 integers (Enter -1 to exit):\n";
    // First input 'a' ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        cin >> a;
    // Checking for Wrong inout or User wishing to exit program 
        // If user enters a negative number or none integer
        if (cin.fail() || a < -1 || b < -1 || c < -1) {
            // Error message
            cout << "\n* Invalid input please enter 3 positive numbers. *\n";
            // clearing the cin
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        // if user wants to quit program they enter -1
        if (a == -1 || b == -1 || c == -1) {
            cout << "\nExiting...\n\n";
            break;
        }

    // Second input 'b' ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        cin >> b;
    // Checking for Wrong inout or User wishing to exit program 
        // If user enters a negative number or none integer
        if (cin.fail() || a < -1 || b < -1 || c < -1) {
            // Error message
            cout << "\n* Invalid input please enter 3 positive numbers. *\n";
            // clearing the cin
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        // if user wants to quit program they enter -1
        if (a == -1 || b == -1 || c == -1) {
            cout << "\nExiting...\n\n";
            break;
        }
    // Third input 'c' ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        cin >> c;
    // Checking for Wrong inout or User wishing to exit program 
        // If user enters a negative number or none integer
        if (cin.fail() || a < -1 || b < -1 || c < -1) {
            // Error message
            cout << "\n* Invalid input please enter 3 positive numbers. *\n";
            // clearing the cin
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        // if user wants to quit program they enter -1
        if (a == -1 || b == -1 || c == -1) {
            cout << "\nExiting...\n\n";
            break;
        }

        // If user enters a negative number or none integer
        if (cin.fail() || a < -1 || b < -1 || c < -1) {
            // Seperating the data with dashes
            cout << "\n**********************************************\n";
            cout << "Invalid input please enter 3 positive numbers.\n";
            // Seperating the data with dashes
           cout << "----------------------------------------------\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

    // ______________________________________________________________
    // **************** Printing to the users screen ****************
    // ____________________________\/-\/_____________________________
        cout << "\nYour numbers are: " << a << ", " << b << ", and " << c << ".";
        // Seperating the data with dashes
        cout << "\n--------------------------------------------";
        // Printing the average of three arguments
        cout << fixed << setprecision(2) 
             << "\nThe average is " << getAverage(a, b, c) << "." << endl;
        // Printing the median of three arguments
        cout << "The median is " << getMedian(a, b, c) << "." << endl;
        // Printing the number of characters in each integer used
        cout << "There are " << countDigits(a) 
             << " digits in the number " 
             << a << "." 
             << endl;
        cout << "There are " << countDigits(b)
             << " digits in the number "
             << b << "."
             << endl;
        cout << "There are " << countDigits(c)
             << " digits in the number " 
             << c << "."
             << endl;
        // Seperating the data with dashes
        cout << "--------------------------------------------\n";
    }
    return 0;
 }


// ****************************************************
//                       Main                         *
// ********************\/*\/*\/************************

int main() {
        // function outputing the average, median, and length of the integers user picks
        aveMedCnt();

    return 0;
}