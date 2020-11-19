#include <iostream>
#include <iomanip>

using namespace std;

const double TAXRATE = 1.0825;


int main() {

    double amt;
    double final;
    cout << "Enter a dollar amount: $";
    cin >> amt;

    final = TAXRATE * amt;
    cout << fixed << setprecision(2) 
        << "Your total amount including tax is: $" 
        << final << endl;

    int sum = 0, num = 1;
        while(num<=10)
        //accumulator
        {sum+=num;
        num++;
        cout << sum << endl;
        }
        


    return 0;
}