#include <iostream>
#include <string>

// Starter file for Lab #1.

using namespace std;

// Variables defined like this area named constants.  They have 'const' before them
// to tell the compiler that we do not expect their values to change (if we
// try to change it later, we'll get an error).  NUM_RESTAURANTS is an
// example constant.  You will need to add 3 more.
const int NUM_RESTAURANTS = 10;
const string TOPNAME = "Brasas Do Brazil Churrascaria";
const string TOPTYPE = "Brazilian Steakhouse";
const int TOPREVIEWS = 640;
const string SR3_5 = "(3.5 stars)", SR4 = "(4 stars)", SR4_5 = "(4.5 stars)";
const string TOP1 = "1) Brasas Do Brazil Churrascaria ", TOP2 = "2) Yaedam Korean BBQ ", TOP3 = "3) Fresh Tray ", TOP4 = "4) Ohgane ", TOP5 = "5) Lima ", TOP6 = "6) Shabuya ", TOP7 = "7) Puesto ", TOP8 = "8) Eureka! ", TOP9 = "9) Yard House ", TOP10 = "10) Gen Korean BBQ House ";
// This is the entry point to your program.
int main()
{
    // Header of list
    cout << "The top " << NUM_RESTAURANTS << " resturaunts in Concord are:\n";

    // The list of top restaurants in Concord, CA
    cout << TOP1 << SR4_5 << endl;
    cout << TOP2 << SR4_5 << endl;
    cout << TOP3 << SR4_5 << endl;
    cout << TOP4 << SR4 << endl;
    cout << TOP5 << SR4 << endl;
    cout << TOP6 << SR4_5 << endl;
    cout << TOP7 << SR4 << endl;
    cout << TOP8 << SR4 << endl;
    cout << TOP9 << SR3_5 << endl;
    cout << TOP10 << SR3_5 << endl;
    
    // The top restaurant
    cout << "The top restaurant " << TOPNAME << " is a " << TOPTYPE << " and has " << TOPREVIEWS << " reviews.";
    

    // Since main() is a function with an 'int' type (we'll learn more about
    // this later), we need to return 0 here.  This should always be
    // the last line in your program before the last curly brace (}).
    return 0;
}
