//write a function that gets any positive number and returns digital root
#include<iostream>
#include<cmath>
using namespace std;
int digitalRoot(){
	int n1;
	cin>>n1;
	return sqrt(n1);
}
int main(){
	cout<<digitalRoot();
	return 0;
}
