//testing error states.
#include <iostream>
using namespace std;
int main()
{
	int integerValue;
	// display results of cin functions
	cout << "Before a bad input operation:"<< "\ncin.rdstate(): " << cin.rdstate()	<< "\ncin.eof(): " << cin.eof()<< "\ncin.fail(): " << cin.fail()<< "\ncin.bad(): " << cin.bad()<< "\ncin.good(): " << cin.good()<< "\n\nExpects an integer, but enter a character: ";
	cin >> integerValue; // enter character value
	cout << endl;
	// display results of cin functions after bad input
	cout << "After a bad input operation:"<< "\ncin.rdstate(): " << cin.rdstate()<< "\ncin.eof(): " << cin.eof()<< "\ncin.fail(): " << cin.fail()<< "\ncin.bad(): " << cin.bad()<< "\ncin.good(): " << cin.good() << endl << endl;
	cin.clear(); // clear stream
	// display results of cin functions after clearing cin
	cout << "After cin.clear()" << "\ncin.fail(): " << cin.fail()<< "\ncin.good(): " << cin.good() << endl;

}
