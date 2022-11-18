#include<iostream>
using namespace std;
int main(){
	int percentage;
	while(1){
	int totalMarks=0,parcentage=0,marks[100];
			cout<<"Enter any three subject marks:"<<endl;
			for(int i=0;i<3;i++){
				cin>>marks[i];
			}
			for(int i=0;i<3;i++){
				totalMarks=totalMarks+marks[i];
			}
			parcentage=(totalMarks*100)/300;
			
			if(parcentage>=60 && parcentage<=100){
				cout<<"First division"<<endl;
			}else if(parcentage>=50 && parcentage<=59){
				cout<<"Second division."<<endl;
			}else if(parcentage>=40 && parcentage<=49){
				cout<<"Third division."<<endl;
			}else{
				cout<<"Fail!"<<endl;
			}
		}
	}

