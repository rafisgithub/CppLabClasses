//Check Leap year if not then calculate the nearest leap year.
#include<iostream>
using namespace std;
int LeapYear1(int year){
	int x;
	if(year%400==0 || year%100!=0 && year%4==0){
		return year;
	}
	x=year-1;
	LeapYear1(x);
}
int LeapYear2(int year){
	int x;
	if(year%400==0 || (year%100!=0 && year%4==0)){
		return year;
	}
	x=year+1;
	LeapYear2(x);
}
int main(){
	int year;
	int q;
	int w;
	int dis1;
	int dis2;
	cout<<"Enter a year.\n";
	cin>>year;
	if(year%400==0 || (year%100!=0 && year%4==0)){
		cout<<year<<" is a leap year.\n";
	}else{
		q=LeapYear1(year);
		w=LeapYear2(year);
		dis1=year-q;
		dis2=w-year;
		if(dis1<dis2){
			cout<<year<<" is not a leap year.\n";
			cout<<"Nearest Leap year "<<q;
		}else{
			cout<<year<<" is not a leap year.\n";
			cout<<"Nearest Leap year "<<w;
		}
		
	}
	return 0;
}
