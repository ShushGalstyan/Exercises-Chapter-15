//using member function get put and eof
#include <fstream>

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int character;//use int becouse char cannot represent EOF
	//promt user to enter line of text
	cout<<"Before input, cin.eof() is: "<< cin.eof()<<endl;
	cout<<"Enter a sentence followed by end-of-file: "<<endl;
	// use get to read each character; use put to display it
	while ( ( character = cin.get() ) != '.' )
		cout.put( character );
	//display end-of-file character
	cout<<"\nEOF in this system is: "<<character<<endl;
	cout<<"After input of EOF, cin.eof() is "<< cin.eof()<<endl;
	
}
