//createing and testing user-defined, nonparametrized stream manipulators.
#include <iostream>
using namespace std;
//bell manipulator (using escape sequance \a)
ostream& bell(ostream& output)
{
	return output<<'\a'; //issue system beep
}
// carriageReturn manipulator (using escape sequence \r)
ostream& carriageReturn( ostream& output )
{
	return output << '\r'; // issue carriage return
} // end carriageReturn manipulator
// tab manipulator (using escape sequence \t)
ostream& tab( ostream& output )
{
	return output << '\t'; // issue tab
} // end tab manipulator
// endLine manipulator (using escape sequence \n and member
// function flush)
ostream& endLine( ostream& output )
{
	return output << '\n' << flush; // issue endl-like end of line
} // end endLine manipulator
int main()
{
	//use tab and endline manipulator
	cout<<"Testing the tab manipulator:"<<endLine;
	cout<<'a'<<tab<<'b'<<tab<<'c'<<endLine;
	cout<<"Testing the carriageReturn and bell manipulators:"<< endLine << "..........";
	cout<<bell; //use bell	manipulator
	//use carriageReturn and endLine manipulators
	cout<<carriageReturn << "------"<<endLine;
}
