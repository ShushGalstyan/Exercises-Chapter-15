//using stream manipulators hex, oct, dec and setbase.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int number;
	cout<<"Enter a decimal number: ";
	cin>>number;
	//use hex stream manipulator to show hexadecimal number
	cout<<number<< " in hexadecimal is: "<<hex<<number<<endl;
	//use oct stream manipulator to show octal number
	cout<< number <<" in ocatal is: "<<oct<<number<<endl;
	//use dec stream manipulator to show decimal number
	cout<<number<<" in decimal is: "<<dec << number<<endl;
	cout<<setbase(10)<<number<<" in decimal is: "<<number <<endl;
}
