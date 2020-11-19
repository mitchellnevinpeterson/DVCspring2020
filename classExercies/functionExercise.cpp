#include <iostream>
#include <iomanip>

using namespace std;

// ****************************************************
//                     Functions                      *
// ********************\/*\/*\/************************

// Calulating the median of three arguments
int calulateMedian(int a, int b, int c) {
    // declaring the int to return the value of the median
    int median;
    // if statements to determine which number is in the middle
    if (a > b && a < c) {
        median = a;
    }
    if (b > a && b < c) {
        median = b;
    }
    if (c > a && c < b) {
        median = c;
    }
    return (median);
}

// Calulating the average and then returning that value doubled, three arguments
double averageDoubled(double a, double b, double c) {
    // declaring the int to return the value of the median
    double average = 0.00;
    double doubled = 0.00;

    // calulating the average of the three parameters
    average = (a + b + c)/3;
    // Doubling the value of the average
    doubled = average * 2;

    return (doubled);
}

// converting celcius to fehrenheit
double convertCelcius() {
    // declaring the int to return the value of the median
    double fehrenheit = 0.00;
    double celcius = 0.00;
    
    cout << "Enter degrees Celcius: ";
    cin >> celcius;
    cout << "\nThat is ";
    // converting celcus to fehrenheit
    fehrenheit = ((9.0/5.0) * celcius) + 32;

    return (fehrenheit);
}

int doubleNumber(int a) {
        int d = (2 * a);
        cout << a << " doubled is: " << d << endl;
        exit (0);
    }

// ****************************************************
//                       Main                         *
// ********************\/*\/*\/************************

int main() {
    // Seperating the data with dashes
    cout << "\n-----------------------------------------------";
    // printing the median of three arguments
    cout << "\nYour median is: " << calulateMedian( 10000, 100, 999) << endl << endl;
    // printing the median of three arguments
    cout << "Your median is: " << calulateMedian(45, 33, 54) << endl << endl;
    // printing the average doubled of three arguments
    cout << "Your average number doubled is: " 
    << fixed << setprecision(2) 
    << averageDoubled (677, 89, 99) << endl << endl;
    // printing the median of three arguments
    cout << fixed << setprecision(1) 
    << convertCelcius() << " degrees Fehrenhneit" << endl;
    // Seperating the data with dashes
    cout << "-----------------------------------------------\n";

    int x = 0;
    for (int count = 0; count < 3 ; count++)
        x += count;
    cout << x << endl;
    
    int a = 60;
    int b = 15;
    int quarterlyTotal = 10;

  
    double average;
    average = ()/3;
    cout << average;

    return 0;
}