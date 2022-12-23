/*The call/pass by value method passing arguments to a function copies of the actual value of 
an argument int the formal parameter of the function.
In this case,changes made to the parameter inside the function have no effect on the argument.
*/

#include<iostream>
using namespace std;
//pass by value
void swap(int x,int y){
	int z;
	z=x;
	x=y;
	y=z;
}
int main(){
	int n1,n2;
	cout<<"Enter two number:\n";
	cin>>n1>>n2;
//	before swapping
    cout<<"Before swaping:\n";
	cout<<"first number :"<<n1<<"\n"<<"Second number :"<<n2<<"\n";
	//after swapping 
	swap(n1,n2);
	cout<<"After- swaping:\n";
	cout<<"first number :"<<n1<<"\n"<<"Second number :"<<n2<<"\n";
	return 0;
}
