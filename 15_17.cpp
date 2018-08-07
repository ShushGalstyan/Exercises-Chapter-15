// Demonstrating stream manipulators boolalpha and noboolalpha.
#include <iostream>
using namespace std;
int main()
{
	bool booleanValue = true;
	//display default true booleanValue
	cout<<"BooleanValue is: " <<booleanValue<<endl;
	//display booleanValue after using boolalpha
	cout<<"booleanValue(after using boolalpha) is: "<<boolalpha<<booleanValue<<endl<<endl;
	cout<<"switch booleanValue and use nobolllalpha"<<endl;
	booleanValue = false;//change boolalpha
	cout<<noboolalpha;//use noboolalpha
	//display default false boolValue after using noboolalpha
	cout<<"booleanValue is: "<<booleanValue<<endl;
	//display booleanValue after using boolalpha again
	cout<<"booleanValue (after using boolalpha) is: "<<boolalpha<<booleanValue<<endl;
}
	
