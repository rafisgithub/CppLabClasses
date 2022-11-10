//counts the number of digits of an number
#include<iostream>
using namespace std;
int main(){
	int num,counter=0;
	cout<<"Enter an integer: "<<endl;
	cin>>num;
	while(num!=0){
		num/=10;
		counter++;
	}
	cout<<"The number of digits="<<counter;
}
