// Contrasting input of a string via cin and cin.get.
#include <iostream>
using namespace std;
int main()
{
	// create two char arrays, each with 80 elements
	const int SIZE = 80;
	char buffer1[SIZE];
	char buffer2[SIZE];
	//use cin to input character into buffer1
	cout<<"Enter a sectance: ";
	cin>> buffer1;
	//dispalay buffer1 contents
	cout<<"\nThe string read with cin was "<<endl;	
	cout<<buffer1<<endl<<endl;
	//using cin.get to input characters into buffer2
	cin.get(buffer2, SIZE);
	//dispalay buffer2 contents
	cout<<"The string read with cin.get was:"<<endl<<buffer2<<endl;
}
