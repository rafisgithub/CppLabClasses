#include<iostream>
using namespace std;
int sum(int x,int y){
	int add;
	add=x+y;
	return add;
}
int main(){
int a,b;
cin>>a>>b;
int tum=sum(a,b);
cout<<tum;
return 0;
}
