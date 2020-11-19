#include <iostream>

using namespace std;

// Prototypes for our functions below.  If the definitions
// (code) for these functions are BEFORE main(), you do not
// need these prototypes.
//
// Note only the types (int, etc.) are given here, not the
// variable names.
double calculateMean(int, int, int);
int printItandDouble(int);

// This is a pass-by-reference function example.  It will set
// the argument to 10.
void setToTen(int &a) {
    a = 10;
}

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int z;

    // Call the function printItandDouble() with 'a' (equal to 1
    // here)
    z = printItandDouble(a);
    cout << z << endl;

    // Here, the return value of calculateMean is printed
    // (a double)

    cout << "The mean is: " << calculateMean(a, b, c) << endl;

    // This will set 'a' to 10 because it is passed by reference.
    cout << "'a' before the call: " << a << endl;
    setToTen(a);
    cout << "'a' after the call: " << a << endl;

    return 0;
}

// This function prints its argument (notice it is named 'num' here,
// a copy) and returns the double of it.
int printItandDouble(int num) {
    cout << "Num is: " << num << endl;
    return (num * 2);
}

// Calculate and return the mean of the three numbers.
double calculateMean(int a, int b, int c) {
    double mean;
    mean = (a + b + c) / 3.0;
    return (mean);
}
