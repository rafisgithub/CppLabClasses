#include<iostream>
using namespace std;
int main(){
	int n1,n2,temp;
	cout<<"Enter first number: ";
	cin>>n1;
	cout<<"Enter second number: ";
	cin>>n2;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"After swapping first num ="<<n1<< "and sencond number = "<<n2;
	
}
