//sum of series 1^3+2^3+3^3+4^3......+n^3
#include<iostream>
using namespace std;
int main(){
	int num,i,sum=0;
	cin>>num;
	for(i=1;i<=num;i++){
		sum+=i*i*i;
	}
	cout<<"Sum = "<<sum;
}
