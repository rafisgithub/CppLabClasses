//sum of series 1+2+3+4......+n
#include<iostream>
using namespace std;
int main(){
	int num,i,sum=0;
	cin>>num;
	for(i=1;i<=num;i++){
		sum+=i;
	}
	cout<<"Sum = "<<sum<<endl;
}
