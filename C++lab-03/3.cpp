//sum of series 1^2+2^2+3^2+4^2......+n^2
#include<iostream>
using namespace std;
int main(){
	int num,i,sum=0;
	cin>>num;
	for(i=1;i<=num;i++){
		sum+=i*i;
	}
	cout<<"Sum ="<<sum;
}
