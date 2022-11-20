#include<iostream>
using namespace std;
int main(){
	int percentage;
	cin>>percentage;
	if(percentage>=60){
		cout<<"First Division"<<endl;
	}else if(percentage >=50 && percentage>=59){
		cout<<"Second Division"<<endl;
	}else if(percentage >=40 && percentage>=49){
		cout<<"Third Division"<<endl;
	}else if(percentage <40){
		cout<<"Fail"<<endl;
	}
	return 0;
}
