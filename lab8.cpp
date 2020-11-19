#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// ****************************************************
//                     Functions                      *
// ********************\/*\/*\/************************

// A function to determine leap years
string findLeapYear (int year) {
    // Determining if the year is divisible by 4 equally
    int remainder = year % 4;
    string leapYear;

    // If there is no remainder of year/4 then it IS a leap year
    // If there is a remainder then it is NOT a leap year
        if (remainder == 0) {
            leapYear = "a leap year!";
        } else {
            leapYear = "not a leap year.";
        }
        return (leapYear);
}

// ****************************************************
//                     Constants                      *
// ********************\/*\/*\/************************

// The number of months in a year
const int NUM_MONTHS = 12;


// ****************************************************
//                       Main                         *
// ********************\/*\/*\/************************

int main() {

// The arrays used to store data about the months******

    string monthStored[NUM_MONTHS] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int days[NUM_MONTHS] = {
        31,
        28,
        31,
        30,
        31,
        30,
        31,
        31,
        30,
        31,
        30,
        31
    };
    string romanNum[NUM_MONTHS] = {
        "I",
        "II",
        "III",
        "IV",
        "V",
        "VI",
        "VII",
        "VIII",
        "IX",
        "X",
        "XI",
        "XII"
    };
    string monthFact[NUM_MONTHS] = {
        "was named Iauarius after the god Janus.",
        "was named Februarius after the Roman festival called Februa.",
        "was named Martius after the god named Mars.",
        "was named Aprilis, meaning 'to open'.",
        "was named Maius after the goddess named Maiesta.",
        "was named Junius after the god named Juno.",
        "was named Iulius after Julius Caesar.",
        "was named Augustus after Augustus Caesar.",
        "was named September after Septum, meaning 'seven'.",
        "was named October after Octo, meaning 'eight'.",
        "was named November after Novem, meaning 'nine'.",
        "was named December after Decem, meaning 'ten'."
    };
// The vaiables used to store user inputs and other data *****************************************
    int i,
        year;
    string month;

// Start of application ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    cout << "\n******************************************************\n\n";
    cout << "* Enter a value of -1 at anytime if you wish to exit the program *" << endl << endl;
    cout << "For accuracy we need to determine if it is a leap year." << endl;

// Year -- User enters a year so the program will know whether or not to add a day to Febraury
    while (month != "-1") {
        cout << "\nEnter the year: ";
        cin >> year;
        // if the user enters an invalid input
        if ( year < -1 || cin.fail() ) {
            // Error message
            cout << "\n* Invalid input, please enter a year. *\n";
            // clearing the cin
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        // An if statement to exit the program
        if (year == -1) {
            cout << "\nExiting...\n";
            break;
        }
        // If user enters a past year this statement will run
        if (year < 2020) {
            if(year < 2000){
                cout << "\n\tWhat a blast from the past!";
            }
            cout << "\n\tYear " 
                 << year << " was " 
                 << findLeapYear(year)
                 << endl
                 << endl;
            cout << "* Enter a value of -2 to submit a different year. * ";
        }
        // If user enters a future year or current year this statement runs
        if(year >= 2020) {
             if(year > 2070){
                cout << "\n\tDo you plan on still being alive in " 
                     << year 
                     << "?!";
            }
            cout << "\n\tYear " 
                 << year 
                 << " is " 
                 << findLeapYear(year)
                 << endl
                 << endl;
            cout << "* Enter a value of -2 to submit a different year. * ";
        }
// Month -- user will enter which month they want to learn about *********************************
        while (!0) {
            cout << "\n\nEnter the month you want to learn about: ";
            cin >> month;
            // An if statement to exit the program
            if (month == "-1") {
                cout << "\nExiting...\n";
                break;
            }
            // An if statement to enter a different year
            if (month == "-2") {
                break;
            }
            // Capitizing the first letter of the month name to match array data
            if( !month.empty() ) {
                month[0] = toupper( month[0] );

                for (int n = 1; n < month.length(); n++) {
                    month[n] = tolower(month[n]);
                }
            }
            
            // Looping through the array with all the months
            for (i =0; i < NUM_MONTHS; i++) {
                if (monthStored[i] == month) {
                    break;
                }
            }
            // If the user enters an invalid month name
            if (i == NUM_MONTHS) {
                cout << endl
                     << "\t"
                     << month << " is spelled wrong or not a month. Well, not in English at least.";
                continue;
            }
            // Adding a day to February if it is a leap year
            if ((year % 4) == 0 && month == "February") {
                days[i] += 1;
            }
// Printing to the the screen infomation about the users month ***********************************
            // Telling the user how many days are in the month they chose
            cout << endl
                 << "\tThere are "
                 << days[i]
                 << " days in "
                 << month 
                 << ", for year "
                 << year
                 << "." 
                 << endl;
            // Telling the user the Roman numeral number for the month they chose
            cout << "\t"
                 << month
                 << " is the "
                 << romanNum[i]
                 << " month in Roman numerals."
                 << endl;
            // Telling the user an ancient Roman calendar fact for the month they chose
            cout << "\tIn ancient Rome it "
                 << monthFact[i] 
                 << endl;
        }
    }
    cout << "\n******************************************************\n\n";

    return 0;
}

