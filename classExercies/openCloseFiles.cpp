#include <iostream>
#include <fstream>
// This file prints out the line length of each line in a file
using namespace std;

int main()
{
    // ifstream myFile("computer.txt");
    ifstream myFile;
    string tmpstr;
    string fileName;

    cout << "What is the name of the file?";
    cin >> fileName;

    myFile.open(fileName.c_str());

    while (getline(myFile, tmpstr)) {
        int thisLineLength = tmpstr.size();
        cout << "Got a line of length: "
             << thisLineLength << endl;
    }
    myFile.close();

    return 0;
}
