//input any number from user and displays the total of it's digits
#include<iostream>
using namespace std;
int main(){
	int num,rem,sum=0;
	cout<<"Enter a number: "<<endl;
	cin>>num;
	while(num!=0){
		rem=num%10;
		sum=sum+rem;
		num/=10;
	}
	cout<<"Sum is = "<<sum;
}
