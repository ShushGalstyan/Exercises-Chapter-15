//Demonstarting the flags member function
#include <iostream>
using namespace std;
int main()
{
	int integerValue = 10;
	double doubleValue = 0.023145;
	//dispaly flags value, int and double values(oriiginal format)
	cout<<"The value of the flags variables is: "<< cout.flags()<<endl<<endl<<"Print int and double in original format:\n "<<integerValue<< '\t'<<doubleValue<<endl;
	//use cout flags function to save original format
	ios_base::fmtflags originalFormat= cout.flags();
	cout<<showbase<<oct<<scientific;	//change format
	//dispal flags value, int anf doubel values(new format
	cout<<"The value of the flags variables is:" <<cout.flags()<<endl<<"Print int and doubel in a new format:"<<endl<<integerValue<<'\t'<<doubleValue<<endl;
	cout.flags(originalFormat);	//restor format
	cout<<"The restored value of the flags vaiables is:"<<cout.flags()<<endl<<"Print values in original foramt again:"<<endl<<integerValue<< '\t'<<doubleValue<<endl;
	
}
