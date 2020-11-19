#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const string CITY1 = "Concord";
	const string YEAR1 = "1905";
	const float SIZE1 = 30.54;
	const int POP1 = 122068;

	const string CITY2 = "Martinez";
	const string YEAR2 = "1876";
	const int SIZE2 = 13.63;
	const int POP2 = 35824;

	const string CITY3 = "Pleasant Hill";
	const string YEAR3 = "1961";
	const float SIZE3 = 7.08;
	const int POP3 = 33152;

	const string CITY4 = "Walnut Creek";
	const string YEAR4 = "1914";
	const float SIZE4 = 19.77;
	const int POP4 = 64173;

	cout << setw(14) << left << "CITY" 
	     << setw(10) << left << "YEAR"
		 << setw(10) << left << "AREA" 
	     << setw(10) << left << "POPULATION" << endl;

	cout << "----------------------" <<
		"----------------------" << endl;

	cout << setw(14) << left << CITY1
	     << setw(10) << left << YEAR1 
		 << setw(10) << left
		 << setprecision(1) << SIZE1
		 << setw(10) << left << POP1 << endl;

	cout << setw(14) << left << CITY2
	     << setw(10) << left << YEAR2 
		 << setw(10) << left
		 << setprecision(1) << SIZE2
		 << setw(10) << left << POP2 << endl;

	cout << setw(14) << left << CITY3
	     << setw(10) << left << YEAR3 
		 << setw(10) << left
		 << setprecision(1) << fixed << SIZE3
		 << setw(10) << left << POP3 << endl;

	cout << setw(14) << left << CITY4
	     << setw(10) << left << YEAR4 
		 << setw(10) << left
		 << setprecision(1) << SIZE4
		 << setw(10) << left << POP4 << endl;
   return 0;
}
