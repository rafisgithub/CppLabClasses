/*The call/Pass by reference method of passing arguments to a function copies the reference of an argument
into the formal parameter.
Inside this function,the reference is used to access the actual argument used inthe call.This means that changes made to the parameter affect
the passed argument.
*/
#include<iostream>
using namespace std;
//pass by value
void swap(int &x,int &y){
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
