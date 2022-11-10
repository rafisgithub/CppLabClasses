//Write a C++ program that take two functions that gets three integers and return maximum and minimum value
#include<iostream>
using namespace std;
int maximum(int x,int y,int z){
	if(x>=y && x>=z){
		return x;
	}else if(y>=x && y>=z){
		return y;
	}else{
		return z;
	}
}
int minimum(int x,int y,int z){
	if(x<=y && x<=z){
		return x;
	}else if(y<=x && y<=z){
		return y;
	}else{
		return z;
	}
}
int main(){
	int n1,n2,n3;
	cout<<"Enter three numbers:"<<endl;
	cin>>n1>>n2>>n3;
	cout<<"The maximum value is ="<<maximum(n1,n2,n3)<<endl;
	cout<<"The minimum value is ="<<minimum(n1,n2,n3)<<endl;
	return 0;
}
