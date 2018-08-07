//unformatted I/O using read write and gcount.
#include <iostream>
using namespace std;
int main()
{
	const int size = 50;
	char buffer[size];
	//using function read to input charcter into buffer
	cout<< "Enter a sentence: ";
	cin.read(buffer, 20);
	//use function write and gcount to display buffer charcter
	cout<<endl<<"The sentence entered was: ";
	cout.write(buffer, cin.gcount());
	cout<< endl;
	
}
