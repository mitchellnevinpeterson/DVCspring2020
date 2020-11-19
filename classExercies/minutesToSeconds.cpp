#include <iostream>

using namespace std;

const int MINUTES_IN_HOUR = 60;
const int SECONDS_IN_MINUTE = 60;

int main() {

    int hours;
    int minutes;
    int seconds;

    cout << "Enter the number of hours: ";

    cin >> hours;
    // assigned a constant to the variable to multiply it with the number of hours input
    minutes = MINUTES_IN_HOUR * hours;
    seconds = SECONDS_IN_MINUTE * minutes;

    cout << "There are " 
        << seconds 
        << " seconds in " 
        << hours 
        << " hours." << endl;

    return 0;
}