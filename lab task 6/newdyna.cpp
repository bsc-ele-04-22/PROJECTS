#include <iostream>
using namespace std;

int main() {

int* pA = new int;
string* pEnd = new string;

cout << "enter an integer:";
cin >>*pA;

cout << "enter a string:";
cin >>*pEnd;

cout<<""<<*pA<<endl;
cout<<""<<*pEnd<<endl;

// deallocate memo
delete pA;
delete pEnd;

}