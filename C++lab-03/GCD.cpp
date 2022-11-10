#include<iostream>
using namespace std;
int main(){
	int n1,n2,x;
	cout<<"Enter two number:"<<endl;
	cin>>n1>>n2;
	if(n1<n2)
	x=n1;
	else
	x=n2;
	again:if(n1%x==0 && n2%x==0){
		cout<<"GCD of "<<n1<<" and "<<n2<<" = "<<x;
	}else{
		x--;
		goto again;
	}
}
