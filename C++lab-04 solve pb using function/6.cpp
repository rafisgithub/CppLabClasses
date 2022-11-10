//write a function that gets any positive numberand returns its factorial
#include<iostream>
using namespace std;
int factorial(int x){
	return x;
}
int main(){
	int n,fact=1,i;
	cin>>n;
	for(i=1;i<=n;i++){
		fact*=i;
	}
cout<<"Factorial ="<<factorial(fact);
	return 0;
}
