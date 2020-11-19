#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int firstNum, secondNum;
    
    cout << "Enter a number: ";
    cin >> firstNum;
    cout << "Enter one more number: ";
    cin >> secondNum;

    if((firstNum + secondNum) > 100) {
        cout << "Your number is greater than 100!" << endl;
    }else {
        cout << "Your number is too low. Please enter larger numbers." << endl;
    }


    return 0;
}