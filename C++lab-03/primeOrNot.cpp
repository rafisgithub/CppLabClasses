#include<iostream>
using namespace std;
int main(){
	int num,i,flag=0;
	cin>>num;
	for(i=1;i<=num;i++){
		if(num%i==0){
			flag++;
		}
	}if(flag==2){
		cout<<num<<" is a prime number."<<endl;
	}else{
		cout<<num<<" is not a prime number."<<endl;
	}
}
