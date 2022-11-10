#include<iostream>
using namespace std;
int main(){
	int num,square,cube;
	cin>>num;
	if(num%2==0){
		square=num*num;
		cout<<"Square of "num<< "="<<square<<endl;
	}else{
		cube=num*num*num;
		cout<<"Cub of "num<< "="<<cube<<endl;
	}
}
