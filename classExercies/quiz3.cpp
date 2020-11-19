#include <iostream>
#include <iomanip>

using namespace std;


// ****************************************************
//                       Main                         *
// ********************\/*\/*\/************************

int main() {
    
    // Acculating the amount of calories per hour
    cout << "\nThe average runner burns 140 calories per hour." << endl;
    cout << "-----------------------------------------------\n";
    cout << "Below is a chart of over 5 hours: \n";
    for (int hour = 1; hour <= 5; hour++) {
        int calories = 0;
        calories += hour * 140;
        cout << "After " << hour 
        << " hour you burned: " << calories << endl;
    }
    cout << "-----------------------------\n";

    int z = 5;
    while (z <= 90) {
        cout << z << " " << z * z << endl;
        z += 5;
    }

    return 0;
}