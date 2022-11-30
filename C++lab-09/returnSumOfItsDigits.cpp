#include<iostream>
using namespace std;
int InputNumbers(int n){
	int rem,sum=0;
	while(n){
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	return sum;
}
int main(){
	int n;
	cout<<"Enter any positive number:\n";
	cin>>n;
	cout<<"Sum of it's digits:"<<InputNumbers(n);
	return 0;
}
