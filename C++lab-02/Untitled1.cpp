#include<iostream>
using namespace std;
int m1(int n){
	if(n<=1){
		return 1;
	}else{
		return n*m1(n-1);
	}
}	
int main(){
	int num,f;
	cout<<"Enter any number:"<<endl;
	cin>>num;
	f=m1(num);
	cout<<"Factorila of "<<num <<" is ="<<f;
}
