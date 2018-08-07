//Printing the adress stored in a char * variable.
#include <iostream>
using namespace std;
int main()
{
	const char *const word = "Shush";
	//display value of char * then display value of char *
	//static cast to void *
	cout<<"Value of word is: "<< word <<endl;
	cout<<"Value of static_cast<void *>(word) is:"<< static_cast< void * >( word ) << endl;
}
