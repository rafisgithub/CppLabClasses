//write a function to check prime number using defined function
#include<iostream>
using namespace std;
int primeNumber(){
	int n,i,counter=0;
	cout<<"Enter a number"<<endl;
	cin>>n;
	for(i=2;i<n/2;i++){
		if(n%i==0){
			counter++;
		}
	}if(counter==0){
		cout<<"Prime number"<<endl;
	}else{
		cout<<"Not Prime number"<<endl;
	}
}
using namespace std;
int main(){
	primeNumber();
	return 0;
}
