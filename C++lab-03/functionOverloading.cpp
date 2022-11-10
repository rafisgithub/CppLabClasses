#include<iostream>
using namespace std;
int sum(int x,int y){
	return x+y;
}
double sum(double x,double y){
	return x+y;
}
float sum(int x,double y){
	return x+y;
}
char sum(char ch,char chh){
	cout<<ch<<chh;
}

int main(){
	cout<<sum(33,4)<<endl;
	cout<<sum(4.2 ,5.2)<<endl;
	cout<<sum(4,4.2)<<endl;
	cout<<sum('R','A');
}
