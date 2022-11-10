//swap two numbers without third variables
#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"Enter two numbers\n";
	cin>>x>>y;
	x=x+y;//22
	y=x-y;
	x=x-y;
	cout<<"x="<<x << "  y="<<y;
}
