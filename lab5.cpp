#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {

    // ----------------------------------------------------------------------------
    // --------------Opening File Section-Getting User Input-----------------------
    // --\/---\/---\/---\/---\/---\/---\/---\/---\/---\/---\/---\/---\/---\/---\/--

    // Setting the variables to used in the file open proccess
    ifstream inFile;
    string fname;

    // Asking user for a valid file name repeatedly until one is entered correctly
    do {
        if (!inFile.good()) {
            cout << "\nInvalid filename, try again.\n";
            cout << "-----------------------------";
        }
        // Ask the user for a fileneame
        cout << "\nEnter the filename to open?: ";
        cin >> fname;
        inFile.open(fname.c_str());
    } while(!inFile.good());
    // At this point the file is valid and open, the code below can now be executed

    // ----------------------------------------------------------------------------
    // --------------File Read Section-Looping through the Data--------------------
    // --\/---\/---\/---\/---\/---\/---\/---\/---\/---\/---\/---\/---\/---\/---\/--

    // The integers used for shorting out the file data
    int allTweetsTotal = 0;
    int numOfTweets = 0;
    int thisTweetsLength = 0;
    int longestTweet = 0;
    int shortestTweet = 999;
    int numIDs = 0;
    int numHashtags = 0;

    // Getting the lines of text in the file user wants to open
    string line;
    // ------------------- Start of file read/ Start of while loop-----------------
    while (getline(inFile, line)) {
        numOfTweets++;
        // Get the length of the current tweet
        thisTweetsLength = line.size();
        allTweetsTotal += thisTweetsLength;

        // Comparing each line to see if it longer than the value of longestTweet
        if (thisTweetsLength > longestTweet) {
            longestTweet = thisTweetsLength;
        }

        // Comparing each line to see if it shorter than the value of longestTweet
        if (thisTweetsLength < shortestTweet) {
            shortestTweet = thisTweetsLength;
        }

        // counting the @ symbol, used to determine how many IDs
        numIDs += count(line.begin(), line.end(), '@');

        // counting the # symbol, used to determine how many Hashtags
        numHashtags += count(line.begin(), line.end(), '#');
    }

    // ~~~~~~~~~~~~~~~~~ ->|<- Closing The File ->|<- ~~~~~~~~~~~~~~~~~~~~
    inFile.close();

    // ----------------------------------------------------------------------------
    // --------------Cout Section-Printing Data to the Console---------------------
    // --\/---\/---\/---\/---\/---\/---\/---\/---\/---\/---\/---\/---\/---\/---\/--

    // Adding a row of dashes for seperation and easy reading
    cout << "\n------------------------------------------------------\n";

    // Title of the information below
    cout << "\tAnalysis for file " << fname << endl << endl;
    
    // Printing the number of Hashtags used
    cout << "\tHashtags: \t\t\t" << numHashtags << endl;

    // Printing the number of IDs 
    cout << "\tTwitter IDs: \t\t\t" << numIDs << endl;

    // Printing the total amount of tweets
    cout << "\tTotal number of tweets: \t" << numOfTweets << endl;

    // Printing the length of the longest tweet
    cout << "\tLength of the longest tweet: \t" << longestTweet << endl;

    // Printing the length of the shortest tweet
    cout << "\tLength of the shortest tweet: \t" << shortestTweet << endl;

    // Printing the average length of each tweet
    cout << fixed << setprecision(2)
         << "\tAverage length of tweets: \t"
         << (double)allTweetsTotal / numOfTweets << endl;

    // Adding a row of dashes for seperation and easy reading
    cout << "------------------------------------------------------\n\n";

    return 0;
}