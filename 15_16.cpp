//stream manipulator uppercase.
#include <iostream>
using namespace std;
int main()
{
	cout<<"Printing uppercase letters in scientific"<<endl<<"notation exponents and hexadecimal values:"<<endl;
	// use std:uppercase to display uppercase letters; use std::hex and
	// std::showbase to display hexadecimal value and its base
	cout<<uppercase << 4.125e10<<endl;
	cout<<hex<<showbase<<12346789<<endl;
}
