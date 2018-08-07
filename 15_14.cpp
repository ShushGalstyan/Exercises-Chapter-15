//Using stream manipulator showbase.
#include <iostream>
using namespace std;
int main()
{
	int x = 100;
	//using showbase to show number base
	cout<<"Printing integers preceded by their base:"<<endl<<showbase;
	cout<<x<<endl;
	cout<<hex<<x<<endl;
	cout<<dec<<x<<endl;
	cout<<oct<<x<<endl;	
}
