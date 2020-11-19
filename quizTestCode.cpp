#include <iostream>
using namespace std;

void printWithStars(int val) {
        cout << "****" << val << endl;
    }

void countUpTo(int start, int maxNum) {
    cout << start << endl;
    if (start == maxNum) {    
        return;
    }    
    countUpTo(start + 1, maxNum);
    }

int main() {
    int howManyPizzas = 10;
    double pizzaCost = 15.00;
    int numSlices = 8;
    cout << howManyPizzas << " pizzas will cost $" << howManyPizzas * pizzaCost << " and you will have " << howManyPizzas * numSlices << " slices." << endl;

    double myValue = 7.0/2;

    int number = 888;
    int *var = &number;
    cout << var << endl;
    
    cout << myValue << endl;

    int a = 1;
    int *aPtr = &a;
    cout << *aPtr << endl;

    int index = 4;
    int myValues[index];

    cout << myValues[index] << endl;

    cout << *(myValues + index + 1) << endl;

    // int z = 10;
    // int *zPtr = &z;

    // *zPtr = 11;
    // zPtr = 0;

    // cout << z << endl;

    int i = 0;
    int z = 6;
    while (true) {
        if (i++ < z) {
            cout << "Testing" << i << endl;
        } else
            break;
    }

    int selections[] = { 10, 3, 2 };
    

    printWithStars(selections[2]);

    countUpTo(1,6); 

    int heights[3][3] = { 
    { 1, 3, 2}, 
    { 2, 1, 3}, 
    { 1, 2, 3}
    };

    for (i = 0; i < 3; i++) {
        cout << heights [i][0] << endl;
    }

    
    int playerNumbers[5] = { 1, 3, 2, 9, 10 };
    for (int i = 0; i < 5; i++) {
        cout << playerNumbers[i] << endl;
    }
    double listOfPrices1[55];

    return (0);
    }