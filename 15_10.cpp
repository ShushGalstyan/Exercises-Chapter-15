// Controlling the printing of trailing zeros and
// decimal points in floating-point values.
#include <iostream>
using namespace std;
int main()
{
	// display double values with default stream format
	cout << "Before using showpoint" << endl
		<< "9.9900 prints as: " << 9.9900 << endl
		<< "9.9000 prints as: " << 9.9000 << endl
		<< "9.0000 prints as: " << 9.0000 << endl << endl;
	cout <<showpoint<< "After using showpoint" << endl
                << "9.9900 prints as: " << 9.9900 << endl
                << "9.9000 prints as: " << 9.9000 << endl
                << "9.0000 prints as: " << 9.0000 << endl << endl;
}
