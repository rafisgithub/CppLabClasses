#include<iostream>
using namespace std;
int main(){
	int n1,n2,x;
	cout<<"Enter two number: "<<endl;
	cin>>n1>>n2;
	if(n1>n2)
	//here let x is our result
	x=n1;
	else
	x=n2;
	again: if(x%n1==0 && x%n2==0){
		cout<<"LCM of "<<n1<<" and "<<n2<<" is ="<<x;
	}else{
		x++;
		goto again;
	}
}
