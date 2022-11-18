#include<iostream>
using namespace std;
int main(){
	int year;
	while(1){
	cin>>year;
	if(year%400==0 || (year%100!=0 && year%4==0)){
		cout<<year<<" is a Leap Year"<<endl;
	}else{
		cout<<year<<" is not a leap year"<<endl;
		cout<<"The nearest leap year:"<<++year;
	}
	}
}
