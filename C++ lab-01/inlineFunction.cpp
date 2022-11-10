#include<iostream>
using namespace std;
inline int max(int x,int y,int z){
//	return x>y?x:y;
	return (x>y && x>y?x:(y>z && y<x?y:z));
}
int main(){
	int n1,n2,n3;
	cout<<"Enter two numbers:"<<endl;
	cin>>n1>>n2>>n3;
	cout<<"Lagest is:"<<max(n1,n2,n3);
	return 0;
}
