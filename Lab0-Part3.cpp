#include <iostream>
#include <string>
using namespace std;
int main(){
    cout << "Mitchell Peterson\n";
    cout << "Oakland, California\n";
    string firstName, lastName;
    firstName = "\tMitchell";
    lastName = "\t\tPeterson";
    cout << firstName << endl;
    cout << lastName << endl;
    float distance;
    float scientificNotation;
    scientificNotation = 9.8e-4;
    distance = .00098;
    cout << distance << endl;
    cout << scientificNotation << endl;
    int miles = 50, hours = 1;
    cout << "We were beginning a " << miles << " mile trip, it took us " << hours << " hour.";
        return 0;
}