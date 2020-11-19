#include <iostream>

using namespace std;

int main() {
    string s1;
    string s2;
    string s3;
    cout << "Enter string #1: ";
    getline(cin, s1);
    cout << "End string #2: ";
    getline(cin, s2);

    s3 = s1 + " " + s2;
    cout << "The combined string is: " << s3;

    return 0;
}