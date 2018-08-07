//Printing an integer with internal spacing and plus sign.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout<<internal<<showpos<<setw(10)<<-123<<endl;	
        cout<<internal<<noshowpos<<setw(10)<<123<<endl;
        cout<<internal<<showpos<<setw(10)<<123<<endl;

}
