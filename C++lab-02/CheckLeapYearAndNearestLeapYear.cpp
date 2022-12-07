//Check Leap year if not then calculate the nearest leap year.
#include<iostream>
using namespace std;
int leapYear1(int year){
	int x;
	if(year%400==0 || (year%100!=0 && year%4==0)){
		return year;
	}else{
		x=year-1;
		leapYear1(x);
	}
}
int leapYear2(int year){
	int x;
	if(year%400==0 || (year%100!=0 && year%4==0)){
		return year;
	}else{
		x=year+1;
		leapYear2(x);
	}
}
int main(){
	int year;
	int q;
	int w;
	int dis1;
	int dis2;
	cout<<"Enter any year:\n";
	cin>>year;
	if(year%400==0 || (year%100!=0 && year%4==0)){
		cout<<year<<" is a leap year.\n";
	}else{
		q=leapYear1(year);
		w=leapYear2(year);
		dis1=year-q;
		dis2=w-year;
		if(dis1<dis2){
			cout<<year<<" is not a leap year.\n";
			cout<<"The nearest leap year is "<<q<<endl;
		}else{
			cout<<year<<" is not a leap year.\n";
			cout<<"The nearest leap year is "<<w<<endl;
		}
	}
}
