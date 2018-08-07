//Using member function fill and stream manipulator setfill to change tha padding character for fields larger than the printed value.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int x =10;
	//display x
	cout<< x << " printed as int right and left justified\n"<< "and as hex with internal justification.\n"<< "Using the default pad character (space):" << endl;
	//dispaly x with base
	cout<<showbase<<setw(10)<<x<<endl;
	//display x with left justfication
	cout<<left<<setw(10)<<x<<endl;
	//display x hex with internal justfication
	cout<<internal<<setw(10)<<hex<<x<<endl;
	cout<<"Using various padding characters:"<<endl;
	//display x using padded characters(rigth justfication)
	cout<<right;
	cout.fill('&');
	cout<<setw(10)<<x<<endl;
	// display x using padded characters (left justification)
	cout<<left<<setw(10)<<setfill('#')<<x<<endl;
	//// display x using padded characters (internal justification)
	cout<<internal<<setw(10)<<setfill('*')<<oct<<x<<endl;
}
