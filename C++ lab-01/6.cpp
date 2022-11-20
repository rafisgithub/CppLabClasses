#include<iostream>
using namespace std;
int main(){
	int divisor,dividend,quotient,reminder;
	cout<<"Enter dividend: ";
	cin>>dividend;
	cout<<"Enter divisor: ";
	cin>>divisor;
	quotient=dividend/divisor;
	reminder=dividend%divisor;
	cout<<"Quotient="<<quotient<<endl;
	cout<<"Reminder ="<<reminder<<endl;
	return 0;
}
