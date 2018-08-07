//display floating-point values in system default.
#include <iostream>
using namespace std;
int main()
{
	double x = 0.123456;
	double y = 1.946e9;
	//display x and y indefault format
	cout<<"Dispalyes in default format:"<<endl<<x << '\t'<<y<<endl;
	//dispaly x and y in scientific format
	cout<<"Display in scientific format:"<<endl<< scientific<<x <<'\t'<<y<<endl;
	//display x and y in fixed format
	cout<<"Display in fixed format:"<<endl<<fixed<<x<<'\t'<< y<<endl;
}
