#include <iostream>

using namespace std;

const double DISCOUNT_5 = 5.00, 
            DISCOUNT_10 = 10.00, 
            DISCOUNT_15 = 15.00; 

int main() {
    int mentions;
    int result;

    // asking the user how many times they mentioned the restaurants twitter tag
    cout << endl << "How many times did you mention Plesant Hill Sushi on Twitter?";
    cin >> mentions;

    result = (3 * 5) % 4 + 24 / (15 - (7 - 4));
    result = (3 * 5) % 4;
    cout << result << endl;

    if(mentions <= 4) {
        cout << "Congratulations, you qualified for a " << DISCOUNT_5 << "% discount!\n"; 
    }else if(mentions > 4 && mentions <=10) {
        cout << "Congratulations, you qualified for a " << DISCOUNT_10 << "% discount!\n";
    }else if(mentions > 10) {
        cout << "Congratulations, you qualified for a " << DISCOUNT_15 << "% discount!\n";
    }


    return 0;
}